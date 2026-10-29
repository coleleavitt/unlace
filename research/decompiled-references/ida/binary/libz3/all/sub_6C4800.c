__int64 __fastcall sub_6C4800(__int64 a1)
{
  __int64 v1; // r12
  _QWORD *v2; // rbp
  _QWORD *v3; // r12
  __int64 *v4; // r15
  __int64 *v5; // rbx
  __int64 *v6; // r14
  __int64 v7; // rsi
  __int64 v8; // rdi
  bool v9; // zf
  __int64 *v10; // rbx
  __int64 *v11; // r14
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 *v14; // rbx
  __int64 *v15; // r14
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 *v18; // rbx
  __int64 *v19; // r14
  __int64 v20; // rsi
  __int64 v21; // rdi
  __int64 *v22; // rbx
  __int64 *v23; // r14
  __int64 v24; // rsi
  __int64 v25; // rdi
  __int64 *v26; // r14
  __int64 v27; // rax
  __int64 *v28; // rbx
  __int64 *v29; // r13
  __int64 v30; // rsi
  __int64 v31; // rdi
  __int64 *v32; // rbx
  __int64 *v33; // r14
  __int64 v34; // rsi
  __int64 v35; // rdi
  __int64 *v36; // rbx
  __int64 *v37; // r14
  __int64 v38; // rsi
  __int64 v39; // rdi
  _QWORD *v40; // rax
  _QWORD *v41; // rbx
  _QWORD *v42; // rbp
  void **v43; // r12
  _QWORD *v44; // rax
  __int64 *v45; // rbx
  __int64 v46; // rax
  __int64 *v47; // rbp
  __int64 v48; // rax
  __int64 v49; // rax
  void *v50; // rdi
  _QWORD *v51; // rbx
  void *v52; // rdi
  void *v53; // rdi
  unsigned __int64 v54; // rsi
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  void *v58; // rdi
  __int64 result; // rax
  void *v60; // rdi
  __int64 *v61; // [rsp+0h] [rbp-48h]

  v1 = *(unsigned int *)(a1 + 40);
  v2 = *(_QWORD **)(a1 + 32);
  *(_QWORD *)a1 = &off_1C53160;
  v3 = &v2[4 * v1];
  if ( v2 != v3 )
  {
    while ( *v2 <= 1u )
    {
      v2 += 4;
      if ( v3 == v2 )
        goto LABEL_91;
    }
    while ( v3 != v2 )
    {
      v4 = (__int64 *)v2[2];
      if ( v4 )
      {
        v5 = (__int64 *)v4[14];
        if ( v5 )
        {
          v6 = &v5[*((unsigned int *)v5 - 1)];
          if ( v5 >= v6 )
            goto LABEL_15;
          do
          {
            while ( 1 )
            {
              v7 = *v5;
              if ( *v5 )
              {
                v8 = v4[13];
                v9 = (*(_DWORD *)(v7 + 8))-- == 1;
                if ( v9 )
                  break;
              }
              if ( ++v5 >= v6 )
                goto LABEL_14;
            }
            sub_15D7BC0(v8, v7);
            ++v5;
          }
          while ( v5 < v6 );
LABEL_14:
          v5 = (__int64 *)v4[14];
          if ( v5 )
LABEL_15:
            sub_186B220(v5 - 1);
        }
        v10 = (__int64 *)v4[12];
        if ( v10 )
        {
          v11 = &v10[*((unsigned int *)v10 - 1)];
          if ( v10 >= v11 )
            goto LABEL_24;
          do
          {
            while ( 1 )
            {
              v12 = *v10;
              if ( *v10 )
              {
                v13 = v4[11];
                v9 = (*(_DWORD *)(v12 + 8))-- == 1;
                if ( v9 )
                  break;
              }
              if ( ++v10 >= v11 )
                goto LABEL_23;
            }
            sub_15D7BC0(v13, v12);
            ++v10;
          }
          while ( v10 < v11 );
LABEL_23:
          v10 = (__int64 *)v4[12];
          if ( v10 )
LABEL_24:
            sub_186B220(v10 - 1);
        }
        v14 = (__int64 *)v4[10];
        if ( v14 )
        {
          v15 = &v14[*((unsigned int *)v14 - 1)];
          if ( v14 >= v15 )
            goto LABEL_33;
          do
          {
            while ( 1 )
            {
              v16 = *v14;
              if ( *v14 )
              {
                v17 = v4[9];
                v9 = (*(_DWORD *)(v16 + 8))-- == 1;
                if ( v9 )
                  break;
              }
              if ( ++v14 >= v15 )
                goto LABEL_32;
            }
            sub_15D7BC0(v17, v16);
            ++v14;
          }
          while ( v14 < v15 );
LABEL_32:
          v14 = (__int64 *)v4[10];
          if ( v14 )
LABEL_33:
            sub_186B220(v14 - 1);
        }
        v18 = (__int64 *)v4[8];
        if ( v18 )
        {
          v19 = &v18[*((unsigned int *)v18 - 1)];
          if ( v18 >= v19 )
            goto LABEL_42;
          do
          {
            while ( 1 )
            {
              v20 = *v18;
              if ( *v18 )
              {
                v21 = v4[7];
                v9 = (*(_DWORD *)(v20 + 8))-- == 1;
                if ( v9 )
                  break;
              }
              if ( ++v18 >= v19 )
                goto LABEL_41;
            }
            sub_15D7BC0(v21, v20);
            ++v18;
          }
          while ( v18 < v19 );
LABEL_41:
          v18 = (__int64 *)v4[8];
          if ( v18 )
LABEL_42:
            sub_186B220(v18 - 1);
        }
        v22 = (__int64 *)v4[6];
        if ( v22 )
        {
          v23 = &v22[*((unsigned int *)v22 - 1)];
          if ( v22 >= v23 )
            goto LABEL_51;
          do
          {
            while ( 1 )
            {
              v24 = *v22;
              if ( *v22 )
              {
                v25 = v4[5];
                v9 = (*(_DWORD *)(v24 + 8))-- == 1;
                if ( v9 )
                  break;
              }
              if ( ++v22 >= v23 )
                goto LABEL_50;
            }
            sub_15D7BC0(v25, v24);
            ++v22;
          }
          while ( v22 < v23 );
LABEL_50:
          v22 = (__int64 *)v4[6];
          if ( v22 )
LABEL_51:
            sub_186B220(v22 - 1);
        }
        v26 = (__int64 *)v4[4];
        if ( v26 )
        {
          v27 = *((unsigned int *)v26 - 1);
          if ( (_DWORD)v27 )
          {
            v61 = &v26[2 * v27];
            do
            {
              v28 = (__int64 *)v26[1];
              if ( v28 )
              {
                v29 = &v28[*((unsigned int *)v28 - 1)];
                if ( v28 >= v29 )
                  goto LABEL_63;
                do
                {
                  while ( 1 )
                  {
                    v30 = *v28;
                    if ( *v28 )
                    {
                      v31 = *v26;
                      v9 = (*(_DWORD *)(v30 + 8))-- == 1;
                      if ( v9 )
                        break;
                    }
                    if ( ++v28 >= v29 )
                      goto LABEL_62;
                  }
                  sub_15D7BC0(v31, v30);
                  ++v28;
                }
                while ( v28 < v29 );
LABEL_62:
                v28 = (__int64 *)v26[1];
                if ( v28 )
LABEL_63:
                  sub_186B220(v28 - 1);
              }
              v26 += 2;
            }
            while ( v26 != v61 );
            v26 = (__int64 *)v4[4];
          }
          sub_186B220(v26 - 1);
        }
        v32 = (__int64 *)v4[3];
        if ( v32 )
        {
          v33 = &v32[*((unsigned int *)v32 - 1)];
          if ( v32 >= v33 )
            goto LABEL_75;
          do
          {
            while ( 1 )
            {
              v34 = *v32;
              if ( *v32 )
              {
                v35 = v4[2];
                v9 = (*(_DWORD *)(v34 + 8))-- == 1;
                if ( v9 )
                  break;
              }
              if ( ++v32 >= v33 )
                goto LABEL_74;
            }
            sub_15D7BC0(v35, v34);
            ++v32;
          }
          while ( v32 < v33 );
LABEL_74:
          v32 = (__int64 *)v4[3];
          if ( v32 )
LABEL_75:
            sub_186B220(v32 - 1);
        }
        v36 = (__int64 *)v4[1];
        if ( v36 )
        {
          v37 = &v36[*((unsigned int *)v36 - 1)];
          if ( v36 >= v37 )
            goto LABEL_84;
          do
          {
            while ( 1 )
            {
              v38 = *v36;
              if ( *v36 )
              {
                v39 = *v4;
                v9 = (*(_DWORD *)(v38 + 8))-- == 1;
                if ( v9 )
                  break;
              }
              if ( ++v36 >= v37 )
                goto LABEL_83;
            }
            sub_15D7BC0(v39, v38);
            ++v36;
          }
          while ( v36 < v37 );
LABEL_83:
          v36 = (__int64 *)v4[1];
          if ( v36 )
LABEL_84:
            sub_186B220(v36 - 1);
        }
        sub_186B220(v4);
      }
      v40 = v2 + 4;
      if ( v3 == v2 + 4 )
        break;
      while ( 1 )
      {
        v2 = v40;
        if ( *v40 > 1u )
          break;
        v40 += 4;
        if ( v3 == v40 )
          goto LABEL_91;
      }
    }
  }
LABEL_91:
  v41 = *(_QWORD **)(a1 + 56);
  v42 = &v41[2 * *(unsigned int *)(a1 + 64)];
  if ( v41 != v42 )
  {
    while ( *v41 <= 1u )
    {
      v41 += 2;
      if ( v42 == v41 )
        goto LABEL_103;
    }
    while ( v42 != v41 )
    {
      v43 = (void **)v41[1];
      if ( v43 )
      {
        if ( *v43 )
          sub_186B220(*v43);
        sub_186B220(v43);
      }
      v44 = v41 + 2;
      if ( v42 == v41 + 2 )
        break;
      while ( 1 )
      {
        v41 = v44;
        if ( *v44 > 1u )
          break;
        v44 += 2;
        if ( v42 == v44 )
          goto LABEL_103;
      }
    }
  }
LABEL_103:
  *(_QWORD *)(a1 + 256) = &off_1C530D8;
  sub_2334C0((__int64 *)(a1 + 856));
  v45 = *(__int64 **)(a1 + 848);
  if ( v45 )
  {
    v46 = *((unsigned int *)v45 - 1);
    if ( (_DWORD)v46 )
    {
      v47 = &v45[v46];
      do
      {
        while ( 1 )
        {
          v48 = *v45;
          if ( !*v45 )
            break;
          ++v45;
          sub_186B220((void *)(v48 - 8));
          if ( v47 == v45 )
          {
            v45 = *(__int64 **)(a1 + 848);
            goto LABEL_109;
          }
        }
        ++v45;
      }
      while ( v45 != v47 );
      v45 = *(__int64 **)(a1 + 848);
    }
LABEL_109:
    sub_186B220(v45 - 1);
  }
  v49 = *(_QWORD *)(a1 + 840);
  if ( v49 )
    sub_186B220((void *)(v49 - 8));
  v50 = *(void **)(a1 + 816);
  if ( v50 )
    sub_186B220(v50);
  sub_6C0E20((_QWORD *)(a1 + 256));
  sub_2334C0((__int64 *)(a1 + 240));
  v51 = *(_QWORD **)(a1 + 200);
  while ( v51 )
  {
    v52 = v51;
    v51 = (_QWORD *)*v51;
    operator delete(v52, 0x18u);
  }
  memset(*(void **)(a1 + 184), 0, 8LL * *(_QWORD *)(a1 + 192));
  v53 = *(void **)(a1 + 184);
  *(_QWORD *)(a1 + 208) = 0;
  v54 = *(_QWORD *)(a1 + 192);
  *(_QWORD *)(a1 + 200) = 0;
  if ( v53 != (void *)(a1 + 232) )
  {
    v54 *= 8LL;
    operator delete(v53, v54);
  }
  sub_2334C0((__int64 *)(a1 + 168));
  v55 = *(_QWORD *)(a1 + 160);
  if ( v55 )
    sub_186B220((void *)(v55 - 8));
  v56 = *(_QWORD *)(a1 + 152);
  if ( v56 )
    sub_186B220((void *)(v56 - 8));
  v57 = *(_QWORD *)(a1 + 144);
  if ( v57 )
    sub_186B220((void *)(v57 - 8));
  sub_2334C0((__int64 *)(a1 + 128));
  sub_2334C0((__int64 *)(a1 + 112));
  sub_6DE340(a1 + 96, v54);
  sub_14B63F0(a1 + 80);
  v58 = *(void **)(a1 + 56);
  if ( v58 )
    sub_186B220(v58);
  result = a1;
  v60 = *(void **)(a1 + 32);
  if ( v60 )
    return sub_186B220(v60);
  return result;
}

