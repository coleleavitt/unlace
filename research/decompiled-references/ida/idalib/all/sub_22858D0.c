_BYTE *__fastcall sub_22858D0(__int64 *a1, _BYTE *a2, _BYTE *a3, __int64 a4, __int64 a5)
{
  __int64 v7; // r14
  __int64 v8; // rbp
  __int64 v9; // r15
  __int64 v10; // r11
  unsigned __int64 v11; // rax
  __int64 v12; // rbx
  _BYTE *v13; // rdx
  __int64 v14; // r14
  __int64 v15; // rbx
  _BYTE *v16; // r15
  __int64 v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rdi
  _QWORD *v22; // r8
  __int64 v23; // rax
  __int64 v24; // rbx
  __int64 v25; // rbx
  _BYTE *v26; // rdx
  _BYTE *v27; // rbp
  _BYTE *v28; // r10
  __int64 v29; // rbp
  __int64 v30; // rbx
  __int64 v31; // r14
  __int64 v32; // rbp
  _BYTE *v33; // r15
  __int64 v34; // r9
  __int64 v35; // rcx
  __int64 v36; // r8
  _BYTE *v37; // rdx
  _BYTE *v39; // r10
  __int64 v40; // r15
  _BYTE *v41; // rdx
  __int64 v42; // r14
  __int64 v43; // rbx
  _BYTE *v44; // r15
  __int64 v45; // rsi
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rdi
  __int64 v49; // rdi
  _QWORD *v50; // r8
  _BYTE *v51; // r10
  _BYTE *v52; // r15
  _BYTE *v53; // rbx
  __int64 v54; // r14
  _BYTE *v55; // rax
  _BYTE *v56; // r10
  __int64 v58; // [rsp+8h] [rbp-50h]
  __int64 v59; // [rsp+8h] [rbp-50h]
  __int64 v60; // [rsp+8h] [rbp-50h]
  _BYTE *v61; // [rsp+8h] [rbp-50h]
  __int64 v62; // [rsp+10h] [rbp-48h]
  __int64 v63; // [rsp+10h] [rbp-48h]
  __int64 v64; // [rsp+10h] [rbp-48h]
  _BYTE *v65; // [rsp+10h] [rbp-48h]
  __int64 *v66; // [rsp+18h] [rbp-40h]
  int v67; // [rsp+18h] [rbp-40h]
  __int64 *v68; // [rsp+18h] [rbp-40h]

  if ( a4 < a5 )
  {
    v7 = a4;
    v8 = a5;
    while ( 1 )
    {
      v9 = *(_QWORD *)(*a1 + 8);
      v10 = *(_QWORD *)(v9 + 8 * v7);
      v11 = (unsigned int)v10 & 0xF8000000;
      if ( v11 == 1476395008 )
        goto LABEL_49;
      if ( v11 == 2013265920 )
      {
        v23 = *(_QWORD *)(v9 + 8 * v7);
        v24 = v7;
        do
        {
          v24 += v23 & 0x7FFFFFF;
          v23 = *(_QWORD *)(v9 + 8 * v24);
        }
        while ( (v23 & 0xF8000000) != 0x90000000LL );
        v25 = v24 + 1;
        v67 = v10;
        v26 = a3;
        v59 = v8;
        while ( 1 )
        {
          v27 = sub_2284FC0(a1, a2, v26, v7, v25);
          if ( a3 == sub_2284FC0(a1, v27, a3, v25, v59) )
            break;
          v26 = v27 - 1;
        }
        v28 = v27;
        v29 = v59;
        v60 = v25;
        v30 = v7 + 1;
        v63 = v29;
        v31 = v7 + (v67 & 0x7FFFFFF) - 1;
        v32 = v9;
        v33 = v28;
        while ( sub_2284FC0(a1, a2, v33, v30, v31) != v33 )
        {
          v30 = v31 + 2;
          v34 = (*(_QWORD *)(v32 + 8 * (v31 + 1)) & 0x7FFFFFFLL) + v31 + 1;
          v31 = v34 - ((*(_QWORD *)(v32 + 8 * v34) & 0xF8000000LL) == 2281701376LL);
        }
        v35 = v30;
        v12 = v60;
        v61 = v33;
        v36 = v31;
        v8 = v63;
        v37 = v33;
LABEL_38:
        sub_22858D0(a1, a2, v37, v35, v36);
        a2 = v61;
        goto LABEL_39;
      }
      v58 = v7;
      if ( v11 == 1207959552 )
LABEL_49:
        v58 = (v10 & 0x7FFFFFF) + v7;
      v12 = v58 + 1;
      if ( v11 == 1207959552 )
      {
        v41 = a3;
        v64 = v7;
        v42 = v58 + 1;
        v68 = (__int64 *)(v9 + 8 * v12);
        v43 = *(_QWORD *)(*a1 + 8);
LABEL_57:
        while ( 1 )
        {
          v44 = sub_2284FC0(a1, a2, v41, v64, v42);
          if ( a3 == sub_2284FC0(a1, v44, a3, v42, v8) )
            break;
          v41 = v44 - 1;
          if ( v8 > v42 )
          {
            v45 = *v68;
            v46 = *v68 & 0xF8000000LL;
            if ( v46 == 1879048192 )
            {
              v47 = v58 + 1;
              while ( v8 != ++v47 )
              {
                v45 = *(_QWORD *)(v43 + 8 * v47);
                v48 = v47;
                v46 = (unsigned int)v45 & 0xF8000000;
                if ( v46 != 1879048192 )
                  goto LABEL_63;
              }
            }
            else
            {
              v48 = v58 + 1;
LABEL_63:
              if ( v46 == 0x10000000 && v41 != a2 )
              {
                v49 = v48 + 1;
                v50 = (_QWORD *)(v43 + 8 * v49);
                if ( v8 > v49 )
                {
                  do
                  {
                    while ( (_BYTE)v45 != *v41 )
                    {
                      if ( a2 == --v41 )
                        goto LABEL_73;
                    }
                    if ( (*v50 & 0xF8000000LL) != 0x10000000 || v44 <= v41 + 1 || v41[1] == (unsigned __int8)*v50 )
                      goto LABEL_57;
                    --v41;
                  }
                  while ( a2 != v41 );
LABEL_73:
                  v41 = a2;
                }
                else
                {
                  do
                  {
                    if ( (_BYTE)v45 == *v41 )
                      break;
                    --v41;
                  }
                  while ( v41 != a2 );
                }
              }
            }
          }
        }
        v51 = v44;
        v52 = a2;
        v53 = v51;
        v54 = v64 + 1;
        while ( 1 )
        {
          v55 = sub_2284FC0(a1, a2, v53, v54, v58);
          if ( a2 == v55 || v55 == nullptr )
            break;
          v52 = a2;
          a2 = v55;
        }
        v56 = v53;
        v12 = v58 + 1;
        if ( !v55 )
        {
          v55 = a2;
          a2 = v52;
        }
        v65 = v56;
        sub_22858D0(a1, a2, v55, v54, v58);
        a2 = v65;
        goto LABEL_39;
      }
      if ( v11 <= 0x48000000 )
      {
        if ( v11 == 671088640 || v11 == 805306368 || v11 == 0x10000000 )
          ++a2;
        goto LABEL_39;
      }
      if ( v11 == 1744830464 )
      {
        *(_QWORD *)(16 * (v10 & 0x7FFFFFF) + a1[2]) = &a2[-a1[3]];
        goto LABEL_39;
      }
      if ( v11 <= 0x68000000 )
      {
        if ( v11 == 1476395008 )
        {
          v13 = a3;
          v62 = v7;
          v14 = v58 + 1;
          v66 = (__int64 *)(v9 + 8 * v12);
          v15 = *(_QWORD *)(*a1 + 8);
LABEL_12:
          while ( 1 )
          {
            v16 = sub_2284FC0(a1, a2, v13, v62, v14);
            if ( a3 == sub_2284FC0(a1, v16, a3, v14, v8) )
              break;
            v13 = v16 - 1;
            if ( v8 > v14 )
            {
              v17 = *v66;
              v18 = *v66 & 0xF8000000LL;
              if ( v18 == 1879048192 )
              {
                v19 = v58 + 1;
                while ( v8 != ++v19 )
                {
                  v17 = *(_QWORD *)(v15 + 8 * v19);
                  v20 = v19;
                  v18 = (unsigned int)v17 & 0xF8000000;
                  if ( v18 != 1879048192 )
                    goto LABEL_18;
                }
              }
              else
              {
                v20 = v58 + 1;
LABEL_18:
                if ( v18 == 0x10000000 && v13 != a2 )
                {
                  v21 = v20 + 1;
                  v22 = (_QWORD *)(v15 + 8 * v21);
                  if ( v8 > v21 )
                  {
                    do
                    {
                      while ( (_BYTE)v17 != *v13 )
                      {
                        if ( a2 == --v13 )
                          goto LABEL_28;
                      }
                      if ( (*v22 & 0xF8000000LL) != 0x10000000 || v16 <= v13 + 1 || v13[1] == (unsigned __int8)*v22 )
                        goto LABEL_12;
                      --v13;
                    }
                    while ( a2 != v13 );
LABEL_28:
                    v13 = a2;
                  }
                  else
                  {
                    do
                    {
                      if ( (_BYTE)v17 == *v13 )
                        break;
                      --v13;
                    }
                    while ( v13 != a2 );
                  }
                }
              }
            }
          }
          v12 = v58 + 1;
          v39 = v16;
          v40 = v58;
          v61 = v39;
          if ( sub_2284FC0(a1, a2, v39, v62 + 1, v40) )
          {
            v36 = v40;
            v35 = v62 + 1;
            v37 = v61;
            goto LABEL_38;
          }
          a2 = v61;
        }
LABEL_39:
        if ( v8 <= v12 )
          return a2;
        goto LABEL_40;
      }
      if ( v11 != 1879048192 )
        goto LABEL_39;
      *(_QWORD *)(16 * (v10 & 0x7FFFFFF) + a1[2] + 8) = &a2[-a1[3]];
      if ( v8 <= v12 )
        return a2;
LABEL_40:
      v7 = v12;
    }
  }
  return a2;
}
