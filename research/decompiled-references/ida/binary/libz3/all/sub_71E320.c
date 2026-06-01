__int64 __fastcall sub_71E320(__int64 a1)
{
  __int64 v2; // r13
  _QWORD *v3; // r14
  _QWORD *v4; // r13
  _QWORD *v5; // rbx
  void *v6; // rdi
  void *v7; // rdi
  __int64 *v8; // r12
  __int64 *v9; // r15
  __int64 v10; // rsi
  __int64 v11; // rdi
  bool v12; // zf
  __int64 *v13; // r12
  __int64 *v14; // r15
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 *v17; // r12
  __int64 *v18; // r15
  __int64 v19; // rsi
  __int64 v20; // rdi
  __int64 *v21; // r12
  __int64 *v22; // r15
  __int64 v23; // rsi
  __int64 v24; // rdi
  __int64 *v25; // r12
  __int64 *v26; // r15
  __int64 v27; // rsi
  __int64 v28; // rdi
  __int64 *v29; // r12
  __int64 *v30; // r15
  __int64 v31; // rsi
  __int64 v32; // rdi
  __int64 *v33; // r12
  __int64 *v34; // r15
  __int64 v35; // rsi
  __int64 v36; // rdi
  _QWORD *v37; // rax
  _QWORD *v38; // rbx
  _QWORD *v39; // r12
  _QWORD *v40; // r13
  __int64 v41; // rdi
  _QWORD *v42; // rax
  __int64 *v43; // rbx
  __int64 *v44; // r12
  __int64 v45; // rsi
  __int64 v46; // rdi
  void *v47; // rdi
  void *v48; // rdi
  _QWORD *v49; // rbx
  void *v50; // rdi
  void *v51; // rdi
  __int64 *v52; // rbx
  __int64 *v53; // r12
  __int64 v54; // rsi
  __int64 v55; // rdi
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 result; // rax
  __int64 *v59; // rbx
  __int64 *v60; // r12
  __int64 v61; // rsi
  __int64 v62; // rdi
  __int64 *v63; // rbx
  __int64 *v64; // r12
  __int64 v65; // rsi
  __int64 v66; // rdi

  v2 = *(unsigned int *)(a1 + 200);
  v3 = *(_QWORD **)(a1 + 192);
  *(_QWORD *)a1 = &off_1C537C0;
  v4 = &v3[4 * v2];
  if ( v3 != v4 )
  {
    while ( *v3 <= 1u )
    {
      v3 += 4;
      if ( v4 == v3 )
        goto LABEL_80;
    }
    while ( v4 != v3 )
    {
      v5 = (_QWORD *)v3[2];
      if ( v5 )
      {
        v6 = (void *)v5[21];
        v5[15] = &off_1C62200;
        if ( v6 )
          sub_186B220(v6);
        v7 = (void *)v5[18];
        if ( v7 )
          sub_186B220(v7);
        v8 = (__int64 *)v5[14];
        if ( v8 )
        {
          v9 = &v8[*((unsigned int *)v8 - 1)];
          if ( v8 >= v9 )
            goto LABEL_19;
          do
          {
            while ( 1 )
            {
              v10 = *v8;
              if ( *v8 )
              {
                v11 = v5[13];
                v12 = (*(_DWORD *)(v10 + 8))-- == 1;
                if ( v12 )
                  break;
              }
              if ( ++v8 >= v9 )
                goto LABEL_18;
            }
            sub_15D7BC0(v11, v10);
            ++v8;
          }
          while ( v8 < v9 );
LABEL_18:
          v8 = (__int64 *)v5[14];
          if ( v8 )
LABEL_19:
            sub_186B220(v8 - 1);
        }
        v13 = (__int64 *)v5[12];
        if ( v13 )
        {
          v14 = &v13[*((unsigned int *)v13 - 1)];
          if ( v13 >= v14 )
            goto LABEL_28;
          do
          {
            while ( 1 )
            {
              v15 = *v13;
              if ( *v13 )
              {
                v16 = v5[11];
                v12 = (*(_DWORD *)(v15 + 8))-- == 1;
                if ( v12 )
                  break;
              }
              if ( ++v13 >= v14 )
                goto LABEL_27;
            }
            sub_15D7BC0(v16, v15);
            ++v13;
          }
          while ( v13 < v14 );
LABEL_27:
          v13 = (__int64 *)v5[12];
          if ( v13 )
LABEL_28:
            sub_186B220(v13 - 1);
        }
        v17 = (__int64 *)v5[10];
        if ( v17 )
        {
          v18 = &v17[*((unsigned int *)v17 - 1)];
          if ( v17 >= v18 )
            goto LABEL_37;
          do
          {
            while ( 1 )
            {
              v19 = *v17;
              if ( *v17 )
              {
                v20 = v5[9];
                v12 = (*(_DWORD *)(v19 + 8))-- == 1;
                if ( v12 )
                  break;
              }
              if ( ++v17 >= v18 )
                goto LABEL_36;
            }
            sub_15D7BC0(v20, v19);
            ++v17;
          }
          while ( v17 < v18 );
LABEL_36:
          v17 = (__int64 *)v5[10];
          if ( v17 )
LABEL_37:
            sub_186B220(v17 - 1);
        }
        v21 = (__int64 *)v5[8];
        if ( v21 )
        {
          v22 = &v21[*((unsigned int *)v21 - 1)];
          if ( v21 >= v22 )
            goto LABEL_46;
          do
          {
            while ( 1 )
            {
              v23 = *v21;
              if ( *v21 )
              {
                v24 = v5[7];
                v12 = (*(_DWORD *)(v23 + 8))-- == 1;
                if ( v12 )
                  break;
              }
              if ( ++v21 >= v22 )
                goto LABEL_45;
            }
            sub_15D7BC0(v24, v23);
            ++v21;
          }
          while ( v21 < v22 );
LABEL_45:
          v21 = (__int64 *)v5[8];
          if ( v21 )
LABEL_46:
            sub_186B220(v21 - 1);
        }
        v25 = (__int64 *)v5[6];
        if ( v25 )
        {
          v26 = &v25[*((unsigned int *)v25 - 1)];
          if ( v25 >= v26 )
            goto LABEL_55;
          do
          {
            while ( 1 )
            {
              v27 = *v25;
              if ( *v25 )
              {
                v28 = v5[5];
                v12 = (*(_DWORD *)(v27 + 8))-- == 1;
                if ( v12 )
                  break;
              }
              if ( ++v25 >= v26 )
                goto LABEL_54;
            }
            sub_15D7BC0(v28, v27);
            ++v25;
          }
          while ( v25 < v26 );
LABEL_54:
          v25 = (__int64 *)v5[6];
          if ( v25 )
LABEL_55:
            sub_186B220(v25 - 1);
        }
        v29 = (__int64 *)v5[4];
        if ( v29 )
        {
          v30 = &v29[*((unsigned int *)v29 - 1)];
          if ( v29 >= v30 )
            goto LABEL_64;
          do
          {
            while ( 1 )
            {
              v31 = *v29;
              if ( *v29 )
              {
                v32 = v5[3];
                v12 = (*(_DWORD *)(v31 + 8))-- == 1;
                if ( v12 )
                  break;
              }
              if ( ++v29 >= v30 )
                goto LABEL_63;
            }
            sub_15D7BC0(v32, v31);
            ++v29;
          }
          while ( v29 < v30 );
LABEL_63:
          v29 = (__int64 *)v5[4];
          if ( v29 )
LABEL_64:
            sub_186B220(v29 - 1);
        }
        v33 = (__int64 *)v5[2];
        if ( v33 )
        {
          v34 = &v33[*((unsigned int *)v33 - 1)];
          if ( v33 >= v34 )
            goto LABEL_73;
          do
          {
            while ( 1 )
            {
              v35 = *v33;
              if ( *v33 )
              {
                v36 = v5[1];
                v12 = (*(_DWORD *)(v35 + 8))-- == 1;
                if ( v12 )
                  break;
              }
              if ( ++v33 >= v34 )
                goto LABEL_72;
            }
            sub_15D7BC0(v36, v35);
            ++v33;
          }
          while ( v33 < v34 );
LABEL_72:
          v33 = (__int64 *)v5[2];
          if ( v33 )
LABEL_73:
            sub_186B220(v33 - 1);
        }
        sub_186B220(v5);
      }
      v37 = v3 + 4;
      if ( v4 == v3 + 4 )
        break;
      while ( 1 )
      {
        v3 = v37;
        if ( *v37 > 1u )
          break;
        v37 += 4;
        if ( v4 == v37 )
          goto LABEL_80;
      }
    }
  }
LABEL_80:
  v38 = *(_QWORD **)(a1 + 216);
  v39 = &v38[4 * *(unsigned int *)(a1 + 224)];
  if ( v38 != v39 )
  {
    while ( *v38 <= 1u )
    {
      v38 += 4;
      if ( v39 == v38 )
        goto LABEL_92;
    }
    while ( v39 != v38 )
    {
      v40 = (_QWORD *)v38[2];
      if ( v40 )
      {
        v41 = v40[1];
        if ( v41 )
          sub_186B220((void *)(v41 - 8));
        sub_186B220(v40);
      }
      v42 = v38 + 4;
      if ( v39 == v38 + 4 )
        break;
      while ( 1 )
      {
        v38 = v42;
        if ( *v42 > 1u )
          break;
        v42 += 4;
        if ( v39 == v42 )
          goto LABEL_92;
      }
    }
  }
LABEL_92:
  v43 = *(__int64 **)(a1 + 248);
  if ( v43 )
  {
    v44 = &v43[*((unsigned int *)v43 - 1)];
    if ( v43 >= v44 )
      goto LABEL_100;
    do
    {
      while ( 1 )
      {
        v45 = *v43;
        if ( *v43 )
        {
          v46 = *(_QWORD *)(a1 + 240);
          v12 = (*(_DWORD *)(v45 + 8))-- == 1;
          if ( v12 )
            break;
        }
        if ( ++v43 >= v44 )
          goto LABEL_99;
      }
      sub_15D7BC0(v46, v45);
      ++v43;
    }
    while ( v43 < v44 );
LABEL_99:
    v43 = *(__int64 **)(a1 + 248);
    if ( v43 )
LABEL_100:
      sub_186B220(v43 - 1);
  }
  v47 = *(void **)(a1 + 216);
  if ( v47 )
    sub_186B220(v47);
  v48 = *(void **)(a1 + 192);
  if ( v48 )
    sub_186B220(v48);
  v49 = *(_QWORD **)(a1 + 152);
  while ( v49 )
  {
    v50 = v49;
    v49 = (_QWORD *)*v49;
    operator delete(v50, 0x18u);
  }
  memset(*(void **)(a1 + 136), 0, 8LL * *(_QWORD *)(a1 + 144));
  v51 = *(void **)(a1 + 136);
  *(_QWORD *)(a1 + 160) = 0;
  *(_QWORD *)(a1 + 152) = 0;
  if ( v51 != (void *)(a1 + 184) )
    operator delete(v51, 8LL * *(_QWORD *)(a1 + 144));
  v52 = *(__int64 **)(a1 + 128);
  if ( v52 )
  {
    v53 = &v52[*((unsigned int *)v52 - 1)];
    if ( v52 >= v53 )
      goto LABEL_117;
    do
    {
      while ( 1 )
      {
        v54 = *v52;
        if ( *v52 )
        {
          v55 = *(_QWORD *)(a1 + 120);
          v12 = (*(_DWORD *)(v54 + 8))-- == 1;
          if ( v12 )
            break;
        }
        if ( ++v52 >= v53 )
          goto LABEL_116;
      }
      sub_15D7BC0(v55, v54);
      ++v52;
    }
    while ( v52 < v53 );
LABEL_116:
    v52 = *(__int64 **)(a1 + 128);
    if ( v52 )
LABEL_117:
      sub_186B220(v52 - 1);
  }
  v56 = *(_QWORD *)(a1 + 112);
  if ( v56 )
    sub_186B220((void *)(v56 - 8));
  v57 = *(_QWORD *)(a1 + 104);
  if ( v57 )
    sub_186B220((void *)(v57 - 8));
  result = *(_QWORD *)(a1 + 96);
  if ( result )
    result = sub_186B220((void *)(result - 8));
  v59 = *(__int64 **)(a1 + 88);
  if ( v59 )
  {
    result = *((unsigned int *)v59 - 1);
    v60 = &v59[result];
    if ( v59 >= v60 )
      goto LABEL_132;
    do
    {
      while ( 1 )
      {
        v61 = *v59;
        if ( *v59 )
        {
          v62 = *(_QWORD *)(a1 + 80);
          v12 = (*(_DWORD *)(v61 + 8))-- == 1;
          if ( v12 )
            break;
        }
        if ( ++v59 >= v60 )
          goto LABEL_131;
      }
      result = sub_15D7BC0(v62, v61);
      ++v59;
    }
    while ( v59 < v60 );
LABEL_131:
    v59 = *(__int64 **)(a1 + 88);
    if ( v59 )
LABEL_132:
      result = sub_186B220(v59 - 1);
  }
  v63 = *(__int64 **)(a1 + 72);
  if ( v63 )
  {
    result = *((unsigned int *)v63 - 1);
    v64 = &v63[result];
    if ( v63 >= v64 )
      return sub_186B220(v63 - 1);
    do
    {
      while ( 1 )
      {
        v65 = *v63;
        if ( *v63 )
        {
          v66 = *(_QWORD *)(a1 + 64);
          v12 = (*(_DWORD *)(v65 + 8))-- == 1;
          if ( v12 )
            break;
        }
        if ( ++v63 >= v64 )
          goto LABEL_140;
      }
      result = sub_15D7BC0(v66, v65);
      ++v63;
    }
    while ( v63 < v64 );
LABEL_140:
    v63 = *(__int64 **)(a1 + 72);
    if ( v63 )
      return sub_186B220(v63 - 1);
  }
  return result;
}

