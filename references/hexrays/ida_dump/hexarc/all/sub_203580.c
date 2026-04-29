__int64 __fastcall sub_203580(__int64 a1, unsigned __int64 a2, _QWORD *a3, unsigned __int8 a4)
{
  char v5; // al
  __int64 result; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  char v12; // cl
  _QWORD *v13; // rdx
  _QWORD *v14; // rdi
  _QWORD *v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rdi
  _QWORD *v18; // rax
  __int64 v19; // rax
  _QWORD **v20; // rdi
  __int64 *v21; // rax
  __int64 v22; // rdx
  unsigned __int64 v23; // rax
  __int64 v24; // rax
  unsigned __int64 v25; // rdx
  __int64 v26; // rdi
  __int64 v27; // rax
  unsigned int v28; // eax
  __int64 v29; // r13
  int v30; // r12d
  __int64 v31; // rax
  unsigned int v32; // eax
  __int64 v33; // rbx
  __int64 v34; // rax
  __int64 v35; // rsi
  int v36; // ebx
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // r14
  __int64 v40; // rax
  unsigned int v41; // [rsp+0h] [rbp-88h]
  unsigned int v42; // [rsp+0h] [rbp-88h]
  unsigned int v43; // [rsp+Ch] [rbp-7Ch]
  __int64 v44; // [rsp+18h] [rbp-70h] BYREF
  __int64 v45; // [rsp+20h] [rbp-68h] BYREF
  __int64 tinfo_property; // [rsp+28h] [rbp-60h] BYREF
  __int64 v47; // [rsp+30h] [rbp-58h] BYREF
  __int128 v48; // [rsp+38h] [rbp-50h]
  unsigned __int64 v49; // [rsp+48h] [rbp-40h]

  v5 = *(_BYTE *)a2;
  v49 = __readfsqword(0x28u);
  if ( v5 == 8 )
  {
    v29 = *(_QWORD *)(a2 + 8);
    v30 = 0;
    v31 = 0;
    v47 = 0;
    v48 = 0;
    if ( !*(_QWORD *)(v29 + 32) )
    {
      v44 = 0;
LABEL_43:
      *(_BYTE *)(a1 + 40) = 1;
      v32 = 0;
LABEL_44:
      v43 = v32;
      clear_tinfo_t(&v44);
      result = v43;
LABEL_45:
      if ( v47 )
      {
        v42 = result;
        *(_QWORD *)&v48 = 0;
        qfree(v47);
        return v42;
      }
      return result;
    }
    while ( 1 )
    {
      v33 = *(_QWORD *)(v29 + 24) + 80 * v31;
      if ( *(_BYTE *)v33 != 10 )
        goto LABEL_49;
      v45 = 0;
      tinfo_property = 0;
      tinfo_property = get_tinfo_property(*(_QWORD *)(v33 + 24), 9);
      copy_tinfo_t(&v45, &tinfo_property);
      clear_tinfo_t(&tinfo_property);
      if ( (get_tinfo_property(v45, 2) & 0x40) != 0 )
      {
        clear_tinfo_t(&v45);
LABEL_49:
        result = sub_1182F0(v33, a1, (_QWORD *)(v33 + 24), 0);
        if ( (_DWORD)result )
          goto LABEL_45;
        v31 = ++v30;
        if ( (unsigned __int64)v30 >= *(_QWORD *)(v29 + 32) )
        {
LABEL_56:
          v44 = 0;
          if ( (_QWORD)v48 )
          {
            v36 = 0;
            v37 = 0;
            while ( 1 )
            {
              v38 = *(_QWORD *)(v29 + 24) + 80LL * *(int *)(v47 + 4 * v37);
              v39 = v38;
              if ( *(_BYTE *)v38 == 10 )
              {
                v45 = 0;
                tinfo_property = 0;
                tinfo_property = get_tinfo_property(*(_QWORD *)(v38 + 24), 9);
                copy_tinfo_t(&v45, &tinfo_property);
                clear_tinfo_t(&tinfo_property);
                if ( (get_tinfo_property(v45, 2) & 0x40) != 0 )
                {
                  clear_tinfo_t(&v45);
                }
                else
                {
                  v40 = v44;
                  v44 = v45;
                  v45 = v40;
                  clear_tinfo_t(&v45);
                  v32 = sub_1182F0(*(_QWORD *)(v39 + 8), a1, &v44, 1);
                  if ( v32 )
                    goto LABEL_44;
                }
              }
              v37 = ++v36;
              if ( v36 >= (unsigned __int64)v48 )
                goto LABEL_43;
            }
          }
          goto LABEL_43;
        }
      }
      else
      {
        clear_tinfo_t(&v45);
        v34 = v48;
        v35 = v47;
        if ( *((_QWORD *)&v48 + 1) < (unsigned __int64)(v48 + 1) )
        {
          v47 = qvector_reserve(&v47, v47, v48 + 1, 4);
          v35 = v47;
          v34 = v48;
        }
        *(_DWORD *)(v35 + 4 * v34) = v30++;
        *(_QWORD *)&v48 = v48 + 1;
        v31 = v30;
        if ( (unsigned __int64)v30 >= *(_QWORD *)(v29 + 32) )
          goto LABEL_56;
      }
    }
  }
  if ( v5 == 10 )
  {
    v45 = 0;
    tinfo_property = 0;
    if ( a3 )
    {
      v47 = get_tinfo_property(*a3, 9);
      copy_tinfo_t(&tinfo_property, &v47);
      clear_tinfo_t(&v47);
      v26 = tinfo_property;
    }
    else
    {
      v26 = 0;
    }
    if ( (get_tinfo_property(v26, 2) & 0x40) == 0 )
    {
      v27 = v45;
      v45 = tinfo_property;
      tinfo_property = v27;
      clear_tinfo_t(&tinfo_property);
      v28 = sub_1182F0(*(_QWORD *)(a2 + 8), a1, &v45, 1);
      *(_BYTE *)(a1 + 40) = 1;
      v41 = v28;
      clear_tinfo_t(&v45);
      return v41;
    }
    clear_tinfo_t(&tinfo_property);
    clear_tinfo_t(&v45);
  }
  if ( !*(_BYTE *)(a1 + 105) )
  {
    if ( *(_QWORD *)(a1 + 32) != *(_QWORD *)(*(_QWORD *)(a1 + 80) + 8LL) )
      return 0;
    *(_BYTE *)(a1 + 105) = 1;
  }
  v10 = *(_QWORD *)(a1 + 96);
  if ( !*(_BYTE *)(a1 + 107) )
  {
    if ( v10 && v10 == *(_QWORD *)(a1 + 32) )
    {
      if ( a4 )
        goto LABEL_11;
LABEL_75:
      *(_BYTE *)(a1 + 107) = 1;
      goto LABEL_28;
    }
    v11 = *(_QWORD *)(a1 + 24);
LABEL_26:
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 80) + 8LL) == v11 && !a4 )
      return 0;
LABEL_28:
    v20 = *(_QWORD ***)(*(_QWORD *)(a1 + 8) + 800LL);
    if ( v20 )
    {
      v21 = sub_1F4990(v20, a2);
    }
    else
    {
      if ( *(_BYTE *)a2 != 9 )
        goto LABEL_69;
      v21 = *(__int64 **)(a2 + 8);
    }
    if ( v21 )
    {
      v22 = *v21;
      v23 = *((int *)v21 + 4);
      if ( *(_QWORD *)(v22 + 440) < v23 )
        sub_203120();
      v24 = *(_QWORD *)(v22 + 432) + 104 * v23;
      if ( v24 )
      {
        if ( *(_DWORD *)v24 != 1 )
          return 0;
        v25 = *(_QWORD *)(v24 + 8);
        v47 = v25;
LABEL_35:
        if ( (unsigned int)sub_1BCE30(
                             a1 + 48,
                             *(_QWORD *)(**(_QWORD **)(a1 + 80) + 480LL),
                             v25,
                             1,
                             *(unsigned int *)(*(_QWORD *)(a1 + 80) + 16LL),
                             nullptr,
                             nullptr) )
          return (*(__int64 (__fastcall **)(__int64, unsigned __int64, _QWORD *, _QWORD))(*(_QWORD *)a1 + 24LL))(
                   a1,
                   a2,
                   a3,
                   a4);
        return 0;
      }
    }
LABEL_69:
    if ( !(unsigned __int8)sub_327CE0(a2, &v47) )
      return 0;
    v25 = v47;
    goto LABEL_35;
  }
  v11 = *(_QWORD *)(a1 + 24);
  if ( v10 == v11 && !a4 )
  {
    if ( v10 && v10 == *(_QWORD *)(a1 + 32) )
      goto LABEL_75;
    goto LABEL_26;
  }
LABEL_11:
  v12 = *(_BYTE *)(a1 + 106);
  if ( !v12 )
    return 4294967263LL;
  v13 = *(_QWORD **)(a1 + 72);
  v14 = *(_QWORD **)(a1 + 80);
  v15 = v14 + 3;
  result = 4294967263LL;
  if ( (unsigned __int64)(v14 + 3) < *v13 + 24LL * v13[1] && v14[3] == *v14 )
  {
    *(_QWORD *)(a1 + 80) = v15;
    v16 = v14[4];
    if ( v16 )
      v17 = *(_QWORD *)(v16 + 24);
    else
      v17 = *(_QWORD *)(v14[3] + 32LL);
    v18 = *(_QWORD **)(a1 + 88);
    *(_QWORD *)(a1 + 64) = v17;
    if ( v18 )
    {
      *v18 = v17;
      v15 = *(_QWORD **)(a1 + 80);
      v13 = *(_QWORD **)(a1 + 72);
    }
    if ( (unsigned __int64)(v15 + 3) < *v13 + 24LL * v13[1] && *v15 == v15[3] )
    {
      v19 = v15[4];
    }
    else
    {
      v12 = 0;
      v19 = 0;
    }
    *(_BYTE *)(a1 + 104) = v12;
    *(_QWORD *)(a1 + 96) = v19;
    *(_BYTE *)(a1 + 107) = 0;
    goto LABEL_28;
  }
  return result;
}
