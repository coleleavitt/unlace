__int64 __fastcall sub_B0DC80(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax
  _DWORD *v4; // rdi
  __int64 *v5; // r12
  _DWORD *v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // r13
  _DWORD *v9; // rax
  _DWORD *v10; // rbx
  _DWORD *v11; // rdx
  _DWORD *v12; // rax
  _DWORD *v13; // rbp
  _DWORD *v14; // [rsp+0h] [rbp-48h] BYREF

  result = (unsigned int)dword_1C7ED24;
  if ( dword_1C7ED24 != *a2 && dword_1C7ED24 != a2[1] && a2[2] != dword_1C7ED24 )
  {
    *(_QWORD *)(a1 + 24) = _mm_add_epi32(
                             _mm_loadl_epi64((const __m128i *)(a1 + 24)),
                             _mm_loadl_epi64((const __m128i *)&qword_18B5FF0)).m128i_u64[0];
    v4 = (_DWORD *)sub_186B270(0x10u);
    v4[2] = *a2;
    *(_QWORD *)v4 = 0x100000002LL;
    v4[3] = a2[1];
    v4[1] = 2;
    v12 = (_DWORD *)sub_186B300(v4, 0x14u);
    v13 = v12 + 2;
    *v12 = 3;
    v5 = *(__int64 **)(a1 + 8);
    v12[v12[1]++ + 2] = a2[2];
    v6 = (_DWORD *)sub_186B270(0x10u);
    v6[2] = *v13;
    *(_QWORD *)v6 = 0x100000002LL;
    v6[3] = v13[1];
    v6[1] = 2;
    v9 = (_DWORD *)sub_186B300(v6, 0x14u);
    v10 = v9 + 2;
    *v9 = 3;
    v11 = &v9[v9[1] + 2];
    LODWORD(v9) = v13[2];
    v7 = v5[2];
    v8 = *v5;
    v14 = v10;
    *v11 = (_DWORD)v9;
    ++*(v10 - 1);
    sub_B0D9D0(v7, &v14);
    sub_B68F30(v8, 3);
    sub_186B220(v10 - 2);
    return sub_186B220(v13 - 2);
  }
  return result;
}

