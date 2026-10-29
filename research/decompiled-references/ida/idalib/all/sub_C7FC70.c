__int64 __fastcall sub_C7FC70(__int64 *a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rsi
  __int64 v7; // r13
  unsigned __int64 v8; // rbx
  __int64 v9; // r14
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned int v14; // r14d
  __int64 v15; // r13
  __int64 v16; // rbx
  _QWORD *v17; // rax
  const __m128i *v18; // r14
  __int64 v19; // r15
  __int64 v20; // rax
  unsigned __int64 v21; // rdx
  int v22; // eax
  __int64 v23; // rdx
  _QWORD *v24; // rdx
  __int64 v25; // rax
  unsigned int v26; // edx
  __int64 v27; // rax
  unsigned __int64 v28; // rsi
  int v29; // r8d
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rsi
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rsi
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rcx
  __int64 v39; // rdi
  char v40; // al
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rax
  unsigned __int8 **v45; // rax
  _QWORD *v46; // [rsp+0h] [rbp-1A8h]
  __int64 v47; // [rsp+18h] [rbp-190h]
  char v48; // [rsp+20h] [rbp-188h]
  __int64 v49; // [rsp+20h] [rbp-188h]
  int v50; // [rsp+2Ch] [rbp-17Ch]
  __int64 v51; // [rsp+30h] [rbp-178h] BYREF
  unsigned int v52; // [rsp+38h] [rbp-170h]
  void *v53; // [rsp+40h] [rbp-168h] BYREF
  unsigned int v54; // [rsp+48h] [rbp-160h]
  char v55; // [rsp+4Ch] [rbp-15Ch]
  _QWORD v56[3]; // [rsp+50h] [rbp-158h] BYREF
  char v57; // [rsp+68h] [rbp-140h]
  __int64 v58; // [rsp+78h] [rbp-130h]
  void *v59; // [rsp+80h] [rbp-128h]
  __int64 v60; // [rsp+88h] [rbp-120h]
  _BYTE v61[80]; // [rsp+90h] [rbp-118h] BYREF
  __m128i v62; // [rsp+E0h] [rbp-C8h] BYREF
  __int64 v63; // [rsp+F0h] [rbp-B8h]
  unsigned int v64; // [rsp+F8h] [rbp-B0h]
  _QWORD *v65; // [rsp+100h] [rbp-A8h]
  __int64 v66; // [rsp+108h] [rbp-A0h]
  void *ptr; // [rsp+110h] [rbp-98h] BYREF
  __int64 v68; // [rsp+118h] [rbp-90h]
  _BYTE v69[64]; // [rsp+120h] [rbp-88h] BYREF
  char v70; // [rsp+160h] [rbp-48h]
  __int8 v71; // [rsp+161h] [rbp-47h]

  v6 = a2[2];
  v57 |= 1u;
  v59 = v61;
  memset(v56, 0, sizeof(v56));
  v58 = 0;
  v60 = 0x800000000LL;
  v61[65] = 0;
  if ( !v6
    || (v7 = *a1,
        v8 = *(_QWORD *)(v6 + 16),
        v9 = *(_QWORD *)(*a1 + 32),
        v10 = sub_C104A0(*(_QWORD *)(*a1 + 16), v6),
        v11 = sub_C2C1C0(v9, a2[2], v10, (__int64)v56),
        v6 = v7,
        v14 = sub_C39A10(v11, v7, v8, v12, v13),
        (_BYTE)v14) )
  {
    v15 = *(_QWORD *)(a2[1] & 0xFFFFFFFFFFFFFFF0LL);
    if ( (unsigned __int8)(*(_BYTE *)(v15 + 16) - 2) > 4u )
      v15 = sub_F63050(*(_QWORD *)(a2[1] & 0xFFFFFFFFFFFFFFF0LL), v6, a3, a4);
    v16 = *(_QWORD *)(v15 + 40);
    v46 = (_QWORD *)v16;
    if ( (*(_BYTE *)(v15 + 19) & 2) != 0 )
    {
      v17 = *(_QWORD **)v16;
      if ( *(_DWORD *)(v16 + 8) > 0x40u )
        v17 = (_QWORD *)*v17;
      v46 = v17;
    }
    v62.m128i_i8[4] &= ~1u;
    v62.m128i_i32[0] = 0;
    sub_A51400((__int64)&v62, (int)v46, (int)v46);
    sub_A4FD20(a1[2], (__int64)&v62);
    if ( v62.m128i_i32[0] > 1u )
      sub_A4F8E0(v62.m128i_i32);
    v18 = (const __m128i *)a1[1];
    v62 = _mm_loadu_si128(v18);
    v63 = v18[1].m128i_i64[0];
    LOBYTE(v64) = v18[1].m128i_i8[8] & 1 | v64 & 0xFE;
    LOBYTE(v64) = v18[1].m128i_i8[8] & 2 | v64 & 0xFD;
    LOBYTE(v64) = v18[1].m128i_i8[8] & 4 | v64 & 0xFB;
    LOBYTE(v64) = v18[1].m128i_i8[8] & 8 | v64 & 0xF7;
    v64 = v18[1].m128i_i32[2] & 0xFFFFFFF0 | v64 & 0xF;
    v65 = (_QWORD *)v18[2].m128i_i64[0];
    v66 = v18[2].m128i_i64[1];
    ptr = v69;
    v68 = 0x800000000LL;
    if ( v18[3].m128i_i32[2] )
      sub_C25E10((__int64 *)&ptr, v18[3].m128i_i64);
    v19 = *a1;
    v70 = v18[8].m128i_i8[0] & 1 | v70 & 0xFE;
    v70 = v18[8].m128i_i8[0] & 2 | v70 & 0xFD;
    v71 = v18[8].m128i_i8[1];
    if ( (v64 & 1) == 0 )
    {
      if ( (v64 & 2) != 0
        || ((_DWORD)v68 != 1 || (v64 & 4) == 0) && (v64 & 8) != 0 && *((_QWORD **)ptr + (int)((v64 >> 4) - 1)) == v65 )
      {
        v45 = (unsigned __int8 **)sub_E33C90(v19, a2, 2466, 0);
        if ( v45 )
          sub_C11320(v45, 3);
        LOBYTE(v64) = v64 | 1;
        v19 = *a1;
        LODWORD(v68) = 0;
      }
      else
      {
        v20 = (unsigned int)v68;
        v21 = (unsigned int)v68 + 1LL;
        if ( v21 > HIDWORD(v68) )
        {
          sub_2237220(&ptr, v69, v21, 8);
          v20 = (unsigned int)v68;
        }
        *((_QWORD *)ptr + v20) = 0;
        v22 = v68 + 1;
        LODWORD(v68) = v68 + 1;
        v23 = *(_QWORD *)(v15 + 32);
        LOBYTE(v64) = v64 | 8;
        v66 = v23;
        v24 = *(_QWORD **)(v15 + 40);
        if ( (*(_BYTE *)(v15 + 19) & 2) != 0 )
        {
          if ( *((_DWORD *)v24 + 2) <= 0x40u )
            v24 = (_QWORD *)*v24;
          else
            v24 = *(_QWORD **)*v24;
        }
        v65 = v24;
        v19 = *a1;
        v64 = v64 & 0xF | (16 * v22);
      }
    }
    v25 = *(_QWORD *)(v19 + 904);
    *(_QWORD *)(v19 + 904) = 0;
    v14 = 1;
    v47 = v25;
    if ( v46 )
    {
      do
      {
        v26 = *(_DWORD *)(*a1 + 272);
        v51 = *a1;
        v27 = *(_QWORD *)(v51 + 32);
        v52 = v26;
        v28 = *(unsigned int *)(v27 + 148);
        v29 = *(_DWORD *)(v27 + 160) + 1;
        v30 = *(unsigned int *)(v27 + 144);
        *(_DWORD *)(v27 + 160) = v29;
        if ( v30 + 1 > v28 )
        {
          v50 = v29;
          v49 = v27;
          sub_2237220(v27 + 136, v27 + 152, v30 + 1, 4);
          v27 = v49;
          v29 = v50;
          v30 = *(unsigned int *)(v49 + 144);
        }
        *(_DWORD *)(*(_QWORD *)(v27 + 136) + 4 * v30) = v29;
        v31 = *(unsigned int *)(v19 + 904);
        v32 = a1[2];
        ++*(_DWORD *)(v27 + 144);
        v33 = 7 * v31;
        v34 = *(_QWORD *)(v32 + 8);
        v35 = *a1;
        if ( !(unsigned __int8)sub_C4F9A0(v34 + 8 * v33, *a1, &v62, a2[3]) )
          goto LABEL_31;
        v38 = *(_QWORD *)(v15 + 32);
        v39 = *a1;
        v35 = (__int64)a2;
        v54 = 64;
        v53 = &dword_0 + 1;
        v55 = 0;
        v40 = sub_C1A330(v39, (unsigned __int64)a2, (__int64)&v62, v38, (__int64)&v53);
        if ( v54 > 0x40 && v53 )
        {
          v48 = v40;
          operator delete[](v53);
          v40 = v48;
        }
        if ( !v40 )
        {
LABEL_31:
          v41 = *a1;
          v42 = *(unsigned int *)(*a1 + 48);
          if ( !(_DWORD)v42 )
            goto LABEL_37;
          v14 = *(unsigned __int8 *)(v41 + 914);
          if ( (_BYTE)v14 )
          {
            v14 = 0;
            **(_BYTE **)(v41 + 24) = 1;
          }
          else
          {
            if ( !*(_BYTE *)(v41 + 915) )
            {
LABEL_37:
              v14 = 0;
              sub_C559A0((__int64)&v51, v35, v42, v36, v37);
              *(_QWORD *)(v19 + 904) = v47;
              goto LABEL_38;
            }
            **(_BYTE **)(v41 + 24) = 1;
          }
        }
        sub_C553F0(v51, 1, v52, v36, v37);
        --*(_DWORD *)(*(_QWORD *)(v51 + 32) + 144LL);
        v43 = *(_QWORD *)(v19 + 904) + 1LL;
        *(_QWORD *)(v19 + 904) = v43;
      }
      while ( (_QWORD *)v43 != v46 );
    }
    *(_QWORD *)(v19 + 904) = v47;
LABEL_38:
    if ( ptr != v69 )
      free(ptr);
  }
  if ( v59 != v61 )
    free(v59);
  return v14;
}
