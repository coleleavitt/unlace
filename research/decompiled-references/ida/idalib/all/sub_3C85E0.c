_BYTE *__fastcall sub_3C85E0(
        _QWORD *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 *a4,
        unsigned int a5,
        __int64 a6)
{
  __int64 v9; // rax
  __int64 v10; // r13
  _BYTE *v11; // r15
  unsigned int v12; // ebx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rax
  bool v15; // cf
  _BYTE *v17; // [rsp+0h] [rbp-48h]
  char v18; // [rsp+Fh] [rbp-39h]

  v9 = pack_dq(a2, a3, a6);
  if ( a5 > 0x20 )
  {
    v18 = 0;
    a5 = 0;
  }
  else
  {
    v18 = a5;
  }
  v17 = (_BYTE *)v9;
  v10 = sub_634EF0(*a1);
  v11 = v17;
  if ( (unsigned __int64)v17 < a3 )
  {
    v11 = v17 + 1;
    v12 = a5 - 1;
    *v17 = v18;
    if ( (unsigned __int64)(v17 + 1) < a3 && v12 != -1 )
    {
      do
      {
        v13 = *a4++;
        if ( v13 != -1 )
          v13 = sub_3B9DC0(a1, v13);
        v14 = pack_dq(v11, a3, v13 - v10);
        v11 = (_BYTE *)v14;
        v15 = v12-- == 0;
      }
      while ( !v15 && v14 < a3 );
    }
  }
  return v11;
}
