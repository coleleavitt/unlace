char *__fastcall sub_1FC0250(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // r14
  size_t v4; // r15
  __int64 v5; // rsi
  __int64 v6; // rax
  size_t v7; // r13
  unsigned __int64 v8; // r12
  unsigned __int64 (__fastcall *v9)(__int64); // rax
  int v10; // esi
  char *result; // rax

  v3 = a2 + 48;
  if ( a2 == -48 )
  {
    v5 = 1;
    v4 = 0;
  }
  else
  {
    v4 = strlen((const char *)(a2 + 48));
    v5 = v4 + 1;
  }
  v6 = *(_QWORD *)(a2 + 40);
  v7 = 0;
  v8 = a2 + v6 + 48;
  if ( a2 + v6 != -48 )
  {
    v7 = strlen((const char *)(a2 + v6 + 48));
    v5 += v7;
  }
  sub_9B9C90(*(_QWORD *)(a1 + 24), v5);
  sub_1FBAE50((__int64 *)a1, a2);
  v9 = *(unsigned __int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL);
  if ( v9 == sub_B70840 )
    v10 = *(_DWORD *)(a2 + 24);
  else
    v10 = v9(a2);
  sub_1F6F570(*(_QWORD **)(a1 + 16), v10, *(_QWORD *)(a1 + 24));
  sub_1F740B0(*(_QWORD *)(a1 + 16), v3, v4, *(_QWORD *)(a1 + 24));
  result = sub_1F740B0(*(_QWORD *)(a1 + 16), v8, v7, *(_QWORD *)(a1 + 24));
  *(_DWORD *)(a1 + 224) = 137;
  return result;
}
