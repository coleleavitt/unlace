__int64 __fastcall sub_E93870(unsigned int **a1, __int64 a2, int a3)
{
  unsigned int *v3; // r12
  __int64 result; // rax
  const void *v5; // rax
  size_t v6; // rdx
  size_t v7; // rbx
  __int64 v8; // rdi
  __int64 *v9; // rbx
  __int64 *v10; // r13
  const void *v11; // rax
  size_t v12; // rdx
  void *v13; // rdi
  size_t v14; // rbp
  _BYTE *v15; // rax
  __int64 v16; // rdi
  _BYTE *v17; // rdx
  _BYTE *v18; // rdi
  _WORD *v19; // rdx
  unsigned int *v20; // r15
  unsigned int *v21; // rbp
  const void *v22; // rax
  size_t v23; // rdx
  size_t v24; // rbx
  _BYTE *v25; // rdx
  unsigned __int64 v26; // r8
  __int64 *v27; // [rsp+28h] [rbp-70h]
  unsigned int *v29; // [rsp+48h] [rbp-50h]
  char v30; // [rsp+5Eh] [rbp-3Ah] BYREF
  char v31[57]; // [rsp+5Fh] [rbp-39h] BYREF

  v3 = *a1;
  result = (__int64)&(*a1)[34 * *((unsigned int *)a1 + 2)];
  v29 = (unsigned int *)result;
  if ( (unsigned int *)result != *a1 )
  {
    while ( 1 )
    {
      v5 = (const void *)sub_20D0230(*v3);
      v7 = v6;
      if ( *(_QWORD *)(a2 + 24) - *(_QWORD *)(a2 + 32) < v6 )
      {
        v8 = sub_22581D0(a2, v5, v6);
      }
      else
      {
        v8 = a2;
        if ( v6 )
        {
          memcpy(*(void **)(a2 + 32), v5, v6);
          *(_QWORD *)(a2 + 32) += v7;
          v8 = a2;
        }
      }
      sub_971800(v8, "={");
      v9 = *((__int64 **)v3 + 1);
      v10 = &v9[7 * v3[4]];
      if ( v9 != v10 )
        break;
LABEL_35:
      v3 += 34;
      result = sub_971800(a2, "}");
      if ( v29 == v3 )
        return result;
      sub_971800(a2, ", ");
    }
LABEL_6:
    v11 = (const void *)sub_20D07E0(*((unsigned int *)v9 + 2));
    v13 = *(void **)(a2 + 32);
    v14 = v12;
    if ( *(_QWORD *)(a2 + 24) - (_QWORD)v13 < v12 )
    {
      sub_22581D0(a2, v11, v12);
    }
    else if ( v12 )
    {
      memcpy(v13, v11, v12);
      *(_QWORD *)(a2 + 32) += v14;
    }
    v30 = 0;
    v31[0] = 0;
    sub_20D4840(*((unsigned int *)v9 + 2), *v3, &v30, v31);
    if ( !v31[0] )
      goto LABEL_18;
    v15 = *(_BYTE **)(a2 + 32);
    if ( *(_BYTE **)(a2 + 24) == v15 )
    {
      sub_22581D0(a2, "(", 1);
    }
    else
    {
      *v15 = 40;
      ++*(_QWORD *)(a2 + 32);
    }
    v16 = *v9;
    if ( *((_DWORD *)v9 + 2) == 13 )
    {
      if ( v16 )
        sub_EE3EC0(v16, a2, 0, a3, 0, 0, (__int64)"\n", 1);
      else
        sub_971800(a2, "...");
      v17 = *(_BYTE **)(a2 + 24);
      v18 = *(_BYTE **)(a2 + 32);
      goto LABEL_16;
    }
    if ( v16 )
    {
      sub_971800(a2, "score(");
      sub_EE3EC0(*v9, a2, 0, a3, 0, 0, (__int64)"\n", 1);
      sub_971800(a2, "): ");
    }
    v20 = (unsigned int *)v9[2];
    v21 = &v20[6 * *((unsigned int *)v9 + 6)];
    if ( v20 == v21 )
    {
      v17 = *(_BYTE **)(a2 + 24);
      v18 = *(_BYTE **)(a2 + 32);
LABEL_16:
      if ( v18 != v17 )
        goto LABEL_34;
LABEL_17:
      sub_22581D0(a2, ")", 1);
LABEL_18:
      v9 += 7;
      if ( v9 == v10 )
        goto LABEL_35;
      goto LABEL_19;
    }
    v27 = v9;
    while ( 1 )
    {
      v22 = (const void *)sub_20D41D0(*v20, *((_QWORD *)v20 + 1), *((_QWORD *)v20 + 2));
      v18 = *(_BYTE **)(a2 + 32);
      v24 = v23;
      v25 = *(_BYTE **)(a2 + 24);
      v26 = v25 - v18;
      if ( v24 > v25 - v18 )
      {
        v20 += 6;
        sub_22581D0(a2, v22, v24);
        v25 = *(_BYTE **)(a2 + 24);
        v18 = *(_BYTE **)(a2 + 32);
        v26 = v25 - v18;
        if ( v20 == v21 )
          goto LABEL_33;
      }
      else
      {
        if ( v24 )
        {
          memcpy(v18, v22, v24);
          v25 = *(_BYTE **)(a2 + 24);
          v18 = (_BYTE *)(*(_QWORD *)(a2 + 32) + v24);
          *(_QWORD *)(a2 + 32) = v18;
          v26 = v25 - v18;
        }
        v20 += 6;
        if ( v20 == v21 )
        {
LABEL_33:
          v9 = v27;
          if ( v18 == v25 )
            goto LABEL_17;
LABEL_34:
          v9 += 7;
          *v18 = 41;
          ++*(_QWORD *)(a2 + 32);
          if ( v9 == v10 )
            goto LABEL_35;
LABEL_19:
          v19 = *(_WORD **)(a2 + 32);
          if ( *(_QWORD *)(a2 + 24) - (_QWORD)v19 > 1u )
          {
            *v19 = 8236;
            *(_QWORD *)(a2 + 32) += 2LL;
          }
          else
          {
            sub_22581D0(a2, ", ", 2);
          }
          goto LABEL_6;
        }
      }
      if ( v26 > 1 )
      {
        *(_WORD *)v18 = 8236;
        *(_QWORD *)(a2 + 32) += 2LL;
      }
      else
      {
        sub_22581D0(a2, ", ", 2);
      }
    }
  }
  return result;
}

