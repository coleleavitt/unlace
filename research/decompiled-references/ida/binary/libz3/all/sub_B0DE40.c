__int64 __fastcall sub_B0DE40(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax
  __int64 v3; // rax
  __int64 *v4; // r12
  _DWORD *v5; // rbx
  _DWORD *v6; // rbp
  int v7; // eax
  __int64 v8; // rdi
  __int64 v9; // r14
  int v10; // eax
  char *v11; // [rsp+0h] [rbp-30h] BYREF

  result = (unsigned int)dword_1C7ED24;
  if ( dword_1C7ED24 != *a2 && dword_1C7ED24 != a2[1] )
  {
    *(_QWORD *)(a1 + 24) = _mm_add_epi32(
                             _mm_loadl_epi64((const __m128i *)(a1 + 24)),
                             _mm_loadl_epi64((const __m128i *)&qword_18B5FE8)).m128i_u64[0];
    v3 = sub_186B270(0x10u);
    v4 = *(__int64 **)(a1 + 8);
    v5 = (_DWORD *)v3;
    LODWORD(v3) = *a2;
    *(_QWORD *)v5 = 0x100000002LL;
    v5[2] = v3;
    LODWORD(v3) = a2[1];
    ++v5[1];
    v5[3] = v3;
    v6 = (_DWORD *)sub_186B270(0x10u);
    v7 = v5[2];
    v8 = v4[2];
    *(_QWORD *)v6 = 0x100000002LL;
    v9 = *v4;
    v6[2] = v7;
    v10 = v5[3];
    ++v6[1];
    v6[3] = v10;
    v11 = (char *)(v6 + 2);
    sub_B0D9D0(v8, &v11);
    sub_B68F30(v9, 2);
    sub_186B220(v6);
    return sub_186B220(v5);
  }
  return result;
}

