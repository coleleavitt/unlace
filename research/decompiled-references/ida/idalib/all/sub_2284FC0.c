_BYTE *__fastcall sub_2284FC0(__int64 *a1, _BYTE *a2, _BYTE *a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // rax
  int v9; // r14d
  __int64 v10; // rax
  __int64 v11; // r13
  int v12; // r11d
  int v13; // ebp
  __int64 v14; // rbx
  unsigned __int64 v15; // rdi
  __int64 v16; // r10
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r15
  __int64 v20; // r9
  unsigned __int64 v21; // rsi
  const unsigned __int16 **v22; // rax
  const unsigned __int16 *v23; // rdx
  __int16 v24; // ax
  __int64 v25; // rcx
  int v26; // r9d
  _BYTE *v27; // rax
  int v28; // edx
  const unsigned __int16 **v29; // rax
  __int16 v30; // ax
  const unsigned __int16 **v31; // rax
  __int64 v32; // r8
  __int64 v33; // r8
  __int64 v34; // rsi
  unsigned __int64 v35; // rdi
  __int64 v36; // rsi
  __int64 v37; // rdx
  char v38; // cl
  __int64 v39; // rsi
  __int64 v40; // rcx
  __int64 v42; // [rsp+8h] [rbp-B0h]
  _BYTE *v43; // [rsp+10h] [rbp-A8h]
  __int64 v44; // [rsp+20h] [rbp-98h]
  int v45; // [rsp+28h] [rbp-90h]
  int v46; // [rsp+2Ch] [rbp-8Ch]
  __int64 *v48; // [rsp+38h] [rbp-80h]
  _QWORD *v49; // [rsp+40h] [rbp-78h]
  __int64 v51; // [rsp+50h] [rbp-68h]
  _BYTE *v52; // [rsp+60h] [rbp-58h]
  unsigned int v54; // [rsp+70h] [rbp-48h]
  _BYTE *v55; // [rsp+78h] [rbp-40h]

  v6 = a4;
  v42 = *a1;
  if ( a4 >= a5 )
    goto LABEL_5;
  while ( 1 )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(*a1 + 8) + 8 * v6);
    v8 = (unsigned int)v7 & 0xF8000000;
    if ( v8 == 1744830464 || v8 == 1879048192 )
      goto LABEL_120;
    if ( v8 != 0x10000000 )
      goto LABEL_5;
    if ( a3 == a2 || *a2 != (_BYTE)v7 )
      return nullptr;
    ++a2;
LABEL_120:
    if ( a5 == ++v6 )
    {
      v6 = a5;
LABEL_5:
      v9 = 128;
      v51 = a1[12];
      if ( (_BYTE *)a1[4] != a2 )
        v9 = (char)*(a2 - 1);
      v48 = (__int64 *)(v42 + 8);
      v44 = 1LL << v6;
      v49 = (_QWORD *)(v42 + 24);
      v10 = sub_2283BC0((__int64 *)(v42 + 8), (_QWORD *)(v42 + 24), v6, a5, 1LL << v6, 132, 1LL << v6);
      v43 = nullptr;
      v52 = (_BYTE *)a1[5];
      v11 = v6;
      if ( v52 == a2 )
        goto LABEL_47;
LABEL_8:
      v45 = (char)*a2;
      if ( v9 != 10 )
      {
        v12 = 0;
        v13 = 0;
        if ( v9 == 128 && (a1[1] & 1) == 0 )
        {
          v13 = 129;
          v12 = *(_DWORD *)(v42 + 76);
        }
        goto LABEL_10;
      }
      v13 = *(_DWORD *)(v42 + 40) & 8;
      if ( (*(_DWORD *)(v42 + 40) & 8) != 0 )
        goto LABEL_111;
      v14 = v10;
LABEL_55:
      v29 = __ctype_b_loc();
      v23 = *v29;
      v25 = (unsigned __int8)v9;
      v30 = (*v29)[(unsigned __int8)v9] & 8;
      if ( v30 || v9 == 95 )
        goto LABEL_62;
      if ( v45 != 128 )
      {
        v24 = v23[(unsigned __int8)v45] & 8;
        if ( !v24 && v45 != 95 )
        {
LABEL_60:
          if ( v9 == 128 )
            goto LABEL_68;
          v31 = __ctype_b_loc();
          v23 = *v31;
          v30 = (*v31)[(unsigned __int8)v9] & 8;
LABEL_62:
          if ( !v30 && v9 != 95 )
            goto LABEL_68;
          if ( v13 == 130 )
            goto LABEL_114;
          v9 = 128;
          if ( v45 == 128 )
            goto LABEL_42;
          if ( (v23[(unsigned __int8)v45] & 8) == 0 && v45 != 95 )
          {
LABEL_114:
            v26 = 134;
            goto LABEL_41;
          }
          if ( (unsigned int)(v13 - 133) > 1 )
            goto LABEL_68;
LABEL_40:
          v26 = 133;
LABEL_41:
          v9 = v45;
          v14 = sub_2283BC0(v48, v49, v11, a5, v14, v26, v14);
          goto LABEL_42;
        }
LABEL_38:
        if ( ((v23[v25] & 8) != 0 || v9 == 95) && !v24 && v45 != 95 )
          goto LABEL_114;
        goto LABEL_40;
      }
      while ( 1 )
      {
LABEL_68:
        v9 = v45;
LABEL_42:
        v27 = v43;
        if ( (v14 & (1LL << a5)) != 0 )
          v27 = a2;
        v43 = v27;
        if ( v14 == v51 || a2 == a3 )
          return v43;
        ++a2;
        v10 = sub_2283BC0(v48, v49, v11, a5, v14, v9, v51);
        if ( v52 != a2 )
          goto LABEL_8;
LABEL_47:
        if ( v9 == 10 )
        {
          v13 = *(_DWORD *)(v42 + 40) & 8;
          if ( (*(_DWORD *)(v42 + 40) & 8) == 0 )
          {
            if ( (a1[1] & 2) != 0 )
            {
              v45 = 128;
              goto LABEL_129;
            }
            v12 = *(_DWORD *)(v42 + 80);
            v45 = 128;
LABEL_52:
            v54 = 0;
            v13 = 130;
            v46 = 128;
            if ( v12 > 0 )
              goto LABEL_14;
            v14 = v10;
            goto LABEL_54;
          }
          v12 = *(_DWORD *)(v42 + 76);
          v13 = 129;
          v28 = *((_DWORD *)a1 + 2);
        }
        else if ( v9 == 128 )
        {
          v28 = *((_DWORD *)a1 + 2);
          if ( (v28 & 1) == 0 )
          {
            v45 = 128;
LABEL_111:
            v13 = 129;
            v12 = *(_DWORD *)(v42 + 76);
LABEL_10:
            if ( v45 != 10 )
            {
              if ( v45 != 128 )
                goto LABEL_12;
              v28 = *((_DWORD *)a1 + 2);
              goto LABEL_50;
            }
            if ( (*(_BYTE *)(v42 + 40) & 8) == 0 )
            {
LABEL_12:
              if ( v12 <= 0 )
              {
LABEL_129:
                v14 = v10;
LABEL_33:
                if ( v13 != 129 )
                  goto LABEL_54;
                if ( v45 == 128 )
                  goto LABEL_60;
                v22 = __ctype_b_loc();
                v23 = *v22;
                v24 = (*v22)[(unsigned __int8)v45] & 8;
                if ( v45 != 95 && !v24 )
                  goto LABEL_60;
                v25 = (unsigned __int8)v9;
                if ( v9 == 128 )
                  goto LABEL_40;
                goto LABEL_38;
              }
              v46 = v13;
              v54 = v13 - 130;
LABEL_14:
              v55 = a2;
              while ( 1 )
              {
                v14 = v10;
                if ( a5 != v11 )
                  break;
LABEL_31:
                v10 = v14;
                if ( !--v12 )
                {
                  a2 = v55;
                  goto LABEL_33;
                }
              }
              v14 = v10;
              v15 = v44;
              v16 = *(_QWORD *)(v42 + 8);
              v17 = v11;
              while ( 2 )
              {
                v18 = *(_QWORD *)(v16 + 8 * v17);
                v19 = v17;
                v20 = v15;
                v21 = (unsigned int)v18 & 0xF8000000;
                if ( v21 == 1342177280 )
                {
                  v34 = 2 * (v15 & v14);
                  v35 = v15 >> v18;
                  v36 = v14 | v34;
                  v14 = v36 | ((v20 & (unsigned __int64)v36) >> v18);
                  if ( (v35 & v36) != 0 || (v14 & v35) == 0 )
                    goto LABEL_20;
                  v37 = v17 - 1 - (v18 & 0x7FFFFFF);
                  v38 = v37;
                  v17 = v37 + 1;
                  v20 = 1LL << v38;
                  goto LABEL_21;
                }
                if ( v21 <= 0x50000000 )
                {
                  if ( v21 == 671088640 )
                  {
                    ++v17;
                    if ( v13 <= 127 )
                      goto LABEL_79;
                  }
                  else if ( v21 <= 0x28000000 )
                  {
                    switch ( v21 )
                    {
                      case 0x18000000uLL:
                        ++v17;
                        if ( v46 == 129 )
                          goto LABEL_79;
                        break;
                      case 0x20000000uLL:
                        ++v17;
                        if ( v54 <= 1 )
                          goto LABEL_79;
                        break;
                      case 0x10000000uLL:
                        ++v17;
                        if ( (char)v18 == v13 )
                          goto LABEL_79;
                        break;
                      default:
                        goto LABEL_20;
                    }
                  }
                  else
                  {
                    if ( v21 == 939524096 )
                      goto LABEL_30;
                    if ( v21 > 0x38000000 )
                    {
                      if ( v21 == 0x40000000 || v21 == 1207959552 )
                        goto LABEL_30;
                      goto LABEL_20;
                    }
                    if ( v21 != 805306368 )
                      goto LABEL_20;
                    ++v17;
                    if ( v13 <= 127 )
                    {
                      v33 = *(_QWORD *)(v42 + 24) + 32 * (v18 & 0x7FFFFFF);
                      if ( (*(_BYTE *)(*(_QWORD *)v33 + v13) & *(_BYTE *)(v33 + 8)) != 0 )
LABEL_79:
                        v14 |= 2 * (v15 & v10);
                    }
                  }
LABEL_21:
                  v15 = 2 * v20;
                  if ( a5 == v17 )
                    goto LABEL_31;
                  continue;
                }
                break;
              }
              if ( v21 == 1879048192 )
                goto LABEL_30;
              if ( v21 <= 0x70000000 )
              {
                if ( v21 == 1610612736 || v21 == 1744830464 )
                {
LABEL_30:
                  v14 |= 2 * (v14 & v15);
                  goto LABEL_20;
                }
                if ( v21 != 1476395008 )
                {
LABEL_20:
                  ++v17;
                  goto LABEL_21;
                }
              }
              else
              {
                if ( v21 == 0x80000000 )
                {
                  if ( (v14 & v15) != 0 )
                  {
                    v39 = *(_QWORD *)(v16 + 8 * v17 + 8);
                    if ( (v39 & 0xF8000000) == 0x90000000LL )
                    {
                      LOBYTE(v40) = 1;
                    }
                    else
                    {
                      v40 = 1;
                      do
                      {
                        v40 += v39 & 0x7FFFFFF;
                        v39 = *(_QWORD *)(v16 + 8 * (v40 + v17));
                      }
                      while ( (v39 & 0xF8000000) != 0x90000000LL );
                    }
                    ++v17;
                    v14 |= (v14 & v15) << v40;
                  }
                  else
                  {
                    ++v17;
                  }
                  goto LABEL_21;
                }
                if ( v21 > 0x80000000 )
                {
                  if ( v21 != 2281701376 )
                  {
                    if ( v21 == 2415919104 )
                      goto LABEL_30;
                    goto LABEL_20;
                  }
                  v32 = v18 & 0x7FFFFFF;
                  ++v17;
                  v14 |= 2 * (v15 & v14);
                  if ( (*(_QWORD *)(v16 + 8 * (v32 + v19)) & 0xF8000000LL) != 0x90000000LL )
                    v14 |= (v15 & v14) << v32;
                  goto LABEL_21;
                }
                if ( v21 != 2013265920 )
                  goto LABEL_20;
              }
              v14 |= ((((2 * (v15 & v14)) | v14) & v15) << v18) | (2 * (v15 & v14));
              goto LABEL_20;
            }
            goto LABEL_51;
          }
          v12 = 0;
          v13 = 0;
        }
        else
        {
          v12 = 0;
          v13 = 0;
          v28 = *((_DWORD *)a1 + 2);
        }
LABEL_50:
        v45 = 128;
        if ( (v28 & 2) != 0 )
          goto LABEL_12;
LABEL_51:
        v12 += *(_DWORD *)(v42 + 80);
        if ( v13 != 129 )
          goto LABEL_52;
        v46 = 129;
        v13 = 131;
        v54 = 1;
        if ( v12 > 0 )
          goto LABEL_14;
        v14 = v10;
LABEL_54:
        if ( v9 != 128 )
          goto LABEL_55;
      }
    }
  }
}
