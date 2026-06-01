void __fastcall sub_3D2D40(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4, unsigned int a5)
{
  unsigned __int64 v8; // rcx
  __int64 v9; // rdx
  _QWORD *v10; // rax
  __int64 v11; // rbp
  __int64 v12; // r12
  _QWORD *v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx

  v8 = *(_QWORD *)(a1 + 1032);
  if ( v8 <= 0xFFFFFFFFFFFFFFFDLL )
  {
    v9 = 0;
  }
  else
  {
    v9 = a1 + 904;
    if ( v8 == -1 )
      v9 = a1 + 952;
  }
  if ( a2 == v9 )
    *(_QWORD *)(a1 + 1024) = -1;
  v10 = *(_QWORD **)(a2 + 16);
  v11 = a2 + 8;
  v12 = a2 + 8;
  if ( v10 )
  {
    v13 = *(_QWORD **)(a2 + 16);
    do
    {
      if ( v13[4] < a4 )
      {
        v13 = (_QWORD *)v13[3];
      }
      else
      {
        v12 = (__int64)v13;
        v13 = (_QWORD *)v13[2];
      }
    }
    while ( v13 );
    do
    {
      while ( 1 )
      {
        v14 = v10[2];
        v15 = v10[3];
        if ( v10[4] >= a3 )
          break;
        v10 = (_QWORD *)v10[3];
        if ( !v15 )
          goto LABEL_15;
      }
      v11 = (__int64)v10;
      v10 = (_QWORD *)v10[2];
    }
    while ( v14 );
  }
LABEL_15:
  if ( (unsigned __int8)sub_3CCDE0(v11, v12, a5) )
    sub_3D2660(a2, v11, v12);
}
