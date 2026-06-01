__int64 __fastcall sub_CBB3E0(__int64 a1, __int64 a2, int a3)
{
  __int16 v5; // ax
  __int64 v7; // rax
  int v8; // edi
  __int64 *v9; // rcx
  unsigned int v10; // edx
  __int64 *v11; // rsi
  __int64 v12; // rdx
  __int64 *v13; // r8
  __int64 *i; // rax
  __int64 v15; // rdx
  __int64 **v16; // r15
  __int64 **v17; // r14
  __int64 *v18; // rdx
  __int64 **v19; // rax
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // r13
  __int64 v23; // rdi
  __int64 v24; // r14
  __int64 v25; // rax
  __int64 v26; // rdx
  int v27; // ecx
  int v28; // r13d
  _QWORD *v30; // rdi
  unsigned int v31; // eax
  __int64 v32; // rdx
  int v33; // eax
  _QWORD *v34; // rdx
  unsigned __int8 v35; // dl
  __int64 v36; // rax
  int v37; // r12d
  int v38; // r14d
  _QWORD *v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rax
  unsigned int v42; // ebx
  size_t v43; // rsi
  unsigned int *v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rax
  __int64 v47; // r13
  unsigned __int8 v48; // dl
  __int64 v49; // rax
  unsigned int v50; // r15d
  size_t v51; // rsi
  char **exception; // rbx
  unsigned int *v53; // rax
  __int64 v54; // rax
  int v55; // edx
  __int64 v56; // rax
  _QWORD *v57; // rax
  __int64 v58; // rax
  _QWORD *v59; // rax
  __int64 *v60; // [rsp+10h] [rbp-278h] BYREF
  __int64 *v61; // [rsp+18h] [rbp-270h] BYREF
  __int64 v62; // [rsp+20h] [rbp-268h] BYREF
  __int64 v63; // [rsp+28h] [rbp-260h]
  __int64 v64[12]; // [rsp+30h] [rbp-258h] BYREF
  _BYTE v65[504]; // [rsp+90h] [rbp-1F8h] BYREF

  if ( !a3 )
  {
    v64[0] = a2;
    if ( a2 )
      ++*(_DWORD *)(a2 + 8);
    sub_CB55F0((_QWORD *)(a1 + 56), v64);
    v30 = *(_QWORD **)(a1 + 88);
    if ( v30 )
    {
      v31 = *((_DWORD *)v30 - 1);
      if ( v31 == *((_DWORD *)v30 - 2) )
      {
        v42 = (3 * v31 + 1) >> 1;
        v43 = 8 * v42 + 8;
        if ( 8 * v31 + 8 >= (unsigned int)v43 || v31 >= v42 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v64, "Overflow encountered when expanding vector");
LABEL_100:
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v64);
          sub_233E40((__int64)v64);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v44 = (unsigned int *)sub_186B300(v30 - 1, v43);
        v45 = v44[1];
        v30 = v44 + 2;
        *v44 = v42;
        *(_QWORD *)(a1 + 88) = v44 + 2;
        LODWORD(v44) = v45;
        v34 = &v30[v45];
        v33 = (_DWORD)v44 + 1;
      }
      else
      {
        v32 = v31;
        v33 = v31 + 1;
        v34 = &v30[v32];
      }
    }
    else
    {
      v57 = (_QWORD *)sub_186B270(0x18u);
      v30 = v57 + 1;
      *v57 = 2;
      v33 = 1;
      *(_QWORD *)(a1 + 88) = v30;
      v34 = v30;
    }
    *v34 = 0;
    *((_DWORD *)v30 - 1) = v33;
    return 1;
  }
  v5 = *(_WORD *)(a2 + 4);
  if ( *(_DWORD *)(a2 + 8) <= 1u || a2 == *(_QWORD *)(a1 + 120) )
  {
    v28 = 0;
  }
  else
  {
    if ( v5 )
    {
      if ( v5 != 2 )
      {
        if ( v5 != 1 )
        {
LABEL_40:
          sub_1872CE0("");
          sub_1873130(114, 226);
        }
LABEL_58:
        sub_CBA900((_QWORD *)a1, a2);
        return 1;
      }
    }
    else if ( !*(_DWORD *)(a2 + 24) )
    {
      goto LABEL_6;
    }
    v46 = sub_1680FB0(*(_QWORD *)(a1 + 32), a2, 0);
    v47 = v46;
    if ( v46 )
    {
      v64[0] = v46;
      ++*(_DWORD *)(v46 + 8);
      sub_CB55F0((_QWORD *)(a1 + 56), v64);
      if ( a2 != v47 )
      {
        v54 = *(_QWORD *)(a1 + 40);
        if ( v54 )
        {
          v55 = *(_DWORD *)(v54 - 4);
          if ( v55 )
            *(_BYTE *)(v54 + 16LL * (unsigned int)(v55 - 1) + 8) |= 2u;
        }
      }
      v56 = sub_1680FB0(*(_QWORD *)(a1 + 72), a2, 0);
      v64[0] = v56;
      if ( v56 )
        ++*(_DWORD *)(v56 + 8);
      sub_CB5530((_QWORD *)(a1 + 88), v64);
      return 1;
    }
    v5 = *(_WORD *)(a2 + 4);
    v28 = 1;
  }
  if ( v5 == 1 )
    goto LABEL_58;
  if ( v5 != 2 )
  {
    if ( v5 )
      goto LABEL_40;
    if ( !*(_DWORD *)(a2 + 24) )
    {
LABEL_6:
      if ( (unsigned __int8)sub_CBAC80((_QWORD *)a1, a2) )
        return 1;
      v7 = *(unsigned int *)(a1 + 104);
      v8 = *(_DWORD *)(a2 + 12);
      v9 = *(__int64 **)(a1 + 96);
      v10 = v7 - 1;
      v7 *= 8;
      v11 = (__int64 *)((char *)v9 + v7);
      v12 = 8LL * (v8 & v10);
      v13 = &v9[(unsigned __int64)v12 / 8];
      if ( v12 != v7 )
      {
        for ( i = &v9[(unsigned __int64)v12 / 8]; v11 != i; ++i )
        {
          v15 = *i;
          if ( (unsigned __int64)*i > 1 )
          {
            if ( *(_DWORD *)(v15 + 12) == v8 && a2 == v15 )
              goto LABEL_29;
          }
          else if ( !v15 )
          {
            goto LABEL_14;
          }
        }
      }
      for ( ; v13 != v9; ++v9 )
      {
        v58 = *v9;
        if ( (unsigned __int64)*v9 > 1 )
        {
          if ( *(_DWORD *)(v58 + 12) == v8 && a2 == v58 )
            goto LABEL_29;
        }
        else if ( !v58 )
        {
          break;
        }
      }
LABEL_14:
      sub_CB8D40((__int64)v64, *(_QWORD *)(a1 + 8), 0, *(_QWORD *)(a1 + 144));
      v16 = *(__int64 ***)(a1 + 96);
      v17 = &v16[*(unsigned int *)(a1 + 104)];
      if ( v16 != v17 )
      {
        while ( (unsigned __int64)*v16 <= 1 )
        {
          if ( v17 == ++v16 )
            goto LABEL_25;
        }
        if ( v16 != v17 )
        {
          v18 = *v16;
          do
          {
            v60 = v18;
            sub_4A3CA0((__int64)v65, &v60);
            v19 = v16 + 1;
            if ( v17 == v16 + 1 )
              break;
            while ( 1 )
            {
              v18 = *v19;
              v16 = v19;
              if ( (unsigned __int64)*v19 > 1 )
                break;
              if ( v17 == ++v19 )
                goto LABEL_25;
            }
          }
          while ( v17 != v19 );
        }
      }
LABEL_25:
      v61 = (__int64 *)a2;
      sub_4A3CA0((__int64)v65, &v61);
      v20 = *(_QWORD *)(a1 + 8);
      v21 = *(_QWORD *)(a1 + 480);
      v62 = 0;
      v63 = v20;
      sub_CBDB00(v64, v21, &v62, a1 + 496);
      v22 = v62;
      v23 = *(_QWORD *)(a1 + 480);
      v24 = v63;
      if ( v62 != v23 )
      {
        sub_CB1660(v23, *(_QWORD *)(a1 + 488));
        *(_QWORD *)(a1 + 480) = v22;
        if ( v22 )
          ++*(_DWORD *)(v22 + 8);
      }
      sub_CB1660(v22, v24);
      sub_668980(v64);
LABEL_29:
      v25 = *(_QWORD *)(a1 + 480);
      if ( a2 == v25 )
      {
        v64[0] = *(_QWORD *)(a1 + 480);
      }
      else
      {
        v26 = *(_QWORD *)(a1 + 40);
        if ( v26 )
        {
          v27 = *(_DWORD *)(v26 - 4);
          if ( v27 )
            *(_BYTE *)(v26 + 16LL * (unsigned int)(v27 - 1) + 8) |= 2u;
        }
        v64[0] = v25;
        if ( !v25 )
          goto LABEL_35;
      }
      ++*(_DWORD *)(v25 + 8);
LABEL_35:
      sub_CB55F0((_QWORD *)(a1 + 56), v64);
      return 1;
    }
    v48 = 3;
    if ( a3 != 3 )
      v48 = (a3 - 1) & 3;
    v49 = *(_QWORD *)(a1 + 56);
    v37 = v48;
    if ( v49 )
      v38 = *(_DWORD *)(v49 - 4);
    else
      v38 = 0;
    v39 = *(_QWORD **)(a1 + 40);
    if ( v39 )
    {
      v40 = *((unsigned int *)v39 - 1);
      if ( (_DWORD)v40 == *((_DWORD *)v39 - 2) )
      {
        v50 = (unsigned int)(3 * v40 + 1) >> 1;
        v51 = 16 * v50 + 8;
        if ( 16 * (int)v40 + 8 >= (unsigned int)v51 || (unsigned int)v40 >= v50 )
        {
LABEL_73:
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v64, "Overflow encountered when expanding vector");
          goto LABEL_100;
        }
        goto LABEL_76;
      }
      goto LABEL_54;
    }
LABEL_94:
    v59 = (_QWORD *)sub_186B270(0x28u);
    v39 = v59 + 1;
    *v59 = 2;
    *(_QWORD *)(a1 + 40) = v59 + 1;
    v41 = (__int64)(v59 + 1);
    goto LABEL_55;
  }
  v35 = 3;
  if ( a3 != 3 )
    v35 = (a3 - 1) & 3;
  v36 = *(_QWORD *)(a1 + 56);
  v37 = v35;
  if ( v36 )
    v38 = *(_DWORD *)(v36 - 4);
  else
    v38 = 0;
  v39 = *(_QWORD **)(a1 + 40);
  if ( !v39 )
    goto LABEL_94;
  v40 = *((unsigned int *)v39 - 1);
  if ( (_DWORD)v40 == *((_DWORD *)v39 - 2) )
  {
    v50 = (unsigned int)(3 * v40 + 1) >> 1;
    v51 = 16 * v50 + 8;
    if ( 16 * (int)v40 + 8 >= (unsigned int)v51 || (unsigned int)v40 >= v50 )
      goto LABEL_73;
LABEL_76:
    v53 = (unsigned int *)sub_186B300(v39 - 1, v51);
    v39 = v53 + 2;
    *(_QWORD *)(a1 + 40) = v53 + 2;
    *v53 = v50;
    v41 = (__int64)&v53[4 * v53[1] + 2];
    goto LABEL_55;
  }
LABEL_54:
  v41 = (__int64)&v39[2 * v40];
LABEL_55:
  *(_QWORD *)v41 = a2;
  *(_DWORD *)(v41 + 12) = v38;
  *(_DWORD *)(v41 + 8) = v28 | (16 * v37);
  ++*((_DWORD *)v39 - 1);
  return 0;
}

