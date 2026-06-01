__int64 __fastcall sub_16F7BA0(__int64 a1, _WORD *a2, unsigned int a3, bool a4, __m128 a5, __m128 a6)
{
  bool v6; // al
  char v8; // bp
  unsigned int v9; // eax
  int v10; // eax
  __int64 result; // rax

  v6 = a4;
  if ( !a4 )
    v6 = (*a2 & 0x1FF) == 61;
  v8 = *(_BYTE *)(a1 + 2440);
  *(_BYTE *)(a1 + 2440) = v6;
  v9 = *(_DWORD *)(*(_QWORD *)(a1 + 4616) + 640LL * *(unsigned int *)(a1 + 4624) - 640);
  if ( v9 == 3 || v9 <= 1 )
    goto LABEL_5;
  v10 = (*(_DWORD *)a2 >> 14) & 0x1F;
  if ( ((*(_DWORD *)a2 >> 14) & 0xC) == 0 )
  {
    sub_16C6F10(a1, (unsigned __int64)a2, *(double *)a5.m128_u64);
    sub_16F5530(a1, (__int64)a2, a3, a5, a6);
LABEL_5:
    v10 = (*(_DWORD *)a2 >> 14) & 0x1F;
  }
  if ( (v10 & 2) == 0 )
    sub_16C5A70(a1, (__int64)a2);
  if ( !a4 && (*(_DWORD *)a2 & 0x20000) == 0 )
    sub_16C9F60(a1, (unsigned __int64)a2);
  result = sub_16DBB00(a1, (unsigned __int64)a2, *(double *)a5.m128_u64);
  *(_BYTE *)(a1 + 2440) = v8;
  return result;
}
