__int64 __fastcall sub_769710(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // r12
  __int64 v3; // rbx
  int v4; // eax
  int v5; // ecx
  int v6; // r8d
  int v7; // r9d
  __int64 result; // rax
  void *v9; // r12

  v1 = sub_186B270(0x18u);
  v2 = *(_QWORD *)(a1 + 24);
  v3 = v1;
  v4 = sub_FC0730(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL));
  sub_FC1490(v3, v4, a1 + 32, v5, v6, v7);
  if ( !v2 )
    v2 = v3;
  *(_QWORD *)(v3 + 8) = v2;
  sub_FC0660(v2, a1 + 32);
  result = sub_1859610(a1 + 32, "blast_quant", 0);
  v9 = *(void **)(a1 + 16);
  *(_BYTE *)(v3 + 20) = result;
  *(_QWORD *)(a1 + 16) = v3;
  if ( v9 )
  {
    sub_FC0640(v9);
    return sub_186B220(v9);
  }
  return result;
}

