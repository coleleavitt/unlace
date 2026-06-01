__int64 __fastcall sub_3613D0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 **v4; // r14
  __int64 v5; // r12
  __int64 *v6; // rsi
  unsigned int v7; // edi
  __int64 *v8; // rbx
  unsigned int v9; // r8d
  __int64 v10; // r10
  unsigned int v11; // ebp
  __int64 v12; // r11
  __int64 *v13; // r9
  bool v14; // r15
  __int64 v15; // rsi
  unsigned int v16; // edi
  __int64 v17; // r8
  bool v18; // r14
  __int64 v19; // rdx
  __int64 v20; // rdx
  int v21; // eax
  __int64 v22; // rbp
  int v23; // esi
  __int64 *v24; // rbx
  int v25; // r9d
  __int64 v26; // rcx
  __int64 *v27; // r15
  int v28; // edi
  __int64 v29; // r9
  __int64 *v30; // r8
  _QWORD *v31; // rcx
  __int64 v32; // rdx
  __int64 *v33; // rax
  int v34; // r8d
  void *v35; // r11
  __int64 v36; // rsi
  __int64 *v37; // r12
  __int64 v38; // rbx
  __int64 **v39; // r9
  __int64 v40; // r14
  __int64 v41; // rcx
  __int64 v42; // rbp
  __int64 v43; // rax
  __int64 *v44; // rdx
  __int64 *v45; // rax
  __int64 v46; // rdx
  unsigned int n; // [rsp+0h] [rbp-68h]
  __int64 na; // [rsp+0h] [rbp-68h]
  int nb; // [rsp+0h] [rbp-68h]
  __int64 *v50; // [rsp+8h] [rbp-60h]
  __int64 v51; // [rsp+8h] [rbp-60h]
  __int64 **v52; // [rsp+10h] [rbp-58h]
  int v53; // [rsp+10h] [rbp-58h]
  __int64 **v54; // [rsp+20h] [rbp-48h]

  result = *(_QWORD *)(a1 + 64);
  if ( !result )
    return result;
  v54 = (__int64 **)(result + 40LL * *(unsigned int *)(result - 4));
  if ( (__int64 **)result == v54 )
    return result;
  v4 = *(__int64 ***)(a1 + 64);
  v5 = a1;
  do
  {
    v6 = *v4;
    v7 = *(_DWORD *)(a2 + 8);
    if ( *v4 )
    {
      v8 = &v6[*((unsigned int *)v6 - 1)];
      v9 = *((_DWORD *)v6 - 1);
      if ( v8 == v6 )
        goto LABEL_28;
      v10 = *(_QWORD *)a2;
      n = *((_DWORD *)v6 - 1);
      v11 = v7 - 1;
      v50 = *v4;
      v12 = 8LL * v7;
      v13 = *v4;
      v14 = 0;
      v52 = v4;
LABEL_7:
      while ( 2 )
      {
        v15 = *v13;
        v16 = *(_DWORD *)(*v13 + 12);
        result = 8LL * (v11 & v16);
        v17 = v10 + result;
        if ( result != v12 )
        {
          for ( result += v10; *(_QWORD *)a2 + v12 != result; result += 8 )
          {
            v19 = *(_QWORD *)result;
            if ( *(_QWORD *)result > 1u )
            {
              v18 = v15 == v19 && *(_DWORD *)(v19 + 12) == v16;
              if ( v18 )
              {
LABEL_25:
                ++v13;
                v14 = v18;
                if ( v13 == v8 )
                  goto LABEL_14;
                goto LABEL_7;
              }
            }
            else if ( !v19 )
            {
              goto LABEL_13;
            }
          }
        }
        if ( v10 != v17 )
        {
          for ( result = *(_QWORD *)a2; v17 != result; result += 8 )
          {
            v20 = *(_QWORD *)result;
            if ( *(_QWORD *)result > 1u )
            {
              v18 = v15 == v20 && *(_DWORD *)(v20 + 12) == v16;
              if ( v18 )
                goto LABEL_25;
            }
            else if ( !v20 )
            {
              if ( ++v13 == v8 )
                goto LABEL_14;
              goto LABEL_7;
            }
          }
        }
LABEL_13:
        if ( ++v13 != v8 )
          continue;
        break;
      }
LABEL_14:
      v9 = n;
      v6 = v50;
      v4 = v52;
      v7 = *(_DWORD *)(a2 + 8);
      if ( v14 )
        goto LABEL_15;
    }
    else
    {
      v9 = 0;
    }
LABEL_28:
    v21 = 214013 * *(_DWORD *)(v5 + 24) + 2531011;
    *(_DWORD *)(v5 + 24) = v21;
    v22 = v6[(HIWORD(v21) & 0x7FFFu) % v9];
    v23 = *(_DWORD *)(a2 + 16);
    if ( 3 * v7 < 4 * (v23 + *(_DWORD *)(a2 + 12)) )
    {
      na = 16LL * v7;
      v33 = (__int64 *)sub_186B270(na);
      v34 = 2 * v7;
      v26 = na;
      v24 = v33;
      if ( 2 * v7 )
      {
        memset(v33, 0, na);
        v26 = na;
        v34 = 2 * v7;
      }
      v25 = v34 - 1;
      v27 = (__int64 *)((char *)v24 + v26);
      v35 = (void *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 8));
      if ( *(void **)a2 != v35 )
      {
        v36 = v5;
        v37 = v24;
        v38 = *(_QWORD *)a2;
        v39 = v4;
        v40 = v26;
        v41 = v22;
        v42 = *(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 8);
        do
        {
          while ( *(_QWORD *)v38 <= 1u )
          {
            v38 += 8;
            if ( v42 == v38 )
              goto LABEL_57;
          }
          v43 = 8LL * (*(_DWORD *)(*(_QWORD *)v38 + 12LL) & (unsigned int)(v34 - 1));
          v44 = &v37[(unsigned __int64)v43 / 8];
          if ( v40 == v43 )
          {
LABEL_61:
            if ( v37 == v44 )
            {
LABEL_71:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v45 = v37;
            while ( *v45 )
            {
              if ( v44 == ++v45 )
                goto LABEL_71;
            }
          }
          else
          {
            v45 = &v37[(unsigned __int64)v43 / 8];
            while ( *v45 )
            {
              if ( v27 == ++v45 )
                goto LABEL_61;
            }
          }
          v46 = *(_QWORD *)v38;
          v38 += 8;
          *v45 = v46;
        }
        while ( v42 != v38 );
LABEL_57:
        v22 = v41;
        v26 = v40;
        v4 = v39;
        v25 = v34 - 1;
        v35 = *(void **)a2;
        v24 = v37;
        v5 = v36;
      }
      if ( v35 )
      {
        v53 = v34;
        v51 = v26;
        nb = v25;
        sub_186B220(v35);
        v34 = v53;
        v26 = v51;
        v25 = nb;
      }
      *(_QWORD *)a2 = v24;
      v23 = 0;
      *(_DWORD *)(a2 + 8) = v34;
      *(_DWORD *)(a2 + 16) = 0;
    }
    else
    {
      v24 = *(__int64 **)a2;
      v25 = v7 - 1;
      v26 = 8LL * v7;
      v27 = (__int64 *)(*(_QWORD *)a2 + v26);
    }
    v28 = *(_DWORD *)(v22 + 12);
    v29 = v28 & (unsigned int)v25;
    v30 = &v24[v29];
    if ( 8 * v29 != v26 )
    {
      result = (__int64)&v24[v29];
      v31 = nullptr;
      while ( 1 )
      {
        v32 = *(_QWORD *)result;
        if ( *(_QWORD *)result > 1u )
        {
          if ( *(_DWORD *)(v32 + 12) == v28 && v22 == v32 )
          {
            *(_QWORD *)result = v22;
            goto LABEL_15;
          }
        }
        else
        {
          if ( !v32 )
          {
            if ( v31 )
              goto LABEL_67;
            v31 = (_QWORD *)result;
            goto LABEL_68;
          }
          v31 = (_QWORD *)result;
        }
        result += 8;
        if ( (__int64 *)result == v27 )
          goto LABEL_41;
      }
    }
    v31 = nullptr;
    while ( 1 )
    {
LABEL_41:
      if ( v30 == v24 )
      {
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      result = *v24;
      if ( (unsigned __int64)*v24 <= 1 )
        break;
      if ( *(_DWORD *)(result + 12) == v28 && v22 == result )
      {
        *v24 = v22;
        goto LABEL_15;
      }
LABEL_40:
      ++v24;
    }
    if ( result )
    {
      v31 = v24;
      goto LABEL_40;
    }
    if ( v31 )
LABEL_67:
      *(_DWORD *)(a2 + 16) = v23 - 1;
    else
      v31 = v24;
LABEL_68:
    *v31 = v22;
    ++*(_DWORD *)(a2 + 12);
LABEL_15:
    v4 += 5;
  }
  while ( v54 != v4 );
  return result;
}

