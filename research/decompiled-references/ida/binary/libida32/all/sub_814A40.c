__int64 __fastcall sub_814A40(__int64 a1, const char *a2)
{
  __int64 v2; // rax
  __int64 v3; // rbp
  __int64 v4; // rbx
  void *v6; // rax
  const void *v7; // rsi

  v2 = operator new(0x48u);
  v3 = *(_QWORD *)(a1 + 8);
  v4 = v2;
  *(_QWORD *)v2 = off_2B12D00;
  *(_QWORD *)(v2 + 24) = 0;
  *(_OWORD *)(v2 + 32) = 0;
  if ( v3 )
  {
    v6 = (void *)qalloc_or_throw(8 * v3, a2);
    *(_QWORD *)(v4 + 24) = v6;
    v7 = *(const void **)a1;
    *(_QWORD *)(v4 + 40) = v3;
    memcpy(v6, v7, 8 * v3);
    *(_QWORD *)(v4 + 32) = v3;
  }
  *(_QWORD *)(v4 + 48) = 0;
  *(_DWORD *)(v4 + 16) = 0;
  *(_QWORD *)(v4 + 8) = 0;
  *(_OWORD *)(v4 + 56) = 0;
  return create_generic_linput(v4);
}

