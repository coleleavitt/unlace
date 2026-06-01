unsigned __int64 __fastcall sub_7C54F0(__int64 a1, __int64 *a2)
{
  __int64 v3; // r14
  __int64 v4; // rbp
  __int64 v5; // rbx
  __int64 v6; // rdi

  v3 = *(_QWORD *)(a1 + 24);
  sub_407AD0(a2, v3);
  if ( v3 )
  {
    v4 = 0;
    v5 = 0;
    do
    {
      ++v5;
      v6 = v4 + *(_QWORD *)(a1 + 16);
      v4 += 104;
      sub_7C54A0(v6, a2);
    }
    while ( v3 != v5 );
  }
  return sub_407AD0(a2, *(unsigned __int8 *)(a1 + 40));
}

