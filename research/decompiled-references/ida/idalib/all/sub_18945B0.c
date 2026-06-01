__int64 __fastcall sub_18945B0(__int64 a1, __m128 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v6[5]; // [rsp+0h] [rbp-28h] BYREF

  if ( !a1 )
    return 0;
  v2 = a1 + 8;
  v3 = *(_QWORD *)(v2 - 8);
  v6[1] = v2;
  v6[0] = v3;
  v4 = (unsigned int)sub_F6CE20(v6);
  return (v4 << 32) | (unsigned int)sub_F6CCB0(v6, a2);
}
