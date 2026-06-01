/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qcopyfile
// Address: 0x000B01C0

//----- (000B01C0) --------------------------------------------------------
int __cdecl qcopyfile(char *a1, char *file, char a3, unsigned __int8 (__cdecl *a4)(int, int, int, int, int), int a5)
{
  int v5; // edi
  int v6; // edx
  int v7; // eax
  signed int v8; // edi
  int qerrno; // esi
  FILE *v11; // [esp+0h] [ebp-102Ch]
  FILE *v12; // [esp+4h] [ebp-1028h]
  int v13; // [esp+8h] [ebp-1024h]
  int v14; // [esp+Ch] [ebp-1020h]
  int v15; // [esp+10h] [ebp-101Ch]
  int v16; // [esp+14h] [ebp-1018h]
  _BYTE ptr[4096]; // [esp+18h] [ebp-1014h] BYREF
  unsigned int v18; // [esp+1018h] [ebp-14h]

  v18 = __readgsdword(0x14u);
  v11 = fopenRB(a1);
  if ( !v11 )
    return -1;
  if ( !qfileexist(file) || (v5 = -3, a3) )
  {
    v12 = fopenWB(file);
    if ( v12 )
    {
      qfseek(v11, 0, 0, 2);
      v16 = qftell(v11);
      v15 = v6;
      qfseek(v11, 0, 0, 0);
      v7 = qfread(v11, ptr, 4096);
      if ( v7 <= 0 )
      {
LABEL_11:
        qfclose(v12);
        v5 = 0;
      }
      else
      {
        v8 = v7;
        v14 = 0;
        v13 = 0;
        while ( 1 )
        {
          if ( qfwrite(v12, ptr, v8) != v8 )
          {
            v5 = -4;
            goto LABEL_16;
          }
          if ( a4 )
          {
            v13 += (v8 >> 31) + __CFADD__(v8, v14);
            v14 += v8;
            if ( !a4(v14, v13, v16, v15, a5) )
              break;
          }
          v8 = qfread(v11, ptr, 4096);
          if ( v8 <= 0 )
            goto LABEL_11;
        }
        v5 = -5;
LABEL_16:
        qfclose(v12);
        qerrno = get_qerrno();
        qunlink(file);
        set_qerrno(qerrno);
      }
      qfclose(v11);
    }
    else
    {
      qfclose(v11);
      return -2;
    }
  }
  return v5;
}
// B025E: variable 'v6' is possibly undefined
