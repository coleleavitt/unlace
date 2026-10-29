__int64 __fastcall sub_1944C60(__int64 *a1, unsigned __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v5; // r12
  __int64 v6; // r13
  __int64 v7; // rsi
  unsigned __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 *v11; // r13
  unsigned __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v15; // rsi
  unsigned __int64 *v16; // r12
  unsigned __int64 v17; // rax
  unsigned __int64 *v18; // [rsp+8h] [rbp-30h] BYREF

  if ( *(char *)(a2 + 2) < 0 )
  {
    v15 = *(_QWORD *)(a2 + 16);
    v16 = (unsigned __int64 *)sub_1946B40(a1, v15);
    if ( v16 )
    {
      v17 = sub_EEC8C0(a2, v15, *(double *)a3.m128_u64);
      return sub_1944A80(*a1, v16, *(_DWORD *)(a2 + 24), (*(_BYTE *)(a2 + 2) >> 3) & 0xF, v17, a3, a4);
    }
    else
    {
      return 1;
    }
  }
  else
  {
    v5 = *a1;
    sub_18C74E0(v5, 0, *(_QWORD *)(*(_QWORD *)(v5 + 4616) + 640LL * *(unsigned int *)(*a1 + 4624) - 520), 4);
    v6 = *(_QWORD *)(a2 + 16);
    v18 = nullptr;
    if ( (*(_WORD *)v6 & 0x1FF) == 0x14 && (v7 = *(_QWORD *)(v6 + 24), (*(_WORD *)v7 & 0x1FF) == 0x45) )
    {
      v8 = sub_194CB40(a1, v7, 0, &v18);
      if ( v8 > 1 )
      {
        v7 = *(unsigned int *)(v6 + 16);
        v8 = sub_190C990(*a1, v7, *(_DWORD *)(v6 + 20), v8 & 0xFFFFFFFFFFFFFFFELL, *(double *)a3.m128_u64, a4);
      }
    }
    else
    {
      v7 = v6;
      v8 = sub_1944E10(a1, v6);
    }
    v11 = v18;
    if ( v18 )
    {
      v12 = sub_EEC8C0(a2, v7, *(double *)a3.m128_u64);
      v13 = sub_1944A80(*a1, v11, *(_DWORD *)(a2 + 24), (*(_BYTE *)(a2 + 2) >> 3) & 0xF, v12, a3, a4);
    }
    else if ( v8 == 1 )
    {
      v13 = 1;
    }
    else
    {
      v13 = sub_1934340(
              *a1,
              (_QWORD *)(v8 & 0xFFFFFFFFFFFFFFFELL),
              *(unsigned int *)(a2 + 24),
              (*(_BYTE *)(a2 + 2) >> 3) & 0xF,
              v9,
              v10,
              (__m128i)a3,
              a4);
    }
    sub_190D5E0(v5, a3);
    return v13;
  }
}
