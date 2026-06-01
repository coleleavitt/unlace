_QWORD *__fastcall sub_18C0B80(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  size_t v7; // rbx
  _QWORD *v8; // r12

  v7 = a1[1] - a1[2];
  v8 = sub_A81BC0(a2, a3, *((_DWORD *)a1 + 2) - *((_DWORD *)a1 + 4), a4, a5, a6);
  memcpy(v8 + 1, (const void *)(*a1 + a1[2]), v7);
  return v8;
}
