__int64 __fastcall sub_975F60(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rdi
  int v5; // ecx
  __int64 v6; // rsi
  __int64 v7; // rdx
  _DWORD *v8; // rax
  unsigned int v9; // ebx
  unsigned int v10; // ebx
  _QWORD *v11; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // rbx
  __int64 result; // rax
  __int64 v16; // rcx
  int v17; // esi
  int v18; // eax
  __int64 v19; // r13
  __int64 v20; // r12
  int v21; // r15d
  _DWORD *v22; // rbp
  unsigned int v23; // r11d
  __int64 v24; // r9
  __int64 v25; // r12
  __int64 v26; // r11
  _DWORD *v27; // rcx
  _DWORD *v28; // rax
  _DWORD *v29; // rdi
  int v30; // edx
  int v31; // eax
  _QWORD *v32; // rax
  int v33; // r10d
  _QWORD *v34; // rdx
  _DWORD *v35; // rcx
  _DWORD *v36; // r8
  __int64 v37; // rax
  _DWORD *v38; // rdx
  _DWORD *v39; // rax
  __int64 v40; // rdx
  unsigned int v41; // esi
  size_t v42; // [rsp+8h] [rbp-60h]
  unsigned int v43; // [rsp+8h] [rbp-60h]
  size_t v44; // [rsp+10h] [rbp-58h]
  int v45; // [rsp+18h] [rbp-50h]

  if ( !*(_DWORD *)(a1 + 12) && !*(_DWORD *)(a1 + 16) )
    goto LABEL_20;
  v4 = *(_DWORD **)a1;
  v5 = 0;
  v6 = *(unsigned int *)(a1 + 8);
  v7 = *(_QWORD *)a1 + 12 * v6;
  v8 = *(_DWORD **)a1;
  if ( *(_QWORD *)a1 != v7 )
  {
    do
    {
      while ( v8[1] )
      {
        v8[1] = 0;
        v8 += 3;
        if ( (_DWORD *)v7 == v8 )
          goto LABEL_8;
      }
      v8 += 3;
      ++v5;
    }
    while ( (_DWORD *)v7 != v8 );
LABEL_8:
    if ( (unsigned int)v6 > 0x10 && 3 * (int)v6 < (unsigned int)(4 * v5) )
    {
      if ( v4 )
      {
        sub_186B220(v4);
        v9 = *(_DWORD *)(a1 + 8);
        *(_QWORD *)a1 = 0;
        v10 = v9 >> 1;
        *(_DWORD *)(a1 + 8) = v10;
        v11 = (_QWORD *)sub_186B270(12LL * v10);
        v12 = (__int64)v11;
        if ( !v10 )
        {
LABEL_18:
          *(_QWORD *)a1 = v12;
          goto LABEL_19;
        }
        if ( v10 == 1 )
        {
LABEL_17:
          *v11 = 0;
          goto LABEL_18;
        }
      }
      else
      {
        v41 = (unsigned int)v6 >> 1;
        *(_QWORD *)a1 = 0;
        *(_DWORD *)(a1 + 8) = v41;
        v10 = v41;
        v12 = sub_186B270(12LL * v41);
      }
      v13 = (_QWORD *)v12;
      do
      {
        *v13 = 0;
        v13 += 3;
        *(_QWORD *)((char *)v13 - 12) = 0;
      }
      while ( v13 != (_QWORD *)(v12 + 24LL * (v10 >> 1)) );
      if ( (v10 & 1) == 0 )
        goto LABEL_18;
      v11 = (_QWORD *)(v12 + 12LL * (v10 & 0x7FFFFFFE));
      goto LABEL_17;
    }
  }
LABEL_19:
  *(_QWORD *)(a1 + 12) = 0;
LABEL_20:
  v14 = *(_QWORD *)a2;
  result = 3LL * *(unsigned int *)(a2 + 8);
  v16 = *(_QWORD *)a2 + 12LL * *(unsigned int *)(a2 + 8);
  if ( *(_QWORD *)a2 == v16 )
    return result;
  while ( *(_DWORD *)(v14 + 4) != 2 )
  {
    v14 += 12;
    if ( v16 == v14 )
      return result;
  }
  if ( v16 == v14 )
    return result;
  v17 = 0;
  v18 = 0;
  v19 = *(_QWORD *)a2 + 12LL * *(unsigned int *)(a2 + 8);
  while ( 2 )
  {
    v20 = *(unsigned int *)(a1 + 8);
    v21 = *(_DWORD *)(v14 + 8);
    if ( 3 * (int)v20 < (unsigned int)(4 * (v17 + v18)) )
    {
      v42 = 12LL * (unsigned int)(2 * v20);
      v44 = v42;
      v32 = (_QWORD *)sub_186B270(v42);
      v33 = 2 * v20;
      v24 = v42;
      v22 = v32;
      if ( 2 * (_DWORD)v20 )
      {
        v34 = &v32[3 * (v20 & 0x7FFFFFFF)];
        do
        {
          *v32 = 0;
          v32 += 3;
          *(_QWORD *)((char *)v32 - 12) = 0;
        }
        while ( v32 != v34 );
      }
      v35 = *(_DWORD **)a1;
      v23 = v33 - 1;
      v36 = (_DWORD *)(*(_QWORD *)a1 + 12LL * *(unsigned int *)(a1 + 8));
      v25 = (__int64)&v22[v42 / 4];
      if ( *(_DWORD **)a1 != v36 )
      {
        do
        {
          while ( v35[1] != 2 )
          {
            v35 += 3;
            if ( v36 == v35 )
              goto LABEL_67;
          }
          v37 = 12LL * (*v35 & v23);
          v38 = &v22[(unsigned __int64)v37 / 4];
          if ( v42 == v37 )
          {
LABEL_72:
            if ( v22 == v38 )
            {
LABEL_79:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v39 = v22;
            while ( v39[1] )
            {
              v39 += 3;
              if ( v38 == v39 )
                goto LABEL_79;
            }
          }
          else
          {
            v39 = &v22[(unsigned __int64)v37 / 4];
            while ( v39[1] )
            {
              v39 += 3;
              if ( (_DWORD *)v25 == v39 )
                goto LABEL_72;
            }
          }
          v40 = *(_QWORD *)v35;
          v35 += 3;
          *(_QWORD *)v39 = v40;
          v39[2] = *(v35 - 1);
        }
        while ( v36 != v35 );
LABEL_67:
        v36 = *(_DWORD **)a1;
      }
      if ( v36 )
      {
        v45 = v33;
        v43 = v33 - 1;
        sub_186B220(v36);
        v33 = v45;
        v24 = v44;
        v23 = v43;
      }
      *(_QWORD *)a1 = v22;
      v17 = 0;
      *(_DWORD *)(a1 + 8) = v33;
      *(_DWORD *)(a1 + 16) = 0;
    }
    else
    {
      v22 = *(_DWORD **)a1;
      v23 = v20 - 1;
      v24 = 12 * v20;
      v25 = *(_QWORD *)a1 + 12 * v20;
    }
    v26 = v21 & v23;
    v27 = &v22[3 * v26];
    if ( 12 * v26 != v24 )
    {
      v28 = &v22[3 * v26];
      v29 = nullptr;
      while ( 1 )
      {
        v30 = v28[1];
        if ( v30 == 2 )
        {
          if ( v21 == *v28 && v21 == v28[2] )
          {
            v28[2] = v21;
            v28[1] = 2;
            goto LABEL_37;
          }
        }
        else
        {
          if ( !v30 )
          {
            if ( v29 )
              goto LABEL_53;
            v29 = v28;
            goto LABEL_54;
          }
          v29 = v28;
        }
        v28 += 3;
        if ( v28 == (_DWORD *)v25 )
          goto LABEL_46;
      }
    }
    v29 = nullptr;
    while ( 1 )
    {
LABEL_46:
      if ( v27 == v22 )
      {
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      v31 = v22[1];
      if ( v31 == 2 )
        break;
      if ( !v31 )
      {
        if ( v29 )
LABEL_53:
          *(_DWORD *)(a1 + 16) = v17 - 1;
        else
          v29 = v22;
LABEL_54:
        v29[2] = v21;
        v29[1] = 2;
        *v29 = v21;
        ++*(_DWORD *)(a1 + 12);
LABEL_37:
        result = v14 + 12;
        if ( v19 != v14 + 12 )
          goto LABEL_40;
        return result;
      }
      v29 = v22;
LABEL_45:
      v22 += 3;
    }
    if ( v21 != *v22 || v21 != v22[2] )
      goto LABEL_45;
    result = v14 + 12;
    v22[2] = v21;
    v22[1] = 2;
    if ( v19 == v14 + 12 )
      return result;
LABEL_40:
    while ( 1 )
    {
      v14 = result;
      if ( *(_DWORD *)(result + 4) == 2 )
        break;
      result += 12;
      if ( v19 == result )
        return result;
    }
    if ( v19 != result )
    {
      v18 = *(_DWORD *)(a1 + 12);
      v17 = *(_DWORD *)(a1 + 16);
      continue;
    }
    return result;
  }
}

