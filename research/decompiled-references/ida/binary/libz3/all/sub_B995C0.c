_QWORD **__fastcall sub_B995C0(__int64 a1)
{
  _QWORD **result; // rax
  _QWORD *v2; // rbp
  __int64 v4; // rdi

  result = (_QWORD **)(**(_QWORD **)(a1 + 8) + 8LL * *(unsigned int *)(a1 + 16));
  v2 = *result;
  if ( *result )
  {
    v4 = v2[5];
    if ( v4 )
      sub_186B220((void *)(v4 - 8));
    sub_186B220(v2);
    result = (_QWORD **)(**(_QWORD **)(a1 + 8) + 8LL * *(unsigned int *)(a1 + 16));
  }
  *result = nullptr;
  return result;
}

