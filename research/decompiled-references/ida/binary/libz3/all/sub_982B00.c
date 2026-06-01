__int64 __fastcall sub_982B00(__int64 a1)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // r12
  __int64 v4; // rsi
  __int64 v5; // rdi
  bool v6; // zf
  __int64 v7; // rax
  char *v8; // rdi
  int v9; // ecx
  __int64 v10; // rsi
  char *v11; // rax
  char *v12; // rdx
  unsigned int v13; // ebx
  unsigned int v14; // ebx
  __int64 v15; // rax
  __int64 v16; // rdx
  int v17; // ecx
  __int64 v18; // rdx
  char *v19; // rdi
  int v20; // edx
  __int64 v21; // rsi
  char *v22; // rcx
  char *v23; // rax
  unsigned int v24; // ebx
  __int64 v25; // r12
  __int64 v26; // rax
  _QWORD *v27; // rdx
  __int64 result; // rax
  char *v29; // rdi
  int v30; // ecx
  __int64 v31; // rsi
  char *v32; // rdx
  unsigned int v33; // r12d
  size_t v34; // rbx
  _OWORD *v35; // rcx
  _OWORD *v36; // rdx
  _QWORD *v37; // rbx
  _QWORD *v38; // r12
  __int64 v39; // rsi
  __int64 v40; // rdi
  unsigned int v41; // esi

  v2 = *(_QWORD **)(a1 + 280);
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
          v5 = *(_QWORD *)(a1 + 272);
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
    v2 = *(_QWORD **)(a1 + 280);
    if ( v2 )
LABEL_9:
      *((_DWORD *)v2 - 1) = 0;
  }
  v7 = *(_QWORD *)(a1 + 192);
  if ( v7 )
    *(_DWORD *)(v7 - 4) = 0;
  if ( *(_DWORD *)(a1 + 236) || *(_DWORD *)(a1 + 240) )
  {
    v8 = *(char **)(a1 + 224);
    v9 = 0;
    v10 = *(unsigned int *)(a1 + 232);
    v11 = v8;
    v12 = &v8[32 * v10];
    if ( v8 == v12 )
      goto LABEL_31;
    do
    {
      while ( *(_QWORD *)v11 )
      {
        *(_QWORD *)v11 = 0;
        v11 += 32;
        if ( v12 == v11 )
          goto LABEL_19;
      }
      v11 += 32;
      ++v9;
    }
    while ( v12 != v11 );
LABEL_19:
    if ( (unsigned int)v10 <= 0x10 || 3 * (int)v10 >= (unsigned int)(4 * v9) )
      goto LABEL_31;
    if ( v8 )
    {
      sub_186B220(v8);
      v13 = *(_DWORD *)(a1 + 232);
      *(_QWORD *)(a1 + 224) = 0;
      v14 = v13 >> 1;
      *(_DWORD *)(a1 + 232) = v14;
      v15 = sub_186B270(32LL * v14);
      if ( !v14 )
        goto LABEL_30;
      if ( v14 - 1 <= 2 )
      {
        v17 = v14;
        v18 = v15;
        goto LABEL_27;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 224) = 0;
      v14 = (unsigned int)v10 >> 1;
      *(_DWORD *)(a1 + 232) = (unsigned int)v10 >> 1;
      v15 = sub_186B270(32LL * ((unsigned int)v10 >> 1));
    }
    v16 = v15;
    do
    {
      *(_DWORD *)(v16 + 24) = 0;
      v16 += 128;
      *(_OWORD *)(v16 - 128) = 0;
      *(_OWORD *)(v16 - 96) = 0;
      *(_OWORD *)(v16 - 64) = 0;
      *(_OWORD *)(v16 - 32) = 0;
      *(_DWORD *)(v16 - 72) = 0;
      *(_DWORD *)(v16 - 40) = 0;
      *(_DWORD *)(v16 - 8) = 0;
    }
    while ( v16 != v15 + ((unsigned __int64)(v14 >> 2) << 7) );
    v17 = v14 & 3;
    v18 = v15 + 32LL * (v14 & 0x7FFFFFFC);
    if ( (v14 & 3) != 0 )
    {
LABEL_27:
      *(_DWORD *)(v18 + 24) = 0;
      *(_OWORD *)v18 = 0;
      if ( v17 != 1 )
      {
        *(_DWORD *)(v18 + 56) = 0;
        *(_OWORD *)(v18 + 32) = 0;
        if ( v17 != 2 )
        {
          *(_DWORD *)(v18 + 88) = 0;
          *(_OWORD *)(v18 + 64) = 0;
        }
      }
    }
LABEL_30:
    *(_QWORD *)(a1 + 224) = v15;
LABEL_31:
    *(_QWORD *)(a1 + 236) = 0;
  }
  if ( *(_DWORD *)(a1 + 260) || *(_DWORD *)(a1 + 264) )
  {
    v19 = *(char **)(a1 + 248);
    v20 = 0;
    v21 = *(unsigned int *)(a1 + 256);
    v22 = &v19[24 * v21];
    v23 = v19;
    if ( v19 == v22 )
      goto LABEL_46;
    do
    {
      while ( *((_DWORD *)v23 + 1) )
      {
        *((_DWORD *)v23 + 1) = 0;
        v23 += 24;
        if ( v22 == v23 )
          goto LABEL_39;
      }
      v23 += 24;
      ++v20;
    }
    while ( v22 != v23 );
LABEL_39:
    if ( (unsigned int)v21 <= 0x10 || 3 * (int)v21 >= (unsigned int)(4 * v20) )
      goto LABEL_46;
    if ( v19 )
    {
      sub_186B220(v19);
      v24 = *(_DWORD *)(a1 + 256);
      *(_QWORD *)(a1 + 248) = 0;
      v24 >>= 1;
      v25 = v24;
      *(_DWORD *)(a1 + 256) = v24;
      v26 = sub_186B270(24LL * v24);
      if ( !v24 )
      {
LABEL_45:
        *(_QWORD *)(a1 + 248) = v26;
LABEL_46:
        *(_QWORD *)(a1 + 260) = 0;
        goto LABEL_47;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 248) = 0;
      v25 = (unsigned int)v21 >> 1;
      *(_DWORD *)(a1 + 256) = (unsigned int)v21 >> 1;
      v26 = sub_186B270(24 * v25);
    }
    v27 = (_QWORD *)v26;
    do
    {
      *v27 = 0;
      v27 += 3;
      *((_DWORD *)v27 - 4) = -2;
    }
    while ( v27 != (_QWORD *)(v26 + 24 * v25) );
    goto LABEL_45;
  }
LABEL_47:
  if ( !*(_DWORD *)(a1 + 212) )
  {
    result = *(unsigned int *)(a1 + 216);
    if ( !(_DWORD)result )
      goto LABEL_63;
  }
  v29 = *(char **)(a1 + 200);
  v30 = 0;
  v31 = *(unsigned int *)(a1 + 208);
  result = (__int64)v29;
  v32 = &v29[16 * v31];
  if ( v29 != v32 )
  {
    do
    {
      while ( *(_QWORD *)result )
      {
        *(_QWORD *)result = 0;
        result += 16;
        if ( v32 == (char *)result )
          goto LABEL_54;
      }
      result += 16;
      ++v30;
    }
    while ( v32 != (char *)result );
LABEL_54:
    if ( (unsigned int)v31 > 0x10 )
    {
      result = (unsigned int)(3 * v31);
      if ( (unsigned int)result < 4 * v30 )
      {
        if ( v29 )
        {
          sub_186B220(v29);
          v33 = *(_DWORD *)(a1 + 208);
          *(_QWORD *)(a1 + 200) = 0;
          v33 >>= 1;
          *(_DWORD *)(a1 + 208) = v33;
          v34 = 16LL * v33;
          result = sub_186B270(v34);
          if ( !v33 )
          {
LABEL_61:
            *(_QWORD *)(a1 + 200) = result;
            goto LABEL_62;
          }
        }
        else
        {
          *(_QWORD *)(a1 + 200) = 0;
          v41 = (unsigned int)v31 >> 1;
          *(_DWORD *)(a1 + 208) = v41;
          v34 = 16LL * v41;
          result = sub_186B270(v34);
        }
        v35 = (_OWORD *)(result + v34);
        v36 = (_OWORD *)result;
        if ( (v34 & 0x10) == 0 || (v36 = (_OWORD *)(result + 16), *(_OWORD *)result = 0, (_OWORD *)(result + 16) != v35) )
        {
          do
          {
            *v36 = 0;
            v36 += 2;
            *(v36 - 1) = 0;
          }
          while ( v36 != v35 );
        }
        goto LABEL_61;
      }
    }
  }
LABEL_62:
  *(_QWORD *)(a1 + 212) = 0;
LABEL_63:
  v37 = *(_QWORD **)(a1 + 296);
  if ( v37 )
  {
    result = *((unsigned int *)v37 - 1);
    v38 = &v37[result];
    if ( v37 >= v38 )
      goto LABEL_71;
    do
    {
      while ( 1 )
      {
        v39 = *v37;
        if ( *v37 )
        {
          v40 = *(_QWORD *)(a1 + 288);
          v6 = (*(_DWORD *)(v39 + 8))-- == 1;
          if ( v6 )
            break;
        }
        if ( ++v37 >= v38 )
          goto LABEL_70;
      }
      result = sub_15D7BC0(v40, v39);
      ++v37;
    }
    while ( v37 < v38 );
LABEL_70:
    v37 = *(_QWORD **)(a1 + 296);
    if ( v37 )
LABEL_71:
      *((_DWORD *)v37 - 1) = 0;
  }
  return result;
}

