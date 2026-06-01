_QWORD *__fastcall sub_425A90(_QWORD *a1, const char *a2)
{
  __int64 v2; // r14
  __int64 v3; // r12
  __int64 v4; // r13
  __int64 v5; // rdx
  void *v7; // rax

  v2 = *((_QWORD *)a2 + 1);
  v3 = *(_QWORD *)(*(_QWORD *)a2 + 16LL);
  *(_QWORD *)(v3 + 16) = 0;
  *(_OWORD *)(v3 + 24) = 0;
  v4 = *(_QWORD *)(v2 + 8);
  if ( v4 )
  {
    v7 = (void *)qalloc_or_throw(8 * v4, a2);
    *(_QWORD *)(v3 + 32) = v4;
    *(_QWORD *)(v3 + 16) = v7;
    memcpy(v7, *(const void **)v2, 8 * v4);
    *(_QWORD *)(v3 + 24) = v4;
  }
  *(_BYTE *)(v3 + 40) = 1;
  v5 = *(_QWORD *)(*(_QWORD *)a2 + 16LL);
  *(_QWORD *)(*(_QWORD *)a2 + 16LL) = 0;
  *a1 = v5;
  return a1;
}

