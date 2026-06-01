__int64 __fastcall sub_7697C0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 result; // rax

  sub_1863170(a1 + 32, a2);
  v2 = *(_QWORD *)(a1 + 16);
  sub_FC0660(*(_QWORD *)(v2 + 8), a1 + 32);
  result = sub_1859610(a1 + 32, "blast_quant", 0);
  *(_BYTE *)(v2 + 20) = result;
  return result;
}

