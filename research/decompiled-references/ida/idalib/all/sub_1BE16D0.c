void __fastcall sub_1BE16D0(__int64 *a1, __int64 *a2, unsigned int a3)
{
  __int64 *v3; // r14
  __int64 v5; // rdx
  __int64 v6; // rbx
  unsigned __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rcx
  char *v10; // rbp
  __int64 v11; // rbx
  char *v12; // r12
  __int64 *v13; // rsi
  unsigned __int64 v14; // rax
  char *v15; // rbp
  __int64 v16; // rax
  bool v17; // bl
  unsigned int v18; // r15d
  __int64 *v19; // r12
  char *v20; // r14
  __int64 v21; // rbp
  __int64 v22; // rdi
  char *v23; // rbx
  __int64 v24; // rdx
  char *v25; // r13
  char v26; // r9
  char v27; // al
  char v28; // r8
  char v29; // di
  char v30; // si
  __int64 v31; // rax
  int v32; // esi
  __int64 v33; // rax
  int v34; // edx
  char *v35; // r13
  char *v36; // [rsp+8h] [rbp-200h]
  int v39; // [rsp+2Ch] [rbp-1DCh] BYREF
  _BYTE v40[144]; // [rsp+30h] [rbp-1D8h] BYREF
  void *src; // [rsp+C0h] [rbp-148h] BYREF
  __int64 v42; // [rsp+C8h] [rbp-140h]
  _BYTE v43[312]; // [rsp+D0h] [rbp-138h] BYREF

  v3 = a1;
  v5 = *((unsigned int *)a1 + 2);
  src = v43;
  v42 = 0x2000000000LL;
  if ( (unsigned int)v5 <= 0x20 )
  {
    v6 = *a1;
    v7 = *a1 + (v5 << 6);
    if ( v7 == *a1 )
    {
      v12 = v43;
      goto LABEL_18;
    }
    v8 = 0;
    goto LABEL_4;
  }
  sub_2237220(&src, v43, v5, 8);
  v6 = *a1;
  v8 = (unsigned int)v42;
  v7 = *a1 + ((unsigned __int64)*((unsigned int *)a1 + 2) << 6);
  if ( *a1 != v7 )
  {
    do
    {
LABEL_4:
      v9 = v8;
      if ( *(_QWORD *)(v6 + 8) )
      {
        if ( v8 + 1 > (unsigned __int64)HIDWORD(v42) )
        {
          sub_2237220(&src, v43, v8 + 1, 8);
          v9 = (unsigned int)v42;
        }
        *((_QWORD *)src + v9) = v6;
        v8 = (unsigned int)(v42 + 1);
        LODWORD(v42) = v42 + 1;
      }
      v6 += 64;
    }
    while ( v6 != v7 );
  }
  v10 = (char *)src;
  v11 = 8 * v8;
  v12 = (char *)src + 8 * v8;
  if ( src == v12 )
    goto LABEL_18;
  v13 = (__int64 *)((char *)src + 8 * v8);
  _BitScanReverse64(&v14, v11 >> 3);
  sub_1BCA600((__m128i *)src, v13, 2LL * (int)(63 - (v14 ^ 0x3F)), (__int64)a2);
  if ( (unsigned __int64)v11 <= 0x80 )
  {
    sub_1BC8480(v10, v12, (__int64)a2);
    goto LABEL_12;
  }
  sub_1BC8480(v10, v10 + 128, (__int64)a2);
  if ( v12 == v10 + 128 )
    goto LABEL_12;
  v36 = v12;
  v19 = a2;
  v20 = v10 + 128;
LABEL_23:
  while ( 2 )
  {
    while ( 1 )
    {
      v21 = *(_QWORD *)v20;
      v22 = *((_QWORD *)v20 - 1);
      v23 = v20 - 8;
      if ( *(_QWORD *)v20 != v22 )
        break;
      v35 = v20;
      v20 += 8;
      *(_QWORD *)v35 = v21;
      if ( v36 == v20 )
        goto LABEL_38;
    }
    while ( 1 )
    {
      v24 = *(unsigned __int8 *)(v22 + 16);
      v25 = v23 + 8;
      if ( *(_BYTE *)(v21 + 16) != (_BYTE)v24 )
      {
        switch ( *(_BYTE *)(v21 + 16) )
        {
          case 0:
          case 7:
          case 8:
          case 9:
          case 0xA:
          case 0xE:
          case 0xF:
          case 0x10:
          case 0x11:
            v26 = 0;
            v27 = 0;
            v28 = 1;
            v29 = 1;
            v30 = 1;
            break;
          case 1:
          case 3:
          case 4:
            v26 = 1;
            v27 = 1;
            v28 = 1;
            v29 = 1;
            v30 = 1;
            break;
          case 2:
            v26 = 0;
            v27 = 0;
            v28 = 0;
            v29 = 1;
            v30 = 1;
            break;
          case 5:
          case 6:
            v26 = 0;
            v27 = 1;
            v28 = 1;
            v29 = 1;
            v30 = 1;
            break;
          case 0xB:
          case 0xC:
            v26 = 0;
            v27 = 0;
            v28 = 0;
            v29 = 0;
            v30 = 0;
            break;
          case 0xD:
            v26 = 0;
            v27 = 0;
            v28 = 0;
            v29 = 0;
            v30 = 1;
            break;
        }
        switch ( v24 )
        {
          case 1LL:
          case 3LL:
          case 4LL:
            goto LABEL_37;
          case 2LL:
            v27 = v28;
            goto LABEL_33;
          case 5LL:
          case 6LL:
            v27 = v26;
            goto LABEL_33;
          case 7LL:
          case 8LL:
          case 9LL:
          case 10LL:
          case 15LL:
          case 16LL:
          case 17LL:
            goto LABEL_33;
          case 11LL:
          case 12LL:
            v27 = v30;
            goto LABEL_33;
          case 13LL:
            v27 = v29;
            goto LABEL_33;
          default:
            BUG();
        }
      }
      v31 = *(_QWORD *)(v21 + 8);
      if ( !v31 )
        goto LABEL_37;
      v32 = *(_DWORD *)(v31 + 24);
      v33 = *(_QWORD *)(v22 + 8);
      if ( !v33 )
        break;
      v34 = *(_DWORD *)(v33 + 24);
      if ( !v32 )
        goto LABEL_37;
      if ( v34 )
      {
        v27 = sub_10246C0(v19[34], v32, v34);
LABEL_33:
        if ( !v27 )
          goto LABEL_37;
      }
LABEL_34:
      v22 = *((_QWORD *)v23 - 1);
      *((_QWORD *)v23 + 1) = *(_QWORD *)v23;
      if ( v21 == v22 )
      {
        v25 = v23;
LABEL_37:
        *(_QWORD *)v25 = v21;
        v20 += 8;
        if ( v36 != v20 )
          goto LABEL_23;
        goto LABEL_38;
      }
      v23 -= 8;
    }
    if ( v32 )
      goto LABEL_34;
    *(_QWORD *)v25 = v21;
    v20 += 8;
    if ( v36 != v20 )
      continue;
    break;
  }
LABEL_38:
  v3 = a1;
  a2 = v19;
LABEL_12:
  v15 = (char *)src;
  v12 = (char *)src + 8 * (unsigned int)v42;
  if ( src != v12 )
  {
    v16 = *(_QWORD *)src;
    v17 = *(_DWORD *)(a2[33] + 12) == 1;
    v18 = 0;
    while ( 1 )
    {
      v15 += 8;
      ++v18;
      sub_1BE0570(
        a2,
        (_BYTE *)(*(_QWORD *)v16 & 0xFFFFFFFFFFFFFFF8LL),
        *(_QWORD *)(v16 + 8),
        (unsigned __int8 *)(v16 + 16),
        0,
        *((unsigned __int8 *)v3 + 1044));
      if ( v15 == v12 )
        break;
      v16 = *(_QWORD *)v15;
      if ( v18 > 3 && v17 )
      {
        sub_168B9F0((__int64)v40, a2 + 1, a3, 0x186Fu, 0);
        v39 = (v12 - v15) >> 3;
        sub_1587D10((__int64)v40, &v39);
        sub_15F7200(v40);
        v12 = (char *)src;
        goto LABEL_18;
      }
    }
    v12 = (char *)src;
  }
LABEL_18:
  if ( v12 != v43 )
    free(v12);
}
