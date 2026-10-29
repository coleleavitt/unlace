__int64 __fastcall sub_62B2A0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // r14
  __int64 v7; // r14
  unsigned __int64 v8; // rsi

  v4 = *(_QWORD *)(a1 + 288);
  v5 = a2;
  if ( v4 )
    *(_DWORD *)(v4 - 4) = 0;
  sub_157C960(a1 + 296, a2);
  v6 = *(unsigned int *)(a2 + 56);
  sub_157E920(a1 + 296, *(_QWORD *)(a2 + 40));
  if ( (_DWORD)v6 )
  {
    v7 = a2 + 8 * v6;
    do
    {
      v8 = *(_QWORD *)(v5 + 80) & 0xFFFFFFFFFFFFFFF8LL;
      if ( a3 != v8 )
        sub_157E920(a1 + 296, v8);
      v5 += 8;
    }
    while ( v7 != v5 );
  }
  return sub_62B050(a1);
}

