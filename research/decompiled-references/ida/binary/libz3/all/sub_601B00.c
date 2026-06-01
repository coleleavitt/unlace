__int64 __fastcall sub_601B00(__int64 a1, __int64 a2, double a3)
{
  __int64 *v4; // r8
  __int64 *v5; // r15
  char v6; // al
  __int64 v7; // rdx
  _QWORD *v8; // rax
  __int64 v9; // rdx
  _QWORD *v10; // rcx
  __int64 v11; // rcx
  int v12; // esi
  unsigned int v13; // r10d
  _QWORD *v14; // rbx
  size_t v15; // r14
  unsigned int v16; // r9d
  _QWORD *v17; // r12
  int v18; // edi
  __int64 v19; // r9
  _QWORD *v20; // r10
  _QWORD *v21; // rax
  _QWORD *v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rbx
  __int64 v26; // r12
  _QWORD *v27; // rax
  int v28; // r10d
  char *v29; // rax
  char *v30; // r11
  __int64 v31; // rdx
  _QWORD *v32; // rsi
  _QWORD *v33; // rdx
  __int64 v34; // rsi
  __int64 v35; // rbp
  _QWORD **v36; // r12
  _QWORD **i; // r15
  _QWORD *v38; // rax
  _QWORD *v39; // rdx
  _QWORD *v40; // rcx
  __int64 *v41; // r8
  __int64 *v42; // rbx
  __int64 *v43; // r14
  __int64 v44; // rbx
  __int64 j; // rbp
  __int64 v47; // rsi
  __int64 v48; // rbx
  __int64 *v49; // [rsp+0h] [rbp-78h]
  _QWORD *ptr; // [rsp+10h] [rbp-68h]
  int v52; // [rsp+18h] [rbp-60h]
  unsigned int v53; // [rsp+18h] [rbp-60h]
  int v54; // [rsp+20h] [rbp-58h]

  sub_5FAFF0(a1, a2);
  ptr = (_QWORD *)sub_5FC660(a1, a2, a3);
LABEL_2:
  v4 = *(__int64 **)(ptr[18] + 8LL);
  if ( v4 )
  {
    v49 = &v4[*((unsigned int *)v4 - 1)];
    if ( v4 != v49 )
    {
      v5 = *(__int64 **)(ptr[18] + 8LL);
      v6 = 0;
      while ( 1 )
      {
        v7 = *v5;
        if ( *(_DWORD *)(*v5 + 12) == 1 )
          goto LABEL_29;
        v8 = *(_QWORD **)v7;
        v9 = *(_QWORD *)v7 + 8LL * *(unsigned int *)(v7 + 8);
        if ( v8 == (_QWORD *)v9 )
        {
          v35 = *v8;
        }
        else
        {
          do
          {
            v35 = *v8;
            v10 = v8;
            if ( *v8 > 1u )
              goto LABEL_10;
            ++v8;
          }
          while ( (_QWORD *)v9 != v8 );
          v35 = v10[1];
        }
LABEL_10:
        v11 = *(unsigned int *)(a1 + 80);
        v12 = *(_DWORD *)(a1 + 88);
        v13 = 2 * v11;
        if ( 3 * (int)v11 < (unsigned int)(4 * (v12 + *(_DWORD *)(a1 + 84))) )
        {
          v26 = v13;
          v52 = 2 * v11;
          v15 = 8LL * v13;
          v27 = (_QWORD *)sub_186B270(v15);
          v28 = v52;
          v14 = v27;
          if ( v52 )
          {
            memset(v27, 0, 8 * v26);
            v28 = v52;
          }
          v29 = *(char **)(a1 + 72);
          v16 = v28 - 1;
          v17 = &v14[v15 / 8];
          v30 = &v29[8 * *(unsigned int *)(a1 + 80)];
          if ( v29 != v30 )
          {
            do
            {
              while ( *(_QWORD *)v29 <= 1u )
              {
                v29 += 8;
                if ( v30 == v29 )
                  goto LABEL_45;
              }
              v31 = 8LL * (*(_DWORD *)(*(_QWORD *)v29 + 12LL) & v16);
              v32 = &v14[(unsigned __int64)v31 / 8];
              if ( v15 == v31 )
              {
LABEL_49:
                if ( v14 == v32 )
                {
LABEL_57:
                  sub_1872CE0("");
                  sub_1873130(114, 213);
                }
                v33 = v14;
                while ( *v33 )
                {
                  if ( v32 == ++v33 )
                    goto LABEL_57;
                }
              }
              else
              {
                v33 = &v14[(unsigned __int64)v31 / 8];
                while ( *v33 )
                {
                  if ( v17 == ++v33 )
                    goto LABEL_49;
                }
              }
              v34 = *(_QWORD *)v29;
              v29 += 8;
              *v33 = v34;
            }
            while ( v30 != v29 );
LABEL_45:
            v30 = *(char **)(a1 + 72);
          }
          if ( v30 )
          {
            v54 = v28;
            v53 = v28 - 1;
            sub_186B220(v30);
            v28 = v54;
            v16 = v53;
          }
          *(_QWORD *)(a1 + 72) = v14;
          v12 = 0;
          *(_DWORD *)(a1 + 80) = v28;
          *(_DWORD *)(a1 + 88) = 0;
        }
        else
        {
          v14 = *(_QWORD **)(a1 + 72);
          v15 = 8 * v11;
          v16 = v11 - 1;
          v17 = &v14[v11];
        }
        v18 = *(_DWORD *)(v35 + 12);
        v19 = 8LL * (v18 & v16);
        v20 = &v14[(unsigned __int64)v19 / 8];
        if ( v19 != v15 )
        {
          v21 = &v14[(unsigned __int64)v19 / 8];
          v22 = nullptr;
          while ( 1 )
          {
            v23 = *v21;
            if ( *v21 > 1u )
            {
              if ( *(_DWORD *)(v23 + 12) == v18 && v23 == v35 )
              {
                *v21 = v35;
                goto LABEL_28;
              }
            }
            else
            {
              if ( !v23 )
              {
                if ( v22 )
                  goto LABEL_55;
                v22 = v21;
                goto LABEL_56;
              }
              v22 = v21;
            }
            if ( ++v21 == v17 )
              goto LABEL_23;
          }
        }
        v22 = nullptr;
        while ( 1 )
        {
LABEL_23:
          if ( v20 == v14 )
          {
            sub_1872CE0("");
            sub_1873130(114, 405);
          }
          v24 = *v14;
          if ( *v14 <= 1u )
            break;
          if ( *(_DWORD *)(v24 + 12) == v18 && v24 == v35 )
          {
            *v14 = v35;
            goto LABEL_28;
          }
LABEL_22:
          ++v14;
        }
        if ( v24 )
          break;
        if ( v22 )
LABEL_55:
          *(_DWORD *)(a1 + 88) = v12 - 1;
        else
          v22 = v14;
LABEL_56:
        *v22 = v35;
        ++*(_DWORD *)(a1 + 84);
LABEL_28:
        v6 = 1;
LABEL_29:
        if ( v49 == ++v5 )
        {
          if ( v6 )
          {
            v25 = sub_5FC660(a1, a2, a3);
            if ( ptr != (_QWORD *)v25 )
            {
              sub_63D960(ptr);
              sub_186B220(ptr);
              ptr = (_QWORD *)v25;
            }
            goto LABEL_2;
          }
          goto LABEL_63;
        }
      }
      v22 = v14;
      goto LABEL_22;
    }
  }
LABEL_63:
  if ( sub_5FCAF0(a1, a2, (__int64)ptr) )
  {
    v48 = sub_5FC660(a1, a2, a3);
    if ( ptr != (_QWORD *)v48 )
    {
      sub_63D960(ptr);
      sub_186B220(ptr);
    }
    ptr = (_QWORD *)v48;
  }
  v36 = *(_QWORD ***)(ptr[18] + 8LL);
  if ( v36 )
  {
    for ( i = &v36[*((unsigned int *)v36 - 1)]; i != v36; ++v36 )
    {
      v38 = (_QWORD *)**v36;
      v39 = &v38[*((unsigned int *)*v36 + 2)];
      if ( v38 == v39 )
      {
        v47 = *v38;
      }
      else
      {
        while ( 1 )
        {
          v47 = *v38;
          v40 = v38;
          if ( *v38 > 1u )
            break;
          if ( v39 == ++v38 )
          {
            v47 = v40[1];
            break;
          }
        }
      }
      v41 = *(__int64 **)sub_63BA90(ptr, v47);
      if ( v41 )
      {
        v42 = &v41[*((unsigned int *)v41 - 1)];
        if ( v42 != v41 )
        {
          v43 = v41;
          do
            sub_6015D0(a1, a2, *v43++, a1 + 216, a3);
          while ( v42 != v43 );
        }
      }
    }
  }
  v44 = *(_QWORD *)(a1 + 240);
  if ( v44 )
  {
    for ( j = v44 + 8LL * *(unsigned int *)(v44 - 4); j != v44; v44 += 8 )
      sub_6481D0(*(_QWORD *)(a1 + 464));
  }
  sub_63D960(ptr);
  return sub_186B220(ptr);
}

