__int64 __fastcall sub_1E6EB40(__int64 *a1, const __m128i *a2, __int64 *a3)
{
  char v3; // cl
  unsigned int v4; // r13d
  __int64 v5; // rax
  __int64 v7; // r15
  __int16 v8; // ax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // r12
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r12
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r13
  __int64 v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // r13
  __int64 v29; // rax
  _QWORD *v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // [rsp+0h] [rbp-E8h]
  __m128i *v34; // [rsp+8h] [rbp-E0h]
  __int64 v35; // [rsp+18h] [rbp-D0h] BYREF
  _BYTE v36[200]; // [rsp+20h] [rbp-C8h] BYREF

  v3 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*a3 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  if ( (v3 & 0xF7) != 0x22 )
  {
    v4 = 0;
    if ( v3 != 11 )
      return v4;
  }
  v5 = *(_QWORD *)&byte_8[*a3 & 0xFFFFFFFFFFFFFFF0LL];
  v7 = *a1;
  if ( (v5 & 8) != 0 && (*((_BYTE *)&qword_18 + (v5 & 0xFFFFFFFFFFFFFFF0LL)) & 0x30) != 0 )
  {
    v4 = 1;
    sub_168B9F0((__int64)v36, (__int64 *)(v7 + 8), a2[1].m128i_u32[2], 0xC7Eu, 0);
    sub_15F7200(v36);
    a2[3].m128i_i8[10] |= 1u;
    return v4;
  }
  v8 = a2[3].m128i_i16[4];
  if ( !v8 || (v9 = a2[5].m128i_i64[0], (v9 & 2) == 0) )
  {
    sub_168B9F0((__int64)v36, (__int64 *)(v7 + 8), a2[1].m128i_u32[2], 0xC57u, 0);
    v10 = sub_15DD120((__int64)v36, (__int64)a2);
    v11 = v10;
    if ( *(_BYTE *)(v10 + 120) )
    {
      sub_1E5E160((unsigned __int8 **)(v10 + 32), 2);
    }
    else if ( *(_BYTE *)(v10 + 132) )
    {
      v28 = sub_168B9E0((_QWORD *)v10);
      v29 = *(_QWORD *)(v11 + 16);
      if ( v29 )
        v29 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v29 + 32LL))(*(_QWORD *)(v11 + 16));
      v35 = v29;
      v30 = sub_1587BC0(v28, &v35, v24, v25, v26, v27);
      sub_1E5E160((unsigned __int8 **)(*v30 + 32LL * *(unsigned int *)(v11 + 128) + 8), 2);
    }
    goto LABEL_8;
  }
  if ( (unsigned __int16)v8 > 1u )
  {
    sub_168B9F0((__int64)v36, (__int64 *)(v7 + 8), a2[1].m128i_u32[2], 0xCAAu, 0);
    v31 = sub_15DD120((__int64)v36, (__int64)a2);
    LODWORD(v35) = 1;
    sub_1587D10(v31, (int *)&v35);
LABEL_8:
    v4 = 1;
    sub_15F7200(v36);
    a2[3].m128i_i8[10] |= 1u;
    return v4;
  }
  v13 = *(_QWORD *)((v9 & 0xFFFFFFFFFFFFFFFCLL) + 8);
  v14 = *(_QWORD *)(v13 + 16);
  if ( (unsigned int)*(_QWORD *)v14 == 4 )
  {
    if ( *(_DWORD *)(v14 + 16) == 1801545079 )
    {
      v32 = 1;
      goto LABEL_29;
    }
LABEL_13:
    sub_168B9F0((__int64)v36, (__int64 *)(v7 + 8), a2[1].m128i_u32[2], 0x19C0u, 0);
    v15 = sub_15DD120((__int64)v36, (__int64)a2);
    v16 = v15;
    if ( *(_BYTE *)(v15 + 120) )
    {
      sub_AE9DF0((unsigned __int8 **)(v15 + 32), v13, 5u);
    }
    else if ( *(_BYTE *)(v15 + 132) )
    {
      v21 = sub_168B9E0((_QWORD *)v15);
      v22 = *(_QWORD *)(v16 + 16);
      if ( v22 )
        v22 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v22 + 32LL))(*(_QWORD *)(v16 + 16));
      v35 = v22;
      v23 = sub_1587BC0(v21, &v35, v17, v18, v19, v20);
      sub_AE9DF0((unsigned __int8 **)(*v23 + 32LL * *(unsigned int *)(v16 + 128) + 8), v13, 5u);
    }
    goto LABEL_8;
  }
  if ( (unsigned int)*(_QWORD *)v14 != 6 )
    goto LABEL_13;
  if ( *(_DWORD *)(v14 + 16) != 1869771891 )
    goto LABEL_13;
  v32 = 2;
  if ( *(_WORD *)(v14 + 20) != 26478 )
    goto LABEL_13;
LABEL_29:
  v4 = 1;
  v33 = *a3;
  *a3 = sub_A71330(*(_QWORD *)(v7 + 248), *a3, v32);
  if ( a2[1].m128i_i32[2] )
  {
    v34 = (__m128i *)sub_9C3B30((__int64 *)(*(_QWORD *)(v7 + 248) + 2352LL), 48, 3u);
    sub_B160C0(v34, *(_QWORD *)(v7 + 248), a2, v13);
    *a3 = sub_1E5D550((__int64)a1, (__int64)v34, v33, *a3);
  }
  return v4;
}
