__int64 __fastcall sub_22C2820(__int64 a1, __int64 *a2)
{
  __int64 v3; // rax
  unsigned int v5; // edx
  __int64 *v6; // rsi
  int v7; // eax
  bool v8; // zf
  __int64 v9; // rax
  __int64 v10; // rdx
  _QWORD *v11; // rdx
  __int64 v12; // rax
  unsigned __int64 v13; // r12
  __int64 v14; // rbp
  __int64 *v15; // rax
  __int64 *v16; // [rsp+8h] [rbp-30h] BYREF
  __m128 v17[2]; // [rsp+10h] [rbp-28h] BYREF

  if ( (unsigned __int8)sub_22C09B0((__int64 *)a1, a2, &v16) )
  {
    sub_22C0B30(v17, v16, (_QWORD *)(*(_QWORD *)a1 + 16LL * *(unsigned int *)(a1 + 16)), a1, 1);
    v3 = *(unsigned int *)(v17[0].m128_u64[0] + 8);
    return *(_QWORD *)(a1 + 24) + 16 * v3 + 8;
  }
  v5 = *(_DWORD *)(a1 + 16);
  v6 = v16;
  v7 = *(_DWORD *)(a1 + 8) + 1;
  v17[0].m128_u64[0] = (unsigned __int64)v16;
  if ( 4 * v7 >= 3 * v5 )
  {
    sub_22C26A0(a1, 2 * v5);
LABEL_12:
    sub_22C09B0((__int64 *)a1, a2, v17);
    v6 = (__int64 *)v17[0].m128_u64[0];
    v7 = *(_DWORD *)(a1 + 8) + 1;
    goto LABEL_6;
  }
  if ( v5 - *(_DWORD *)(a1 + 12) - v7 <= v5 >> 3 )
  {
    sub_22C26A0(a1, v5);
    goto LABEL_12;
  }
LABEL_6:
  v8 = *v6 == -4096;
  *(_DWORD *)(a1 + 8) = v7;
  if ( !v8 )
    --*(_DWORD *)(a1 + 12);
  v9 = *a2;
  *((_DWORD *)v6 + 2) = 0;
  v10 = *(unsigned int *)(a1 + 16);
  *v6 = v9;
  v11 = (_QWORD *)(*(_QWORD *)a1 + 16 * v10);
  v16 = v6;
  sub_22C0B30(v17, v6, v11, a1, 1);
  v12 = *(unsigned int *)(a1 + 32);
  v13 = v17[0].m128_u64[0];
  v14 = *a2;
  if ( v12 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 36) )
  {
    sub_2237220(a1 + 24, (const void *)(a1 + 40), v12 + 1, 16);
    v12 = *(unsigned int *)(a1 + 32);
  }
  v15 = (__int64 *)(*(_QWORD *)(a1 + 24) + 16 * v12);
  *v15 = v14;
  v15[1] = 0;
  v3 = *(unsigned int *)(a1 + 32);
  *(_DWORD *)(a1 + 32) = v3 + 1;
  *(_DWORD *)(v13 + 8) = v3;
  return *(_QWORD *)(a1 + 24) + 16 * v3 + 8;
}
