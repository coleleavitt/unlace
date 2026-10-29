__int64 __fastcall sub_380180(__int64 a1)
{
  __int64 v2; // r12
  __int64 v3; // rax
  __int64 v4; // rbp
  __int64 result; // rax
  void *v6; // rdi

  v2 = **(_QWORD **)(a1 + 16);
  v3 = sub_186B270(0x10u);
  *(_QWORD *)v3 = v2;
  v4 = v3;
  *(_BYTE *)(v3 + 8) = 0;
  result = sub_1859610(a1 + 24, "elim_and", 0);
  v6 = *(void **)(a1 + 16);
  *(_QWORD *)(a1 + 16) = v4;
  *(_BYTE *)(v4 + 8) = result;
  if ( v6 )
    return sub_186B220(v6);
  return result;
}

