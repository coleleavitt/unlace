/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qcopyfile
// Address: 0x0007E3EC

//----- (0007E3EC) --------------------------------------------------------
int __fastcall qcopyfile(
        const char *a1,
        const char *a2,
        FILE *a3,
        int (__fastcall *a4)(_DWORD, _DWORD, int, int, int),
        int a5)
{
  int v6; // r6
  FILE *v7; // r5
  __int64 v8; // kr00_8
  signed int v9; // r0
  int v10; // r4
  __int64 v11; // kr08_8
  int v12; // r0
  int qerrno; // r4
  int whence; // [sp+0h] [bp-103Ch] BYREF
  const char *v16; // [sp+8h] [bp-1034h]
  void *v17; // [sp+Ch] [bp-1030h]
  char *v18; // [sp+10h] [bp-102Ch]
  int v19; // [sp+14h] [bp-1028h]
  int v20; // [sp+18h] [bp-1024h]
  int v21; // [sp+1Ch] [bp-1020h]
  size_t n; // [sp+20h] [bp-101Ch]
  FILE *s; // [sp+24h] [bp-1018h]
  int (__fastcall *v24)(_DWORD, _DWORD, int, int, int); // [sp+28h] [bp-1014h]
  FILE *stream; // [sp+2Ch] [bp-1010h]
  int v26; // [sp+30h] [bp-100Ch]
  char v27; // [sp+34h] [bp-1008h] BYREF
  _BYTE ptr[4100]; // [sp+38h] [bp-1004h] BYREF

  v24 = a4;
  s = a3;
  v26 = -5;
  v6 = -1;
  stream = fopenRB(a1);
  if ( stream )
  {
    v6 = v26 + 2;
    if ( !qfileexist(a2) || s )
    {
      s = fopenWB(a2);
      if ( s )
      {
        v16 = a2;
        v17 = &_stack_chk_guard;
        v18 = &v27;
        v7 = stream;
        qfseek(stream, (int)&whence, 0, 0, 2);
        v8 = qftell(v7);
        v20 = HIDWORD(v8);
        v21 = v8;
        qfseek(v7, SHIDWORD(v8), 0, 0, 0);
        n = 4096;
        v9 = qfread(v7, ptr, 4096);
        if ( v9 < 1 )
        {
LABEL_11:
          qfclose(s);
          v6 = 0;
        }
        else
        {
          v10 = v9;
          v19 = a5;
          v11 = 0;
          while ( 1 )
          {
            v12 = qfwrite(s, ptr, v10);
            v6 = v26 + 1;
            if ( v12 != v10 )
              break;
            if ( v24 )
            {
              v11 += v10;
              if ( !v24(v11, HIDWORD(v11), v21, v20, v19) )
              {
                v6 = v26;
                break;
              }
            }
            v10 = qfread(stream, ptr, n);
            if ( v10 <= 0 )
              goto LABEL_11;
          }
          qfclose(s);
          qerrno = get_qerrno();
          qunlink(v16);
          set_qerrno(qerrno);
        }
        qfclose(stream);
      }
      else
      {
        qfclose(stream);
        return v26 + 3;
      }
    }
  }
  return v6;
}
