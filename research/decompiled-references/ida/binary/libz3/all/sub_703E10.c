__int64 __fastcall sub_703E10(__int64 a1)
{
  __int64 v2; // rax
  int *v3; // rdx
  unsigned int v4; // ebx
  int v5; // ebp
  int *v6; // rax
  int *v7; // r14
  unsigned int v8; // ebp
  __int64 v9; // rcx
  int *v10; // rsi
  unsigned int v11; // r13d
  size_t v12; // rsi
  unsigned int *v13; // rax
  __int64 v14; // rax
  __int64 result; // rax
  __int64 v16; // r10
  __int64 v17; // rax
  unsigned int v18; // r15d
  int v19; // ebp
  __int64 v20; // rax
  unsigned int v21; // r13d
  _DWORD *v22; // r15
  _DWORD *v23; // rdx
  __int64 v24; // rcx
  _DWORD *v25; // rcx
  unsigned int v26; // r14d
  unsigned int v27; // r13d
  __int64 v28; // rax
  unsigned int v29; // ebp
  _DWORD *v30; // rdx
  unsigned int v31; // edi
  __int64 v32; // r11
  __int64 v33; // rax
  _DWORD *v34; // r9
  _DWORD *v35; // rsi
  _DWORD *i; // rax
  int v37; // ecx
  unsigned int v38; // edx
  unsigned int v39; // eax
  __int64 v40; // rax
  char v41; // si
  int *v42; // r13
  unsigned int v43; // ebx
  __int64 v44; // rcx
  int *v45; // rsi
  unsigned int v46; // ebp
  unsigned int v47; // eax
  unsigned int *v48; // rax
  __int64 v49; // rax
  _QWORD *v50; // rax
  int v51; // eax
  _DWORD *v52; // rax
  int v53; // eax
  __int64 v54; // rdx
  __int64 v55; // rax
  unsigned int v56; // r14d
  unsigned int v57; // eax
  unsigned int *v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  int v61; // ebp
  __int64 v62; // rcx
  _QWORD *v63; // rdx
  char **exception; // rbp
  __int64 v65; // [rsp+8h] [rbp-60h]
  __int64 v66[11]; // [rsp+10h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(a1 + 376);
  v3 = *(int **)(a1 + 360);
  if ( !v2 )
  {
    if ( v3 )
    {
      *(v3 - 1) = 0;
      v5 = *(_DWORD *)(a1 + 56);
      v4 = 0;
      if ( *(v3 - 2) )
        goto LABEL_6;
LABEL_104:
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_6FFCA0(v66, "Overflow encountered when expanding vector");
      goto LABEL_105;
    }
    v5 = *(_DWORD *)(a1 + 56);
    v4 = 0;
LABEL_65:
    v50 = (_QWORD *)sub_186B270(0x10u);
    *v50 = 2;
    v3 = (int *)(v50 + 1);
    *(_QWORD *)(a1 + 360) = v50 + 1;
    goto LABEL_6;
  }
  v4 = *(_DWORD *)(v2 - 4);
  if ( !v3 )
  {
    v5 = *(_DWORD *)(a1 + 56);
    if ( (v4 & 1) != 0 )
      v5 = *(_DWORD *)(a1 + 56) ^ 1;
    goto LABEL_65;
  }
  *(v3 - 1) = 0;
  v5 = *(_DWORD *)(a1 + 56);
  if ( (*(_BYTE *)(v2 - 4) & 1) != 0 )
    v5 ^= 1u;
  if ( !*(v3 - 2) )
    goto LABEL_104;
LABEL_6:
  v6 = *(int **)(a1 + 352);
  ++*(v3 - 1);
  *v3 = v5;
  v7 = v6;
  if ( v6 )
  {
    v8 = 0;
    if ( *(v6 - 1) )
    {
      while ( 1 )
      {
        v9 = (unsigned int)*(v3 - 1);
        v10 = &v3[v9];
        if ( (_DWORD)v9 == *(v3 - 2) )
        {
          v11 = (unsigned int)(3 * v9 + 1) >> 1;
          v12 = 4 * v11 + 8;
          if ( 4 * (int)v9 + 8 >= (unsigned int)v12 || (unsigned int)v9 >= v11 )
            goto LABEL_104;
          v13 = (unsigned int *)sub_186B300(v3 - 2, v12);
          v3 = (int *)(v13 + 2);
          *v13 = v11;
          v14 = v13[1];
          *(_QWORD *)(a1 + 360) = v3;
          v10 = &v3[v14];
          v6 = *(int **)(a1 + 352);
        }
        ++v8;
        *v10 = *v7;
        ++*(v3 - 1);
        if ( !v6 || v8 >= *(v6 - 1) )
          break;
        v7 = &v6[v8];
      }
    }
  }
  if ( *(_BYTE *)(a1 + 144) )
  {
    v65 = a1 + 40;
    sub_1144D70(a1 + 40, a1 + 64);
    result = sub_1142080(a1 + 40, a1 + 96);
    if ( v4 )
    {
      v16 = *(_QWORD *)(a1 + 168);
      if ( v16 )
      {
        if ( *(_DWORD *)(v16 - 4) >= v4 )
        {
          v17 = *(_QWORD *)(*(_QWORD *)(v16 + 8LL * (v4 - 1)) + 8LL);
          if ( v17 )
          {
            v18 = 0;
            do
            {
              if ( v18 >= *(_DWORD *)(v17 - 4) )
                break;
              LODWORD(v66[0]) = *(_DWORD *)(v17 + 4LL * v18);
              v19 = v66[0];
              if ( (unsigned int)sub_1142D30(v65, LODWORD(v66[0])) == -1 )
              {
                v60 = *(_QWORD *)(a1 + 368);
                v61 = v19 ^ 1;
                if ( !v60 || (v62 = *(unsigned int *)(v60 - 4), (_DWORD)v62 == *(_DWORD *)(v60 - 8)) )
                {
                  sub_692C60((unsigned int **)(a1 + 368));
                  v60 = *(_QWORD *)(a1 + 368);
                  v62 = *(unsigned int *)(v60 - 4);
                }
                *(_DWORD *)(v60 + 4 * v62) = v61;
                ++*(_DWORD *)(v60 - 4);
              }
              else
              {
                sub_702B60((_QWORD *)(a1 + 368), (unsigned int *)v66);
              }
              v16 = *(_QWORD *)(a1 + 168);
              ++v18;
              v17 = *(_QWORD *)(*(_QWORD *)(v16 + 8LL * (v4 - 1)) + 8LL);
            }
            while ( v17 );
            v20 = *(_QWORD *)(a1 + 368);
            if ( !v20 )
              goto LABEL_34;
            goto LABEL_27;
          }
        }
        v20 = *(_QWORD *)(a1 + 368);
        if ( !v20 )
        {
          v26 = v4 + 1;
          while ( 1 )
          {
            while ( 1 )
            {
LABEL_35:
              if ( v26 >= *(_DWORD *)(v16 - 4) )
                goto LABEL_49;
              v27 = 0;
              v28 = *(_QWORD *)(*(_QWORD *)(v16 + 8LL * v26) + 8LL);
              if ( v28 )
                break;
              v26 += 2;
            }
            do
            {
              if ( v27 >= *(_DWORD *)(v28 - 4) )
                break;
              v29 = *(_DWORD *)(v28 + 4LL * v27);
              v30 = *(_DWORD **)(a1 + 184);
              v31 = v29 >> 1;
              v32 = 20LL * ((v29 >> 1) & (*(_DWORD *)(a1 + 192) - 1));
              v33 = 20LL * *(unsigned int *)(a1 + 192);
              v34 = &v30[(unsigned __int64)v32 / 4];
              v35 = &v30[(unsigned __int64)v33 / 4];
              if ( v32 != v33 )
              {
                for ( i = &v30[(unsigned __int64)v32 / 4]; v35 != i; i += 5 )
                {
                  v37 = i[1];
                  if ( v37 == 2 )
                  {
                    if ( v31 == *i && v31 == i[2] )
                    {
                      v38 = i[3];
                      v39 = i[4];
                      if ( v39 != v26 )
                        goto LABEL_46;
LABEL_74:
                      if ( v38 != -1 && v38 >= v4 )
                        goto LABEL_47;
LABEL_76:
                      v53 = sub_1142D30(v65, v29);
                      v54 = *(_QWORD *)(a1 + 360);
                      if ( v53 == -1 )
                      {
                        v29 ^= 1u;
                        if ( !v54 )
                          goto LABEL_84;
LABEL_78:
                        v55 = *(unsigned int *)(v54 - 4);
                        if ( (_DWORD)v55 == *(_DWORD *)(v54 - 8) )
                          goto LABEL_84;
                      }
                      else
                      {
                        if ( v54 )
                          goto LABEL_78;
LABEL_84:
                        sub_692C60((unsigned int **)(a1 + 360));
                        v54 = *(_QWORD *)(a1 + 360);
                        v55 = *(unsigned int *)(v54 - 4);
                      }
                      *(_DWORD *)(v54 + 4 * v55) = v29;
                      v16 = *(_QWORD *)(a1 + 168);
                      ++*(_DWORD *)(v54 - 4);
                      goto LABEL_47;
                    }
                  }
                  else if ( !v37 )
                  {
                    goto LABEL_103;
                  }
                }
              }
              if ( v30 == v34 )
LABEL_103:
                BUG();
              while ( 1 )
              {
                v51 = v30[1];
                if ( v51 != 2 )
                {
                  if ( !v51 )
                    goto LABEL_103;
                  goto LABEL_69;
                }
                if ( v31 == *v30 && v31 == v30[2] )
                  break;
LABEL_69:
                v30 += 5;
                if ( v34 == v30 )
                  goto LABEL_103;
              }
              v52 = v30;
              v38 = v30[3];
              v39 = v52[4];
              if ( v39 == v26 )
                goto LABEL_74;
LABEL_46:
              if ( v38 == v26 && (v39 == -1 || v39 < v4) )
                goto LABEL_76;
LABEL_47:
              ++v27;
              v28 = *(_QWORD *)(*(_QWORD *)(v16 + 8LL * v26) + 8LL);
            }
            while ( v28 );
            v26 += 2;
            if ( !v16 )
              goto LABEL_49;
          }
        }
LABEL_27:
        v21 = 0;
        while ( v21 < *(_DWORD *)(v20 - 4) )
        {
          v22 = (_DWORD *)(v20 + 4LL * v21);
          v23 = *(_DWORD **)(a1 + 360);
          if ( v23 )
          {
            v24 = (unsigned int)*(v23 - 1);
            if ( (_DWORD)v24 == *(v23 - 2) )
            {
              v56 = (unsigned int)(3 * v24 + 1) >> 1;
              v57 = 4 * v56 + 8;
              if ( 4 * (int)v24 + 8 >= v57 || (unsigned int)v24 >= v56 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_6FFCA0(v66, "Overflow encountered when expanding vector");
LABEL_105:
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v66);
                sub_233E40((__int64)v66);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v58 = (unsigned int *)sub_186B300(v23 - 2, v57);
              v23 = v58 + 2;
              *v58 = v56;
              v59 = v58[1];
              *(_QWORD *)(a1 + 360) = v23;
              v25 = &v23[v59];
              v20 = *(_QWORD *)(a1 + 368);
            }
            else
            {
              v25 = &v23[v24];
            }
          }
          else
          {
            v63 = (_QWORD *)sub_186B270(0x10u);
            *v63 = 2;
            v20 = *(_QWORD *)(a1 + 368);
            v23 = v63 + 1;
            *(_QWORD *)(a1 + 360) = v23;
            v25 = v23;
          }
          ++v21;
          *v25 = *v22;
          ++*(v23 - 1);
          if ( !v20 )
            break;
        }
        v16 = *(_QWORD *)(a1 + 168);
LABEL_34:
        v26 = v4 + 1;
        if ( !v16 )
          goto LABEL_49;
        goto LABEL_35;
      }
      v20 = *(_QWORD *)(a1 + 368);
      if ( v20 )
        goto LABEL_27;
LABEL_49:
      v40 = *(_QWORD *)(a1 + 376);
      if ( v40 )
        v41 = (*(_DWORD *)(v40 - 4) & 1) == 0;
      else
        v41 = 1;
      return sub_702C60(a1 + 24, v41);
    }
  }
  else
  {
    result = *(_QWORD *)(a1 + 368);
    v42 = (int *)result;
    if ( result )
    {
      v43 = 0;
      if ( *(_DWORD *)(result - 4) )
      {
        while ( 1 )
        {
          v44 = (unsigned int)*(v3 - 1);
          v45 = &v3[v44];
          if ( (_DWORD)v44 == *(v3 - 2) )
          {
            v46 = (unsigned int)(3 * v44 + 1) >> 1;
            v47 = 4 * v46 + 8;
            if ( 4 * (int)v44 + 8 >= v47 || (unsigned int)v44 >= v46 )
              goto LABEL_104;
            v48 = (unsigned int *)sub_186B300(v3 - 2, v47);
            v3 = (int *)(v48 + 2);
            *v48 = v46;
            v49 = v48[1];
            *(_QWORD *)(a1 + 360) = v3;
            v45 = &v3[v49];
            result = *(_QWORD *)(a1 + 368);
          }
          ++v43;
          *v45 = *v42;
          ++*(v3 - 1);
          if ( !result || v43 >= *(_DWORD *)(result - 4) )
            return result;
          v42 = (int *)(result + 4LL * v43);
        }
      }
    }
  }
  return result;
}

