__int64 __fastcall sub_ACD580(__int64 a1)
{
  _QWORD **v2; // rbx
  _QWORD *v3; // rbp
  __int64 *v4; // r13
  __int64 *v5; // r14
  __int64 *v6; // r15
  __int64 v7; // rsi
  __int64 *i; // rax
  __int64 v9; // rdi
  bool v10; // zf
  void *v11; // rdi
  void *v12; // rdi
  void *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rax
  char *v16; // rdi
  int v17; // esi
  __int64 v18; // rcx
  char *v19; // rax
  char *v20; // rdx
  unsigned int v21; // ebp
  size_t v22; // rbx
  _OWORD *v23; // rdx
  _OWORD *v24; // rcx
  _OWORD *v25; // rax
  _QWORD *v26; // rdi
  int v27; // esi
  __int64 v28; // rcx
  _QWORD *v29; // rax
  _QWORD *v30; // rdx
  unsigned int v31; // ebp
  size_t v32; // rbx
  _OWORD *v33; // rdx
  _OWORD *v34; // rcx
  _OWORD *v35; // rax
  _QWORD *v36; // rbx
  _QWORD *v37; // rbp
  __int64 v38; // rsi
  __int64 v39; // rdi
  void *v40; // rdi
  __int64 v41; // rax
  void *v42; // rdi
  __int64 v43; // rax
  void *v44; // rdi
  void *v45; // rdi
  void *v46; // rdi
  void *v47; // rdi
  void *v48; // rdi
  __int64 result; // rax
  size_t v50; // rcx
  size_t v51; // rcx
  _QWORD **v52; // [rsp+8h] [rbp-40h]

  v2 = *(_QWORD ***)(a1 + 72);
  *(_QWORD *)a1 = &off_1C56848;
  if ( v2 )
  {
    v52 = &v2[*((unsigned int *)v2 - 1)];
    if ( v2 != v52 )
    {
      while ( 1 )
      {
        v3 = *v2;
        if ( *v2 )
          break;
LABEL_30:
        if ( v52 == ++v2 )
          goto LABEL_31;
      }
      v4 = (__int64 *)v3[7];
      if ( v4 )
      {
        v5 = (__int64 *)v4[1];
        v6 = &v5[2 * *((unsigned int *)v4 + 4)];
        if ( v5 != v6 )
        {
          while ( (unsigned __int64)*v5 <= 1 )
          {
            v5 += 2;
            if ( v6 == v5 )
              goto LABEL_18;
          }
          if ( v6 != v5 )
          {
            v7 = *v5;
            if ( *v5 )
              goto LABEL_16;
LABEL_11:
            for ( i = v5 + 2; v6 != v5 + 2; i = v5 + 2 )
            {
              while ( 1 )
              {
                v7 = *i;
                v5 = i;
                if ( (unsigned __int64)*i > 1 )
                  break;
                i += 2;
                if ( v6 == i )
                  goto LABEL_18;
              }
              if ( v6 == i )
                break;
LABEL_16:
              v9 = *v4;
              v10 = (*(_DWORD *)(v7 + 8))-- == 1;
              if ( !v10 )
                goto LABEL_11;
              sub_15D7BC0(v9, v7);
            }
          }
        }
LABEL_18:
        v11 = (void *)v4[9];
        if ( v11 )
          sub_186B220(v11);
        v12 = (void *)v4[4];
        if ( v12 )
          sub_186B220(v12);
        v13 = (void *)v4[1];
        if ( v13 )
          sub_186B220(v13);
        sub_186B220(v4);
      }
      v14 = v3[6];
      if ( v14 )
        sub_186B220((void *)(v14 - 8));
      v15 = v3[5];
      if ( v15 )
        sub_186B220((void *)(v15 - 8));
      sub_186B220(v3);
      goto LABEL_30;
    }
  }
LABEL_31:
  if ( *(_DWORD *)(a1 + 212) || *(_DWORD *)(a1 + 216) )
  {
    v16 = *(char **)(a1 + 200);
    v17 = 0;
    v18 = *(unsigned int *)(a1 + 208);
    v19 = v16;
    v20 = &v16[16 * v18];
    if ( v16 == v20 )
      goto LABEL_46;
    do
    {
      while ( *(_QWORD *)v19 )
      {
        *(_QWORD *)v19 = 0;
        v19 += 16;
        if ( v20 == v19 )
          goto LABEL_38;
      }
      v19 += 16;
      ++v17;
    }
    while ( v20 != v19 );
LABEL_38:
    if ( (unsigned int)v18 <= 0x10 || 3 * (int)v18 >= (unsigned int)(4 * v17) )
      goto LABEL_46;
    if ( v16 )
    {
      sub_186B220(v16);
      v21 = *(_DWORD *)(a1 + 208);
      *(_QWORD *)(a1 + 200) = 0;
      v21 >>= 1;
      *(_DWORD *)(a1 + 208) = v21;
      v22 = v21;
      v23 = (_OWORD *)sub_186B270(v22 * 16);
      if ( !v21 )
      {
LABEL_45:
        *(_QWORD *)(a1 + 200) = v23;
LABEL_46:
        *(_QWORD *)(a1 + 212) = 0;
        goto LABEL_47;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 200) = 0;
      v51 = (unsigned int)v18 >> 1;
      *(_DWORD *)(a1 + 208) = v51;
      v22 = v51;
      v23 = (_OWORD *)sub_186B270(16 * v51);
    }
    v24 = &v23[v22];
    v25 = v23;
    if ( ((v22 * 16) & 0x10) == 0 || (v25 = v23 + 1, *v23 = 0, v24 != v23 + 1) )
    {
      do
      {
        *v25 = 0;
        v25 += 2;
        *(v25 - 1) = 0;
      }
      while ( v24 != v25 );
    }
    goto LABEL_45;
  }
LABEL_47:
  if ( !*(_DWORD *)(a1 + 236) && !*(_DWORD *)(a1 + 240) )
    goto LABEL_63;
  v26 = *(_QWORD **)(a1 + 224);
  v27 = 0;
  v28 = *(unsigned int *)(a1 + 232);
  v29 = v26;
  v30 = &v26[2 * v28];
  if ( v26 != v30 )
  {
    do
    {
      while ( *v29 )
      {
        *v29 = 0;
        v29 += 2;
        if ( v30 == v29 )
          goto LABEL_54;
      }
      v29 += 2;
      ++v27;
    }
    while ( v30 != v29 );
LABEL_54:
    if ( (unsigned int)v28 > 0x10 && 3 * (int)v28 < (unsigned int)(4 * v27) )
    {
      if ( v26 )
      {
        sub_186B220(v26);
        v31 = *(_DWORD *)(a1 + 232);
        *(_QWORD *)(a1 + 224) = 0;
        v31 >>= 1;
        *(_DWORD *)(a1 + 232) = v31;
        v32 = v31;
        v33 = (_OWORD *)sub_186B270(v32 * 16);
        if ( !v31 )
        {
LABEL_61:
          *(_QWORD *)(a1 + 224) = v33;
          goto LABEL_62;
        }
      }
      else
      {
        *(_QWORD *)(a1 + 224) = 0;
        v50 = (unsigned int)v28 >> 1;
        *(_DWORD *)(a1 + 232) = v50;
        v32 = v50;
        v33 = (_OWORD *)sub_186B270(16 * v50);
      }
      v34 = &v33[v32];
      v35 = v33;
      if ( ((v32 * 16) & 0x10) == 0 || (v35 = v33 + 1, *v33 = 0, v34 != v33 + 1) )
      {
        do
        {
          *v35 = 0;
          v35 += 2;
          *(v35 - 1) = 0;
        }
        while ( v34 != v35 );
      }
      goto LABEL_61;
    }
  }
LABEL_62:
  *(_QWORD *)(a1 + 236) = 0;
LABEL_63:
  v36 = *(_QWORD **)(a1 + 256);
  if ( v36 )
  {
    v37 = &v36[*((unsigned int *)v36 - 1)];
    if ( v36 >= v37 )
      goto LABEL_71;
    do
    {
      while ( 1 )
      {
        v38 = *v36;
        if ( *v36 )
        {
          v39 = *(_QWORD *)(a1 + 248);
          v10 = (*(_DWORD *)(v38 + 8))-- == 1;
          if ( v10 )
            break;
        }
        if ( ++v36 >= v37 )
          goto LABEL_70;
      }
      sub_15D7BC0(v39, v38);
      ++v36;
    }
    while ( v36 < v37 );
LABEL_70:
    v36 = *(_QWORD **)(a1 + 256);
    if ( v36 )
LABEL_71:
      *((_DWORD *)v36 - 1) = 0;
  }
  v40 = *(void **)(a1 + 336);
  if ( v40 )
    sub_186B220(v40);
  v41 = *(_QWORD *)(a1 + 312);
  if ( v41 )
    sub_186B220((void *)(v41 - 8));
  v42 = *(void **)(a1 + 288);
  if ( v42 )
    sub_186B220(v42);
  v43 = *(_QWORD *)(a1 + 264);
  if ( v43 )
    sub_186B220((void *)(v43 - 8));
  sub_2334C0((__int64 *)(a1 + 248));
  v44 = *(void **)(a1 + 224);
  if ( v44 )
    sub_186B220(v44);
  v45 = *(void **)(a1 + 200);
  if ( v45 )
    sub_186B220(v45);
  sub_2334C0((__int64 *)(a1 + 176));
  v46 = *(void **)(a1 + 152);
  if ( v46 )
    sub_186B220(v46);
  v47 = *(void **)(a1 + 128);
  if ( v47 )
    sub_186B220(v47);
  v48 = *(void **)(a1 + 96);
  if ( v48 )
    sub_186B220(v48);
  result = *(_QWORD *)(a1 + 72);
  if ( result )
    return sub_186B220((void *)(result - 8));
  return result;
}

