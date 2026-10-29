__int64 __fastcall sub_1CE58C0(
        _QWORD *a1,
        __int64 *a2,
        __m128i *a3,
        unsigned __int8 a4,
        int *a5,
        __int64 a6,
        double a7,
        double a8,
        unsigned __int8 a9,
        __int64 *a10,
        bool *a11,
        char a12)
{
  int v13; // edx
  __int64 result; // rax
  __int64 v15; // r10
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  char v20; // r15
  __int64 v21; // rdx
  int v22; // r11d
  __int64 *v23; // rsi
  __int64 v24; // rbp
  unsigned __int64 v25; // rcx
  __int64 v26; // rax
  __int64 *v27; // rcx
  __int64 v28; // rax
  unsigned __int64 v29; // r9
  unsigned __int64 v30; // r9
  __int64 v31; // rsi
  __int64 v32; // rax
  char v33; // si
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 *i; // r14
  unsigned __int64 v37; // rbp
  unsigned __int64 v38; // rax
  char v39; // al
  __int64 v40; // rax
  __int64 v41; // rax
  bool v42; // zf
  __int64 v43; // rax
  __int64 *v45; // [rsp+8h] [rbp-110h]
  unsigned __int64 v46; // [rsp+8h] [rbp-110h]
  unsigned __int64 v47; // [rsp+8h] [rbp-110h]
  unsigned int v48; // [rsp+8h] [rbp-110h]
  unsigned int v49; // [rsp+8h] [rbp-110h]
  unsigned int v50; // [rsp+8h] [rbp-110h]
  unsigned int v51; // [rsp+8h] [rbp-110h]
  unsigned __int64 v52; // [rsp+8h] [rbp-110h]
  __int64 v53; // [rsp+10h] [rbp-108h]
  __int64 v54; // [rsp+10h] [rbp-108h]
  int *v55; // [rsp+10h] [rbp-108h]
  int v57[3]; // [rsp+24h] [rbp-F4h] BYREF
  __int64 v58; // [rsp+30h] [rbp-E8h] BYREF
  void *ptr; // [rsp+38h] [rbp-E0h]
  __int64 v60; // [rsp+40h] [rbp-D8h]
  _BYTE v61[64]; // [rsp+48h] [rbp-D0h] BYREF
  void *v62[2]; // [rsp+88h] [rbp-90h]
  __int64 v63; // [rsp+98h] [rbp-80h]
  _QWORD *v64; // [rsp+A0h] [rbp-78h]
  __int64 v65; // [rsp+A8h] [rbp-70h]
  int v66; // [rsp+B0h] [rbp-68h]
  __int64 v67; // [rsp+B8h] [rbp-60h] BYREF
  __int128 v68; // [rsp+C0h] [rbp-58h]
  __int64 v69; // [rsp+D0h] [rbp-48h]

  v13 = *a5;
  *a11 = 0;
  if ( v13 == 1 )
  {
    v15 = (a1[31] + 16LL * a5[2] + 17592) | 6;
  }
  else if ( v13 == 3 )
  {
    v55 = a5;
    v35 = sub_B87830(a1[31] + 17536LL, *((_QWORD *)a5 + 1));
    a5 = v55;
    v15 = v35;
  }
  else
  {
    result = 0;
    if ( v13 )
      return result;
    v15 = *((_QWORD *)a5 + 1);
  }
  v16 = a5[6];
  v53 = v15;
  ptr = v61;
  v60 = 0x800000000LL;
  *(_OWORD *)v62 = 0;
  v65 = v15;
  v66 = v16;
  v58 = 0;
  v63 = 0;
  v64 = a1;
  sub_B85890(&v67, v15);
  v68 = 0;
  v69 = 0x101010000LL;
  sub_1A395A0((__int64)&v58);
  v20 = sub_1CE41F0((__int64)a1, (__int64)&v58, a2, a3, a6, a9, 0.0, a8, 0x100000000LL, v57, a12 ^ 1u);
  if ( v20 )
    goto LABEL_32;
  v21 = (unsigned int)v58;
  v22 = v57[0];
  *a11 = (_DWORD)v58 == 1;
  if ( v22 )
  {
    v41 = sub_A81B40((_QWORD *)a1[31], v53, v21, v17, v18, v19);
    v17 = (__int64)a10;
    v42 = v57[0] == 1;
    v34 = BYTE3(v69);
    *a10 = v41;
    result = 5;
    if ( !v42 )
      result = 1;
LABEL_33:
    if ( !(_BYTE)v34 )
      goto LABEL_23;
LABEL_34:
    if ( (_DWORD)v58 != 5 )
    {
      if ( v62[1] && (*(_BYTE *)(v64[29] + 46LL) & 0x20) != 0 )
      {
        v50 = result;
        sub_1663B80(v64, (__int64)&v58);
        v34 = BYTE4(v69);
        result = v50;
        goto LABEL_24;
      }
      goto LABEL_26;
    }
    if ( !BYTE4(v69) )
      goto LABEL_26;
LABEL_49:
    v51 = result;
    sub_1A445B0((__int64)v64, (__int64)&v58, v34, v17, v18);
    result = v51;
    goto LABEL_26;
  }
  result = (unsigned int)v60;
  if ( !(_DWORD)v60 )
  {
    v34 = BYTE3(v69);
    goto LABEL_33;
  }
  v23 = (__int64 *)ptr;
  v24 = *(_QWORD *)ptr;
  v25 = 0;
  if ( (*(_BYTE *)((*(_QWORD *)ptr & 0xFFFFFFFFFFFFFFF8LL) + 28) & 0x7Fu) - 53 < 2 )
    v25 = *(_QWORD *)ptr & 0xFFFFFFFFFFFFFFF8LL;
  v26 = 8LL * (unsigned int)v60;
  v54 = v25;
  v27 = (__int64 *)((char *)ptr + v26);
  v28 = v26 >> 3;
  v45 = v27;
  if ( (_DWORD)v21 != 5 )
  {
LABEL_12:
    if ( (unsigned int)v28 > 1 )
    {
      v43 = sub_A81E80((_QWORD *)a1[31], v23, v45, (__int64)v27, v18, v19);
      v18 = 0;
      *(_WORD *)((char *)&v69 + 3) = 0;
      *a10 = v43;
      result = 1;
      goto LABEL_23;
    }
    v29 = sub_1CB3DC0(*v23 & 0xFFFFFFFFFFFFFFF8LL, 1, 1);
    if ( (*(_BYTE *)(v29 + 28) & 0x7F) != 0x1C )
    {
      if ( v54 )
        goto LABEL_15;
LABEL_54:
      v52 = v29;
      sub_F22AA0((unsigned __int64 *)&v57[1], v29);
      v17 = *(_QWORD *)&v57[1];
      v30 = v52;
      goto LABEL_16;
    }
LABEL_31:
    *a11 = 1;
LABEL_32:
    v34 = BYTE3(v69);
    result = 0;
    goto LABEL_33;
  }
  for ( i = (__int64 *)((char *)ptr + 8); ; ++i )
  {
    v37 = v24 & 0xFFFFFFFFFFFFFFF8LL;
    v38 = sub_1CB3DC0(v37, 1, 1);
    v29 = v38;
    if ( !v38 )
      goto LABEL_45;
    v39 = *(_BYTE *)(v38 + 28) & 0x7F;
    if ( v39 != 71 )
      break;
    v20 = 1;
LABEL_45:
    if ( v45 == i )
    {
      if ( v20 )
      {
        sub_1CB13F0((__int64)&v58, 1);
        v23 = (__int64 *)ptr;
        v40 = 8LL * (unsigned int)v60;
        v27 = (__int64 *)((char *)ptr + v40);
        v28 = v40 >> 3;
        v45 = v27;
        goto LABEL_12;
      }
      result = 0;
      *(_WORD *)((char *)&v69 + 3) = 0;
      goto LABEL_26;
    }
    v24 = *i;
  }
  if ( (*(_BYTE *)(v37 + 28) & 0x7Fu) - 53 > 1 )
  {
    if ( v39 != 28 )
      goto LABEL_54;
    goto LABEL_31;
  }
  if ( v39 == 28 )
    goto LABEL_31;
  v54 = v37;
LABEL_15:
  v46 = v29;
  sub_F22B10((unsigned __int64 *)&v57[1], v54);
  v17 = *(_QWORD *)&v57[1];
  v30 = v46;
LABEL_16:
  v31 = a3->m128i_i64[1];
  if ( !a3->m128i_i32[0] || !a3->m128i_i32[1] || v31 )
  {
    v47 = v30;
    v32 = sub_A80CA0(a1[31], v31, a4, v17);
    v30 = v47;
    v17 = v32;
  }
  v33 = *(_BYTE *)(v30 + 28) & 0x7F;
  if ( v33 == 71 )
  {
    *(_WORD *)((char *)&v69 + 3) = 0;
    *a10 = v17;
    result = 1;
    goto LABEL_23;
  }
  v34 = BYTE3(v69);
  result = 3;
  if ( v33 != 69 )
    result = 4 * (unsigned int)(v33 == 73) + 2;
  *a10 = v17;
  if ( (_BYTE)v34 )
    goto LABEL_34;
LABEL_23:
  v34 = BYTE4(v69);
LABEL_24:
  if ( (_BYTE)v34 && (_DWORD)v58 == 5 )
    goto LABEL_49;
LABEL_26:
  if ( v62[0] )
  {
    v48 = result;
    sub_1A39780((char *)v62[0]);
    result = v48;
  }
  if ( ptr != v61 )
  {
    v49 = result;
    free(ptr);
    return v49;
  }
  return result;
}
