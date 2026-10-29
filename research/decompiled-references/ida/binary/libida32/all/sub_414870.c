__int64 __fastcall sub_414870(__int64 a1, __int64 a2, unsigned int *a3)
{
  __int64 v3; // r14
  unsigned int v4; // r13d
  __int64 v5; // rbx

  v3 = qword_2CA1698;
  if ( (!a3 || (v4 = *a3, *a3 == -1)) && (*(_QWORD *)(a2 + 24) <= 1u || (v4 = sub_567140(qword_2CA1698), v4 == -1)) )
    v4 = -1;
  else
    register_undo_handler(v4, sub_416790, a1, 1);
  v5 = operator new(0xA0u);
  *(_QWORD *)(v5 + 8) = 0;
  *(_OWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = a1;
  *(_QWORD *)(v5 + 40) = a2;
  *(_QWORD *)v5 = &unk_2BD1C50;
  *(_QWORD *)(v5 + 48) = 0;
  *(_QWORD *)(v5 + 72) = 0;
  *(_QWORD *)(v5 + 112) = 0;
  *(_OWORD *)(v5 + 56) = 0;
  *(_OWORD *)(v5 + 80) = 0;
  *(_OWORD *)(v5 + 120) = 0;
  reset_dirtree_0(v5);
  *(_QWORD *)(v5 + 144) = v3;
  *(_QWORD *)v5 = &off_2AFE368;
  *(_DWORD *)(v5 + 152) = -1;
  *(_DWORD *)(v5 + 156) = v4;
  sub_414670(v5, 0);
  return v5;
}

