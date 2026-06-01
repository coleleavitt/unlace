unsigned __int64 __fastcall sub_B705C0(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rsi
  __int64 v10; // r12
  __int64 v11; // rax
  __int64 v12; // rbp
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rax
  unsigned __int64 result; // rax
  __int64 v18; // rbx
  unsigned __int64 v19; // rbp
  __int64 v20; // rbp
  unsigned __int64 v21; // rbx
  int v22; // eax
  unsigned int v23; // esi
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 *v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33[2]; // [rsp+8h] [rbp-60h] BYREF
  __int64 *v34; // [rsp+18h] [rbp-50h] BYREF
  __m128 v35[4]; // [rsp+20h] [rbp-48h] BYREF

  v33[0] = a2;
  v4 = sub_B68470((__int64)a1);
  v9 = v4;
  if ( (*(_BYTE *)(v4 + 28) & 0x7F) != 0 )
    v4 = sub_B68580(v4);
  v10 = *(_QWORD *)(*(_QWORD *)(v4 + 88) + 18360LL);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 56LL))(v9);
  v11 = a1[1];
  if ( (v11 & 0x100) == 0 )
  {
    v20 = *a1;
    if ( (v11 & 0x400) != 0 || (v11 & 0x800) != 0 )
    {
      v20 = sub_B70480((__int64)a1, v9, v5, v6, v7, v8);
      if ( !v20 )
        return 0;
    }
    else if ( !v20 )
    {
      return 0;
    }
    v21 = sub_B6D6D0(v20, v33);
    if ( sub_AA8AD0(v20) != v21 )
      return *(_QWORD *)(v21 + 8) & 0xFFFFFFFFFFFFFFFCLL;
    return 0;
  }
  if ( (v11 & 0x200) != 0 )
  {
    sub_B6D580((__int64)a1);
    v11 = a1[1];
  }
  v12 = *a1;
  if ( (v11 & 0x400) != 0 || (v11 & 0x800) != 0 )
    v12 = sub_B70480((__int64)a1, v9, v5, v6, v7, v8);
  if ( !v12 )
  {
    v32 = sub_B68470((__int64)a1);
    if ( (*(_BYTE *)(v32 + 28) & 0x7F) != 0 )
      v32 = sub_B68580(v32);
    v12 = sub_B6B1D0(a1, *(_QWORD *)(v32 + 88));
  }
  if ( !(unsigned __int8)sub_B6C170(v12, v33, &v34) )
  {
    v35[0].m128_u64[0] = (unsigned __int64)v34;
    v22 = (*(_DWORD *)v12 >> 1) + 1;
    if ( (*(_BYTE *)v12 & 1) != 0 )
    {
      v24 = 12;
      v23 = 4;
    }
    else
    {
      v23 = *(_DWORD *)(v12 + 16);
      v24 = 3 * v23;
    }
    v25 = (unsigned int)(4 * v22);
    if ( (unsigned int)v25 >= (unsigned int)v24 )
    {
      sub_B6EB70(v12, 2 * v23, v25, v24, v13, v14);
    }
    else
    {
      v26 = v23 - (v22 + *(_DWORD *)(v12 + 4));
      v27 = v23 >> 3;
      if ( (unsigned int)v26 > (unsigned int)v27 )
        goto LABEL_33;
      sub_B6EB70(v12, v23, v27, v26, v13, v14);
    }
    sub_B6C170(v12, v33, v35);
    v22 = (*(_DWORD *)v12 >> 1) + 1;
LABEL_33:
    *(_DWORD *)v12 = *(_DWORD *)v12 & 1 | (2 * v22);
    v28 = (__int64 *)v35[0].m128_u64[0];
    if ( *(_QWORD *)v35[0].m128_u64[0] != -1 )
      --*(_DWORD *)(v12 + 4);
    v29 = v33[0];
    v28[1] = 0;
    *v28 = v29;
    v34 = v28;
    if ( (*(_BYTE *)v12 & 1) != 0 )
    {
      v30 = v12 + 8;
      v31 = 64;
    }
    else
    {
      v30 = *(_QWORD *)(v12 + 8);
      v31 = 16LL * *(unsigned int *)(v12 + 16);
    }
    sub_AA8A70(v35, v28, (__int64 *)(v30 + v31), v12, 1);
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v10 + 72LL))(
            v10,
            a1,
            v33[0],
            a3) )
      return 0;
LABEL_16:
    v18 = *a1;
    if ( *a1 )
    {
      v19 = sub_B6D6D0(v18, v33);
      if ( v19 != sub_AA8AD0(v18) )
        return *(_QWORD *)(v19 + 8) & 0xFFFFFFFFFFFFFFFCLL;
    }
    return 0;
  }
  if ( (*(_BYTE *)v12 & 1) != 0 )
  {
    v15 = v12 + 8;
    v16 = 64;
  }
  else
  {
    v15 = *(_QWORD *)(v12 + 8);
    v16 = 16LL * *(unsigned int *)(v12 + 16);
  }
  sub_AA8A70(v35, v34, (__int64 *)(v16 + v15), v12, 1);
  result = *(_QWORD *)(v35[0].m128_u64[0] + 8) & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_QWORD *)(v35[0].m128_u64[0] + 8) & 2) != 0 )
  {
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v10 + 72LL))(v10, a1, v33[0], a3);
    goto LABEL_16;
  }
  return result;
}

