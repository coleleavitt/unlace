__int64 __fastcall sub_1FC03F0(__int64 a1, __int64 a2)
{
  unsigned int *v3; // rsi
  __int64 result; // rax

  sub_1FBAE50((__int64 *)a1, a2);
  sub_1F92A90(*(_QWORD *)(a1 + 16), *(_QWORD *)(a2 + 48), *(_QWORD *)(a1 + 24));
  sub_183F100(a1 + 32, *(_QWORD *)(a2 + 40));
  sub_9B9C90(*(_QWORD *)(a1 + 24), *(_QWORD *)(a2 + 64) != 0);
  v3 = *(unsigned int **)(a2 + 64);
  if ( v3 )
    sub_1F986C0((__int64 *)(a1 + 8), v3);
  result = sub_9B9C90(*(_QWORD *)(a1 + 24), *(unsigned int *)(a2 + 56));
  *(_DWORD *)(a1 + 224) = 132;
  return result;
}
