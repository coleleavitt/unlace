__int64 __fastcall qcopyfile(
        __int64 a1,
        __int64 a2,
        char a3,
        unsigned __int8 (__fastcall *a4)(__int64, __int64, __int64),
        __int64 a5)
{
  __int64 v8; // rax
  FILE *v9; // rbp
  FILE *v10; // r12
  __int64 v11; // r15
  _BYTE *v12; // rsi
  int v13; // eax
  unsigned int v14; // ebx
  unsigned int qerrno; // r12d
  __int64 v17; // [rsp+8h] [rbp-1060h]
  __int64 v19; // [rsp+18h] [rbp-1050h]
  _BYTE ptr[4104]; // [rsp+20h] [rbp-1048h] BYREF
  unsigned __int64 v21; // [rsp+1028h] [rbp-40h]

  v21 = __readfsqword(0x28u);
  v8 = fopenRB(a1);
  if ( v8 )
  {
    v9 = (FILE *)v8;
    if ( (unsigned __int8)qfileexist(a2, a2) == 1 && !a3 )
    {
      return (unsigned int)-3;
    }
    else
    {
      v10 = (FILE *)fopenWB(a2);
      if ( v10 )
      {
        qfseek(v9, 0, 2);
        v19 = qftell(v9);
        qfseek(v9, 0, 0);
        v17 = 0;
        while ( 1 )
        {
          v13 = qfread(v9, ptr);
          if ( v13 <= 0 )
          {
            v14 = 0;
            qfclose(v10);
            goto LABEL_10;
          }
          v11 = v13;
          v12 = ptr;
          if ( v13 != qfwrite(v10, ptr) )
          {
            v14 = -4;
            goto LABEL_13;
          }
          if ( a4 )
          {
            v17 += v11;
            v12 = (_BYTE *)v19;
            if ( !a4(v17, v19, a5) )
              break;
          }
        }
        v14 = -5;
LABEL_13:
        qfclose(v10);
        qerrno = get_qerrno(v10);
        qunlink(a2);
        set_qerrno(qerrno, v12);
LABEL_10:
        qfclose(v9);
      }
      else
      {
        v14 = -2;
        qfclose(v9);
      }
    }
  }
  else
  {
    return (unsigned int)-1;
  }
  return v14;
}

