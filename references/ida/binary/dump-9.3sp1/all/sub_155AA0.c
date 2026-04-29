__int64 __fastcall sub_155AA0(__int64 a1, _BYTE *a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v7; // r12
  __int64 v9; // rsi
  unsigned int v10; // r15d
  __int64 v11; // rdx
  __int64 v12; // rcx
  char *v13; // rax
  __int64 v14; // rsi
  char *v15; // rbp
  _QWORD *v16; // rax
  unsigned int v18; // [rsp+Ch] [rbp-4Ch]
  char *v19; // [rsp+10h] [rbp-48h]

  v7 = (__int64)a2;
  if ( *(_BYTE *)a3 == 4
    && (unsigned __int8)sub_1205A0(*(_BYTE **)(a3 + 8), *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL), 0, a4, a5, a6)
    && !sub_121930(a2, a3) )
  {
    return 0;
  }
  v9 = *(int *)(a3 + 4);
  v10 = *(_DWORD *)(a3 + 4);
  v18 = sub_138140(*(_QWORD **)(a1 + 64), v9, 1);
  if ( v18 == -1 )
    return 0;
  v13 = (char *)j__qalloc_or_throw(80, v9, v11, v12);
  v14 = *(_QWORD *)(v7 + 24);
  v15 = v13;
  v19 = v13 + 32;
  *((_QWORD *)v13 + 4) = 0xFFFFFFFF00000000LL;
  *((_QWORD *)v13 + 5) = 0;
  *((_QWORD *)v13 + 6) = 0xFFFFFFFF00000000LL;
  *((_QWORD *)v13 + 7) = 0;
  *((_QWORD *)v13 + 8) = 0xFFFFFFFF00000000LL;
  *((_QWORD *)v13 + 9) = 0;
  sub_330970(v13, v14);
  *(_DWORD *)v15 = 4;
  sub_11CA10((char *)a3, v19);
  *(_BYTE *)a3 = 1;
  *(_QWORD *)(a3 + 4) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v10), _mm_cvtsi32_si128(v18)).m128i_u64[0];
  sub_125180((__int64)(v15 + 64), (unsigned __int8 *)a3);
  if ( sub_11E8C0((unsigned int *)v7) && a3 == v7 + 64 )
    sub_11CA10(v19, v15 + 64);
  else
    v7 = *(_QWORD *)(v7 + 16);
  v16 = sub_A3160(a1, v15, v7);
  if ( a4 )
  {
    *(_DWORD *)a4 = 2;
    *(_QWORD *)(a4 + 24) = v16;
    *(_QWORD *)(a4 + 8) = a3;
    *(_QWORD *)(a4 + 16) = a1;
  }
  return 1;
}
