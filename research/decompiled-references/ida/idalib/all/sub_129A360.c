void __fastcall sub_129A360(_QWORD *a1, __int64 a2, const __m128i *a3, __int64 a4)
{
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // rbx
  _QWORD *v9; // rbp
  __int64 v10; // rax
  int v11[11]; // [rsp+Ch] [rbp-2Ch] BYREF

  sub_121FCF0((__int64)a1, a2, a3, a4);
  *a1 = off_2C3E958;
  v11[0] = 3056;
  v6 = sub_21B6DA0(a4, v11, 1);
  v7 = *(_QWORD *)(a4 + 8);
  v8 = (_QWORD *)(v7 + 8LL * (unsigned int)v6);
  v9 = (_QWORD *)(v7 + 8 * HIDWORD(v6));
  if ( v8 == v9 )
    goto LABEL_5;
  while ( !*v8 || !(unsigned __int8)sub_21B9810(*v8, 3056) )
  {
    if ( v9 == ++v8 )
      goto LABEL_5;
  }
  if ( v8 == v9 )
  {
LABEL_5:
    sub_1299700((__int64)a1, (__int64)a3, a4);
  }
  else
  {
    do
    {
      v10 = *v8;
      if ( *(_QWORD *)(*v8 + 16LL) )
        v10 = *(_QWORD *)(*v8 + 16LL);
      ++v8;
      *(_BYTE *)(v10 + 44) |= 1u;
      if ( v8 == v9 )
        break;
      while ( !*v8 || !(unsigned __int8)sub_21B9810(*v8, 3056) )
      {
        if ( v9 == ++v8 )
          return;
      }
    }
    while ( v9 != v8 );
  }
}
