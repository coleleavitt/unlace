__int64 __fastcall sub_62B320(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // r13
  __int64 v5; // r13
  __int64 v6; // rsi

  v2 = a2;
  v3 = *(_QWORD *)(a1 + 288);
  if ( v3 )
    *(_DWORD *)(v3 - 4) = 0;
  sub_157C960(a1 + 296, a2);
  v4 = *(unsigned int *)(a2 + 56);
  sub_157E920(a1 + 296, *(_QWORD *)(a2 + 40));
  if ( (_DWORD)v4 )
  {
    v5 = a2 + 8 * v4;
    do
    {
      v6 = *(_QWORD *)(v2 + 80);
      v2 += 8;
      sub_157E920(a1 + 296, v6 & 0xFFFFFFFFFFFFFFF8LL);
    }
    while ( v2 != v5 );
  }
  return sub_62B050(a1);
}

