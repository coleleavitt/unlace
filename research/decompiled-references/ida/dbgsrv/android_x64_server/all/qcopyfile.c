/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qcopyfile
// Address: 0x00000000000C26B0

//----- (00000000000C26B0) ----------------------------------------------------
__int64 __fastcall qcopyfile(
        const char *a1,
        const char *a2,
        char a3,
        unsigned __int8 (__fastcall *a4)(__int64, __int64, __int64),
        __int64 a5)
{
  FILE *v7; // rax
  FILE *v8; // r12
  unsigned int v9; // r14d
  FILE *v10; // rax
  FILE *v11; // rbp
  int v12; // eax
  __int64 v13; // r14
  __int64 v14; // r15
  unsigned int qerrno; // ebp
  __int64 v17; // [rsp+10h] [rbp-1048h]
  _BYTE ptr[4096]; // [rsp+20h] [rbp-1038h] BYREF
  unsigned __int64 v20; // [rsp+1020h] [rbp-38h]

  v20 = __readfsqword(0x28u);
  v7 = fopenRB(a1);
  if ( v7 )
  {
    v8 = v7;
    if ( !qfileexist(a2) || (v9 = -3, a3) )
    {
      v10 = fopenWB(a2);
      if ( v10 )
      {
        v11 = v10;
        qfseek(v8, 0, 2);
        v17 = qftell(v8);
        qfseek(v8, 0, 0);
        v12 = qfread(v8, ptr, 4096);
        if ( v12 <= 0 )
        {
LABEL_11:
          qfclose(v11);
          v9 = 0;
        }
        else
        {
          v13 = 0;
          while ( 1 )
          {
            v14 = v12;
            if ( qfwrite(v11, ptr, v12) != v12 )
            {
              v9 = -4;
              goto LABEL_16;
            }
            if ( a4 )
            {
              v13 += v14;
              if ( !a4(v13, v17, a5) )
                break;
            }
            v12 = qfread(v8, ptr, 4096);
            if ( v12 <= 0 )
              goto LABEL_11;
          }
          v9 = -5;
LABEL_16:
          qfclose(v11);
          qerrno = get_qerrno();
          qunlink(a2);
          set_qerrno(qerrno);
        }
        qfclose(v8);
      }
      else
      {
        qfclose(v8);
        return (unsigned int)-2;
      }
    }
  }
  else
  {
    return (unsigned int)-1;
  }
  return v9;
}
