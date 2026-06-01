char __fastcall sub_131890(__int64 a1, __int64 a2, unsigned __int8 *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned __int8 v7; // r12
  unsigned __int64 *v8; // rdi
  char v10; // al

  if ( (unsigned __int8 *)a2 != a3 )
  {
    sub_11CDA0(a2);
    sub_123A40(a2, a3, v5, v6);
  }
  v7 = *(_BYTE *)(a1 + 40);
  v8 = *(unsigned __int64 **)(a1 + 8);
  if ( *(_DWORD *)(a2 + 4) != -1 )
    return sub_131490(
             v8,
             *(const __m128i **)(a1 + 16),
             *(_QWORD *)(a1 + 24),
             (__int16 *)a2,
             *(_DWORD *)(a1 + 32),
             v7,
             *(_DWORD *)(a1 + 36));
  v10 = *(_BYTE *)(v8[12] + 145);
  if ( v10 )
    v10 = sub_11BB90((unsigned __int8 *)a2);
  return v7 == (unsigned __int8)v10;
}
