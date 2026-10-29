__int64 __fastcall sub_19448A0(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  _QWORD *v5; // rax

  if ( (*(_DWORD *)a2 & 0x10000) == 0 )
    return a2;
  v5 = sub_19425F0(a1, *(_QWORD *)(a2 + 32), a3, a4);
  if ( v5 )
    return sub_1C73FB0(
             *(_QWORD *)(*a1 + 800),
             *(unsigned int *)(a2 + 16),
             *(unsigned int *)(a2 + 20),
             *(unsigned int *)(a2 + 24),
             v5);
  else
    return 1;
}
