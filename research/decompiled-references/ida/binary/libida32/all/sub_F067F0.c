void __fastcall sub_F067F0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  size_t v3; // rax
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rbp
  __int64 v7; // [rsp+8h] [rbp-40h] BYREF
  void *v8[2]; // [rsp+10h] [rbp-38h] BYREF
  __int64 v9; // [rsp+20h] [rbp-28h] BYREF

  sub_971800(*(_QWORD *)(a1 + 1096), "QualType");
  sub_F05DA0(a1, a2);
  sub_971800(*(_QWORD *)(a1 + 1096), " ");
  sub_F065D0(a1, a2, 0);
  v2 = *(_QWORD *)(a1 + 1096);
  v3 = j__strlen(" ");
  v4 = sub_9717A0(v2, " ", v3);
  v5 = a2 & 7;
  v6 = v4;
  if ( (a2 & 8) != 0 )
    v5 |= *(__int64 *)((char *)&qword_18 + (a2 & 0xFFFFFFFFFFFFFFF0LL));
  v7 = v5;
  sub_F4DEF0(v8, &v7);
  sub_22581D0(v6, v8[0], v8[1]);
  if ( v8[0] != &v9 )
    operator delete(v8[0]);
}

