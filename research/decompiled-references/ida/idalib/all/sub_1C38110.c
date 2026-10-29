__int64 __fastcall sub_1C38110(__int64 a1, __int64 a2)
{
  __int64 *v2; // rax
  __int64 v3; // rdx
  unsigned __int64 v4; // rbp
  __int64 v6[5]; // [rsp+0h] [rbp-28h] BYREF

  v2 = (__int64 *)(*(_QWORD *)(a2 + 56) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a2 + 56) & 4) != 0 )
    v2 = (__int64 *)v2[4];
  v3 = *v2;
  v6[1] = (__int64)(v2 + 1);
  v6[0] = v3;
  v4 = sub_BF48A0(v6);
  sub_F6C520(*(_QWORD *)(v4 + 24));
  return *(_QWORD *)(v4 + 24);
}
