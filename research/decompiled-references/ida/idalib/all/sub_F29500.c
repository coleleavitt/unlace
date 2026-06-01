void __fastcall sub_F29500(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // r13
  __int64 v6; // [rsp+8h] [rbp-50h] BYREF
  void *v7[2]; // [rsp+10h] [rbp-48h] BYREF
  __int64 v8; // [rsp+20h] [rbp-38h] BYREF

  v3 = *(_QWORD *)(a1 + 1096);
  if ( *(_QWORD *)(a2 + 40) )
  {
    v4 = sub_995540(v3, " ");
    sub_9954E0(
      v4,
      (const void *)(*(_QWORD *)(*(_QWORD *)(a2 + 40) + 16LL) + 16LL),
      **(unsigned int **)(*(_QWORD *)(a2 + 40) + 16LL));
    v3 = *(_QWORD *)(a1 + 1096);
  }
  v5 = sub_995540(v3, " ");
  v6 = **(_QWORD **)(a2 + 48);
  sub_F78400(v7, &v6);
  sub_227BF10(v5, v7[0], v7[1]);
  if ( v7[0] != &v8 )
    operator delete(v7[0]);
  if ( !*(_BYTE *)(a2 + 56) )
  {
    if ( !*(_BYTE *)(a2 + 57) )
      return;
LABEL_9:
    sub_995540(*(_QWORD *)(a1 + 1096), " MustBeNull");
    return;
  }
  sub_995540(*(_QWORD *)(a1 + 1096), " LayoutCompatible");
  if ( *(_BYTE *)(a2 + 57) )
    goto LABEL_9;
}
