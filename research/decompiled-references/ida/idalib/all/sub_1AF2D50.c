__int64 __fastcall sub_1AF2D50(__int64 a1, _QWORD **a2, unsigned int a3, __int64 a4, _BYTE *a5)
{
  unsigned int v5; // r14d
  unsigned int v7; // r12d
  _QWORD *v8; // r9
  int v9; // eax
  _BYTE *v11; // [rsp+8h] [rbp-30h]

  v5 = a4;
  v7 = 0;
  v8 = *a2;
  if ( a5 )
  {
    v11 = a5;
    v9 = sub_17A6B10(v8, a5, 0, a4, (__int64)a5, (__int64)v8);
    v8 = *a2;
    a5 = v11;
    if ( v9 )
    {
      if ( v9 == 4 )
        v7 = 3;
    }
    else
    {
      v7 = 1;
    }
  }
  sub_1606AE0(a1, v7, a3, v5, (__int64)a5, (__int64)v8);
  return a1;
}
