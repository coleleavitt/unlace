__int64 __fastcall sub_20B7E70(__int64 a1, __int64 a2)
{
  int v4; // edi
  unsigned __int8 v5; // dl
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 v8; // r12
  int v9; // ebp
  int v10; // eax
  int v11; // edi
  unsigned int v12; // eax
  __int64 *v13; // rsi
  __int64 v14; // rdx
  __int64 *v15; // r12
  __int64 result; // rax
  __int64 v17; // r9
  _QWORD *v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // rcx
  bool v23; // zf
  __int64 v24; // rdx
  unsigned __int8 v25; // r11
  __int64 v26; // rdx
  int v27; // esi
  __int64 v28; // [rsp+8h] [rbp-50h] BYREF
  _QWORD *v29; // [rsp+10h] [rbp-48h] BYREF
  __int64 v30; // [rsp+18h] [rbp-40h] BYREF
  __m128 v31[3]; // [rsp+20h] [rbp-38h] BYREF

  v28 = a1;
  v4 = *(_DWORD *)(a1 + 20);
  LODWORD(v29) = v4;
  BYTE4(v29) = *(_BYTE *)(a1 + 28);
  v5 = *(_BYTE *)(a1 - 16);
  if ( (v5 & 2) != 0 )
    v6 = *(_QWORD *)(a1 - 32);
  else
    v6 = a1 - 8LL * ((v5 >> 2) & 0xF) - 16;
  v7 = *(unsigned int *)(a2 + 16);
  v8 = *(_QWORD *)a2;
  v30 = *(_QWORD *)(v6 + 40);
  if ( !(_DWORD)v7 )
    goto LABEL_11;
  v9 = v7 - 1;
  v10 = sub_20A2CD0(v4, (__int8 *)&v29 + 4, &v30);
  v11 = 1;
  v12 = v9 & v10;
  v13 = (__int64 *)(v8 + 8LL * v12);
  v14 = *v13;
  if ( *v13 == -4096 )
  {
LABEL_10:
    v8 = *(_QWORD *)a2;
    v7 = *(unsigned int *)(a2 + 16);
LABEL_11:
    sub_2081F40(v31, (_QWORD *)(v8 + 8 * v7), (_QWORD *)(v8 + 8 * v7), a2, 1);
    v15 = (__int64 *)v31[0].m128_u64[0];
    goto LABEL_12;
  }
  while ( 1 )
  {
    if ( v14 != -8192 && (_DWORD)v29 == *(_DWORD *)(v14 + 20) && BYTE4(v29) == *(_BYTE *)(v14 + 28) )
    {
      v25 = *(_BYTE *)(v14 - 16);
      v26 = (v25 & 2) != 0 ? *(_QWORD *)(v14 - 32) : -16 - 8LL * ((v25 >> 2) & 0xF) + v14;
      if ( v30 == *(_QWORD *)(v26 + 40) )
        break;
    }
    v12 = v9 & (v11 + v12);
    v13 = (__int64 *)(v8 + 8LL * v12);
    v14 = *v13;
    if ( *v13 == -4096 )
      goto LABEL_10;
    ++v11;
  }
  sub_2081F40(v31, v13, (_QWORD *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 16)), a2, 1);
  v15 = (__int64 *)v31[0].m128_u64[0];
LABEL_12:
  sub_2081F40(
    v31,
    (_QWORD *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 16)),
    (_QWORD *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 16)),
    a2,
    1);
  if ( (__int64 *)v31[0].m128_u64[0] == v15 || (result = *v15) == 0 )
  {
    if ( (unsigned __int8)sub_207F8F0((__int64 *)a2, &v28, &v29) )
    {
      sub_2081F40(v31, v29, (_QWORD *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 16)), a2, 1);
      return v28;
    }
    v18 = v29;
    v19 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
    v20 = *(unsigned int *)(a2 + 16);
    v31[0].m128_u64[0] = (unsigned __int64)v29;
    v21 = (unsigned int)(4 * v19);
    v22 = (unsigned int)(2 * v20);
    if ( (unsigned int)v21 >= 3 * (int)v20 )
    {
      v27 = 2 * v20;
    }
    else
    {
      v22 = (unsigned int)(v20 - *(_DWORD *)(a2 + 12) - v19);
      if ( (unsigned int)v22 > (unsigned int)v20 >> 3 )
      {
LABEL_17:
        v23 = *v18 == -4096;
        *(_DWORD *)(a2 + 8) = v19;
        if ( !v23 )
          --*(_DWORD *)(a2 + 12);
        *v18 = v28;
        v24 = *(_QWORD *)a2;
        v29 = v18;
        sub_2081F40(v31, v18, (_QWORD *)(v24 + 8 * v20), a2, 1);
        return v28;
      }
      v27 = v20;
    }
    sub_20859C0((__m128i **)a2, v27, v19, v22, v21, v17);
    sub_207F8F0((__int64 *)a2, &v28, v31);
    v20 = *(unsigned int *)(a2 + 16);
    v18 = (_QWORD *)v31[0].m128_u64[0];
    LODWORD(v19) = *(_DWORD *)(a2 + 8) + 1;
    goto LABEL_17;
  }
  return result;
}
