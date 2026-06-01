__int64 __fastcall qcopyfile(
        __int64 a1,
        __int64 a2,
        char a3,
        unsigned __int8 (__fastcall *a4)(__int64, __int64, __int64),
        __int64 a5)
{
  __int64 v7; // rax
  FILE *v8; // rbp
  FILE *v9; // r12
  __int64 v10; // r15
  int v11; // eax
  unsigned int v12; // ebx
  unsigned int qerrno; // r12d
  __int64 v15; // [rsp+8h] [rbp-1060h]
  __int64 v17; // [rsp+18h] [rbp-1050h]
  _BYTE ptr[4104]; // [rsp+20h] [rbp-1048h] BYREF
  unsigned __int64 v19; // [rsp+1028h] [rbp-40h]

  v19 = __readfsqword(0x28u);
  v7 = fopenRB(a1);
  if ( v7 )
  {
    v8 = (FILE *)v7;
    if ( (unsigned __int8)qfileexist(a2, a2) == 1 && !a3 )
    {
      return (unsigned int)-3;
    }
    else
    {
      v9 = (FILE *)fopenWB(a2);
      if ( v9 )
      {
        qfseek(v8, 0, 2);
        v17 = qftell(v8);
        qfseek(v8, 0, 0);
        v15 = 0;
        while ( 1 )
        {
          v11 = qfread(v8, ptr);
          if ( v11 <= 0 )
          {
            v12 = 0;
            qfclose(v9);
            goto LABEL_10;
          }
          v10 = v11;
          if ( v11 != qfwrite(v9, ptr) )
          {
            v12 = -4;
            goto LABEL_13;
          }
          if ( a4 )
          {
            v15 += v10;
            if ( !a4(v15, v17, a5) )
              break;
          }
        }
        v12 = -5;
LABEL_13:
        qfclose(v9);
        qerrno = get_qerrno(v9);
        qunlink(a2);
        set_qerrno(qerrno);
LABEL_10:
        qfclose(v8);
      }
      else
      {
        v12 = -2;
        qfclose(v8);
      }
    }
  }
  else
  {
    return (unsigned int)-1;
  }
  return v12;
}
