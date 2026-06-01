int *__fastcall sub_2200C0(__m128i *a1, __int64 a2)
{
  int *result; // rax
  int *v3; // rbp
  _QWORD *v4; // r12

  result = sub_21EBB0(a1, 6u, *(_DWORD *)(a2 + 4), *(_QWORD *)(a2 + 8));
  if ( result )
  {
    v3 = result;
    v4 = (_QWORD *)operator new(0x48u);
    v4[1] = -1;
    *v4 = 0xFFFFFFFFLL;
    v4[2] = 0;
    result = (int *)copy_debug_event(v4, a2);
    *((_QWORD *)v3 + 3) = v4;
  }
  return result;
}
