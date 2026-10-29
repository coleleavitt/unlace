__int64 __fastcall sub_1C8E070(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 *v4; // rax
  __int64 *v5; // r12
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  __int64 v9; // r8
  unsigned __int16 *v10; // rax

  v4 = sub_1C8AA80(a1, *(_QWORD *)(a2 + 24), a3, a4);
  if ( v4
    && (v5 = v4,
        v6 = sub_BFA3B0(a2),
        v10 = sub_1C7CFE0(a1, v6, a3, a4, v7, v8, v9),
        v10 != (unsigned __int16 *)((char *)&dword_0 + 1)) )
  {
    return sub_16B2590(
             *a1,
             *(_DWORD *)(a2 + 32),
             v5,
             *(_DWORD *)(a2 + 36),
             (_WORD *)((unsigned __int64)v10 & 0xFFFFFFFFFFFFFFFELL),
             a3,
             *(double *)a4.m128_u64);
  }
  else
  {
    return 1;
  }
}
