void __fastcall sub_18210D0(__int64 *a1, __int64 a2, const __m128i *a3, __m128i a4, double a5)
{
  char *v7; // rbx
  unsigned __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rbp
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  _QWORD *v19; // rax
  __int64 i; // r15
  __int64 v21; // rax
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // [rsp+8h] [rbp-100h]
  unsigned int v29; // [rsp+1Ch] [rbp-ECh] BYREF
  char *v30; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v31; // [rsp+28h] [rbp-E0h]
  __int64 v32[2]; // [rsp+30h] [rbp-D8h] BYREF
  unsigned int v33[50]; // [rsp+40h] [rbp-C8h] BYREF

  if ( (*(_BYTE *)(a1[29] + 1) & 8) == 0 )
  {
    sub_168B9F0((__int64)v33, a1 + 1, a3[1].m128i_u32[2], 0xC85u, 0);
    v11 = sub_15DD120((__int64)v33, (__int64)a3);
    v12 = v11;
    if ( *(_BYTE *)(v11 + 120) )
    {
      sub_AE9DF0((unsigned __int8 **)(v11 + 32), 0, 2u);
      sub_15F7200(v33);
    }
    else
    {
      if ( *(_BYTE *)(v11 + 132) )
      {
        v15 = sub_168B9E0((_QWORD *)v11);
        v18 = *(_QWORD *)(v12 + 16);
        if ( v18 )
          v18 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v18 + 32LL))(*(_QWORD *)(v12 + 16));
        v32[0] = v18;
        v19 = sub_1587BC0(v15, v32, v13, v14, v16, v17);
        sub_AE9DF0((unsigned __int8 **)(*v19 + 32LL * *(unsigned int *)(v12 + 128) + 8), 0, 2u);
      }
      sub_15F7200(v33);
    }
    return;
  }
  v30 = nullptr;
  v29 = 0;
  v31 = 0;
  if ( !(unsigned __int8)sub_181F2D0((__int64)a1, (__int64)a3, &v30, &v29, a4, a5) )
    return;
  v7 = v30;
  if ( v31 != 38 )
  {
    if ( v31 == 36 )
      goto LABEL_5;
LABEL_11:
    sub_168B9F0((__int64)v33, a1 + 1, v29, 6u, 0);
    sub_15F7200(v33);
    return;
  }
  if ( *v30 != 123 || v30[37] != 125 )
    goto LABEL_11;
  v7 = v30 + 1;
LABEL_5:
  v8 = 0;
  v9 = 8659200;
  do
  {
    v10 = (unsigned __int8)v7[v8];
    if ( v8 <= 0x17 && _bittest64(&v9, v8) )
    {
      if ( (_BYTE)v10 != 45 )
        goto LABEL_11;
    }
    else if ( (byte_2411740[2 * v10] & 0x18) == 0 )
    {
      goto LABEL_11;
    }
    ++v8;
  }
  while ( v8 != 36 );
  if ( !(unsigned __int8)sub_2247970(v7, 8, 16, v33) && *(_QWORD *)v33 == v33[0] )
    LODWORD(v32[0]) = v33[0];
  if ( !(unsigned __int8)sub_2247970(v7 + 9, 4, 16, v33) && (*(_QWORD *)v33 & 0xFFFFFFFFFFFF0000LL) == 0 )
    WORD2(v32[0]) = v33[0];
  if ( !(unsigned __int8)sub_2247970(v7 + 14, 4, 16, v33) && (*(_QWORD *)v33 & 0xFFFFFFFFFFFF0000LL) == 0 )
    HIWORD(v32[0]) = v33[0];
  for ( i = 0; i != 8; ++i )
  {
    if ( !(unsigned __int8)sub_2247970(&v7[2 * (_DWORD)i + 19 + ((unsigned int)i > 1)], 2, 16, v33)
      && (*(_QWORD *)v33 & 0xFFFFFFFFFFFFFF00LL) == 0 )
    {
      *((_BYTE *)&v32[1] + i) = v33[0];
    }
  }
  v21 = sub_A7AAC0(a1[31], v32[0], v32[1]);
  v22 = v21;
  if ( (a3[2].m128i_i8[2] & 0xF) == 5 )
  {
    v28 = v21;
    sub_168B9F0((__int64)v33, a1 + 1, a3[1].m128i_u32[2], 0x1982u, 0);
    sub_15F7200(v33);
    v22 = v28;
  }
  v23 = sub_1809910((__int64)a1, a2, a3, v30, v31, v22);
  if ( v23 )
    sub_B8CC60(a2, v23, v24, v25, v26, v27);
}
