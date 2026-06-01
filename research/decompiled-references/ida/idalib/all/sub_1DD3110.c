unsigned __int64 __fastcall sub_1DD3110(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 *v4; // rax
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 *v9; // r12
  unsigned __int16 *v10; // rax

  v4 = sub_1DD1930((__int64)a1, *(_QWORD *)(a2 + 24), a3, a4);
  if ( v4
    && (v9 = v4,
        v10 = sub_1DC71F0(a1, *(_QWORD *)(a2 + 16), v5, v6, v7, v8, a3, a4),
        v10 != (unsigned __int16 *)((char *)&dword_0 + 1)) )
  {
    return sub_16AB670(
             *a1,
             *(_DWORD *)(a2 + 32),
             v9,
             (int *)((unsigned __int64)v10 & 0xFFFFFFFFFFFFFFFELL),
             *(_DWORD *)(a2 + 36),
             a3);
  }
  else
  {
    return 1;
  }
}
