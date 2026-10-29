void __fastcall sub_2360E0(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // r13
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  int v8; // r14d
  __int64 v9; // rcx
  __int64 v10; // r12
  __int64 v11; // rsi
  __int64 v12; // rbx
  __int64 v13; // rdi
  void (__fastcall ***v14)(_QWORD); // rbx
  _QWORD *v15; // r14
  void *v16; // rdi
  void *v17; // rdi
  __int64 *v18; // rbx
  __int64 *v19; // r12
  __int64 v20; // rsi
  __int64 v21; // rdi
  bool v22; // zf
  _QWORD **v23; // r12
  _QWORD *v24; // rbx
  __int64 v25; // r15
  __int64 v26; // rdx
  __int64 v27; // r13
  __int64 v28; // rsi
  __int64 v29; // rdi
  __int64 v30; // rsi
  __int64 v31; // rdi
  unsigned int *v32; // rsi
  __int64 v33; // rax
  __int64 v34; // rsi
  __int64 v35; // rdi
  __int64 *v36; // r15
  __int64 v37; // r13
  __int64 *v38; // r13
  __int64 v39; // rsi
  __int64 v40; // rdi
  unsigned int *v41; // rsi
  __int64 v42; // rsi
  void *v43; // r13
  _DWORD *v44; // rbx
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rbx
  __int64 v47; // rsi
  __int64 v48; // rdi
  unsigned int *v49; // rsi
  __int64 v50; // rsi
  _QWORD **v51; // [rsp+8h] [rbp-60h]
  _OWORD v52[5]; // [rsp+10h] [rbp-58h] BYREF

  v2 = a1[41];
  if ( !v2 )
    goto LABEL_13;
  (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v2 + 48LL))(v2, a1 + 36);
  v3 = a1[16];
  if ( v3 )
  {
    v4 = (unsigned int)(*(_DWORD *)(v3 - 4) - 1);
    v5 = 4 * v4;
  }
  else
  {
    v5 = 0x3FFFFFFFCLL;
    LODWORD(v4) = -1;
  }
  v6 = *(unsigned int *)(v3 + v5);
  v7 = a1[15];
  v8 = v6;
  v9 = 8 * v6;
  v10 = v7 + v9;
  if ( !v7 )
  {
    v12 = 0;
    if ( !v9 )
      goto LABEL_9;
    goto LABEL_6;
  }
  v11 = 8LL * *(unsigned int *)(v7 - 4);
  v12 = v7 + v11;
  if ( v9 != v11 )
  {
    do
    {
LABEL_6:
      v13 = *(_QWORD *)(v12 - 8);
      v12 -= 8;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    while ( v10 != v12 );
    v7 = a1[15];
    v3 = a1[16];
    if ( !v7 )
      goto LABEL_9;
  }
  *(_DWORD *)(v7 - 4) = v8;
LABEL_9:
  if ( v3 )
    *(_DWORD *)(v3 - 4) = v4;
  sub_180C2E0(a1 + 17);
  v14 = (void (__fastcall ***)(_QWORD))a1[41];
  if ( v14 )
  {
    (**v14)(a1[41]);
    sub_186B220(v14);
    a1[41] = 0;
  }
LABEL_13:
  v15 = (_QWORD *)a1[42];
  if ( v15 )
  {
    v16 = (void *)v15[11];
    v15[5] = &off_1C62200;
    if ( v16 )
      sub_186B220(v16);
    v17 = (void *)v15[8];
    if ( v17 )
      sub_186B220(v17);
    v18 = (__int64 *)v15[4];
    if ( v18 )
    {
      v19 = &v18[*((unsigned int *)v18 - 1)];
      if ( v18 >= v19 )
        goto LABEL_26;
      do
      {
        while ( 1 )
        {
          v20 = *v18;
          if ( *v18 )
          {
            v21 = v15[3];
            v22 = (*(_DWORD *)(v20 + 8))-- == 1;
            if ( v22 )
              break;
          }
          if ( ++v18 >= v19 )
            goto LABEL_25;
        }
        sub_15D7BC0(v21, v20);
        ++v18;
      }
      while ( v18 < v19 );
LABEL_25:
      v18 = (__int64 *)v15[4];
      if ( v18 )
LABEL_26:
        sub_186B220(v18 - 1);
    }
    v23 = (_QWORD **)v15[2];
    if ( v23 )
    {
      v51 = &v23[*((unsigned int *)v23 - 1)];
      if ( v23 == v51 )
        goto LABEL_65;
      do
      {
        v24 = *v23;
        if ( *v23 )
        {
          v25 = v24[5];
          if ( v25 )
          {
            v26 = *(unsigned int *)(v25 - 4);
            if ( (_DWORD)v26 )
            {
              v27 = v25 + 48 * v26;
              do
              {
                while ( 1 )
                {
                  v28 = *(_QWORD *)(v25 + 32);
                  if ( v28 )
                  {
                    v29 = *(_QWORD *)(v25 + 40);
                    v22 = (*(_DWORD *)(v28 + 8))-- == 1;
                    if ( v22 )
                      sub_15D7BC0(v29, v28);
                  }
                  v30 = *(_QWORD *)(v25 + 16);
                  if ( v30 )
                  {
                    v31 = *(_QWORD *)(v25 + 24);
                    v22 = (*(_DWORD *)(v30 + 8))-- == 1;
                    if ( v22 )
                      sub_15D7BC0(v31, v30);
                  }
                  v32 = *(unsigned int **)v25;
                  if ( !*(_QWORD *)v25 )
                    break;
                  v33 = *(_QWORD *)(v25 + 8);
                  v25 += 48;
                  sub_234C20((__int64 *)(v33 + 648), v32);
                  if ( v25 == v27 )
                    goto LABEL_41;
                }
                v25 += 48;
              }
              while ( v25 != v27 );
LABEL_41:
              v25 = v24[5];
            }
            sub_186B220((void *)(v25 - 8));
          }
          v34 = v24[3];
          if ( v34 )
          {
            v35 = v24[4];
            v22 = (*(_DWORD *)(v34 + 8))-- == 1;
            if ( v22 )
              sub_15D7BC0(v35, v34);
          }
          v36 = (__int64 *)v24[2];
          if ( v36 )
          {
            v37 = *((unsigned int *)v36 - 1);
            if ( (_DWORD)v37 )
            {
              v38 = &v36[4 * v37];
              do
              {
                while ( 1 )
                {
                  v39 = v36[1];
                  v40 = *v36;
                  if ( v39 )
                  {
                    v22 = (*(_DWORD *)(v39 + 8))-- == 1;
                    if ( v22 )
                    {
                      sub_15D7BC0(v40, v39);
                      v40 = *v36;
                    }
                  }
                  v41 = (unsigned int *)v36[3];
                  if ( v41 )
                  {
                    sub_234C20((__int64 *)(v40 + 648), v41);
                    v40 = *v36;
                  }
                  v42 = v36[2];
                  if ( v42 )
                  {
                    v22 = (*(_DWORD *)(v42 + 8))-- == 1;
                    if ( v22 )
                      break;
                  }
                  v36 += 4;
                  if ( v36 == v38 )
                    goto LABEL_58;
                }
                sub_15D7BC0(v40, v42);
                v36 += 4;
              }
              while ( v36 != v38 );
LABEL_58:
              v36 = (__int64 *)v24[2];
            }
            sub_186B220(v36 - 1);
          }
          v43 = (void *)v24[1];
          if ( v43 )
          {
            sub_1695230(v24[1]);
            sub_186B220(v43);
          }
          sub_186B220(v24);
        }
        ++v23;
      }
      while ( v51 != v23 );
      v51 = (_QWORD **)v15[2];
      if ( v51 )
      {
LABEL_65:
        *((_DWORD *)v51 - 1) = 0;
        sub_186B220(v51 - 1);
      }
    }
    sub_186B220(v15);
    a1[42] = 0;
  }
  v44 = (_DWORD *)a1[31];
  if ( v44 )
  {
    v22 = v44[8]-- == 1;
    if ( v22 )
    {
      sub_ED44E0(v44);
      sub_186B220(v44);
    }
  }
  v45 = a1[22];
  a1[31] = 0;
  v46 = *(_QWORD *)(v45 + 856);
  v52[0] = _mm_unpacklo_epi64((__m128i)v45, (__m128i)v46);
  v52[1] = 0;
  if ( v46 )
    *(_DWORD *)(v46 + 8) += 2;
  v47 = a1[33];
  v48 = a1[32];
  if ( v47 )
  {
    v22 = (*(_DWORD *)(v47 + 8))-- == 1;
    if ( v22 )
    {
      sub_15D7BC0(v48, v47);
      v48 = a1[32];
    }
  }
  v49 = (unsigned int *)a1[35];
  if ( v49 )
  {
    sub_234C20((__int64 *)(v48 + 648), v49);
    v48 = a1[32];
  }
  v50 = a1[34];
  if ( v50 )
  {
    v22 = (*(_DWORD *)(v50 + 8))-- == 1;
    if ( v22 )
      sub_15D7BC0(v48, v50);
  }
  a1[33] = v46;
  a1[35] = 0;
  a1[34] = 0;
  sub_234F80((__int64 *)v52);
}

