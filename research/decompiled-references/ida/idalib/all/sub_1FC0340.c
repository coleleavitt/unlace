char *__fastcall sub_1FC0340(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // r13
  size_t v4; // r12
  unsigned __int64 (__fastcall *v5)(__int64); // rax
  int v6; // esi
  char *result; // rax

  v3 = a2 + 40;
  if ( a2 == -40 )
    v4 = 0;
  else
    v4 = strlen((const char *)(a2 + 40));
  sub_9B9C90(*(_QWORD *)(a1 + 24), v4);
  sub_1FBAE50((__int64 *)a1, a2);
  v5 = *(unsigned __int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL);
  if ( v5 == sub_B70840 )
    v6 = *(_DWORD *)(a2 + 24);
  else
    v6 = v5(a2);
  sub_1F6F570(*(_QWORD **)(a1 + 16), v6, *(_QWORD *)(a1 + 24));
  sub_9B9C90(*(_QWORD *)(a1 + 24), *(unsigned int *)(a2 + 36));
  result = sub_1F740B0(*(_QWORD *)(a1 + 16), v3, v4, *(_QWORD *)(a1 + 24));
  *(_DWORD *)(a1 + 224) = 136;
  return result;
}
