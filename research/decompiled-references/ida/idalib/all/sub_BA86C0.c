__int64 __fastcall sub_BA86C0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rdx
  unsigned __int64 v5; // rdx
  __int64 v7; // [rsp+0h] [rbp-28h] BYREF
  __int64 v8[4]; // [rsp+8h] [rbp-20h] BYREF

  v7 = *(_QWORD *)(a1 + 80);
  v2 = sub_B8C330(a1);
  v3 = sub_F67970(&v7, v2);
  v4 = *(_QWORD *)(a1 + 16);
  v8[0] = v3;
  if ( (v4 & 4) != 0 )
    v5 = *(_QWORD *)(v4 & 0xFFFFFFFFFFFFFFF8LL);
  else
    v5 = v4 & 0xFFFFFFFFFFFFFFF8LL;
  return sub_F6A080(v8, a2, v5, 1);
}
