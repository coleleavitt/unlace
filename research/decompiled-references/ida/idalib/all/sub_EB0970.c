__int64 __fastcall sub_EB0970(__int64 *a1)
{
  __int64 v1; // rdi
  _QWORD *v2; // rdx

  v1 = *a1;
  v2 = *(_QWORD **)(v1 + 32);
  if ( *(_QWORD *)(v1 + 24) - (_QWORD)v2 <= 7u )
    return sub_227BF10(v1, "finalize", 8);
  *v2 = 0x657A696C616E6966LL;
  *(_QWORD *)(v1 + 32) += 8LL;
  return 0x657A696C616E6966LL;
}
