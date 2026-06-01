__int64 __fastcall sub_A6A410(__int64 a1, __int64 a2, __m128 a3)
{
  __int64 v3; // rax
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 v9; // r14
  __int64 v10; // rbp
  __int64 v11; // rdx
  __int64 result; // rax
  __int64 v13; // rdi
  int v14; // r15d
  __int64 v15; // rdi
  unsigned int *v16; // rbp
  unsigned int v17; // eax
  _BYTE *v18; // rax
  int v19; // eax
  unsigned int v20; // eax
  char v21; // dl
  char v22; // dl
  unsigned int v23; // [rsp+0h] [rbp-6Ch]
  unsigned int *v24; // [rsp+Ch] [rbp-60h] BYREF
  int *v25; // [rsp+14h] [rbp-58h] BYREF
  __int64 v26; // [rsp+1Ch] [rbp-50h]
  int v27; // [rsp+24h] [rbp-48h]

  v3 = *(_QWORD *)(a1 + 824);
  *(_BYTE *)(a1 + 1536) = 0;
  if ( !v3 || !*(_DWORD *)(v3 - 4) )
    return 0;
  if ( !*(_BYTE *)(*(_QWORD *)(a1 + 464) + 36LL) )
    return 2;
  if ( (unsigned __int8)sub_9F6D30((_QWORD *)a1) )
    return 0;
  v5 = *(_QWORD *)(a1 + 464);
  if ( !*(_BYTE *)(v5 + 120) )
    return 2;
  if ( *(_DWORD *)(v5 + 140) < *(_DWORD *)(a1 + 1540) )
  {
    if ( (unsigned int)sub_180B130(a1) > 2 )
    {
      if ( (unsigned __int8)sub_186A530(*(double *)a3.m128_u64) )
      {
        sub_186A4C0(*(double *)a3.m128_u64);
        v13 = sub_180B150(a1, a2);
        std::operator<<<std::char_traits<char>>();
        sub_186A500(v13, "Max. non linear arithmetic rounds. Increase threshold using NL_ARITH_ROUNDS=<limit>\n");
      }
      else
      {
        sub_180B150(a1, a2);
        std::operator<<<std::char_traits<char>>();
      }
    }
    return 2;
  }
  v6 = *(_QWORD *)(a1 + 16);
  v27 = *(_DWORD *)(a1 + 1540);
  v26 = a1 + 1540;
  v25 = &off_1C4C070;
  sub_9E7B90(v6, (__int64)&v25);
  v7 = *(_QWORD *)(a1 + 32);
  ++*(_DWORD *)(a1 + 1540);
  if ( v7 )
  {
    v8 = *(unsigned int *)(v7 - 4);
    if ( (int)v8 > 0 )
    {
      v9 = 4 * v8;
      v10 = 0;
      do
      {
        v11 = v10 + *(_QWORD *)(a1 + 720);
        if ( ((*(_BYTE *)(v11 + 3) >> 4) & 3) == 2 )
          sub_A53A70((_QWORD *)a1, *(_DWORD *)v11 & 0xFFFFFFF);
        v10 += 4;
      }
      while ( v9 != v10 );
    }
  }
  sub_9FD4A0((_QWORD *)a1);
  if ( !(unsigned __int8)sub_A55F80(a1, *(double *)a3.m128_u64) )
  {
    sub_9CFB40(a1);
    return 1;
  }
  if ( !(unsigned __int8)sub_A68D90(a1, *(double *)a3.m128_u64) )
    return 1;
  if ( (unsigned __int8)sub_9F6D30((_QWORD *)a1) )
  {
    result = 0;
    if ( !*(_BYTE *)(a1 + 1376) )
      return *(unsigned __int8 *)(a1 + 1377);
    return result;
  }
  v24 = nullptr;
  sub_9E46A0((_QWORD *)a1, (__int64 *)&v24);
  v14 = *(_DWORD *)(a1 + 1548);
  v15 = *(_QWORD *)(a1 + 16);
  v25 = &off_1C4C070;
  v16 = v24;
  v26 = a1 + 1548;
  v27 = v14;
  sub_9E7B90(v15, (__int64)&v25);
  v17 = *(_DWORD *)(a1 + 1548);
  if ( v17 == 2 )
    goto LABEL_43;
  if ( v17 <= 2 )
    goto LABEL_33;
  if ( v17 == 3 )
  {
LABEL_42:
    v18 = *(_BYTE **)(a1 + 464);
    goto LABEL_38;
  }
  while ( 1 )
  {
    v17 = ((_BYTE)v17 + 1) & 3;
    *(_DWORD *)(a1 + 1548) = v17;
    if ( v14 == v17 )
    {
LABEL_55:
      v22 = sub_9F6D30((_QWORD *)a1);
      result = 2;
      if ( v22 )
      {
        result = 0;
        if ( !*(_BYTE *)(a1 + 1376) )
          result = *(unsigned __int8 *)(a1 + 1377);
      }
      goto LABEL_49;
    }
    while ( v17 != 2 )
    {
      if ( v17 == 3 )
        goto LABEL_42;
LABEL_33:
      if ( !v17 )
        goto LABEL_40;
      v18 = *(_BYTE **)(a1 + 464);
      if ( !v18[146] )
      {
        *(_DWORD *)(a1 + 1548) = 2;
        if ( v14 == 2 )
          goto LABEL_55;
        goto LABEL_36;
      }
      v24 = v16;
      v21 = sub_A6A380(a1, &v24);
      v17 = ((unsigned __int8)*(_DWORD *)(a1 + 1548) + 1) & 3;
      if ( !v21 )
        goto LABEL_48;
      *(_DWORD *)(a1 + 1548) = v17;
      if ( v17 == v14 )
        goto LABEL_55;
    }
LABEL_43:
    v18 = *(_BYTE **)(a1 + 464);
LABEL_36:
    if ( !v18[121] )
      break;
    v24 = v16;
    v19 = sub_A43EE0(a1, &v24, a3);
    if ( !v19 )
      goto LABEL_47;
    if ( v19 == 1 )
    {
LABEL_46:
      sub_A68840(a1, *(double *)a3.m128_u64);
      goto LABEL_47;
    }
LABEL_41:
    v17 = *(_DWORD *)(a1 + 1548);
  }
  *(_DWORD *)(a1 + 1548) = 3;
  if ( v14 == 3 )
    goto LABEL_55;
LABEL_38:
  if ( !v18[136] )
  {
    *(_DWORD *)(a1 + 1548) = 0;
    if ( !v14 )
      goto LABEL_55;
LABEL_40:
    if ( (unsigned __int8)sub_A34320(a1) )
      goto LABEL_46;
    goto LABEL_41;
  }
  v20 = sub_9F6DE0(a1);
  if ( v20 == -1 )
    goto LABEL_41;
  sub_9A9B80(a1, v20);
LABEL_47:
  v17 = ((unsigned __int8)*(_DWORD *)(a1 + 1548) + 1) & 3;
LABEL_48:
  *(_DWORD *)(a1 + 1548) = v17;
  result = 1;
LABEL_49:
  if ( v16 )
  {
    v23 = result;
    sub_186B220(v16 - 2);
    return v23;
  }
  return result;
}

