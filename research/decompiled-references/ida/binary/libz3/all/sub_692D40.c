__int64 __fastcall sub_692D40(__int64 a1, size_t a2, __int64 a3, __int64 a4, __int64 a5, size_t a6)
{
  __int64 v7; // rax
  __int64 v8; // r14
  unsigned int *v9; // rbp
  _DWORD *v10; // rbx
  __int64 v11; // r10
  __int64 v12; // rax
  int v13; // edi
  unsigned int v14; // edx
  size_t v15; // r11
  size_t v16; // rax
  unsigned int v17; // r12d
  __int64 (__fastcall *v18)(__int64); // rax
  __int64 result; // rax
  __int64 (__fastcall *v20)(__int64, unsigned int); // rax
  __int64 v21; // r10
  __int64 v22; // rax
  int v23; // edx
  size_t v24; // rdi
  size_t i; // rax
  unsigned int v26; // r13d
  __int64 v27; // rax
  unsigned int v28; // r14d
  _BYTE *v29; // rax
  __int64 v30; // rax
  unsigned int v31; // r13d
  __int64 v32; // rax
  unsigned int v33; // r12d
  _BYTE *v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  unsigned int v40; // edi
  unsigned int v41; // edx
  unsigned int *v42; // rax
  char *v43; // rdi
  __int64 v44; // rax
  unsigned int v45; // edi
  unsigned int v46; // edx
  unsigned int *v47; // rax
  char *v48; // rdi
  char **v49; // r13
  char **exception; // r13
  unsigned int v51; // [rsp+4h] [rbp-84h]
  unsigned int v52; // [rsp+4h] [rbp-84h]
  __int64 v53; // [rsp+8h] [rbp-80h]
  __int64 v54; // [rsp+10h] [rbp-78h]
  unsigned int v55; // [rsp+18h] [rbp-70h]
  unsigned int v56; // [rsp+18h] [rbp-70h]
  unsigned int v57; // [rsp+1Ch] [rbp-6Ch]
  unsigned int *v58; // [rsp+28h] [rbp-60h] BYREF
  __int64 v59[11]; // [rsp+30h] [rbp-58h] BYREF

  v7 = *(_QWORD *)(a1 + 4552);
  v53 = a3;
  if ( v7 )
    *(_DWORD *)(v7 - 4) = 0;
  if ( !(_DWORD)a2 )
  {
    v9 = nullptr;
    v10 = nullptr;
    goto LABEL_13;
  }
  v55 = 0;
  v8 = 0;
  v9 = nullptr;
  v54 = (unsigned int)a2;
  v10 = nullptr;
  while ( 2 )
  {
    while ( 2 )
    {
      while ( 1 )
      {
        a2 = *(_QWORD *)(a1 + 4840);
        v11 = *(_QWORD *)(v53 + 8 * v8);
        v12 = *(unsigned int *)(a1 + 4848);
        v13 = *(_DWORD *)(v11 + 12);
        v14 = v12 - 1;
        v12 *= 16;
        v15 = a2 + v12;
        a3 = 16LL * (v13 & v14);
        a6 = a2 + a3;
        if ( a3 != v12 )
          break;
LABEL_57:
        if ( a2 == a6 )
          goto LABEL_12;
        while ( 1 )
        {
          v37 = *(_QWORD *)a2;
          if ( *(_QWORD *)a2 <= 1u )
            break;
          if ( *(_DWORD *)(v37 + 12) == v13 && v11 == v37 )
          {
            v16 = a2;
            goto LABEL_40;
          }
LABEL_61:
          a2 += 16LL;
          if ( a6 == a2 )
            goto LABEL_12;
        }
        if ( v37 )
          goto LABEL_61;
        if ( v54 == ++v8 )
          goto LABEL_13;
      }
      v16 = a2 + a3;
      while ( 1 )
      {
        a3 = *(_QWORD *)v16;
        if ( *(_QWORD *)v16 > 1u )
          break;
        if ( !a3 )
          goto LABEL_12;
LABEL_9:
        v16 += 16LL;
        if ( v15 == v16 )
          goto LABEL_57;
      }
      if ( *(_DWORD *)(a3 + 12) != v13 || v11 != a3 )
        goto LABEL_9;
LABEL_40:
      v31 = *(_DWORD *)(v16 + 8);
      if ( v10 && v31 < *(v10 - 1) && *((_BYTE *)v10 + v31) )
      {
LABEL_12:
        if ( v54 == ++v8 )
          goto LABEL_13;
        continue;
      }
      break;
    }
    v32 = *(_QWORD *)(a1 + 4552);
    if ( !v32 || (a3 = *(unsigned int *)(v32 - 4), (_DWORD)a3 == *(_DWORD *)(v32 - 8)) )
    {
      sub_692C60((unsigned int **)(a1 + 4552));
      v32 = *(_QWORD *)(a1 + 4552);
      a3 = *(unsigned int *)(v32 - 4);
    }
    *(_DWORD *)(v32 + 4 * a3) = v31;
    v33 = v31 + 1;
    ++*(_DWORD *)(v32 - 4);
    if ( !v10 )
    {
      if ( v31 == -1 )
        goto LABEL_47;
      v44 = sub_186B270(0xAu);
      v45 = 2;
      v10 = (_DWORD *)(v44 + 8);
      *(_QWORD *)v44 = 2;
      if ( v33 <= 2 )
      {
        *(_DWORD *)(v44 + 4) = v33;
        v48 = (char *)(v44 + 8);
        a3 = (__int64)v10 + v33;
        goto LABEL_100;
      }
      v57 = 0;
      do
      {
LABEL_96:
        v46 = (3 * v45 + 1) >> 1;
        a2 = v46 + 8;
        if ( v45 + 8 >= (unsigned int)a2 || v45 >= v46 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_68CF80(v59, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v59);
          sub_233E40((__int64)v59);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v52 = (3 * v45 + 1) >> 1;
        v47 = (unsigned int *)sub_186B300(v10 - 2, a2);
        v10 = v47 + 2;
        *v47 = v52;
        v45 = v52;
      }
      while ( v52 < v33 );
      v47[1] = v33;
      a3 = (__int64)v10 + v33;
      v48 = (char *)v10 + v57;
      if ( v33 == v57 )
        goto LABEL_47;
      goto LABEL_100;
    }
    v57 = *(v10 - 1);
    if ( v57 < v33 )
    {
      v45 = *(v10 - 2);
      if ( v45 >= v33 )
      {
        *(v10 - 1) = v33;
        a3 = (__int64)v10 + v33;
        v48 = (char *)v10 + v57;
LABEL_100:
        a2 = 0;
        memset(v48, 0, a3 - (_QWORD)v48);
        goto LABEL_47;
      }
      goto LABEL_96;
    }
LABEL_47:
    v34 = (char *)v10 + v31;
    if ( !*v34 )
    {
      *v34 = 1;
      if ( !v9 || (v35 = *(v9 - 1), (_DWORD)v35 == *(v9 - 2)) )
      {
        v58 = v9;
        sub_2FD3F0(&v58);
        v9 = v58;
        v35 = *(v58 - 1);
      }
      v9[v35] = v31;
      ++*(v9 - 1);
    }
    if ( v55 != (_DWORD)v8 )
    {
      v36 = *(_QWORD *)(a1 + 4768);
      if ( v36 )
      {
        a3 = *(unsigned int *)(v36 - 4);
        if ( (_DWORD)a3 )
        {
          a3 = v55;
          *(_QWORD *)(v36 + 8LL * v55) = *(_QWORD *)(v36 + 8 * v8);
        }
      }
    }
    ++v55;
    if ( v54 != ++v8 )
      continue;
    break;
  }
LABEL_13:
  v17 = 0;
LABEL_14:
  v18 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 248LL);
  if ( v18 != sub_68D6F0 )
  {
    result = ((__int64 (__fastcall *)(__int64, size_t, __int64, __int64 (__fastcall *)(__int64), __int64, size_t))v18)(
               a1,
               a2,
               a3,
               sub_68D6F0,
               a5,
               a6);
    if ( v17 >= (unsigned int)result )
      goto LABEL_77;
LABEL_17:
    v20 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)a1 + 256LL);
    if ( v20 == sub_68D710 )
      v21 = *(_QWORD *)(*(_QWORD *)(a1 + 4424) + 8LL * v17);
    else
      v21 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64 (__fastcall *)(__int64, unsigned int), __int64, size_t))v20)(
              a1,
              v17,
              a3,
              sub_68D710,
              a5,
              a6);
    v22 = *(unsigned int *)(a1 + 4848);
    a5 = *(unsigned int *)(v21 + 12);
    a2 = *(_QWORD *)(a1 + 4840);
    v23 = v22 - 1;
    v22 *= 16;
    v24 = a2 + v22;
    a3 = 16LL * ((unsigned int)a5 & v23);
    a6 = a2 + a3;
    if ( a3 != v22 )
    {
      for ( i = a2 + a3; v24 != i; i += 16LL )
      {
        a3 = *(_QWORD *)i;
        if ( *(_QWORD *)i > 1u )
        {
          if ( *(_DWORD *)(a3 + 12) == (_DWORD)a5 && v21 == a3 )
          {
LABEL_28:
            v26 = *(_DWORD *)(i + 8);
            if ( !v10 || v26 >= *(v10 - 1) || !*((_BYTE *)v10 + v26) )
            {
              v27 = *(_QWORD *)(a1 + 4552);
              if ( !v27 || (a3 = *(unsigned int *)(v27 - 4), (_DWORD)a3 == *(_DWORD *)(v27 - 8)) )
              {
                sub_692C60((unsigned int **)(a1 + 4552));
                v27 = *(_QWORD *)(a1 + 4552);
                a3 = *(unsigned int *)(v27 - 4);
              }
              *(_DWORD *)(v27 + 4 * a3) = v26;
              v28 = v26 + 1;
              ++*(_DWORD *)(v27 - 4);
              if ( v10 )
              {
                v56 = *(v10 - 1);
                if ( v56 >= v28 )
                  goto LABEL_35;
                v40 = *(v10 - 2);
                if ( v40 >= v28 )
                {
                  *(v10 - 1) = v28;
                  a3 = (__int64)v10 + v28;
                  v43 = (char *)v10 + v56;
                  goto LABEL_92;
                }
                do
                {
LABEL_88:
                  v41 = (3 * v40 + 1) >> 1;
                  a2 = v41 + 8;
                  if ( v40 + 8 >= (unsigned int)a2 || v40 >= v41 )
                  {
                    v49 = (char **)__cxa_allocate_exception(0x28u);
                    sub_68CF80(v59, "Overflow encountered when expanding vector");
                    *v49 = (char *)off_1C63128;
                    sub_2333C0(v49 + 1, v59);
                    sub_233E40((__int64)v59);
                    __cxa_throw(v49, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                  }
                  v51 = (3 * v40 + 1) >> 1;
                  v42 = (unsigned int *)sub_186B300(v10 - 2, a2);
                  v10 = v42 + 2;
                  *v42 = v51;
                  v40 = v51;
                }
                while ( v51 < v28 );
                v42[1] = v28;
                a3 = (__int64)v10 + v28;
                v43 = (char *)v10 + v56;
                if ( v28 != v56 )
                  goto LABEL_92;
              }
              else if ( v26 != -1 )
              {
                v39 = sub_186B270(0xAu);
                v40 = 2;
                v10 = (_DWORD *)(v39 + 8);
                *(_QWORD *)v39 = 2;
                if ( v28 > 2 )
                {
                  v56 = 0;
                  goto LABEL_88;
                }
                *(_DWORD *)(v39 + 4) = v28;
                v43 = (char *)(v39 + 8);
                a3 = (__int64)v10 + v28;
LABEL_92:
                a2 = 0;
                memset(v43, 0, a3 - (_QWORD)v43);
              }
LABEL_35:
              v29 = (char *)v10 + v26;
              if ( !*v29 )
              {
                *v29 = 1;
                if ( !v9 || (v30 = *(v9 - 1), (_DWORD)v30 == *(v9 - 2)) )
                {
                  v58 = v9;
                  sub_2FD3F0(&v58);
                  v9 = v58;
                  v30 = *(v58 - 1);
                }
                v9[v30] = v26;
                ++v17;
                ++*(v9 - 1);
                goto LABEL_14;
              }
            }
LABEL_26:
            ++v17;
            goto LABEL_14;
          }
        }
        else if ( !a3 )
        {
          goto LABEL_26;
        }
      }
    }
    if ( a2 != a6 )
    {
      while ( 1 )
      {
        v38 = *(_QWORD *)a2;
        if ( *(_QWORD *)a2 > 1u )
        {
          if ( *(_DWORD *)(v38 + 12) == (_DWORD)a5 && v21 == v38 )
          {
            i = a2;
            goto LABEL_28;
          }
        }
        else if ( !v38 )
        {
          ++v17;
          goto LABEL_14;
        }
        a2 += 16LL;
        if ( a6 == a2 )
          goto LABEL_26;
      }
    }
    goto LABEL_26;
  }
  result = *(_QWORD *)(a1 + 4424);
  if ( result )
  {
    result = *(unsigned int *)(result - 4);
    if ( v17 < (unsigned int)result )
      goto LABEL_17;
  }
LABEL_77:
  if ( v9 )
    result = sub_186B220(v9 - 2);
  if ( v10 )
    return sub_186B220(v10 - 2);
  return result;
}

