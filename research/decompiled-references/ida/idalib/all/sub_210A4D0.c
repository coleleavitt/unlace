__int64 __fastcall sub_210A4D0(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 *v3; // rbp
  bool v4; // zf
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int *v9; // rax
  int *v10; // rbp
  __int64 result; // rax
  int v12; // ecx
  __int64 v13; // rdx
  int v14; // esi
  int *v15; // [rsp+0h] [rbp-58h] BYREF
  int *v16; // [rsp+8h] [rbp-50h] BYREF
  __m128i v17; // [rsp+10h] [rbp-48h] BYREF
  __int16 v18; // [rsp+30h] [rbp-28h]

  v3 = (__int64 *)(a1 + 1376);
  v17.m128i_i64[0] = __PAIR64__(a3, a2);
  v4 = (unsigned __int8)sub_2105C10((__int64 *)(a1 + 1376), v17.m128i_i32, &v15) == 0;
  v9 = v15;
  if ( v4 )
  {
    v12 = *(_DWORD *)(a1 + 1384);
    v16 = v15;
    v13 = (unsigned int)(v12 + 1);
    v6 = *(unsigned int *)(a1 + 1392);
    v7 = (unsigned int)(4 * v13);
    v14 = 2 * v6;
    if ( (unsigned int)v7 < 3 * (int)v6 )
    {
      if ( (int)v6 - *(_DWORD *)(a1 + 1388) - (int)v13 > (unsigned int)v6 >> 3 )
        goto LABEL_6;
      v14 = *(_DWORD *)(a1 + 1392);
    }
    sub_210A330((__int64)v3, v14, v13, v6, v7, v8);
    sub_2105C10(v3, v17.m128i_i32, &v16);
    LODWORD(v13) = *(_DWORD *)(a1 + 1384) + 1;
    v9 = v16;
LABEL_6:
    *(_DWORD *)(a1 + 1384) = v13;
    if ( *v9 != -1 || v9[1] != -1 )
      --*(_DWORD *)(a1 + 1388);
    v10 = v9 + 2;
    *v9 = v17.m128i_i32[0];
    v5 = v17.m128i_u32[1];
    *((_QWORD *)v9 + 1) = 0;
    v9[1] = v5;
    goto LABEL_9;
  }
  v10 = v15 + 2;
  result = *((_QWORD *)v15 + 1);
  if ( !result )
  {
LABEL_9:
    v17.m128i_i64[0] = (__int64)"tmp";
    v18 = 259;
    result = sub_2108570(a1, &v17, v5, v6, v7, v8);
    *(_QWORD *)v10 = result;
  }
  return result;
}
