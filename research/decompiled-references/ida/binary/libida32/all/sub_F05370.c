void __fastcall sub_F05370(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  size_t v3; // rax
  __int64 v4; // r13
  __int64 v5; // [rsp+8h] [rbp-50h] BYREF
  void *v6[2]; // [rsp+10h] [rbp-48h] BYREF
  __int64 v7; // [rsp+20h] [rbp-38h] BYREF

  v2 = *(_QWORD *)(a1 + 1096);
  v3 = j__strlen(" ");
  v4 = sub_9717A0(v2, " ", v3);
  v5 = **(_QWORD **)(a2 + 40);
  sub_F546C0(v6, &v5);
  sub_22581D0(v4, v6[0], v6[1]);
  if ( v6[0] != &v7 )
    operator delete(v6[0]);
  if ( *(_BYTE *)(a2 + 48) )
    sub_971800(*(_QWORD *)(a1 + 1096), " Invalid");
}

