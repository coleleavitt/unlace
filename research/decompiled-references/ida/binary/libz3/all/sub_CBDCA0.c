__int64 __fastcall sub_CBDCA0(__int64 a1, __int64 a2, int a3)
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
  __int64 **v17; // r13
  __int64 *v18; // rdx
  __int64 **v19; // rax
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // r12
  __int64 v23; // rdi
  __int64 v24; // r13
  __int64 v25; // rax
  __int64 v26; // rdx
  int v27; // ecx
  int v28; // r13d
  unsigned __int8 v30; // dl
  __int64 v31; // rax
  int v32; // r12d
  int v33; // r14d
  _QWORD *v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // r13
  unsigned __int8 v39; // dl
  __int64 v40; // rax
  unsigned int v41; // r15d
  size_t v42; // rsi
  char **exception; // rbx
  unsigned int *v44; // rax
  __int64 v45; // rax
  int v46; // edx
  _QWORD *v47; // rax
  __int64 v48; // rax
  __int64 *v49; // [rsp+10h] [rbp-278h] BYREF
  __int64 *v50; // [rsp+18h] [rbp-270h] BYREF
  __int64 v51; // [rsp+20h] [rbp-268h] BYREF
  __int64 v52; // [rsp+28h] [rbp-260h]
  __int64 v53[12]; // [rsp+30h] [rbp-258h] BYREF
  _BYTE v54[504]; // [rsp+90h] [rbp-1F8h] BYREF

  if ( !a3 )
  {
    v53[0] = a2;
    if ( a2 )
      ++*(_DWORD *)(a2 + 8);
    sub_CB55F0((_QWORD *)(a1 + 56), v53);
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
LABEL_55:
        sub_CBA660((_QWORD *)a1, a2);
        return 1;
      }
    }
    else if ( !*(_DWORD *)(a2 + 24) )
    {
      goto LABEL_6;
    }
    v37 = sub_1680FB0(*(_QWORD *)(a1 + 32), a2, 0);
    v38 = v37;
    if ( v37 )
    {
      v53[0] = v37;
      ++*(_DWORD *)(v37 + 8);
      sub_CB55F0((_QWORD *)(a1 + 56), v53);
      if ( a2 != v38 )
      {
        v45 = *(_QWORD *)(a1 + 40);
        if ( v45 )
        {
          v46 = *(_DWORD *)(v45 - 4);
          if ( v46 )
            *(_BYTE *)(v45 + 16LL * (unsigned int)(v46 - 1) + 8) |= 2u;
        }
      }
      return 1;
    }
    v5 = *(_WORD *)(a2 + 4);
    v28 = 1;
  }
  if ( v5 == 1 )
    goto LABEL_55;
  if ( v5 != 2 )
  {
    if ( v5 )
      goto LABEL_40;
    if ( !*(_DWORD *)(a2 + 24) )
    {
LABEL_6:
      if ( (unsigned __int8)sub_CBA190((_QWORD *)a1, a2) )
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
        v48 = *v9;
        if ( (unsigned __int64)*v9 > 1 )
        {
          if ( *(_DWORD *)(v48 + 12) == v8 && a2 == v48 )
            goto LABEL_29;
        }
        else if ( !v48 )
        {
          break;
        }
      }
LABEL_14:
      sub_CB8D40((__int64)v53, *(_QWORD *)(a1 + 8), 0, *(_QWORD *)(a1 + 144));
      v16 = *(__int64 ***)(a1 + 96);
      v17 = &v16[*(unsigned int *)(a1 + 104)];
      if ( v16 != v17 )
      {
        while ( (unsigned __int64)*v16 <= 1 )
        {
          if ( v17 == ++v16 )
            goto LABEL_25;
        }
        if ( v17 != v16 )
        {
          v18 = *v16;
          do
          {
            v49 = v18;
            sub_4A3CA0((__int64)v54, &v49);
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
          while ( v19 != v17 );
        }
      }
LABEL_25:
      v50 = (__int64 *)a2;
      sub_4A3CA0((__int64)v54, &v50);
      v20 = *(_QWORD *)(a1 + 8);
      v21 = *(_QWORD *)(a1 + 480);
      v51 = 0;
      v52 = v20;
      sub_CBDB00((__int64)v53, v21, &v51, (__int64 *)(a1 + 496));
      v22 = v51;
      v23 = *(_QWORD *)(a1 + 480);
      v24 = v52;
      if ( v23 != v51 )
      {
        sub_CB1660(v23, *(_QWORD *)(a1 + 488));
        *(_QWORD *)(a1 + 480) = v22;
        if ( v22 )
          ++*(_DWORD *)(v22 + 8);
      }
      sub_CB1660(v22, v24);
      sub_668980(v53);
LABEL_29:
      v25 = *(_QWORD *)(a1 + 480);
      if ( a2 == v25 )
      {
        v53[0] = *(_QWORD *)(a1 + 480);
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
        v53[0] = v25;
        if ( !v25 )
          goto LABEL_35;
      }
      ++*(_DWORD *)(v25 + 8);
LABEL_35:
      sub_CB55F0((_QWORD *)(a1 + 56), v53);
      return 1;
    }
    v39 = 3;
    if ( a3 != 3 )
      v39 = (a3 - 1) & 3;
    v40 = *(_QWORD *)(a1 + 56);
    v32 = v39;
    if ( v40 )
      v33 = *(_DWORD *)(v40 - 4);
    else
      v33 = 0;
    v34 = *(_QWORD **)(a1 + 40);
    if ( v34 )
    {
      v35 = *((unsigned int *)v34 - 1);
      if ( (_DWORD)v35 == *((_DWORD *)v34 - 2) )
      {
        v41 = (unsigned int)(3 * v35 + 1) >> 1;
        v42 = 16 * v41 + 8;
        if ( 16 * (int)v35 + 8 >= (unsigned int)v42 || (unsigned int)v35 >= v41 )
          goto LABEL_67;
LABEL_70:
        v44 = (unsigned int *)sub_186B300(v34 - 1, v42);
        v34 = v44 + 2;
        *(_QWORD *)(a1 + 40) = v44 + 2;
        *v44 = v41;
        v36 = (__int64)&v44[4 * v44[1] + 2];
        goto LABEL_52;
      }
      goto LABEL_51;
    }
LABEL_76:
    v47 = (_QWORD *)sub_186B270(0x28u);
    v34 = v47 + 1;
    *v47 = 2;
    *(_QWORD *)(a1 + 40) = v47 + 1;
    v36 = (__int64)(v47 + 1);
    goto LABEL_52;
  }
  v30 = 3;
  if ( a3 != 3 )
    v30 = (a3 - 1) & 3;
  v31 = *(_QWORD *)(a1 + 56);
  v32 = v30;
  if ( v31 )
    v33 = *(_DWORD *)(v31 - 4);
  else
    v33 = 0;
  v34 = *(_QWORD **)(a1 + 40);
  if ( !v34 )
    goto LABEL_76;
  v35 = *((unsigned int *)v34 - 1);
  if ( (_DWORD)v35 == *((_DWORD *)v34 - 2) )
  {
    v41 = (unsigned int)(3 * v35 + 1) >> 1;
    v42 = 16 * v41 + 8;
    if ( 16 * (int)v35 + 8 >= (unsigned int)v42 || (unsigned int)v35 >= v41 )
    {
LABEL_67:
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v53, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v53);
      sub_233E40((__int64)v53);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    goto LABEL_70;
  }
LABEL_51:
  v36 = (__int64)&v34[2 * v35];
LABEL_52:
  *(_QWORD *)v36 = a2;
  *(_DWORD *)(v36 + 12) = v33;
  *(_DWORD *)(v36 + 8) = v28 | (16 * v32);
  ++*((_DWORD *)v34 - 1);
  return 0;
}

