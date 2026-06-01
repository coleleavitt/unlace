void *__fastcall sub_C133F0(__int64 a1, __int64 a2)
{
  char v2; // al
  char v3; // al
  char v4; // al
  __int64 v5; // rax
  unsigned int v6; // r12d
  void *result; // rax
  size_t v8; // rdx

  v2 = *(_BYTE *)a2 & 1 | *(_BYTE *)a1 & 0xFE;
  *(_BYTE *)a1 = v2;
  v3 = *(_BYTE *)a2 & 2 | v2 & 0xFD;
  *(_BYTE *)a1 = v3;
  v4 = *(_BYTE *)a2 & 4 | v3 & 0xFB;
  *(_BYTE *)a1 = v4;
  *(_BYTE *)a1 = *(_BYTE *)a2 & 8 | v4 & 0xF7;
  *(_DWORD *)a1 = *(_DWORD *)a2 & 0xFFFFFFF0 | *(_DWORD *)a1 & 0xF;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  v5 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 32) = 0x800000000LL;
  *(_QWORD *)(a1 + 16) = v5;
  v6 = *(_DWORD *)(a2 + 32);
  result = (void *)(a1 + 40);
  *(_QWORD *)(a1 + 24) = a1 + 40;
  if ( v6 && a1 + 24 != a2 + 24 )
  {
    v8 = 8LL * v6;
    if ( v6 <= 8uLL
      || (sub_2237220(a1 + 24, a1 + 40, v6, 8),
          result = *(void **)(a1 + 24),
          (v8 = 8LL * *(unsigned int *)(a2 + 32)) != 0) )
    {
      result = memcpy(result, *(const void **)(a2 + 24), v8);
    }
    *(_DWORD *)(a1 + 32) = v6;
  }
  return result;
}
