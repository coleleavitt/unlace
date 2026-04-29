__int64 __fastcall sub_1B1B0(__int64 a1, __int64 a2, int *a3)
{
  __int64 v3; // rbp
  unsigned int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rsi
  unsigned __int64 v9; // rbp
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 *v12; // rcx
  __int64 v13; // r13
  unsigned int tinfo_property; // ecx
  unsigned int v15; // eax
  __int64 v16; // rsi
  __int64 v17; // rcx
  int v18; // edi
  int v19; // r8d
  bool v20; // r8
  __int64 v21; // rdi
  unsigned int v22; // ebp
  const char **v23; // rsi
  __int64 v24; // r12
  __int64 v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // r12
  char **v30; // rbx
  unsigned int v31; // ecx
  __int64 v32; // rax
  __int64 v33; // rdi
  __int64 v34; // rbp
  __int64 v35; // rsi
  const char *v36; // rdi
  _DWORD *v37; // rax
  __int64 v38; // r12
  __int64 v39; // rbx
  unsigned __int64 *v40; // rax
  __int64 *v41; // rcx
  _QWORD *v42; // rax
  _QWORD *v43; // rax
  const char **v44; // rcx
  __int64 v45; // rbx
  __int64 v46; // rax
  int *v47; // rax
  _DWORD *v48; // rcx
  int v49; // eax
  __int64 v50; // rax

  v3 = *(_QWORD *)(a1 + 16);
  if ( !*(_BYTE *)(v3 + 558) )
    return 0;
  if ( a2 == 18 )
  {
    if ( (unsigned int)*a3 > 0x2F )
      *((_QWORD *)a3 + 1) += 8LL;
    else
      *a3 += 8;
    v29 = *(_QWORD *)(a1 + 16);
    if ( !*(_BYTE *)(v29 + 556) && get_segm_name() > 0 )
    {
      v30 = off_27BA0;
      while ( strcmp(s1, *v30) )
      {
        if ( ++v30 == off_27BD0 )
          return 0;
      }
      setinf();
      if ( (getinf() & 0xF) == 0 )
        set_compiler();
      sub_AD10(v29, 0);
      if ( (unsigned __int8)getinf_flag() )
      {
        netnode_check();
        if ( (unsigned int)netnode_altval() > 0x74 )
          get_ph();
      }
      setinf();
    }
    return 0;
  }
  if ( a2 <= 18 )
  {
    switch ( a2 )
    {
      case 3LL:
        if ( *(_BYTE *)(v3 + 556) )
          sub_7F00(*(_QWORD *)(a1 + 16));
        break;
      case 11LL:
        sub_AD10(*(_QWORD *)(a1 + 16), 0);
        break;
      case 0LL:
        sub_5E00(*(_QWORD **)(v3 + 328));
        *(_QWORD *)(v3 + 328) = 0;
        *(_QWORD *)(v3 + 336) = v3 + 320;
        *(_QWORD *)(v3 + 344) = v3 + 320;
        *(_QWORD *)(v3 + 352) = 0;
        break;
    }
    return 0;
  }
  if ( a2 == 52 )
  {
    if ( !*(_BYTE *)(v3 + 556) )
      return 0;
    v31 = *a3;
    if ( (unsigned int)*a3 > 0x2F )
    {
      v43 = *((_QWORD **)a3 + 1);
      v44 = (const char **)(v43 + 1);
      *((_QWORD *)a3 + 1) = v43 + 1;
      v34 = *v43;
    }
    else
    {
      v32 = *((_QWORD *)a3 + 2);
      v33 = v31 + 8;
      *a3 = v33;
      v34 = *(_QWORD *)(v32 + v31);
      if ( (unsigned int)v33 <= 0x2F )
      {
        v35 = v31 + 16;
        *a3 = v35;
        v36 = *(const char **)(v32 + v33);
        if ( (unsigned int)v35 <= 0x2F )
        {
          v37 = (_DWORD *)(v35 + v32);
          *a3 = v31 + 24;
          goto LABEL_51;
        }
        v37 = *((_DWORD **)a3 + 1);
LABEL_63:
        *((_QWORD *)a3 + 1) = v37 + 2;
LABEL_51:
        if ( !*v37 )
        {
          v38 = *(_QWORD *)(a1 + 16);
          v39 = *(_QWORD *)(v38 + 368);
          if ( v39 == -1 && v36 && !strcmp(v36, "go.string._") )
          {
            *(_QWORD *)(v38 + 368) = v34;
          }
          else if ( v39 == v34 )
          {
            *(_QWORD *)(v38 + 368) = -1;
          }
        }
        return 0;
      }
      v44 = *((const char ***)a3 + 1);
    }
    v37 = v44 + 1;
    *((_QWORD *)a3 + 1) = v44 + 1;
    v36 = *v44;
    goto LABEL_63;
  }
  if ( a2 != 72 )
  {
    if ( a2 != 50 || !*(_BYTE *)(v3 + 556) )
      return 0;
    v6 = *a3;
    if ( (unsigned int)*a3 > 0x2F )
    {
      v40 = *((unsigned __int64 **)a3 + 1);
      v41 = (__int64 *)(v40 + 1);
      *((_QWORD *)a3 + 1) = v40 + 1;
      v9 = *v40;
    }
    else
    {
      v7 = *((_QWORD *)a3 + 2);
      v8 = v6 + 8;
      *a3 = v8;
      v9 = *(_QWORD *)(v7 + v6);
      if ( (unsigned int)v8 <= 0x2F )
      {
        *a3 = v6 + 16;
        v10 = *(_QWORD *)(v7 + v8);
        if ( v6 + 16 <= 0x2F )
        {
          v11 = v6 + 24;
          *a3 = v11;
          if ( (unsigned int)v11 <= 0x2F )
          {
            v12 = (__int64 *)(v11 + v7);
            *a3 = v6 + 32;
LABEL_18:
            if ( (v10 & 0x600) == 0x400 && (v10 & 0xF0000000) == 0x60000000 )
            {
              v13 = *v12;
              if ( (unsigned __int8)get_type_by_tid() )
              {
                tinfo_property = get_tinfo_property();
                if ( tinfo_property )
                  sub_1B110((__int64 *)(*(_QWORD *)(a1 + 16) + 256LL), v9, v13, tinfo_property);
              }
              clear_tinfo_t();
            }
            return 0;
          }
          v12 = *((__int64 **)a3 + 1);
LABEL_60:
          *((_QWORD *)a3 + 1) = v12 + 1;
          goto LABEL_18;
        }
        v42 = *((_QWORD **)a3 + 1);
LABEL_59:
        v12 = v42 + 1;
        *((_QWORD *)a3 + 1) = v42 + 1;
        goto LABEL_60;
      }
      v41 = *((__int64 **)a3 + 1);
    }
    v42 = v41 + 1;
    *((_QWORD *)a3 + 1) = v41 + 1;
    v10 = *v41;
    goto LABEL_59;
  }
  if ( !*(_BYTE *)(v3 + 556) )
    return 0;
  v15 = *a3;
  if ( (unsigned int)*a3 > 0x2F )
  {
    v47 = *((int **)a3 + 1);
    v48 = v47 + 2;
    *((_QWORD *)a3 + 1) = v47 + 2;
    v49 = *v47;
    v19 = v49;
    if ( (v49 & 0xFFFFFFFD) == 1 )
    {
      v20 = v49 == 1;
LABEL_68:
      v23 = (const char **)(v48 + 2);
      *((_QWORD *)a3 + 1) = v48 + 2;
      v22 = *v48;
LABEL_69:
      *((_QWORD *)a3 + 1) = v23 + 1;
      goto LABEL_30;
    }
LABEL_64:
    if ( v19 == 8 )
    {
      v45 = *(_QWORD *)(a1 + 16);
      v46 = *(_QWORD *)(v45 + 272);
      *(_DWORD *)(v45 + 296) = 0;
      *(_QWORD *)(v45 + 288) = v46;
      *(_DWORD *)(v45 + 264) = get_type_ordinal();
      *(_DWORD *)(v45 + 268) = get_type_ordinal();
    }
    return 0;
  }
  v16 = *((_QWORD *)a3 + 2);
  v17 = v15 + 8;
  *a3 = v17;
  v18 = *(_DWORD *)(v16 + v15);
  v19 = v18;
  if ( (v18 & 0xFFFFFFFD) != 1 )
    goto LABEL_64;
  v20 = v18 == 1;
  if ( (unsigned int)v17 > 0x2F )
  {
    v48 = *((_DWORD **)a3 + 1);
    goto LABEL_68;
  }
  v21 = v15 + 16;
  *a3 = v21;
  v22 = *(_DWORD *)(v16 + v17);
  if ( (unsigned int)v21 > 0x2F )
  {
    v23 = *((const char ***)a3 + 1);
    goto LABEL_69;
  }
  v23 = (const char **)(v21 + v16);
  *a3 = v15 + 24;
LABEL_30:
  v24 = *(_QWORD *)(a1 + 16);
  if ( !v20 )
  {
    if ( !v22 )
      return 0;
    v25 = *(_QWORD *)(v24 + 272);
    v26 = *(unsigned int *)(v24 + 296);
    v27 = v22;
    v28 = *(_QWORD *)(v24 + 288);
    goto LABEL_33;
  }
  if ( !strcmp(*v23, "string") )
    *(_DWORD *)(v24 + 264) = v22;
  if ( v22 )
  {
    v50 = *(_QWORD *)(a1 + 16);
    v27 = v22;
    v25 = *(_QWORD *)(v50 + 272);
    v26 = *(unsigned int *)(v50 + 296);
    v28 = *(_QWORD *)(v50 + 288);
LABEL_33:
    if ( v27 < (unsigned __int64)(v26 + ((v28 - v25) >> 3 << 6)) )
      *(_QWORD *)(v25 + 8 * (v27 >> 6)) &= __ROL8__(-2, v22);
  }
  return 0;
}
