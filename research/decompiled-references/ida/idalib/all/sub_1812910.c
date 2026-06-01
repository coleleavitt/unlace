void __fastcall sub_1812910(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  const __m128i *v7; // rbp
  unsigned __int64 *v8; // rax
  unsigned __int64 v9; // rax
  __int64 *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rax
  __m128i *v20; // r13
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // r12
  __int64 *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rbx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  _QWORD *v33; // rax
  __int64 v34; // [rsp+8h] [rbp-C0h] BYREF
  _QWORD v35[2]; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v36; // [rsp+20h] [rbp-A8h]
  unsigned __int8 *v37; // [rsp+30h] [rbp-98h] BYREF
  char v38; // [rsp+88h] [rbp-40h]
  unsigned int v39; // [rsp+90h] [rbp-38h]
  char v40; // [rsp+94h] [rbp-34h]

  v7 = (const __m128i *)a3;
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v8 = sub_B8C3D0(a2, a2, a3, a4, a5, a6);
    a3 = *v8;
    v9 = *v8 + 8LL * *((unsigned int *)v8 + 2);
    if ( a3 < v9 )
    {
      a4 = a3;
      if ( *(_WORD *)(*(_QWORD *)a3 + 36LL) != 394 )
      {
        do
        {
          a4 += 8;
          if ( v9 == a4 )
            goto LABEL_8;
        }
        while ( *(_WORD *)(*(_QWORD *)a4 + 36LL) != 394 );
      }
      if ( v9 != a4 )
        goto LABEL_22;
    }
    else if ( a3 != v9 )
    {
      if ( *(_WORD *)(*(_QWORD *)v9 + 36LL) != 394 )
      {
        v10 = (__int64 *)(v9 + 8);
        do
        {
          a4 = (__int64)v10;
          if ( v10 == (__int64 *)a3 )
            goto LABEL_8;
          v11 = *v10++;
        }
        while ( *(_WORD *)(v11 + 36) != 394 );
      }
LABEL_22:
      v25 = *(_QWORD *)a3;
      if ( *(_WORD *)(*(_QWORD *)a3 + 36LL) != 394 )
      {
        v26 = (__int64 *)(a3 + 8);
        do
          v25 = *v26++;
        while ( *(_WORD *)(v25 + 36) != 394 );
      }
      sub_168B9F0((__int64)v35, (__int64 *)(a1 + 8), v7[1].m128i_u32[2], 0x134Du, 0);
      if ( v38 )
      {
        sub_AE9DF0(&v37, v25, 0xEu);
        sub_15F7200(v35);
      }
      else
      {
        if ( v40 )
        {
          v29 = sub_168B9E0(v35);
          v32 = v36;
          if ( v36 )
            v32 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v36 + 32LL))(v36);
          v34 = v32;
          v33 = sub_1587BC0(v29, &v34, v27, v28, v30, v31);
          sub_AE9DF0((unsigned __int8 **)(*v33 + 32LL * v39 + 8), v25, 0xEu);
        }
        sub_15F7200(v35);
      }
      return;
    }
  }
LABEL_8:
  if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 59 > 2 )
    goto LABEL_28;
  v12 = *(_QWORD *)(a2 + 104);
  sub_7052B0((__int64 *)(v12 + 96), v12, a3, a4, a5, a6);
  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 1LL) & 1) != 0 )
  {
    v17 = sub_B7E900(a2, v12, v13, v14, v15, v16);
    if ( !v17 )
      goto LABEL_17;
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 48)
                                                                              & 0xFFFFFFFFFFFFFFF0LL)
                                                                  + 8LL)
                                                      & 0xFFFFFFFFFFFFFFF0LL)
                                          + 16LL)
       - 57 <= 1 )
    {
      v18 = *(_QWORD *)(v17 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v18 )
      {
        if ( (*(_BYTE *)(v18 + 28) & 0x7Fu) - 49 <= 2 )
          goto LABEL_28;
        while ( 1 )
        {
          v19 = *(_QWORD *)(v18 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          v18 = v19;
          if ( !v19 )
            break;
          if ( (*(_BYTE *)(v19 + 28) & 0x7Fu) - 49 <= 2 )
            goto LABEL_28;
        }
      }
LABEL_17:
      v20 = (__m128i *)sub_1806F50((__int64 *)(*(_QWORD *)(a1 + 248) + 2352LL), 40, 3u);
      sub_B1B3A0(v20, *(_QWORD *)(a1 + 248), v7);
      sub_B8CC60(a2, (__int64)v20, v21, v22, v23, v24);
      return;
    }
LABEL_28:
    sub_168B9F0((__int64)v35, (__int64 *)(a1 + 8), v7[1].m128i_u32[2], 0xCA1u, 0);
    sub_15F7200(v35);
    return;
  }
  sub_168B9F0((__int64)v35, (__int64 *)(a1 + 8), v7[1].m128i_u32[2], 0xCA0u, 0);
  sub_15F7200(v35);
}
