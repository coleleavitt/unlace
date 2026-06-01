__int64 __fastcall sub_567C0(__int64 a1, __int64 a2)
{
  size_t v2; // r12
  void *v4; // rax

  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v2 = *(_QWORD *)(a2 + 216);
  if ( v2 )
  {
    v4 = (void *)sub_96030(*(_QWORD *)(a2 + 216));
    *(_QWORD *)(a1 + 16) = v2;
    *(_QWORD *)a1 = v4;
    memcpy(v4, *(const void **)(a2 + 208), v2);
    *(_QWORD *)(a1 + 8) = v2;
  }
  return a1;
}

