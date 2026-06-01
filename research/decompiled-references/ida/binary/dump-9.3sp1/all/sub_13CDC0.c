__int64 __fastcall sub_13CDC0(__int64 a1)
{
  unsigned __int8 *v2; // rdi
  int *v4; // rdx
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  int v9; // eax
  _QWORD v10[2]; // [rsp+0h] [rbp-48h] BYREF
  _QWORD v11[7]; // [rsp+10h] [rbp-38h] BYREF

  v11[3] = __readfsqword(0x28u);
  *(__m128i *)(a1 + 56) = _mm_loadu_si128((const __m128i *)(a1 + 8));
  v2 = *(unsigned __int8 **)(a1 + 32);
  *(_QWORD *)(a1 + 80) = v2;
  if ( v2[48] != 2 || (unsigned int)(*(_DWORD *)v2 - 12) > 1 )
    goto LABEL_3;
  v10[0] = 0xFFFFFFFF00000000LL;
  v10[1] = 0;
  sub_1262E0((__int64)v10, v2);
  v11[0] = 0xFFFFFFFF00000000LL;
  v4 = *(int **)(a1 + 80);
  v5 = *(_QWORD *)(a1 + 64);
  v11[1] = 0;
  if ( !(unsigned __int8)sub_13C7E0(v5, (__int64)v11, v4, a1 + 112, (__int64)v10, 0xFFFFFFFF) )
  {
    sub_11CDA0((__int64)v11);
    sub_11CDA0((__int64)v10);
    v2 = *(unsigned __int8 **)(a1 + 32);
LABEL_3:
    sub_11E900(v2, a1 + 48);
    return 0;
  }
  sub_11CA10((char *)v10, (char *)v11);
  sub_11C950((unsigned __int8 *)v10, *(_QWORD *)(a1 + 96), v6, v7);
  if ( SHIDWORD(v10[0]) < SHIDWORD(v11[0]) )
    sub_1207E0((char *)v10, *(_QWORD *)(a1 + 96), 9, *(_QWORD *)(*(_QWORD *)(a1 + 80) + 24LL), SHIDWORD(v11[0]));
  v8 = *(_QWORD *)(a1 + 64);
  v9 = *(_DWORD *)(v8 + 24);
  BYTE1(v9) &= ~2u;
  LOBYTE(v9) = v9 | 0x80;
  *(_DWORD *)(v8 + 24) = v9;
  ++*(_DWORD *)(a1 + 104);
  sub_11CDA0((__int64)v11);
  **(_DWORD **)(a1 + 32) = 4;
  sub_11CA10((char *)(*(_QWORD *)(a1 + 32) + 32LL), (char *)v10);
  sub_11CDA0(*(_QWORD *)(a1 + 32) + 48LL);
  sub_11CDA0((__int64)v10);
  return 0;
}
