__int64 __fastcall sub_D814A0(__int64 a1)
{
  __int64 *v2; // rbx
  __int64 *v3; // rbp
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rsi
  bool v7; // zf
  __int64 *v8; // rax
  __int64 *v9; // rbx
  __int64 *v10; // rbp
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rsi
  __int64 *v15; // rax
  char *v16; // rdi
  int v17; // ecx
  __int64 v18; // rsi
  char *v19; // rax
  char *v20; // rdx
  unsigned int v21; // ebp
  size_t v22; // rbx
  _OWORD *v23; // rdx
  _OWORD *v24; // rcx
  _OWORD *v25; // rax
  __int64 result; // rax
  char *v27; // rdi
  int v28; // ecx
  __int64 v29; // rsi
  char *v30; // rdx
  unsigned int v31; // ebx
  unsigned int v32; // ebx
  __int64 v33; // rcx
  _QWORD *v34; // rbx
  _QWORD *v35; // rbp
  __int64 v36; // rsi
  __int64 v37; // rdi
  size_t v38; // rsi

  sub_CA7120(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 8), a1 + 528);
  sub_CA7120(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 8), a1 + 552);
  v2 = *(__int64 **)(a1 + 576);
  v3 = &v2[2 * *(unsigned int *)(a1 + 584)];
  if ( v2 != v3 )
  {
    while ( (unsigned __int64)*v2 <= 1 )
    {
      v2 += 2;
      if ( v3 == v2 )
        goto LABEL_18;
    }
    if ( v3 != v2 )
    {
      v4 = *v2;
      v5 = *(_QWORD *)(a1 + 8);
      if ( *v2 )
        goto LABEL_16;
      while ( 1 )
      {
        v6 = v2[1];
        if ( v6 )
        {
          v7 = (*(_DWORD *)(v6 + 8))-- == 1;
          if ( v7 )
            sub_15D7BC0(v5, v6);
        }
        v8 = v2 + 2;
        if ( v3 == v2 + 2 )
          break;
        while ( 1 )
        {
          v4 = *v8;
          v2 = v8;
          if ( (unsigned __int64)*v8 > 1 )
            break;
          v8 += 2;
          if ( v3 == v8 )
            goto LABEL_18;
        }
        if ( v3 == v8 )
          break;
        v5 = *(_QWORD *)(a1 + 8);
LABEL_16:
        v7 = (*(_DWORD *)(v4 + 8))-- == 1;
        if ( v7 )
        {
          sub_15D7BC0(v5, v4);
          v5 = *(_QWORD *)(a1 + 8);
        }
      }
    }
  }
LABEL_18:
  v9 = *(__int64 **)(a1 + 600);
  v10 = &v9[3 * *(unsigned int *)(a1 + 608)];
  if ( v9 != v10 )
  {
    while ( (unsigned __int64)*v9 <= 1 )
    {
      v9 += 3;
      if ( v10 == v9 )
        goto LABEL_38;
    }
    if ( v10 != v9 )
    {
      v11 = *v9;
      v12 = *(_QWORD *)(a1 + 8);
      if ( *v9 )
        goto LABEL_36;
      while ( 1 )
      {
        v13 = v9[1];
        if ( v13 )
        {
          v7 = (*(_DWORD *)(v13 + 8))-- == 1;
          if ( v7 )
          {
            sub_15D7BC0(v12, v13);
            v12 = *(_QWORD *)(a1 + 8);
          }
        }
        v14 = v9[2];
        if ( v14 )
        {
          v7 = (*(_DWORD *)(v14 + 8))-- == 1;
          if ( v7 )
            sub_15D7BC0(v12, v14);
        }
        v15 = v9 + 3;
        if ( v10 == v9 + 3 )
          break;
        while ( 1 )
        {
          v11 = *v15;
          v9 = v15;
          if ( (unsigned __int64)*v15 > 1 )
            break;
          v15 += 3;
          if ( v10 == v15 )
            goto LABEL_38;
        }
        if ( v10 == v15 )
          break;
        v12 = *(_QWORD *)(a1 + 8);
LABEL_36:
        v7 = (*(_DWORD *)(v11 + 8))-- == 1;
        if ( v7 )
        {
          sub_15D7BC0(v12, v11);
          v12 = *(_QWORD *)(a1 + 8);
        }
      }
    }
  }
LABEL_38:
  if ( *(_DWORD *)(a1 + 588) || *(_DWORD *)(a1 + 592) )
  {
    v16 = *(char **)(a1 + 576);
    v17 = 0;
    v18 = *(unsigned int *)(a1 + 584);
    v19 = v16;
    v20 = &v16[16 * v18];
    if ( v16 == v20 )
      goto LABEL_53;
    do
    {
      while ( *(_QWORD *)v19 )
      {
        *(_QWORD *)v19 = 0;
        v19 += 16;
        if ( v20 == v19 )
          goto LABEL_45;
      }
      v19 += 16;
      ++v17;
    }
    while ( v20 != v19 );
LABEL_45:
    if ( (unsigned int)v18 <= 0x10 || 3 * (int)v18 >= (unsigned int)(4 * v17) )
      goto LABEL_53;
    if ( v16 )
    {
      sub_186B220(v16);
      v21 = *(_DWORD *)(a1 + 584);
      *(_QWORD *)(a1 + 576) = 0;
      v21 >>= 1;
      *(_DWORD *)(a1 + 584) = v21;
      v22 = v21;
      v23 = (_OWORD *)sub_186B270(v22 * 16);
      if ( !v21 )
      {
LABEL_52:
        *(_QWORD *)(a1 + 576) = v23;
LABEL_53:
        *(_QWORD *)(a1 + 588) = 0;
        goto LABEL_54;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 576) = 0;
      v38 = (unsigned int)v18 >> 1;
      *(_DWORD *)(a1 + 584) = v38;
      v22 = v38;
      v23 = (_OWORD *)sub_186B270(16 * v38);
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
    goto LABEL_52;
  }
LABEL_54:
  if ( !*(_DWORD *)(a1 + 612) )
  {
    result = *(unsigned int *)(a1 + 616);
    if ( !(_DWORD)result )
      goto LABEL_73;
  }
  v27 = *(char **)(a1 + 600);
  v28 = 0;
  v29 = *(unsigned int *)(a1 + 608);
  v30 = &v27[24 * v29];
  result = (__int64)v27;
  if ( v27 != v30 )
  {
    do
    {
      while ( *(_QWORD *)result )
      {
        *(_QWORD *)result = 0;
        result += 24;
        if ( v30 == (char *)result )
          goto LABEL_61;
      }
      result += 24;
      ++v28;
    }
    while ( v30 != (char *)result );
LABEL_61:
    if ( (unsigned int)v29 > 0x10 )
    {
      result = (unsigned int)(3 * v29);
      if ( (unsigned int)result < 4 * v28 )
      {
        if ( v27 )
        {
          sub_186B220(v27);
          v31 = *(_DWORD *)(a1 + 608);
          *(_QWORD *)(a1 + 600) = 0;
          v32 = v31 >> 1;
          *(_DWORD *)(a1 + 608) = v32;
          result = sub_186B270(24LL * v32);
          v33 = result;
          if ( !v32 )
          {
LABEL_71:
            *(_QWORD *)(a1 + 600) = v33;
            goto LABEL_72;
          }
          if ( v32 == 1 )
          {
LABEL_70:
            *(_QWORD *)(result + 16) = 0;
            *(_OWORD *)result = 0;
            goto LABEL_71;
          }
        }
        else
        {
          *(_QWORD *)(a1 + 600) = 0;
          v32 = (unsigned int)v29 >> 1;
          *(_DWORD *)(a1 + 608) = (unsigned int)v29 >> 1;
          v33 = sub_186B270(24LL * ((unsigned int)v29 >> 1));
        }
        result = v33;
        do
        {
          *(_OWORD *)result = 0;
          result += 48;
          *(_OWORD *)(result - 32) = 0;
          *(_OWORD *)(result - 16) = 0;
        }
        while ( v33 + 48LL * (v32 >> 1) != result );
        if ( (v32 & 1) == 0 )
          goto LABEL_71;
        result = v33 + 24LL * (v32 & 0x7FFFFFFE);
        goto LABEL_70;
      }
    }
  }
LABEL_72:
  *(_QWORD *)(a1 + 612) = 0;
LABEL_73:
  v34 = *(_QWORD **)(a1 + 632);
  if ( v34 )
  {
    result = *((unsigned int *)v34 - 1);
    v35 = &v34[result];
    if ( v34 >= v35 )
      goto LABEL_81;
    do
    {
      while ( 1 )
      {
        v36 = *v34;
        if ( *v34 )
        {
          v37 = *(_QWORD *)(a1 + 624);
          v7 = (*(_DWORD *)(v36 + 8))-- == 1;
          if ( v7 )
            break;
        }
        if ( ++v34 >= v35 )
          goto LABEL_80;
      }
      result = sub_15D7BC0(v37, v36);
      ++v34;
    }
    while ( v34 < v35 );
LABEL_80:
    v34 = *(_QWORD **)(a1 + 632);
    if ( v34 )
LABEL_81:
      *((_DWORD *)v34 - 1) = 0;
  }
  return result;
}

