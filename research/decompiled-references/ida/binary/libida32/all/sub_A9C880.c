__int64 __fastcall sub_A9C880(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  void *v3; // rcx

  result = *(_QWORD *)(a1 + 48);
  if ( a2 )
    return sub_EE3EC0(a2, result, 0, (int)a1 + 8, 0, 0, (__int64)"\n", 1);
  v3 = *(void **)(result + 32);
  if ( *(_QWORD *)(result + 24) - (_QWORD)v3 <= 0xCu )
    return sub_22581D0(*(_QWORD *)(a1 + 48), "(no argument)", 13);
  qmemcpy(v3, "(no argument)", 13);
  *(_QWORD *)(result + 32) += 13LL;
  return result;
}

