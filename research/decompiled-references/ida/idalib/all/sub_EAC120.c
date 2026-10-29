void __fastcall sub_EAC120(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  bool v12; // bp
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rcx
  unsigned __int64 v16; // rax
  int v17; // ebp
  __int64 v18; // rax
  __int64 v19; // rdx
  unsigned __int64 v20; // rax
  __int64 v21; // r12
  __int64 *v22; // rbp
  __int64 v23; // rax
  __int64 v24; // rsi
  __int64 v25; // rdx
  unsigned __int64 v26; // rcx
  unsigned __int64 *v27; // r8
  __int64 v28; // r9
  __int64 v29; // r14
  unsigned __int64 v30; // rax
  __int64 v31; // rbp
  _QWORD *v32; // rcx
  __int64 v33; // rax
  unsigned __int64 v34; // rcx
  __int64 v35; // rax
  __int64 *v36; // rbp
  __int64 v37; // rax
  __int64 *v38; // r13
  __int64 v39; // rsi
  __int64 v40; // r15
  __int64 v41; // rax
  unsigned __int64 v42; // rdx
  _QWORD *v43; // rcx
  __int64 v44; // rax
  unsigned __int64 v45; // rdx
  _QWORD *v46; // rcx
  __int64 v47; // rbp
  unsigned __int64 v48; // rdx
  __int64 v49; // rax
  unsigned __int64 v50; // rdx
  unsigned __int64 v51; // rax
  _DWORD *v52; // rax
  __int64 v53; // rdi
  int v54; // edx
  __int64 v55; // rbp
  unsigned __int64 v56; // rdx
  __int64 v57; // rax
  unsigned __int64 v58; // rdx
  unsigned __int64 v59; // rax
  _DWORD *v60; // rax
  __int64 v61; // rdi
  int v62; // edx
  unsigned __int64 v63; // [rsp+8h] [rbp-F0h]
  int v64; // [rsp+8h] [rbp-F0h]
  __int64 v65; // [rsp+8h] [rbp-F0h]
  __m128i v66; // [rsp+10h] [rbp-E8h] BYREF
  _QWORD *v67; // [rsp+20h] [rbp-D8h] BYREF
  __m128i v68; // [rsp+30h] [rbp-C8h] BYREF
  _QWORD v69[23]; // [rsp+40h] [rbp-B8h] BYREF

  v2 = a2;
  sub_EA58C0(a1, a2);
  v8 = sub_BAB630(a2, a2, v4, v5, v6, v7);
  v11 = *(_QWORD *)(a1 + 32);
  v12 = v8 != 0;
  if ( (unsigned __int64)(v11 + 1) > *(_QWORD *)(a1 + 40) )
  {
    a2 = a1 + 48;
    v65 = v8;
    sub_2236E10(a1 + 24, a1 + 48, v11 + 1, 1);
    v11 = *(_QWORD *)(a1 + 32);
    v8 = v65;
  }
  v13 = *(_QWORD *)(a1 + 24);
  *(_BYTE *)(v13 + v11) = v12;
  ++*(_QWORD *)(a1 + 32);
  if ( v8 )
  {
    v14 = sub_BAC410(v8, a2, v13, v11, v9, v10);
    v15 = *(unsigned int *)(a1 + 184);
    if ( v15 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 188) )
    {
      v64 = v14;
      sub_2237220(a1 + 176, a1 + 192, v15 + 1, 4);
      v15 = *(unsigned int *)(a1 + 184);
      v14 = v64;
    }
    *(_DWORD *)(*(_QWORD *)(a1 + 176) + 4 * v15) = v14;
    ++*(_DWORD *)(a1 + 184);
  }
  v16 = *(_QWORD *)(v2 + 120) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_BYTE *)(v16 + 72) & 1) != 0 )
  {
    sub_BA8900(v2);
    v16 = *(_QWORD *)(v2 + 120) & 0xFFFFFFFFFFFFFFF8LL;
  }
  v17 = *(_DWORD *)(v16 + 24);
  v18 = *(unsigned int *)(a1 + 184);
  if ( v18 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 188) )
  {
    sub_2237220(a1 + 176, a1 + 192, v18 + 1, 4);
    v18 = *(unsigned int *)(a1 + 184);
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 176) + 4 * v18) = v17;
  ++*(_DWORD *)(a1 + 184);
  v19 = *(_QWORD *)(v2 + 120);
  if ( v19 )
  {
LABEL_12:
    v20 = v19 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v19 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
    {
      if ( (*(_BYTE *)(v20 + 72) & 1) == 0 )
      {
        v21 = *(_QWORD *)(v20 + 16) + 8LL * *(unsigned int *)(v20 + 24);
LABEL_15:
        if ( (*(_BYTE *)(v20 + 72) & 1) != 0 )
        {
          sub_BA8900(v2);
          v20 = *(_QWORD *)(v2 + 120) & 0xFFFFFFFFFFFFFFF8LL;
        }
        v22 = *(__int64 **)(v20 + 16);
        goto LABEL_18;
      }
      sub_BA8900(v2);
      v20 = *(_QWORD *)(v2 + 120) & 0xFFFFFFFFFFFFFFF8LL;
      v21 = *(_QWORD *)(v20 + 16) + 8LL * *(unsigned int *)(v20 + 24);
      if ( *(_QWORD *)(v2 + 120) )
        goto LABEL_59;
    }
    else
    {
      if ( v19 )
        goto LABEL_20;
      v21 = 0;
    }
    v40 = *(_QWORD *)(v2 + 96);
    v44 = *(_QWORD *)(v40 + 88);
    v45 = v44 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v44 & 1) == 0 )
      goto LABEL_45;
    goto LABEL_53;
  }
  v40 = *(_QWORD *)(v2 + 96);
  v41 = *(_QWORD *)(v40 + 88);
  v42 = v41 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v41 & 1) != 0 || (v43 = (_QWORD *)(v41 & 0xFFFFFFFFFFFFFFFCLL), (v41 & 0xFFFFFFFFFFFFFFFCLL) == 0) )
  {
LABEL_67:
    if ( v42 )
    {
      if ( (v42 & 4) != 0 )
      {
        v60 = (_DWORD *)(v41 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v60 )
        {
          v61 = *(_QWORD *)v60;
          v62 = *(_DWORD *)(*(_QWORD *)v60 + 12LL);
          if ( v60[2] != v62 )
          {
            v60[2] = v62;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v61 + 152LL))(v61, v40);
          }
        }
      }
    }
    v19 = *(_QWORD *)(v2 + 120);
    goto LABEL_12;
  }
  v21 = 0;
  if ( (v41 & 2) != 0 )
  {
    v55 = v43[2295];
    v56 = v40 & 0xFFFFFFFFFFFFFFFBLL;
    if ( v55 )
    {
      v57 = v43[294];
      v43[304] += 24LL;
      v58 = (v57 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v43[295] >= v58 + 24 && v57 )
      {
        v43[294] = v58 + 24;
        v59 = (v57 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      }
      else
      {
        v59 = sub_986170((__int64)(v43 + 294), 24, 24, 3, v9, v10);
        v58 = v59 & 0xFFFFFFFFFFFFFFFBLL;
      }
      *(_QWORD *)v59 = v55;
      v56 = v58 | 4;
      *(_DWORD *)(v59 + 8) = 0;
      *(_QWORD *)(v59 + 16) = v40;
    }
    v42 = v56 & 0xFFFFFFFFFFFFFFFELL;
    v41 = v42 | 1;
    *(_QWORD *)(v40 + 88) = v42 | 1;
    goto LABEL_67;
  }
  v44 = *(_QWORD *)(v40 + 88);
  v45 = v44 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v44 & 1) == 0 )
  {
LABEL_45:
    v46 = (_QWORD *)(v44 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v44 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
    {
      v22 = nullptr;
      if ( (v44 & 2) == 0 )
        goto LABEL_18;
      v47 = v46[2295];
      v48 = v40 & 0xFFFFFFFFFFFFFFFBLL;
      if ( v47 )
      {
        v49 = v46[294];
        v46[304] += 24LL;
        v50 = (v49 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v46[295] >= v50 + 24 && v49 )
        {
          v46[294] = v50 + 24;
          v51 = (v49 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        }
        else
        {
          v51 = sub_986170((__int64)(v46 + 294), 24, 24, 3, v9, v10);
          v50 = v51 & 0xFFFFFFFFFFFFFFFBLL;
        }
        *(_QWORD *)v51 = v47;
        v48 = v50 | 4;
        *(_DWORD *)(v51 + 8) = 0;
        *(_QWORD *)(v51 + 16) = v40;
      }
      v45 = v48 & 0xFFFFFFFFFFFFFFFELL;
      v44 = v45 | 1;
      *(_QWORD *)(v40 + 88) = v45 | 1;
    }
  }
LABEL_53:
  if ( v45 )
  {
    if ( (v45 & 4) != 0 )
    {
      v52 = (_DWORD *)(v44 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v52 )
      {
        v53 = *(_QWORD *)v52;
        v54 = *(_DWORD *)(*(_QWORD *)v52 + 12LL);
        if ( v52[2] != v54 )
        {
          v52[2] = v54;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v53 + 152LL))(v53, v40);
        }
      }
    }
  }
  v20 = *(_QWORD *)(v2 + 120) & 0xFFFFFFFFFFFFFFF8LL;
LABEL_59:
  if ( v20 )
    goto LABEL_15;
  v22 = nullptr;
LABEL_18:
  while ( (__int64 *)v21 != v22 )
  {
    v23 = *v22;
    v66.m128i_i32[2] = 0;
    ++v22;
    v66.m128i_i64[0] = *(_QWORD *)(v23 + 40);
    v24 = v66.m128i_i64[0];
    sub_B85890(&v67, v66.m128i_i64[0]);
    v68 = _mm_load_si128(&v66);
    v69[0] = v67;
    sub_EA4BE0(a1, v24, v25, v26, v27, v28, v68.m128i_u64[0], v68.m128i_i32[2], v67);
  }
LABEL_20:
  v29 = v2 + 48;
  v68.m128i_i64[0] = (__int64)v69;
  v68.m128i_i64[1] = 0x1000000000LL;
  v30 = sub_B8E970(v29);
  v31 = v68.m128i_u32[2];
  if ( v30 )
  {
    while ( 2 )
    {
      while ( 1 )
      {
        if ( (*(_BYTE *)(v30 + 29) & 2) == 0 )
        {
          v32 = (_QWORD *)(*(_QWORD *)(v30 + 16) & 0xFFFFFFFFFFFFFFF8LL);
          if ( (*(_QWORD *)(v30 + 16) & 4) != 0 )
            v32 = (_QWORD *)*v32;
          if ( (_QWORD *)v29 == v32 )
            break;
        }
LABEL_22:
        v30 = *(_QWORD *)(v30 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v30 )
          goto LABEL_31;
      }
      switch ( (*(_BYTE *)(v30 + 28) + 119) & 0x7F )
      {
        case 0:
        case 9:
        case 0x18:
        case 0x1A:
        case 0x1B:
        case 0x1D:
        case 0x1F:
        case 0x28:
        case 0x29:
        case 0x37:
        case 0x38:
        case 0x3E:
        case 0x42:
        case 0x4D:
        case 0x50:
          if ( v31 + 1 > (unsigned __int64)v68.m128i_u32[3] )
          {
            v63 = v30;
            sub_2237220(&v68, v69, v31 + 1, 8);
            v31 = v68.m128i_u32[2];
            v30 = v63;
          }
          *(_QWORD *)(v68.m128i_i64[0] + 8 * v31) = v30;
          v31 = (unsigned int)++v68.m128i_i32[2];
          v30 = *(_QWORD *)(v30 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v30 )
            continue;
          break;
        default:
          goto LABEL_22;
      }
      break;
    }
  }
LABEL_31:
  v33 = *(unsigned int *)(a1 + 184);
  if ( v33 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 188) )
  {
    sub_2237220(a1 + 176, a1 + 192, v33 + 1, 4);
    v33 = *(unsigned int *)(a1 + 184);
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 176) + 4 * v33) = v31;
  v34 = *(unsigned int *)(a1 + 188);
  v35 = (unsigned int)(*(_DWORD *)(a1 + 184) + 1);
  *(_DWORD *)(a1 + 184) = v35;
  if ( v35 + 1 > v34 )
  {
    sub_2237220(a1 + 176, a1 + 192, v35 + 1, 4);
    v35 = *(unsigned int *)(a1 + 184);
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 176) + 4 * v35) = 0;
  v36 = (__int64 *)v68.m128i_i64[0];
  v37 = v68.m128i_u32[2];
  ++*(_DWORD *)(a1 + 184);
  v38 = &v36[v37];
  if ( v36 != v38 )
  {
    do
    {
      v39 = *v36++;
      sub_EA90F0(a1, v39);
    }
    while ( v38 != v36 );
    v38 = (__int64 *)v68.m128i_i64[0];
  }
  if ( v38 != v69 )
    free(v38);
}
