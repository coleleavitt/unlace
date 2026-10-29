__int64 __fastcall sub_616E40(__int64 a1, __int64 a2)
{
  __int64 v4; // r13
  int v5; // r9d
  __int64 *v6; // rbx
  __int64 v7; // r13
  int v8; // esi
  __int64 v9; // r14
  __int64 *v10; // rdi
  __int64 result; // rax
  _QWORD *v12; // rbp
  __int64 v13; // rdx
  int v14; // ebp
  size_t v15; // r13
  __int64 *v16; // rax
  __int64 *v17; // r10
  __int64 v18; // rdx
  __int64 *v19; // r14
  __int64 *v20; // rax
  __int64 *v21; // rdx
  unsigned __int64 v22; // rdx
  __int64 v23; // rdi
  __int64 *v24; // rsi
  __int64 *v25; // rbp
  __int64 v26; // rdx
  __int64 *v27; // rax
  __int64 *v28; // rbp
  __int64 v29; // rdi
  __int64 v30; // [rsp+0h] [rbp-58h]
  __int64 *v31; // [rsp+8h] [rbp-50h]
  __int64 *v32; // [rsp+8h] [rbp-50h]
  unsigned int v33; // [rsp+10h] [rbp-48h]
  int v34; // [rsp+14h] [rbp-44h]
  __int64 *v35; // [rsp+18h] [rbp-40h]

  v4 = *(unsigned int *)(a1 + 8);
  v5 = *(_DWORD *)(a1 + 16);
  v34 = 2 * v4;
  if ( 3 * (int)v4 >= (unsigned int)(4 * (v5 + *(_DWORD *)(a1 + 12))) )
  {
    v6 = *(__int64 **)a1;
    v33 = v4 - 1;
    v30 = 16 * v4;
    v7 = *(_QWORD *)a1 + 16 * v4;
    goto LABEL_3;
  }
  v14 = 2 * v4;
  v15 = 16LL * (unsigned int)(2 * v4);
  v30 = v15;
  v16 = (__int64 *)sub_186B270(v15);
  v6 = v16;
  v17 = &v16[v15 / 8];
  if ( v14 )
  {
    if ( (v15 & 0x10) == 0 || (*(_OWORD *)v16 = 0, v16 += 2, v17 != v16) )
    {
      do
      {
        *(_OWORD *)v16 = 0;
        v16 += 4;
        *((_OWORD *)v16 - 1) = 0;
      }
      while ( v17 != v16 );
    }
  }
  v7 = (__int64)v17;
  v18 = *(unsigned int *)(a1 + 8);
  v19 = (__int64 *)(*(_QWORD *)a1 + 16 * v18);
  v33 = v34 - 1;
  v20 = (__int64 *)(*(_QWORD *)a1 + 8LL);
  if ( *(__int64 **)a1 != v19 )
  {
    while ( 1 )
    {
      v22 = *(v20 - 1);
      if ( v22 <= 1 )
      {
LABEL_27:
        v21 = v20 + 2;
        if ( v19 == v20 + 1 )
          goto LABEL_38;
        goto LABEL_28;
      }
      v23 = 16LL * (*(_DWORD *)(v22 + 12) & v33);
      v24 = &v6[(unsigned __int64)v23 / 8];
      if ( v30 == v23 )
      {
LABEL_46:
        if ( v6 == v24 )
        {
LABEL_60:
          sub_1872CE0("");
          sub_1873130(114, 213);
        }
        v25 = v6;
        while ( *v25 )
        {
          v25 += 2;
          if ( v24 == v25 )
            goto LABEL_60;
        }
        *v25 = v22;
        if ( v20 == v25 + 1 )
          goto LABEL_27;
        v26 = v25[1];
        if ( v26 )
          goto LABEL_36;
      }
      else
      {
        v25 = &v6[(unsigned __int64)v23 / 8];
        while ( *v25 )
        {
          v25 += 2;
          if ( v17 == v25 )
            goto LABEL_46;
        }
        *v25 = v22;
        if ( v20 == v25 + 1 )
          goto LABEL_27;
        v26 = v25[1];
        if ( v26 )
        {
LABEL_36:
          v35 = v17;
          v31 = v20;
          sub_186B220((void *)(v26 - 8));
          v17 = v35;
          v20 = v31;
        }
      }
      v25[1] = 0;
      v25[1] = *v20;
      v21 = v20 + 2;
      v27 = v20 + 1;
      *(v27 - 1) = 0;
      if ( v19 == v27 )
      {
LABEL_38:
        v18 = *(unsigned int *)(a1 + 8);
        v19 = *(__int64 **)a1;
        break;
      }
LABEL_28:
      v20 = v21;
    }
  }
  if ( v19 )
  {
    if ( (_DWORD)v18 )
    {
      v28 = v19;
      v32 = &v19[2 * v18];
      do
      {
        while ( 1 )
        {
          v29 = v28[1];
          if ( !v29 )
            break;
          v28 += 2;
          sub_186B220((void *)(v29 - 8));
          if ( v32 == v28 )
            goto LABEL_44;
        }
        v28 += 2;
      }
      while ( v28 != v32 );
    }
LABEL_44:
    sub_186B220(v19);
  }
  *(_QWORD *)a1 = v6;
  v5 = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 8) = v34;
LABEL_3:
  v8 = *(_DWORD *)(a2 + 12);
  v9 = 16LL * (v8 & v33);
  v10 = &v6[(unsigned __int64)v9 / 8];
  if ( v30 == v9 )
  {
    v12 = nullptr;
LABEL_11:
    if ( v6 == v10 )
    {
LABEL_19:
      sub_1872CE0("");
      sub_1873130(114, 461);
    }
    while ( 1 )
    {
      while ( 1 )
      {
        result = *v6;
        if ( (unsigned __int64)*v6 <= 1 )
          break;
        if ( *(_DWORD *)(result + 12) == v8 && a2 == result )
          return result;
        v6 += 2;
        if ( v10 == v6 )
          goto LABEL_19;
      }
      if ( !result )
        break;
      v12 = v6;
      v6 += 2;
      if ( v10 == v6 )
        goto LABEL_19;
    }
    if ( v12 )
      *(_DWORD *)(a1 + 16) = v5 - 1;
    else
      v12 = v6;
    result = v12[1];
    *v12 = a2;
    if ( !result )
      goto LABEL_59;
    goto LABEL_58;
  }
  result = (__int64)&v6[(unsigned __int64)v9 / 8];
  v12 = nullptr;
  while ( 1 )
  {
    while ( 1 )
    {
      v13 = *(_QWORD *)result;
      if ( *(_QWORD *)result <= 1u )
        break;
      if ( *(_DWORD *)(v13 + 12) == v8 && a2 == v13 )
        return result;
      result += 16;
      if ( result == v7 )
        goto LABEL_11;
    }
    if ( !v13 )
      break;
    v12 = (_QWORD *)result;
    result += 16;
    if ( result == v7 )
      goto LABEL_11;
  }
  if ( v12 )
    *(_DWORD *)(a1 + 16) = v5 - 1;
  else
    v12 = (_QWORD *)result;
  result = v12[1];
  *v12 = a2;
  if ( result )
LABEL_58:
    result = sub_186B220((void *)(result - 8));
LABEL_59:
  v12[1] = 0;
  ++*(_DWORD *)(a1 + 12);
  return result;
}

