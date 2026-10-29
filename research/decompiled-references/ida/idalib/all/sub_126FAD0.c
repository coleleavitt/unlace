void __fastcall sub_126FAD0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rbx
  _QWORD *v7; // rbp
  __int64 v8; // rax
  int v9[11]; // [rsp+Ch] [rbp-2Ch] BYREF

  v9[0] = 3053;
  v4 = sub_21B6DA0(a2, v9, 1);
  v5 = *(_QWORD *)(a2 + 8);
  v6 = (_QWORD *)(v5 + 8LL * (unsigned int)v4);
  v7 = (_QWORD *)(v5 + 8 * HIDWORD(v4));
  if ( v6 == v7 )
    goto LABEL_5;
  while ( !*v6 || !(unsigned __int8)sub_21B9810(*v6, 3053) )
  {
    if ( v7 == ++v6 )
      goto LABEL_5;
  }
  if ( v7 == v6 )
  {
LABEL_5:
    sub_126F670(a1, a2, a3);
  }
  else
  {
    do
    {
      v8 = *v6;
      if ( *(_QWORD *)(*v6 + 16LL) )
        v8 = *(_QWORD *)(*v6 + 16LL);
      ++v6;
      *(_BYTE *)(v8 + 44) |= 1u;
      if ( v6 == v7 )
        break;
      while ( !*v6 || !(unsigned __int8)sub_21B9810(*v6, 3053) )
      {
        if ( v7 == ++v6 )
          return;
      }
    }
    while ( v7 != v6 );
  }
}
