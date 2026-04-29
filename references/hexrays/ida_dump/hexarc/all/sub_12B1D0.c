char __fastcall sub_12B1D0(__int64 a1, unsigned __int64 a2, unsigned __int8 *a3)
{
  unsigned __int8 v5; // r12
  __int64 v6; // rdi
  char v8; // al

  if ( (unsigned __int8 *)a2 != a3 )
  {
    sub_1166E0(a2);
    sub_11D380(a2, a3);
  }
  v5 = *(_BYTE *)(a1 + 40);
  v6 = *(_QWORD *)(a1 + 8);
  if ( *(_DWORD *)(a2 + 4) != -1 )
    return sub_12ADD0(
             v6,
             *(const __m128i **)(a1 + 16),
             *(_QWORD *)(a1 + 24),
             a2,
             *(_DWORD *)(a1 + 32),
             v5,
             *(_DWORD *)(a1 + 36));
  v8 = *(_BYTE *)(*(_QWORD *)(v6 + 96) + 145LL);
  if ( v8 )
    v8 = sub_1154D0((unsigned __int8 *)a2);
  return v5 == (unsigned __int8)v8;
}
