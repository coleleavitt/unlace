__int64 __fastcall sub_86C2E0(__int64 *a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rsi
  __int64 v7; // rax
  unsigned int v8; // r13d
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  int v12; // eax
  _QWORD *v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // rax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rax
  __int64 v19; // rax
  _QWORD *v20; // rsi
  char v21; // di
  __int64 v22; // rcx
  __int64 v23; // rdi
  char v24; // bl
  __int64 v25; // rbx
  char v26; // bp
  __int64 v27; // r12
  int v28; // eax
  __int64 v29; // rdx
  int v30; // eax
  __int64 v31; // r12
  unsigned __int8 **v32; // rax
  __int64 v33; // [rsp+0h] [rbp-168h]
  void *v34; // [rsp+0h] [rbp-168h]
  __int64 v35; // [rsp+8h] [rbp-160h]
  __int64 v36; // [rsp+18h] [rbp-150h]
  unsigned __int64 v37; // [rsp+18h] [rbp-150h]
  __int64 v38; // [rsp+18h] [rbp-150h]
  __int64 v39; // [rsp+20h] [rbp-148h]
  void *v40; // [rsp+20h] [rbp-148h]
  __int64 v41; // [rsp+28h] [rbp-140h]
  __int64 v42; // [rsp+38h] [rbp-130h]
  __int64 v43; // [rsp+38h] [rbp-130h]
  __int64 v44; // [rsp+40h] [rbp-128h]
  char v45; // [rsp+48h] [rbp-120h]
  char v46; // [rsp+48h] [rbp-120h]
  char v47; // [rsp+4Fh] [rbp-119h]
  void *v48; // [rsp+50h] [rbp-118h] BYREF
  unsigned int v49; // [rsp+58h] [rbp-110h]
  __m128i v50; // [rsp+60h] [rbp-108h] BYREF
  int v51; // [rsp+70h] [rbp-F8h]
  char v52; // [rsp+74h] [rbp-F4h]
  __int64 v53; // [rsp+A0h] [rbp-C8h] BYREF
  __int64 v54; // [rsp+A8h] [rbp-C0h]
  __int64 v55; // [rsp+B0h] [rbp-B8h] BYREF
  unsigned int v56; // [rsp+B8h] [rbp-B0h]
  _QWORD *v57; // [rsp+C0h] [rbp-A8h]
  __int64 v58; // [rsp+C8h] [rbp-A0h]
  void *ptr; // [rsp+D0h] [rbp-98h] BYREF
  __int64 v60; // [rsp+D8h] [rbp-90h]
  _BYTE v61[64]; // [rsp+E0h] [rbp-88h] BYREF
  char v62; // [rsp+120h] [rbp-48h]
  char v63; // [rsp+121h] [rbp-47h]

  v4 = sub_6D9A50(*(_QWORD **)(*a1 + 16), *(_QWORD *)(*(_QWORD *)(a2 + 16) + 8LL));
  v5 = v4;
  if ( v4 && (unsigned int)*(unsigned __int8 *)(v4 + 16) - 2 >= 2 )
    v5 = 0;
  v6 = *(_QWORD *)(a2 + 16);
  LOBYTE(v56) = v56 | 1;
  v60 = 0x800000000LL;
  v7 = *a1;
  v53 = 0;
  v54 = 0;
  v55 = 0;
  v58 = 0;
  ptr = v61;
  v63 = 0;
  v50.m128i_i64[0] = v7;
  v50.m128i_i64[1] = (__int64)&v53;
  LOBYTE(v51) = 0;
  v8 = sub_869D30(&v50, v6);
  if ( !(_BYTE)v8 )
    goto LABEL_5;
  if ( (v56 & 1) == 0 )
  {
    if ( (v56 & 2) != 0
      || ((_DWORD)v60 != 1 || (v56 & 4) == 0) && (v56 & 8) != 0 && *((_QWORD **)ptr + (int)((v56 >> 4) - 1)) == v57 )
    {
      v32 = (unsigned __int8 **)sub_A2E240(*a1, a2, 2264, 0);
      if ( v32 )
        sub_823450(v32, 3);
      LOBYTE(v56) = v56 | 1;
      LODWORD(v60) = 0;
    }
    else
    {
      v10 = (unsigned int)v60;
      v11 = (unsigned int)v60 + 1LL;
      if ( HIDWORD(v60) < v11 )
      {
        sub_25D6060(&ptr, v61, v11, 8);
        v10 = (unsigned int)v60;
      }
      *((_QWORD *)ptr + v10) = 0;
      LOBYTE(v56) = v56 | 8;
      v12 = v60 + 1;
      LODWORD(v60) = v60 + 1;
      v58 = *(_QWORD *)(v5 + 32);
      v13 = *(_QWORD **)(v5 + 40);
      if ( (*(_BYTE *)(v5 + 19) & 2) != 0 )
      {
        if ( *((_DWORD *)v13 + 2) <= 0x40u )
          v13 = (_QWORD *)*v13;
        else
          v13 = *(_QWORD **)*v13;
      }
      v57 = v13;
      v56 = v56 & 0xF | (16 * v12);
    }
  }
  v50.m128i_i8[4] &= ~1u;
  v50.m128i_i32[0] = 0;
  sub_69F640((__int64)&v50.m128i_i64[1], 0, 2);
  v14 = a1[2];
  v50.m128i_i32[0] = 10;
  sub_6A01B0(v14, (__int64)&v50);
  if ( v50.m128i_i32[0] > 1u )
    sub_69F740((__int64)&v50);
  v36 = *(_QWORD *)(a1[2] + 8) + 56LL * *(unsigned int *)(a1[2] + 16);
  v45 = v62 & 1;
  if ( (v56 & 1) != 0 )
  {
    v50.m128i_i32[0] = 0;
    v50.m128i_i8[4] &= ~1u;
    v42 = v53;
    v39 = v54;
    sub_6A37F0((__int64)&v50);
    sub_6A3550((__int64)&v50, v42, v39, &v55, v45);
    sub_6A01B0(v36, (__int64)&v50);
    if ( v50.m128i_i32[0] <= 1u )
      goto LABEL_24;
  }
  else
  {
    v47 = v56;
    v50.m128i_i8[4] &= ~1u;
    v44 = v53;
    v43 = v54;
    v40 = ptr;
    v41 = (unsigned int)v60;
    v50.m128i_i32[0] = 0;
    sub_6A37F0((__int64)&v50);
    sub_6A3690((__int64)&v50, v44, v43, &v55, v40, v41, (v47 & 2) != 0, v45);
    sub_6A01B0(v36, (__int64)&v50);
    if ( v50.m128i_i32[0] <= 1u )
      goto LABEL_24;
  }
  sub_69F740((__int64)&v50);
LABEL_24:
  if ( v63 )
    *(_BYTE *)(v36 + 4) |= 1u;
  v15 = sub_B14A40(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                             & 0xFFFFFFFFFFFFFFF0LL));
  v16 = *(_QWORD *)(sub_7868A0(v15) + 8);
  v17 = v16 & 0xFFFFFFFFFFFFFFF8LL;
  if ( v16 <= 7 )
  {
LABEL_65:
    sub_6CABB0(*(_QWORD **)(*a1 + 16));
    BUG();
  }
  while ( (*(_BYTE *)(v17 + 28) & 0x7Fu) - 47 > 2 )
  {
    v18 = *(_QWORD *)(v17 + 8);
    v17 = v18 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v18 <= 7 )
      goto LABEL_65;
  }
  v37 = v17;
  v19 = sub_6CABB0(*(_QWORD **)(*a1 + 16));
  v20 = *(_QWORD **)(v5 + 40);
  v21 = *(_BYTE *)(v5 + 19) & 2;
  if ( (*(_QWORD *)&byte_8[*(_QWORD *)(v37 + 48) & 0xFFFFFFFFFFFFFFF0LL] | *(_QWORD *)(v37 + 48) & 7LL) != (*(_QWORD *)&byte_8[v19 & 0xFFFFFFFFFFFFFFF0LL] | v19 & 7) )
  {
    if ( v21 )
    {
      if ( *((_DWORD *)v20 + 2) <= 0x40u )
        v20 = (_QWORD *)*v20;
      else
        v20 = *(_QWORD **)*v20;
    }
    v22 = *(_QWORD *)(v5 + 32);
    v23 = *a1;
    v50.m128i_i64[0] = (__int64)v20;
    v50.m128i_i8[12] = 0;
    v50.m128i_i32[2] = 64;
    v24 = sub_835AB0(v23, a2, (__int64)&v53, v22, (__int64)&v50);
    if ( v50.m128i_i32[2] > 0x40u && v50.m128i_i64[0] )
      operator delete[]((void *)v50.m128i_i64[0]);
    if ( !v24 )
    {
LABEL_5:
      v8 = 0;
      goto LABEL_6;
    }
    v25 = *(_QWORD *)(a1[2] + 8) + 56LL * (unsigned int)(*(_DWORD *)(a1[2] + 16) + 1);
    v26 = v62 & 1;
    if ( (v56 & 1) != 0 )
    {
      v27 = v54;
      v50.m128i_i32[0] = 0;
      v50.m128i_i8[4] &= ~1u;
      v33 = v53;
      sub_6A37F0((__int64)&v50);
      sub_6A3550((__int64)&v50, v33, v27, &v55, v26);
      sub_6A01B0(v25, (__int64)&v50);
      if ( v50.m128i_i32[0] <= 1u )
        goto LABEL_40;
    }
    else
    {
      v46 = v56;
      v50.m128i_i8[4] &= ~1u;
      v31 = v53;
      v38 = v54;
      v35 = (unsigned int)v60;
      v34 = ptr;
      v50.m128i_i32[0] = 0;
      sub_6A37F0((__int64)&v50);
      sub_6A3690((__int64)&v50, v31, v38, &v55, v34, v35, (v46 & 2) != 0, v26);
      sub_6A01B0(v25, (__int64)&v50);
      if ( v50.m128i_i32[0] <= 1u )
        goto LABEL_40;
    }
    sub_69F740((__int64)&v50);
LABEL_40:
    if ( v63 )
      *(_BYTE *)(v25 + 4) |= 1u;
    goto LABEL_6;
  }
  if ( v21 )
  {
    v28 = *((_DWORD *)v20 + 2);
    v49 = v28;
    if ( (unsigned int)v28 > 0x40 )
    {
      sub_2585B30(&v48);
      v28 = v49;
      v20 = v48;
    }
    else
    {
      v20 = (_QWORD *)*v20;
      v48 = v20;
    }
  }
  else
  {
    v28 = 8 * ((*(_BYTE *)(v5 + 19) >> 2) & 0x1F);
    v49 = v28;
    if ( v28 > 64 )
    {
      sub_2585A50(&v48, v20, 0);
      v28 = v49;
      v20 = v48;
    }
    else
    {
      v48 = v20;
    }
  }
  v29 = a1[2];
  v50.m128i_i8[4] &= ~1u;
  v50.m128i_i64[1] = (__int64)v20;
  v52 = 1;
  v50.m128i_i32[0] = 2;
  v51 = v28;
  v30 = *(_DWORD *)(v29 + 16);
  v49 = 0;
  sub_6A01B0(*(_QWORD *)(v29 + 8) + 56LL * (unsigned int)(v30 + 1), (__int64)&v50);
  if ( v50.m128i_i32[0] > 1u )
    sub_69F740((__int64)&v50);
  if ( v49 > 0x40 && v48 )
    operator delete[](v48);
LABEL_6:
  if ( ptr != v61 )
    free(ptr);
  return v8;
}

