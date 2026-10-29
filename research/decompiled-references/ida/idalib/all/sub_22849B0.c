_BYTE *__fastcall sub_22849B0(_QWORD *a1, _BYTE *a2, _BYTE *a3, __int64 a4, __int64 a5)
{
  _BYTE *v5; // r15
  __int64 v7; // r13
  __int64 v8; // r12
  _BYTE *v9; // r14
  __int64 v10; // rsi
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  __int64 v13; // rbx
  _BYTE *v14; // rdx
  _BYTE *v15; // r15
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // r8
  _QWORD *v22; // rdi
  __int64 v23; // rbx
  __int64 v24; // rbx
  _BYTE *i; // rdx
  _BYTE *v26; // r12
  __int64 v27; // rbx
  __int64 j; // r13
  __int64 v29; // rax
  __int64 v30; // r13
  __int64 v31; // rcx
  __int64 v32; // r8
  _BYTE *v33; // rsi
  __int64 v35; // r13
  _BYTE *v36; // rdx
  __int64 v37; // r15
  _BYTE *v38; // rbx
  __int64 v39; // rdi
  __int64 v40; // rsi
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // r8
  __int64 v44; // r8
  _QWORD *v45; // rdi
  _BYTE *v46; // r15
  __int64 v47; // rax
  _BYTE *v48; // r13
  __int64 v49; // rbx
  _BYTE *v50; // rax
  _BYTE *v51; // rsi
  __int64 v53; // [rsp+10h] [rbp-58h]
  __int64 v54; // [rsp+10h] [rbp-58h]
  __int64 v55; // [rsp+10h] [rbp-58h]
  __int64 v56; // [rsp+18h] [rbp-50h]
  __int64 v57; // [rsp+18h] [rbp-50h]

  v5 = a2;
  if ( a4 < a5 )
  {
    v7 = a4;
    v8 = a5;
    v9 = a2;
    while ( 1 )
    {
      v10 = *(_QWORD *)(*a1 + 8LL);
      v11 = *(_QWORD *)(v10 + 8 * v7);
      v12 = (unsigned int)v11 & 0xF8000000;
      if ( v12 == 1476395008 )
        goto LABEL_49;
      if ( v12 == 2013265920 )
      {
        v23 = v7;
        do
        {
          v23 += v11 & 0x7FFFFFF;
          v11 = *(_QWORD *)(v10 + 8 * v23);
        }
        while ( (v11 & 0xF8000000) != 0x90000000LL );
        v24 = v23 + 1;
        v54 = v8;
        for ( i = a3; ; i = v26 - 1 )
        {
          v26 = sub_2284450(a1, v9, i, v7, v24);
          if ( a3 == sub_2284450(a1, v26, a3, v24, v54) )
            break;
        }
        v15 = v26;
        v8 = v54;
        v55 = v24;
        v27 = v7 + 1;
        for ( j = v7 + (*(_DWORD *)(*(_QWORD *)(*a1 + 8LL) + 8 * v7) & 0x7FFFFFF) - 1;
              sub_2284450(a1, v9, v15, v27, j) != v15;
              j = v30 - ((*(_QWORD *)(v29 + 8 * v30) & 0xF8000000LL) == 2281701376LL) )
        {
          v27 = j + 2;
          v29 = *(_QWORD *)(*a1 + 8LL);
          v30 = j + 1 + (*(_QWORD *)(v29 + 8 * (j + 1)) & 0x7FFFFFFLL);
        }
        v31 = v27;
        v13 = v55;
        v32 = j;
LABEL_37:
        v33 = v9;
        v9 = v15;
        sub_22849B0(a1, v33, v15, v31, v32);
        goto LABEL_38;
      }
      v53 = v7;
      if ( v12 == 1207959552 )
LABEL_49:
        v53 = (v11 & 0x7FFFFFF) + v7;
      v13 = v53 + 1;
      if ( v12 == 1207959552 )
      {
        v36 = a3;
        v37 = v53 + 1;
        v56 = 8 * v13;
LABEL_57:
        while ( 1 )
        {
          v38 = sub_2284450(a1, v9, v36, v7, v37);
          if ( a3 == sub_2284450(a1, v38, a3, v37, v8) )
            break;
          v36 = v38 - 1;
          if ( v8 > v37 )
          {
            v39 = *(_QWORD *)(*a1 + 8LL);
            v40 = *(_QWORD *)(v39 + v56);
            v41 = (unsigned int)v40 & 0xF8000000;
            if ( v41 == 1879048192 )
            {
              v42 = v53 + 1;
              while ( v8 != ++v42 )
              {
                v40 = *(_QWORD *)(v39 + 8 * v42);
                v43 = v42;
                v41 = (unsigned int)v40 & 0xF8000000;
                if ( v41 != 1879048192 )
                  goto LABEL_63;
              }
            }
            else
            {
              v43 = v53 + 1;
LABEL_63:
              if ( v41 == 0x10000000 && v36 != v9 )
              {
                v44 = v43 + 1;
                v45 = (_QWORD *)(v39 + 8 * v44);
                if ( v8 > v44 )
                {
                  do
                  {
                    while ( (_BYTE)v40 != *v36 )
                    {
                      if ( v9 == --v36 )
                        goto LABEL_73;
                    }
                    if ( (*v45 & 0xF8000000LL) != 0x10000000 || v38 <= v36 + 1 || v36[1] == (unsigned __int8)*v45 )
                      goto LABEL_57;
                    --v36;
                  }
                  while ( v9 != v36 );
LABEL_73:
                  v36 = v9;
                }
                else
                {
                  do
                  {
                    if ( (_BYTE)v40 == *v36 )
                      break;
                    --v36;
                  }
                  while ( v36 != v9 );
                }
              }
            }
          }
        }
        v46 = v38;
        v47 = v7 + 1;
        v48 = v9;
        v57 = v47;
        v49 = v47;
        while ( 1 )
        {
          v50 = sub_2284450(a1, v9, v46, v49, v53);
          if ( v9 == v50 || v50 == nullptr )
            break;
          v48 = v9;
          v9 = v50;
        }
        v13 = v53 + 1;
        if ( !v50 )
        {
          v50 = v9;
          v9 = v48;
        }
        v51 = v9;
        v9 = v46;
        sub_22849B0(a1, v51, v50, v57, v53);
        goto LABEL_38;
      }
      if ( v12 <= 0x48000000 )
      {
        if ( v12 == 671088640 || v12 == 805306368 || v12 == 0x10000000 )
          ++v9;
        goto LABEL_38;
      }
      if ( v12 == 1744830464 )
      {
        *(_QWORD *)(a1[2] + 16 * (v11 & 0x7FFFFFF)) = &v9[-a1[3]];
        goto LABEL_38;
      }
      if ( v12 <= 0x68000000 )
      {
        v14 = a3;
        if ( v12 == 1476395008 )
        {
LABEL_11:
          while ( 1 )
          {
            v15 = sub_2284450(a1, v9, v14, v7, v13);
            if ( a3 == sub_2284450(a1, v15, a3, v13, v8) )
              break;
            v14 = v15 - 1;
            if ( v8 > v13 )
            {
              v16 = *(_QWORD *)(*a1 + 8LL);
              v17 = *(_QWORD *)(v16 + 8 * v13);
              v18 = (unsigned int)v17 & 0xF8000000;
              if ( v18 == 1879048192 )
              {
                v19 = v53 + 1;
                while ( v8 != ++v19 )
                {
                  v17 = *(_QWORD *)(v16 + 8 * v19);
                  v20 = v19;
                  v18 = (unsigned int)v17 & 0xF8000000;
                  if ( v18 != 1879048192 )
                    goto LABEL_17;
                }
              }
              else
              {
                v20 = v53 + 1;
LABEL_17:
                if ( v18 == 0x10000000 && v14 != v9 )
                {
                  v21 = v20 + 1;
                  v22 = (_QWORD *)(v16 + 8 * v21);
                  if ( v8 > v21 )
                  {
                    do
                    {
                      while ( (_BYTE)v17 != *v14 )
                      {
                        if ( v9 == --v14 )
                          goto LABEL_27;
                      }
                      if ( (*v22 & 0xF8000000LL) != 0x10000000 || v15 <= v14 + 1 || v14[1] == (unsigned __int8)*v22 )
                        goto LABEL_11;
                      --v14;
                    }
                    while ( v9 != v14 );
LABEL_27:
                    v14 = v9;
                  }
                  else
                  {
                    do
                    {
                      if ( (_BYTE)v17 == *v14 )
                        break;
                      --v14;
                    }
                    while ( v14 != v9 );
                  }
                }
              }
            }
          }
          v35 = v7 + 1;
          if ( sub_2284450(a1, v9, v15, v35, v53) )
          {
            v32 = v53;
            v31 = v35;
            goto LABEL_37;
          }
          v9 = v15;
        }
LABEL_38:
        if ( v8 <= v13 )
          return v9;
        goto LABEL_39;
      }
      if ( v12 != 1879048192 )
        goto LABEL_38;
      *(_QWORD *)(a1[2] + 16 * (v11 & 0x7FFFFFF) + 8) = &v9[-a1[3]];
      if ( v8 <= v13 )
        return v9;
LABEL_39:
      v7 = v13;
    }
  }
  return v5;
}
