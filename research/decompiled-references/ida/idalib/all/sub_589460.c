__int64 __fastcall sub_589460(__int64 a1, __int64 a2, void *a3, size_t a4)
{
  unsigned int v7; // ecx
  _QWORD *v8; // rax

  v7 = *(unsigned __int8 *)(a1 + 16);
  if ( (_BYTE)v7 )
  {
    memcpy(a3, (const void *)(*(_QWORD *)(a1 + 24) + a2), a4);
  }
  else
  {
    v8 = *(_QWORD **)(a1 + 32);
    if ( v8[1] < a2 + a4 )
      return v7;
    memcpy(a3, (const void *)(*v8 + a2), a4);
  }
  return 1;
}
