void __fastcall sub_F2D380(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  char *v3; // rax
  size_t v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rax

  v2 = sub_995540(*(_QWORD *)(a1 + 1096), " '");
  v3 = sub_BFA720((*(_WORD *)(a2 + 2) >> 3) & 0x3F);
  v5 = sub_9954E0(v2, v3, v4);
  sub_995540(v5, "' ComputeLHSTy=");
  sub_F2A310(a1, *(_QWORD *)(a2 + 32), 1);
  sub_995540(*(_QWORD *)(a1 + 1096), " ComputeResultTy=");
  sub_F2A310(a1, *(_QWORD *)(a2 + 40), 1);
  if ( (*(_QWORD *)a2 & 0x2000000LL) != 0 )
  {
    v6 = 48;
    if ( (*(_WORD *)a2 & 0x1FF) != 0x77 )
      v6 = 32;
    sub_F2B230(a1, *(_QWORD *)(a2 + v6));
  }
}
