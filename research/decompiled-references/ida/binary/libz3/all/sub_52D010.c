__int64 __fastcall sub_52D010(__int64 a1, __int64 a2)
{
  unsigned __int64 *v2; // rax
  __int64 v3; // r13
  unsigned __int64 *v4; // r14
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  __int64 v7; // rax
  char *v8; // rbx
  unsigned int v9; // ebp
  char *v10; // r14
  char *v11; // r15
  _QWORD *v12; // r13
  __int64 v13; // rdi
  __int64 v14; // rdi
  char *v15; // rax
  _QWORD *v16; // r13
  unsigned __int64 v17; // r15
  __int64 v18; // r14
  __int64 *v19; // rbp
  __int64 v20; // rsi
  _QWORD *v22; // r15
  unsigned __int64 v23; // rbp
  unsigned __int64 *v24; // r14
  __int64 *v25; // r13
  __int64 v26; // rsi
  void *v27; // r15
  char *v28; // rbp
  char *v29; // r14
  __int64 v30; // rdi
  char *v32; // rax
  int v33; // edx
  size_t v34; // rbp
  char *v35; // rax
  char *v36; // rdx
  __int64 v37; // [rsp+8h] [rbp-1E0h]
  _OWORD v38[2]; // [rsp+10h] [rbp-1D8h] BYREF
  _BYTE *v39; // [rsp+30h] [rbp-1B8h]
  void *v40; // [rsp+40h] [rbp-1A8h]
  unsigned int v41[4]; // [rsp+48h] [rbp-1A0h]
  __int64 v42; // [rsp+58h] [rbp-190h]
  void *ptr; // [rsp+60h] [rbp-188h]
  __int64 v44; // [rsp+68h] [rbp-180h]
  int v45; // [rsp+70h] [rbp-178h]
  unsigned __int64 *v46; // [rsp+78h] [rbp-170h]
  _QWORD *v47; // [rsp+80h] [rbp-168h]
  char v48; // [rsp+88h] [rbp-160h]
  __int64 v49; // [rsp+90h] [rbp-158h]
  _QWORD *v50; // [rsp+98h] [rbp-150h]
  __int64 v51; // [rsp+A0h] [rbp-148h]
  _BYTE v52[144]; // [rsp+B0h] [rbp-138h] BYREF
  __int64 v53; // [rsp+140h] [rbp-A8h]

  sub_63D370(v52, *(_QWORD *)(a1 + 24));
  sub_63ECD0(v52, a2);
  if ( !v53 )
    sub_6430A0(v52);
  v2 = *(unsigned __int64 **)(a1 + 24);
  v39 = v52;
  v3 = *v2;
  v4 = v2 + 82;
  v38[0] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v2, (__m128i)*v2);
  v38[1] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)(v2 + 82), (__m128i)(unsigned __int64)(v2 + 13));
  v5 = (_QWORD *)sub_186B270(0x100u);
  *v5 = 0;
  v5[1] = 0;
  v5[2] = 0;
  v5[4] = 0;
  v5[5] = 0;
  v5[6] = 0;
  v5[8] = 0;
  v5[9] = 0;
  v5[10] = 0;
  v5[12] = 0;
  v5[13] = 0;
  v5[14] = 0;
  v5[16] = 0;
  v5[17] = 0;
  v5[18] = 0;
  v5[20] = 0;
  v5[21] = 0;
  v5[22] = 0;
  v5[24] = 0;
  v5[25] = 0;
  v5[26] = 0;
  v5[28] = 0;
  v5[29] = 0;
  v5[30] = 0;
  v40 = v5;
  *(_QWORD *)v41 = 8;
  v41[2] = 0;
  v42 = 0;
  v6 = (_QWORD *)sub_186B270(0xC0u);
  *v6 = 0;
  v6[2] = 0;
  v6[3] = 0;
  v6[5] = 0;
  v6[6] = 0;
  v6[8] = 0;
  v6[9] = 0;
  v6[11] = 0;
  v6[12] = 0;
  v6[14] = 0;
  v6[15] = 0;
  v6[17] = 0;
  v6[18] = 0;
  v6[20] = 0;
  v6[21] = 0;
  v6[23] = 0;
  ptr = v6;
  v44 = 8;
  v45 = 0;
  v46 = v4;
  v47 = nullptr;
  v48 = 0;
  v49 = v3;
  v50 = nullptr;
  v51 = 0;
  v7 = sub_536180(v38, a2);
  v8 = (char *)v40;
  v37 = v7;
  v9 = v41[0];
  v10 = (char *)v40;
  v11 = (char *)v40 + 32 * v41[0];
  if ( v40 == v11 )
  {
    if ( !*(_QWORD *)&v41[1] )
      goto LABEL_18;
LABEL_57:
    *(_QWORD *)&v41[1] = 0;
    goto LABEL_18;
  }
  while ( *((_DWORD *)v10 + 1) != 2 )
  {
    v10 += 32;
    if ( v11 == v10 )
      goto LABEL_17;
  }
  while ( v10 != v11 )
  {
    v12 = *((_QWORD **)v10 + 3);
    if ( v12 )
    {
      v13 = v12[3];
      if ( v13 )
        sub_186B220((void *)(v13 - 8));
      v14 = v12[2];
      if ( v14 )
        sub_186B220((void *)(v14 - 8));
      sub_186B220(v12);
    }
    v15 = v10 + 32;
    if ( v11 == v10 + 32 )
      break;
    while ( 1 )
    {
      v10 = v15;
      if ( *((_DWORD *)v15 + 1) == 2 )
        break;
      v15 += 32;
      if ( v11 == v15 )
        goto LABEL_17;
    }
  }
LABEL_17:
  if ( *(_QWORD *)&v41[1] )
  {
    v32 = v8;
    v33 = 0;
    do
    {
      while ( *((_DWORD *)v32 + 1) )
      {
        *((_DWORD *)v32 + 1) = 0;
        v32 += 32;
        if ( v11 == v32 )
          goto LABEL_50;
      }
      v32 += 32;
      ++v33;
    }
    while ( v11 != v32 );
LABEL_50:
    if ( v9 > 0x10 && 3 * v9 < 4 * v33 )
    {
      if ( v8 )
        sub_186B220(v8);
      v34 = v9 >> 1;
      v41[0] = v34;
      v34 *= 32LL;
      v35 = (char *)sub_186B270(v34);
      v8 = v35;
      v36 = &v35[v34];
      do
      {
        *(_QWORD *)v35 = 0;
        v35 += 32;
        *((_QWORD *)v35 - 3) = 0;
        *((_QWORD *)v35 - 2) = 0;
      }
      while ( v35 != v36 );
      v40 = v8;
    }
    goto LABEL_57;
  }
LABEL_18:
  if ( v51 )
    sub_186B220((void *)(v51 - 8));
  v16 = v50;
  if ( v50 )
  {
    v17 = (unsigned __int64)&v50[*((unsigned int *)v50 - 1)];
    if ( (unsigned __int64)v50 < v17 )
    {
      v18 = v49;
      v19 = v50;
      do
      {
        while ( 1 )
        {
          v20 = *v19;
          if ( *v19 )
          {
            if ( (*(_DWORD *)(v20 + 8))-- == 1 )
              break;
          }
          if ( (unsigned __int64)++v19 >= v17 )
            goto LABEL_27;
        }
        ++v19;
        sub_15D7BC0(v18, v20);
      }
      while ( (unsigned __int64)v19 < v17 );
    }
LABEL_27:
    sub_186B220(v16 - 1);
  }
  v22 = v47;
  if ( v47 )
  {
    v23 = (unsigned __int64)&v47[*((unsigned int *)v47 - 1)];
    if ( (unsigned __int64)v47 < v23 )
    {
      v24 = v46;
      v25 = v47;
      do
      {
        v26 = *v25++;
        sub_62A410(v24, v26);
      }
      while ( (unsigned __int64)v25 < v23 );
    }
    sub_186B220(v22 - 1);
  }
  v27 = ptr;
  if ( ptr )
  {
    if ( (_DWORD)v44 )
    {
      v28 = (char *)ptr;
      v29 = (char *)ptr + 24 * (unsigned int)v44;
      do
      {
        while ( 1 )
        {
          v30 = *((_QWORD *)v28 + 2);
          if ( !v30 )
            break;
          v28 += 24;
          sub_186B220((void *)(v30 - 8));
          if ( v29 == v28 )
            goto LABEL_38;
        }
        v28 += 24;
      }
      while ( v28 != v29 );
    }
LABEL_38:
    sub_186B220(v27);
  }
  if ( v42 )
    sub_186B220((void *)(v42 - 8));
  if ( v8 )
    sub_186B220(v8);
  sub_63D960(v52);
  return v37;
}

