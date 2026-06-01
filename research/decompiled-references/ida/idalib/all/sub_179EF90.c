__int64 __fastcall sub_179EF90(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  unsigned __int64 v6; // r15
  __int64 v7; // r12
  __int64 v8; // r13
  unsigned __int64 v9; // rcx
  _QWORD *v10; // rcx
  _QWORD *v11; // rbp
  _QWORD *v12; // rdi
  void *v13; // rdi
  void **v14; // rbp
  __int64 v15; // rax
  double v16; // rax
  unsigned int v17; // edi
  unsigned int v18; // edx
  double v19; // rdi
  __int64 v20; // r15
  __int64 v21; // r13
  __int64 v22; // r12
  unsigned __int64 v23; // rbp
  unsigned __int64 v24; // rax
  _QWORD *v25; // rax
  _QWORD *v26; // r14
  _QWORD *v27; // rdi
  void *v28; // rdi
  void **v29; // r14
  __int64 v30; // rsi
  __int64 v31; // rsi
  __int64 v32; // rdx
  unsigned __int64 v33; // rsi
  unsigned __int64 v34; // rdi
  __m128 v36; // xmm0
  __int64 v37; // rdx
  unsigned __int64 v38; // rsi
  __int64 v39; // r12
  __int64 v40; // rbp
  unsigned __int64 v41; // rdi
  _QWORD *v42; // [rsp+0h] [rbp-98h]
  void **v43; // [rsp+0h] [rbp-98h]
  _QWORD *v44; // [rsp+0h] [rbp-98h]
  void **v45; // [rsp+0h] [rbp-98h]
  __int64 v46; // [rsp+8h] [rbp-90h]
  __int64 v47; // [rsp+10h] [rbp-88h]
  unsigned int v48; // [rsp+10h] [rbp-88h]
  unsigned int v50; // [rsp+18h] [rbp-80h]
  double v51[2]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v52; // [rsp+34h] [rbp-64h]

  v4 = a1 + 40 * a2;
  v46 = a2;
  *(_QWORD *)&v51[0] = a4;
  v47 = (a3 - 1) / 2;
  if ( a2 >= v47 )
  {
    v15 = a3;
    v7 = a2;
    if ( (a3 & 1) != 0 )
      goto LABEL_23;
    goto LABEL_60;
  }
  v6 = *(_QWORD *)(v4 + 16);
  do
  {
    v7 = 2 * (a2 + 1);
    v4 = a1 + 80 * (a2 + 1);
    if ( *(_DWORD *)v4 < *(_DWORD *)(v4 - 40) )
    {
      --v7;
      v4 = a1 + 40 * v7;
    }
    v8 = a1 + 40 * a2;
    *(_DWORD *)v8 = *(_DWORD *)v4;
    *(_QWORD *)(v8 + 4) = *(_QWORD *)(v4 + 4);
    if ( v6 )
    {
      v9 = *(_QWORD *)(v8 + 24);
      if ( v9 )
      {
        if ( v9 > v6 || v6 > v9 + 14848 )
        {
          v10 = *(_QWORD **)(v6 + 528);
          v11 = &v10[8 * (unsigned __int64)*(unsigned int *)(v6 + 536)];
          if ( v10 != v11 )
          {
            do
            {
              while ( 1 )
              {
                v11 -= 8;
                v12 = (_QWORD *)v11[3];
                if ( v12 == v11 + 5 )
                  break;
                v42 = v10;
                operator delete(v12);
                v10 = v42;
                if ( v42 == v11 )
                  goto LABEL_11;
              }
            }
            while ( v10 != v11 );
LABEL_11:
            v11 = *(_QWORD **)(v6 + 528);
          }
          if ( v11 != (_QWORD *)(v6 + 544) )
            free(v11);
          v13 = *(void **)(v6 + 416);
          if ( v13 != (void *)(v6 + 432) )
            free(v13);
          v14 = (void **)(v6 + 384);
          v43 = (void **)(v6 + 64);
          do
          {
            while ( *v14 != v14 + 2 )
            {
              operator delete(*v14);
              v14 -= 4;
              if ( v43 == v14 )
                goto LABEL_19;
            }
            v14 -= 4;
          }
          while ( v43 != v14 );
LABEL_19:
          operator delete((void *)v6, 0x3A0u);
        }
        else
        {
          v31 = *(unsigned int *)(v9 + 14976);
          *(_DWORD *)(v9 + 14976) = v31 + 1;
          *(_QWORD *)(v9 + 8 * v31 + 14848) = v6;
        }
        *(_QWORD *)(v8 + 16) = 0;
      }
    }
    a2 = v7;
    v6 = 0;
    *(_DWORD *)(v8 + 32) = *(_DWORD *)(v4 + 32);
    *(__m128i *)(v8 + 16) = _mm_loadu_si128((const __m128i *)(v4 + 16));
    *(_QWORD *)(v4 + 16) = 0;
  }
  while ( v7 < v47 );
  v15 = a3;
  if ( (a3 & 1) == 0 )
  {
LABEL_60:
    if ( (v15 - 2) / 2 == v7 )
    {
      v37 = v7 + 1;
      v38 = *(_QWORD *)(v4 + 16);
      v39 = 2 * (v7 + 1);
      v40 = a1 + 8 * (v39 + 8 * v37) - 40;
      *(_DWORD *)v4 = *(_DWORD *)v40;
      *(_QWORD *)(v4 + 4) = *(_QWORD *)(v40 + 4);
      if ( v38 )
      {
        v41 = *(_QWORD *)(v4 + 24);
        if ( v41 )
        {
          sub_1580C40(v41, v38);
          *(_QWORD *)(v4 + 16) = 0;
        }
      }
      v7 = v39 - 1;
      *(_DWORD *)(v4 + 32) = *(_DWORD *)(v40 + 32);
      *(__m128i *)(v4 + 16) = _mm_loadu_si128((const __m128i *)(v40 + 16));
      v4 = a1 + 40 * v7;
      *(_QWORD *)(v40 + 16) = 0;
    }
  }
LABEL_23:
  v16 = v51[0];
  v17 = *(_DWORD *)(*(_QWORD *)&v51[0] + 32LL);
  v18 = **(_DWORD **)&v51[0];
  v52 = *(_QWORD *)(*(_QWORD *)&v51[0] + 4LL);
  v50 = v17;
  v48 = v18;
  v51[0] = *(double *)(*(_QWORD *)&v51[0] + 24LL);
  v19 = *(double *)(*(_QWORD *)&v16 + 16LL);
  *(_QWORD *)(*(_QWORD *)&v16 + 16LL) = 0;
  v51[1] = v19;
  v20 = (v7 - 1) / 2;
  if ( v7 > v46 )
  {
    v21 = a1 + 40 * ((v7 - 1) / 2);
    if ( *(_DWORD *)v21 < v18 )
    {
      while ( 1 )
      {
        v22 = a1 + 40 * v7;
        v23 = *(_QWORD *)(v22 + 16);
        *(_DWORD *)v22 = *(_DWORD *)v21;
        *(_QWORD *)(v22 + 4) = *(_QWORD *)(v21 + 4);
        if ( v23 )
        {
          v24 = *(_QWORD *)(v22 + 24);
          if ( v24 )
          {
            if ( v23 < v24 || v23 > v24 + 14848 )
            {
              v25 = *(_QWORD **)(v23 + 528);
              v26 = &v25[8 * (unsigned __int64)*(unsigned int *)(v23 + 536)];
              if ( v25 != v26 )
              {
                do
                {
                  while ( 1 )
                  {
                    v26 -= 8;
                    v27 = (_QWORD *)v26[3];
                    if ( v27 == v26 + 5 )
                      break;
                    v44 = v25;
                    operator delete(v27);
                    v25 = v44;
                    if ( v44 == v26 )
                      goto LABEL_31;
                  }
                }
                while ( v25 != v26 );
LABEL_31:
                v26 = *(_QWORD **)(v23 + 528);
              }
              if ( v26 != (_QWORD *)(v23 + 544) )
                free(v26);
              v28 = *(void **)(v23 + 416);
              if ( v28 != (void *)(v23 + 432) )
                free(v28);
              v29 = (void **)(v23 + 384);
              v45 = (void **)(v23 + 64);
              do
              {
                while ( *v29 != v29 + 2 )
                {
                  operator delete(*v29);
                  v29 -= 4;
                  if ( v45 == v29 )
                    goto LABEL_39;
                }
                v29 -= 4;
              }
              while ( v45 != v29 );
LABEL_39:
              operator delete((void *)v23, 0x3A0u);
            }
            else
            {
              v30 = *(unsigned int *)(v24 + 14976);
              *(_DWORD *)(v24 + 14976) = v30 + 1;
              *(_QWORD *)(v24 + 8 * v30 + 14848) = v23;
            }
            *(_QWORD *)(v22 + 16) = 0;
          }
        }
        *(_DWORD *)(v22 + 32) = *(_DWORD *)(v21 + 32);
        *(__m128i *)(v22 + 16) = _mm_loadu_si128((const __m128i *)(v21 + 16));
        *(_QWORD *)(v21 + 16) = 0;
        v4 = a1 + 40 * v20;
        if ( v46 >= v20 )
          break;
        v7 = v20;
        v21 = a1 + 40 * ((v20 - 1) / 2);
        if ( *(_DWORD *)v21 >= v48 )
          break;
        v20 = (v20 - 1) / 2;
      }
    }
  }
  v32 = v52;
  v33 = *(_QWORD *)(v4 + 16);
  *(_DWORD *)v4 = v48;
  *(_QWORD *)(v4 + 4) = v32;
  if ( v33 )
  {
    v34 = *(_QWORD *)(v4 + 24);
    if ( v34 )
      sub_1580C40(v34, v33);
  }
  v36 = _mm_loadh_ps(v51);
  *(_DWORD *)(v4 + 32) = v50;
  *(__m128 *)(v4 + 16) = v36;
  return v50;
}
