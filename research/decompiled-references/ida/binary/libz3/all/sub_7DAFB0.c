__int64 __fastcall sub_7DAFB0(__int64 a1)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // r12
  __int64 v4; // rsi
  __int64 v5; // rdi
  bool v6; // zf
  _QWORD *v7; // rbx
  _QWORD *v8; // r12
  __int64 v9; // rsi
  __int64 v10; // rdi
  void **v11; // r12
  __int64 **v12; // r13
  __int64 *v13; // r15
  __int64 *v14; // rbx
  __int64 *v15; // r14
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rdi
  __int64 *v20; // r15
  __int64 *v21; // rbx
  __int64 *v22; // r14
  __int64 v23; // rsi
  __int64 v24; // rdi
  __int64 v25; // rsi
  __int64 v26; // rdi
  __int64 *v27; // r15
  __int64 *v28; // rbx
  __int64 *v29; // r14
  __int64 v30; // rsi
  __int64 v31; // rdi
  __int64 result; // rax
  _QWORD *v33; // r12
  _QWORD *v34; // r13
  __int64 *v35; // r14
  __int64 *v36; // rbx
  __int64 *v37; // r15
  __int64 v38; // rsi
  __int64 v39; // rdi
  __int64 v40; // rsi
  void *v41; // rdi
  __int64 v42; // rdx
  int v43; // ecx
  unsigned int v44; // r12d
  size_t v45; // rbx
  _OWORD *v46; // rdx
  _OWORD *v47; // rcx
  size_t v48; // rsi
  void **v49; // [rsp+8h] [rbp-40h]

  v2 = *(_QWORD **)(a1 + 152);
  *(_QWORD *)(a1 + 128) = 0;
  *(_DWORD *)(a1 + 136) = 0;
  if ( v2 )
  {
    v3 = &v2[*((unsigned int *)v2 - 1)];
    if ( v2 >= v3 )
      goto LABEL_9;
    do
    {
      while ( 1 )
      {
        v4 = *v2;
        if ( *v2 )
        {
          v5 = *(_QWORD *)(a1 + 144);
          v6 = (*(_DWORD *)(v4 + 8))-- == 1;
          if ( v6 )
            break;
        }
        if ( ++v2 >= v3 )
          goto LABEL_8;
      }
      sub_15D7BC0(v5, v4);
      ++v2;
    }
    while ( v2 < v3 );
LABEL_8:
    v2 = *(_QWORD **)(a1 + 152);
    if ( v2 )
LABEL_9:
      *((_DWORD *)v2 - 1) = 0;
  }
  v7 = *(_QWORD **)(a1 + 168);
  if ( v7 )
  {
    v8 = &v7[*((unsigned int *)v7 - 1)];
    if ( v7 >= v8 )
      goto LABEL_18;
    do
    {
      while ( 1 )
      {
        v9 = *v7;
        if ( *v7 )
        {
          v10 = *(_QWORD *)(a1 + 160);
          v6 = (*(_DWORD *)(v9 + 8))-- == 1;
          if ( v6 )
            break;
        }
        if ( ++v7 >= v8 )
          goto LABEL_17;
      }
      sub_15D7BC0(v10, v9);
      ++v7;
    }
    while ( v7 < v8 );
LABEL_17:
    v7 = *(_QWORD **)(a1 + 168);
    if ( v7 )
LABEL_18:
      *((_DWORD *)v7 - 1) = 0;
  }
  v11 = *(void ***)(a1 + 256);
  if ( v11 )
  {
    v49 = &v11[*((unsigned int *)v11 - 1)];
    if ( v11 == v49 )
      goto LABEL_64;
    do
    {
      v12 = (__int64 **)*v11;
      if ( *v11 )
      {
        v13 = *v12;
        if ( *v12 )
        {
          v14 = (__int64 *)v13[4];
          if ( v14 )
          {
            v15 = &v14[*((unsigned int *)v14 - 1)];
            if ( v14 >= v15 )
              goto LABEL_31;
            do
            {
              while ( 1 )
              {
                v16 = *v14;
                if ( *v14 )
                {
                  v17 = v13[3];
                  v6 = (*(_DWORD *)(v16 + 8))-- == 1;
                  if ( v6 )
                    break;
                }
                if ( ++v14 >= v15 )
                  goto LABEL_30;
              }
              sub_15D7BC0(v17, v16);
              ++v14;
            }
            while ( v14 < v15 );
LABEL_30:
            v14 = (__int64 *)v13[4];
            if ( v14 )
LABEL_31:
              sub_186B220(v14 - 1);
          }
          v18 = *v13;
          if ( *v13 )
          {
            v19 = v13[1];
            v6 = (*(_DWORD *)(v18 + 8))-- == 1;
            if ( v6 )
              sub_15D7BC0(v19, v18);
          }
          sub_186B220(v13);
        }
        v20 = v12[1];
        if ( v20 )
        {
          v21 = (__int64 *)v20[4];
          if ( v21 )
          {
            v22 = &v21[*((unsigned int *)v21 - 1)];
            if ( v21 >= v22 )
              goto LABEL_45;
            do
            {
              while ( 1 )
              {
                v23 = *v21;
                if ( *v21 )
                {
                  v24 = v20[3];
                  v6 = (*(_DWORD *)(v23 + 8))-- == 1;
                  if ( v6 )
                    break;
                }
                if ( ++v21 >= v22 )
                  goto LABEL_44;
              }
              sub_15D7BC0(v24, v23);
              ++v21;
            }
            while ( v21 < v22 );
LABEL_44:
            v21 = (__int64 *)v20[4];
            if ( v21 )
LABEL_45:
              sub_186B220(v21 - 1);
          }
          v25 = *v20;
          if ( *v20 )
          {
            v26 = v20[1];
            v6 = (*(_DWORD *)(v25 + 8))-- == 1;
            if ( v6 )
              sub_15D7BC0(v26, v25);
          }
          sub_186B220(v20);
        }
        v27 = v12[2];
        if ( v27 )
        {
          v28 = (__int64 *)v27[1];
          if ( v28 )
          {
            v29 = &v28[*((unsigned int *)v28 - 1)];
            if ( v28 >= v29 )
              goto LABEL_59;
            do
            {
              while ( 1 )
              {
                v30 = *v28;
                if ( *v28 )
                {
                  v31 = *v27;
                  v6 = (*(_DWORD *)(v30 + 8))-- == 1;
                  if ( v6 )
                    break;
                }
                if ( ++v28 >= v29 )
                  goto LABEL_58;
              }
              sub_15D7BC0(v31, v30);
              ++v28;
            }
            while ( v28 < v29 );
LABEL_58:
            v28 = (__int64 *)v27[1];
            if ( v28 )
LABEL_59:
              sub_186B220(v28 - 1);
          }
          sub_186B220(v27);
        }
        sub_186B220(v12);
      }
      ++v11;
    }
    while ( v49 != v11 );
    v49 = *(void ***)(a1 + 256);
    if ( v49 )
LABEL_64:
      *((_DWORD *)v49 - 1) = 0;
  }
  result = *(_QWORD *)(a1 + 176);
  v33 = (_QWORD *)result;
  v34 = (_QWORD *)(result + 16LL * *(unsigned int *)(a1 + 184));
  if ( (_QWORD *)result == v34 )
  {
    if ( *(_DWORD *)(a1 + 188) )
      goto LABEL_101;
  }
  else
  {
    while ( *v33 <= 1u )
    {
      v33 += 2;
      if ( v34 == v33 )
        goto LABEL_106;
    }
    if ( v34 == v33 )
    {
LABEL_106:
      if ( !*(_DWORD *)(a1 + 188) )
        goto LABEL_87;
      v41 = *(void **)(a1 + 176);
      v40 = *(unsigned int *)(a1 + 184);
      v42 = result + 16 * v40;
      goto LABEL_89;
    }
    do
    {
      v35 = (__int64 *)v33[1];
      if ( v35 )
      {
        v36 = (__int64 *)v35[1];
        if ( v36 )
        {
          v37 = &v36[*((unsigned int *)v36 - 1)];
          if ( v36 >= v37 )
            goto LABEL_79;
          do
          {
            while ( 1 )
            {
              v38 = *v36;
              if ( *v36 )
              {
                v39 = *v35;
                v6 = (*(_DWORD *)(v38 + 8))-- == 1;
                if ( v6 )
                  break;
              }
              if ( ++v36 >= v37 )
                goto LABEL_78;
            }
            sub_15D7BC0(v39, v38);
            ++v36;
          }
          while ( v36 < v37 );
LABEL_78:
          v36 = (__int64 *)v35[1];
          if ( v36 )
LABEL_79:
            sub_186B220(v36 - 1);
        }
        sub_186B220(v35);
      }
      result = (__int64)(v33 + 2);
      if ( v34 == v33 + 2 )
        break;
      while ( 1 )
      {
        v33 = (_QWORD *)result;
        if ( *(_QWORD *)result > 1u )
          break;
        result += 16;
        if ( v34 == (_QWORD *)result )
          goto LABEL_86;
      }
    }
    while ( v34 != (_QWORD *)result );
LABEL_86:
    if ( *(_DWORD *)(a1 + 188) )
      goto LABEL_88;
  }
LABEL_87:
  if ( !*(_DWORD *)(a1 + 192) )
    return result;
LABEL_88:
  result = *(_QWORD *)(a1 + 176);
  v40 = *(unsigned int *)(a1 + 184);
  v41 = (void *)result;
  v42 = result + 16 * v40;
  if ( result != v42 )
  {
LABEL_89:
    v43 = 0;
    do
    {
      while ( *(_QWORD *)result )
      {
        *(_QWORD *)result = 0;
        result += 16;
        if ( result == v42 )
          goto LABEL_93;
      }
      result += 16;
      ++v43;
    }
    while ( result != v42 );
LABEL_93:
    if ( (unsigned int)v40 <= 0x10 )
      goto LABEL_101;
    result = (unsigned int)(3 * v40);
    if ( (unsigned int)result >= 4 * v43 )
      goto LABEL_101;
    if ( v41 )
    {
      sub_186B220(v41);
      v44 = *(_DWORD *)(a1 + 184);
      *(_QWORD *)(a1 + 176) = 0;
      v44 >>= 1;
      *(_DWORD *)(a1 + 184) = v44;
      v45 = v44;
      result = sub_186B270(v45 * 16);
      v46 = (_OWORD *)result;
      if ( !v44 )
      {
LABEL_100:
        *(_QWORD *)(a1 + 176) = v46;
        goto LABEL_101;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 176) = 0;
      v48 = (unsigned int)v40 >> 1;
      *(_DWORD *)(a1 + 184) = v48;
      v45 = v48;
      v46 = (_OWORD *)sub_186B270(16 * v48);
    }
    v47 = &v46[v45];
    result = (__int64)v46;
    if ( ((v45 * 16) & 0x10) == 0 || (result = (__int64)(v46 + 1), *v46 = 0, v47 != v46 + 1) )
    {
      do
      {
        *(_OWORD *)result = 0;
        result += 32;
        *(_OWORD *)(result - 16) = 0;
      }
      while ( v47 != (_OWORD *)result );
    }
    goto LABEL_100;
  }
LABEL_101:
  *(_QWORD *)(a1 + 188) = 0;
  return result;
}

