void *__fastcall sub_F09A10(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  size_t v4; // rax
  void *v5; // rdi
  size_t v6; // rbp
  void *result; // rax

  v2 = *a2;
  v3 = *(_QWORD *)(a1 + 1096);
  if ( (*a2 & 0x80000) != 0 )
  {
    sub_971800(*(_QWORD *)(a1 + 1096), " implicit");
    v3 = *(_QWORD *)(a1 + 1096);
    v2 = *a2;
  }
  if ( (v2 & 0x100000) != 0 )
  {
    sub_971800(v3, " dependent_capture");
    v3 = *(_QWORD *)(a1 + 1096);
  }
  v4 = j__strlen(" this");
  v5 = *(void **)(v3 + 32);
  v6 = v4;
  result = (void *)(*(_QWORD *)(v3 + 24) - (_QWORD)v5);
  if ( v6 > (unsigned __int64)result )
    return (void *)sub_22581D0(v3, " this", v6);
  if ( v6 )
  {
    result = memcpy(v5, " this", v6);
    *(_QWORD *)(v3 + 32) += v6;
  }
  return result;
}

