__int64 __fastcall sub_2282CC0(
        __int64 *a1,
        unsigned __int8 *a2,
        unsigned __int8 *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7)
{
  __int64 v10; // r8
  __int64 v11; // rbx
  unsigned __int64 v12; // rax
  unsigned __int8 v13; // bl
  const unsigned __int16 **v14; // rax
  __int64 v15; // rdi
  __int64 result; // rax
  __int64 v17; // rax
  unsigned __int8 *v18; // rax
  unsigned __int64 v19; // rbx
  const unsigned __int16 **v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rbx
  __int64 v23; // r11
  __int64 v24; // rdx
  __int64 *v25; // rax
  __int64 v26; // r9
  __int64 v27; // rax
  size_t v28; // r9
  int v29; // edx
  __int64 v30; // rax
  __int64 v31; // rbx
  __int64 *v32; // rax
  __int64 v33; // r12
  int v34; // eax
  int v35; // ecx
  __int64 v36; // r13
  int v37; // r14d
  __int64 v38; // rsi
  __int64 v39; // r10
  __int64 v40; // rbx
  __int64 v41; // rax
  __int64 v42; // r12
  unsigned __int8 **v43; // rax
  __int64 v45; // [rsp+10h] [rbp-68h]
  __int64 v46; // [rsp+10h] [rbp-68h]
  __int64 v47; // [rsp+10h] [rbp-68h]
  __int64 v48; // [rsp+18h] [rbp-60h]
  __int64 v49; // [rsp+18h] [rbp-60h]
  __int64 v50; // [rsp+18h] [rbp-60h]
  size_t v51; // [rsp+18h] [rbp-60h]
  __int64 v52; // [rsp+20h] [rbp-58h]
  __int64 v53; // [rsp+20h] [rbp-58h]
  __int64 v54; // [rsp+20h] [rbp-58h]
  __int64 v55; // [rsp+20h] [rbp-58h]
  __int64 v57; // [rsp+30h] [rbp-48h]
  __int64 v58; // [rsp+38h] [rbp-40h]

  if ( a4 >= a5 )
  {
LABEL_102:
    result = (__int64)a3;
    if ( a3 != a2 )
      return 0;
    return result;
  }
  while ( 2 )
  {
    v45 = *a1;
    v10 = *(_QWORD *)(*a1 + 8);
    while ( 1 )
    {
      v11 = *(_QWORD *)(v10 + 8 * a4);
      v12 = (unsigned int)v11 & 0xF8000000;
      if ( v12 == 805306368 )
      {
        v22 = *(_QWORD *)(v45 + 24) + 32 * (v11 & 0x7FFFFFF);
        if ( a3 == a2 || (*(_BYTE *)(*(_QWORD *)v22 + *a2) & *(_BYTE *)(v22 + 8)) == 0 )
          return 0;
        ++a2;
        goto LABEL_9;
      }
      if ( v12 <= 0x30000000 )
        break;
      if ( v12 == 2415919104 )
        goto LABEL_9;
      if ( v12 > 0x90000000 )
      {
        if ( v12 != 2550136832 )
        {
          if ( v12 != 2684354560 )
            goto LABEL_68;
          if ( (unsigned __int8 *)a1[5] == a2 )
          {
            if ( (a1[1] & 2) != 0 )
              return 0;
          }
          else
          {
            if ( a1[5] <= (unsigned __int64)a2 )
              return 0;
            v13 = *a2;
            if ( *a2 != 10 || (*(_BYTE *)(v45 + 40) & 8) == 0 )
            {
              v52 = a4;
              v48 = v10;
              if ( ((*__ctype_b_loc())[v13] & 8) != 0 )
                return 0;
              v10 = v48;
              a4 = v52;
              if ( v13 == 95 )
                return 0;
            }
          }
          v53 = a4;
          v49 = v10;
          if ( a1[4] >= (unsigned __int64)a2 )
            return 0;
          v14 = __ctype_b_loc();
          v15 = *(a2 - 1);
          goto LABEL_23;
        }
        v18 = (unsigned __int8 *)a1[4];
        v19 = a1[5];
        if ( v18 != a2 )
        {
          if ( (unsigned __int64)a2 < v19 && *(a2 - 1) == 10 )
            goto LABEL_60;
          goto LABEL_43;
        }
        if ( (a1[1] & 1) != 0 )
        {
          if ( (unsigned __int64)a2 >= v19 || *(a2 - 1) != 10 )
            return 0;
LABEL_60:
          if ( (*(_BYTE *)(v45 + 40) & 8) == 0 )
          {
LABEL_43:
            v54 = a4;
            v50 = v10;
            if ( v18 >= a2 )
              return 0;
            v20 = __ctype_b_loc();
            v21 = *(a2 - 1);
            if ( ((*v20)[v21] & 8) != 0 )
              return 0;
            v10 = v50;
            a4 = v54;
            if ( (_BYTE)v21 == 95 )
              return 0;
            goto LABEL_46;
          }
        }
        else
        {
LABEL_46:
          if ( (unsigned __int64)a2 >= v19 )
            return 0;
        }
        v53 = a4;
        v49 = v10;
        v14 = __ctype_b_loc();
        v15 = *a2;
LABEL_23:
        v10 = v49;
        a4 = v53;
        if ( ((*v14)[v15] & 8) == 0 && (_BYTE)v15 != 95 )
          return 0;
        goto LABEL_9;
      }
      if ( v12 != 1610612736 )
      {
        if ( v12 != 0x80000000 )
          goto LABEL_68;
        v17 = *(_QWORD *)(v10 + 8 * a4++ + 8);
        do
        {
          a4 += v17 & 0x7FFFFFF;
          v17 = *(_QWORD *)(v10 + 8 * a4);
        }
        while ( (v17 & 0xF8000000) != 0x90000000LL );
      }
LABEL_9:
      if ( a5 <= ++a4 )
        goto LABEL_102;
    }
    if ( v12 == 402653184 )
    {
      if ( (unsigned __int8 *)a1[4] == a2 && (a1[1] & 1) == 0 )
        goto LABEL_9;
      if ( a1[5] <= (unsigned __int64)a2 || *(a2 - 1) != 10 )
        return 0;
      goto LABEL_39;
    }
    if ( v12 > 0x18000000 )
    {
      if ( v12 == 0x20000000 )
      {
        if ( (unsigned __int8 *)a1[5] != a2 )
        {
          if ( a1[5] <= (unsigned __int64)a2 || *a2 != 10 )
            return 0;
LABEL_39:
          if ( (*(_BYTE *)(v45 + 40) & 8) == 0 )
            return 0;
          goto LABEL_9;
        }
        if ( (a1[1] & 2) != 0 )
          return 0;
      }
      else
      {
        if ( v12 != 671088640 )
          goto LABEL_68;
        if ( a3 == a2 )
          return 0;
        ++a2;
      }
      goto LABEL_9;
    }
    if ( v12 == 0x10000000 )
    {
      if ( a3 == a2 || *a2 != (_BYTE)v11 )
        return 0;
      ++a2;
      goto LABEL_9;
    }
LABEL_68:
    v23 = a4 + 1;
    v24 = a4 + 1;
    if ( v12 == 1476395008 )
    {
      v47 = a4 + 1;
      result = sub_2282CC0((_DWORD)a1, (_DWORD)a2, (_DWORD)a3, (int)a4 + 1, a5, a6, a7);
      if ( result )
        return result;
      a4 = (v11 & 0x7FFFFFF) + v47;
LABEL_101:
      if ( a5 <= a4 )
        goto LABEL_102;
      continue;
    }
    break;
  }
  if ( v12 > 0x58000000 )
  {
    switch ( v12 )
    {
      case 0x70000000uLL:
        v40 = 16 * (v11 & 0x7FFFFFF);
        v41 = v40 + a1[2];
        v42 = *(_QWORD *)(v41 + 8);
        *(_QWORD *)(v41 + 8) = &a2[-a1[3]];
        result = sub_2282CC0((_DWORD)a1, (_DWORD)a2, (_DWORD)a3, (int)a4 + 1, a5, a6, a7);
        if ( !result )
          *(_QWORD *)(a1[2] + v40 + 8) = v42;
        break;
      case 0x78000000uLL:
        v34 = a5;
        v35 = a4 + 1;
        v36 = v24 + (v11 & 0x7FFFFFF) - 2;
        v37 = v34;
        while ( 1 )
        {
          result = sub_2282CC0((_DWORD)a1, (_DWORD)a2, (_DWORD)a3, v35, v37, a6, a7);
          if ( result )
            break;
          v38 = *(_QWORD *)(*a1 + 8);
          if ( (*(_QWORD *)(v38 + 8 * v36) & 0xF8000000LL) == 0x90000000LL )
            return 0;
          v35 = v36 + 2;
          v39 = v36 + (*(_QWORD *)(v38 + 8 * v36 + 8) & 0x7FFFFFFLL) + 1;
          v36 = v39 - ((*(_QWORD *)(v38 + 8 * v39) & 0xF8000000LL) == 2281701376LL);
        }
        break;
      case 0x68000000uLL:
        v31 = 16 * (v11 & 0x7FFFFFF);
        v32 = (__int64 *)(v31 + a1[2]);
        v33 = *v32;
        *v32 = (__int64)&a2[-a1[3]];
        result = sub_2282CC0((_DWORD)a1, (_DWORD)a2, (_DWORD)a3, (int)a4 + 1, a5, a6, a7);
        if ( !result )
          *(_QWORD *)(a1[2] + v31) = v33;
        break;
      default:
        return 0;
    }
    return result;
  }
  if ( v12 == 1207959552 )
  {
    ++a4;
    *(_QWORD *)(a1[7] + 8 * ++a6) = a2;
    goto LABEL_101;
  }
  if ( v12 == 1342177280 )
  {
    v43 = (unsigned __int8 **)(a1[7] + 8 * a6);
    if ( *v43 == a2 )
    {
      ++a4;
      --a6;
    }
    else
    {
      v46 = a4 + 1;
      *v43 = a2;
      result = sub_2282CC0((_DWORD)a1, (_DWORD)a2, (_DWORD)a3, v23 - (v11 & 0x7FFFFFF), a5, a6, a7);
      if ( result )
        return result;
      --a6;
      a4 = v46;
    }
    goto LABEL_101;
  }
  if ( v12 != 939524096 )
    return 0;
  v25 = (__int64 *)(a1[2] + 16 * (v11 & 0x7FFFFFF));
  v26 = v25[1];
  if ( v26 == -1 )
    return 0;
  v27 = *v25;
  v28 = v26 - v27;
  if ( !v28 )
  {
    v29 = a7 + 1;
    if ( a7 > 100 || a3 < a2 )
      return 0;
LABEL_78:
    v30 = v11 & 0x7FFFFFF | 0x40000000;
    if ( v30 == v11 )
    {
      a4 = v23;
    }
    else
    {
      while ( *(_QWORD *)(v10 + 8 * v23) != v30 )
        a4 = v23++;
      a4 += 2;
    }
    a2 += v28;
    a7 = v29;
    goto LABEL_101;
  }
  v58 = a4 + 1;
  v57 = a4;
  v55 = v10;
  if ( a2 <= &a3[-v28] )
  {
    v51 = v28;
    if ( !memcmp(a2, (const void *)(a1[3] + v27), v28) )
    {
      v23 = v58;
      a4 = v57;
      v29 = a7;
      v10 = v55;
      v28 = v51;
      goto LABEL_78;
    }
  }
  return 0;
}
