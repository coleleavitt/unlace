__int64 __fastcall sub_5FC730(__int64 a1, __int64 a2)
{
  __int64 *v2; // r14
  __int64 result; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  __int64 v9; // r8
  int v10; // r10d
  _QWORD *v11; // rbx
  size_t v12; // rbp
  unsigned int v13; // r11d
  _QWORD *v14; // r13
  int v15; // ecx
  __int64 v16; // r11
  _QWORD *v17; // rdi
  _QWORD *v18; // rax
  _QWORD *v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rax
  _QWORD *v22; // rax
  int v23; // r9d
  char *v24; // rcx
  char *v25; // r10
  __int64 v26; // r8
  __int64 v27; // r15
  _QWORD *v28; // r12
  char *v29; // rbx
  __int64 v30; // rax
  _QWORD *v31; // rdx
  _QWORD *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // r12
  __int64 *v35; // [rsp+0h] [rbp-58h]
  int v36; // [rsp+8h] [rbp-50h]
  unsigned int v37; // [rsp+8h] [rbp-50h]
  int v38; // [rsp+18h] [rbp-40h]

  v2 = *(__int64 **)(*(_QWORD *)(a2 + 144) + 8LL);
  if ( !v2 )
    return 0;
  result = 0;
  if ( &v2[*((unsigned int *)v2 - 1)] != v2 )
  {
    v35 = &v2[*((unsigned int *)v2 - 1)];
    while ( 1 )
    {
      v5 = *v2;
      if ( *(_DWORD *)(*v2 + 12) == 1 )
        goto LABEL_28;
      v6 = *(_QWORD **)v5;
      v7 = *(_QWORD *)v5 + 8LL * *(unsigned int *)(v5 + 8);
      if ( v6 == (_QWORD *)v7 )
      {
        v34 = *v6;
      }
      else
      {
        do
        {
          v34 = *v6;
          v8 = v6;
          if ( *v6 > 1u )
            goto LABEL_9;
          ++v6;
        }
        while ( (_QWORD *)v7 != v6 );
        v34 = v8[1];
      }
LABEL_9:
      v9 = *(unsigned int *)(a1 + 80);
      v10 = *(_DWORD *)(a1 + 88);
      if ( 3 * (int)v9 < (unsigned int)(4 * (v10 + *(_DWORD *)(a1 + 84))) )
      {
        v36 = 2 * v9;
        v12 = 8LL * (unsigned int)(2 * v9);
        v22 = (_QWORD *)sub_186B270(v12);
        v23 = v36;
        v11 = v22;
        if ( v36 )
        {
          memset(v22, 0, v12);
          v23 = v36;
        }
        v24 = *(char **)(a1 + 72);
        v13 = v23 - 1;
        v14 = &v11[v12 / 8];
        v25 = &v24[8 * *(unsigned int *)(a1 + 80)];
        if ( v24 != v25 )
        {
          v26 = a1;
          v27 = v34;
          v28 = v11;
          v29 = v24;
          do
          {
            while ( *(_QWORD *)v29 <= 1u )
            {
              v29 += 8;
              if ( v25 == v29 )
                goto LABEL_42;
            }
            v30 = 8LL * (*(_DWORD *)(*(_QWORD *)v29 + 12LL) & v13);
            v31 = &v28[(unsigned __int64)v30 / 8];
            if ( v12 == v30 )
            {
LABEL_46:
              if ( v28 == v31 )
              {
LABEL_54:
                sub_1872CE0("");
                sub_1873130(114, 213);
              }
              v32 = v28;
              while ( *v32 )
              {
                if ( v31 == ++v32 )
                  goto LABEL_54;
              }
            }
            else
            {
              v32 = &v28[(unsigned __int64)v30 / 8];
              while ( *v32 )
              {
                if ( v14 == ++v32 )
                  goto LABEL_46;
              }
            }
            v33 = *(_QWORD *)v29;
            v29 += 8;
            *v32 = v33;
          }
          while ( v25 != v29 );
LABEL_42:
          v25 = *(char **)(v26 + 72);
          v11 = v28;
          v34 = v27;
          a1 = v26;
        }
        if ( v25 )
        {
          v38 = v23;
          v37 = v23 - 1;
          sub_186B220(v25);
          v23 = v38;
          v13 = v37;
        }
        *(_QWORD *)(a1 + 72) = v11;
        v10 = 0;
        *(_DWORD *)(a1 + 80) = v23;
        *(_DWORD *)(a1 + 88) = 0;
      }
      else
      {
        v11 = *(_QWORD **)(a1 + 72);
        v12 = 8 * v9;
        v13 = v9 - 1;
        v14 = &v11[v9];
      }
      v15 = *(_DWORD *)(v34 + 12);
      v16 = v15 & v13;
      v17 = &v11[v16];
      if ( 8 * v16 != v12 )
      {
        v18 = &v11[v16];
        v19 = nullptr;
        while ( 1 )
        {
          v20 = *v18;
          if ( *v18 > 1u )
          {
            if ( *(_DWORD *)(v20 + 12) == v15 && v20 == v34 )
            {
              *v18 = v34;
              goto LABEL_27;
            }
          }
          else
          {
            if ( !v20 )
            {
              if ( v19 )
                goto LABEL_52;
              v19 = v18;
              goto LABEL_53;
            }
            v19 = v18;
          }
          if ( ++v18 == v14 )
            goto LABEL_22;
        }
      }
      v19 = nullptr;
      while ( 1 )
      {
LABEL_22:
        if ( v17 == v11 )
        {
          sub_1872CE0("");
          sub_1873130(114, 405);
        }
        v21 = *v11;
        if ( *v11 <= 1u )
          break;
        if ( *(_DWORD *)(v21 + 12) == v15 && v21 == v34 )
        {
          *v11 = v34;
          goto LABEL_27;
        }
LABEL_21:
        ++v11;
      }
      if ( v21 )
        break;
      if ( v19 )
LABEL_52:
        *(_DWORD *)(a1 + 88) = v10 - 1;
      else
        v19 = v11;
LABEL_53:
      *v19 = v34;
      ++*(_DWORD *)(a1 + 84);
LABEL_27:
      result = 1;
LABEL_28:
      if ( v35 == ++v2 )
        return result;
    }
    v19 = v11;
    goto LABEL_21;
  }
  return result;
}

