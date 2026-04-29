unsigned __int64 __fastcall sub_3EC080(__int64 a1, __int64 a2, int a3, signed int a4, double a5)
{
  __int64 v5; // rbx
  unsigned __int16 v6; // ax
  unsigned int v8; // r14d
  int v9; // ecx
  __int64 v10; // rax
  __m128i v11; // xmm0
  unsigned int *v12; // rax
  __m128i v13; // xmm1
  unsigned int *v14; // r12
  __int64 v15; // r15
  unsigned int *v16; // rax
  unsigned int v17; // edx
  int v18; // edx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  int v23; // edi
  __int64 v24; // [rsp+0h] [rbp-80h]
  int v26; // [rsp+Ch] [rbp-74h]
  unsigned __int64 v27; // [rsp+10h] [rbp-70h] BYREF
  __int64 v28; // [rsp+18h] [rbp-68h]
  unsigned __int8 v29[16]; // [rsp+20h] [rbp-60h] BYREF
  _BYTE v30[24]; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 v31; // [rsp+48h] [rbp-38h]

  v5 = a1;
  v26 = a2;
  v6 = *(_WORD *)(a1 + 48);
  v31 = __readfsqword(0x28u);
  if ( v6 > 0xDEu )
  {
    if ( (unsigned __int16)(v6 - 1690) <= 1u )
    {
      LOBYTE(v9) = v6 != 1690;
      if ( a4 == -1 )
      {
        v20 = *(_QWORD *)(a1 + 832);
        v28 = 0;
        v8 = 4;
        a4 = *(_DWORD *)(v20 + 452);
        v27 = 0xFFFFFFFF00000007LL;
        goto LABEL_21;
      }
      if ( !under_debugger )
        sub_37E160(0xCE44u, a2, a5);
      goto LABEL_34;
    }
    goto LABEL_27;
  }
  v8 = 67;
  if ( v6 > 0xDAu )
    goto LABEL_3;
  if ( (unsigned __int16)(v6 - 215) > 3u )
  {
LABEL_27:
    if ( !under_debugger )
      sub_37E160(0xCC58u, a2, a5);
    goto LABEL_34;
  }
  v8 = 4;
LABEL_3:
  a2 = 1LL << ((unsigned __int8)v6 + 41);
  if ( (a2 & 0x55) == 0 )
  {
    if ( (a2 & 0xAA) != 0 )
    {
      v9 = 1;
      goto LABEL_6;
    }
    if ( !under_debugger )
      sub_37E160(0xCCC4u, a2, a5);
LABEL_34:
    BUG();
  }
  v9 = 0;
LABEL_6:
  a1 = 0xFFFFFFFF00000007LL;
  v28 = 0;
  v27 = 0xFFFFFFFF00000007LL;
  if ( v6 > 0xDAu )
  {
    if ( (unsigned __int16)(v6 - 221) <= 1u )
      goto LABEL_8;
  }
  else if ( v6 > 0xD8u )
  {
LABEL_8:
    v10 = *(_QWORD *)(v5 + 832);
    *(_QWORD *)v29 = 1;
    v11 = _mm_cvtsi32_si128(*(_DWORD *)(v10 + 80));
    v12 = *(unsigned int **)(v10 + 696);
    *(_QWORD *)&v29[4] = _mm_unpacklo_epi32(v11, _mm_cvtsi32_si128(a4)).m128i_u64[0];
    v13 = _mm_cvtsi32_si128(*v12);
    *(_DWORD *)v30 = 1;
    *(_QWORD *)&v30[4] = _mm_unpacklo_epi32(v11, v13).m128i_u64[0];
    v14 = sub_3EB6F0((_QWORD *)v5, 44 - v9, v29, v30, (unsigned __int8 *)&v27);
    sub_118BA0((__int64)v30);
    sub_118BA0((__int64)v29);
    goto LABEL_9;
  }
LABEL_21:
  if ( (_BYTE)v9 )
  {
    v21 = *(_QWORD *)(v5 + 832);
    v22 = *(_QWORD *)(v21 + 760);
    if ( !v22 )
      sub_3E5460(a5, a1, a2);
    v23 = *(_DWORD *)(*(_QWORD *)(v21 + 752) + 4 * v22 - 4);
    *(_QWORD *)(v21 + 760) = v22 - 1;
    sub_3EAB70(v5, 6u, 1, a4, 0x3BEA45E214ADDC55LL, v23, 0);
    *(_DWORD *)&v30[8] = v23;
    *(_QWORD *)v30 = 0x100000001LL;
    v14 = sub_3EB6F0((_QWORD *)v5, 42, v30, nullptr, (unsigned __int8 *)&v27);
    sub_3E8540(*(_QWORD *)(v5 + 832), v23);
    sub_118BA0((__int64)v30);
  }
  else
  {
    *(_DWORD *)&v30[8] = a4;
    *(_QWORD *)v30 = 0x100000001LL;
    v14 = sub_3EB6F0((_QWORD *)v5, 42, v30, nullptr, (unsigned __int8 *)&v27);
    sub_118BA0((__int64)v30);
  }
LABEL_9:
  if ( v14 )
  {
    v24 = sub_63DD0(*(_QWORD *)(v5 + 8), *(_QWORD *)(v5 + 40), 2);
    v15 = sub_63DD0(*(_QWORD *)(v5 + 8), *(_QWORD *)(v5 + 40), 2);
    v16 = v14 + 16;
    if ( *v14 == 55 )
      v16 = v14 + 8;
    v17 = *(_DWORD *)(v15 + 72);
    *(_BYTE *)v16 = 7;
    v16[2] = v17;
    v18 = *(unsigned __int16 *)(v5 + 890);
    *(_QWORD *)(v5 + 16) = v24;
    sub_3EAB70(v5, v8, v18, a3, 0x3BEA45E214ADDC55LL, v26, 0);
    *(_QWORD *)(v5 + 16) = v15;
  }
  else
  {
    sub_3EAB70(v5, v8, *(unsigned __int16 *)(v5 + 890), a3, 0x3BEA45E214ADDC55LL, v26, 0);
  }
  sub_118BA0((__int64)&v27);
  return v31 - __readfsqword(0x28u);
}
