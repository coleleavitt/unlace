_BYTE *__fastcall sub_3C3380(_QWORD *a1, __int64 a2, unsigned __int64 a3, int *a4, unsigned int a5, unsigned int a6)
{
  __int64 v9; // rax
  _BYTE *v10; // rbx
  _BYTE *v11; // r14
  unsigned int v12; // ebp
  int v13; // ebx
  unsigned __int64 v14; // rax
  bool v15; // cf
  int v17; // [rsp+8h] [rbp-40h]
  char v18; // [rsp+Fh] [rbp-39h]

  v9 = pack_dd(a2, a3, a6);
  v10 = (_BYTE *)v9;
  if ( a5 > 0x20 )
  {
    v18 = 0;
    a5 = 0;
  }
  else
  {
    v18 = a5;
  }
  v11 = (_BYTE *)v9;
  v17 = sub_6180E0(*a1);
  if ( (unsigned __int64)v10 < a3 )
  {
    v11 = v10 + 1;
    v12 = a5 - 1;
    *v10 = v18;
    if ( (unsigned __int64)(v10 + 1) < a3 && v12 != -1 )
    {
      do
      {
        v13 = *a4++;
        if ( v13 != -1 )
          v13 += sub_614FB0(*a1, 29);
        v14 = pack_dd(v11, a3, (unsigned int)(v13 - v17));
        v11 = (_BYTE *)v14;
        v15 = v12-- == 0;
      }
      while ( !v15 && v14 < a3 );
    }
  }
  return v11;
}

