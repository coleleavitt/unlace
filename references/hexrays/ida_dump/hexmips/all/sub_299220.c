unsigned __int64 __fastcall sub_299220(
        __int64 a1,
        __int64 *a2,
        __int64 *a3,
        unsigned __int8 (__fastcall ***a4)(_QWORD, __int64),
        bool a5)
{
  __int64 v7; // rax
  int v8; // r15d
  __int64 v9; // r13
  unsigned __int64 v10; // rax
  __int64 v11; // rbp
  __int64 v12; // r14
  __int64 v13; // rbp
  __int64 v14; // rdi
  char v15; // bp
  unsigned int v16; // esi
  __int64 v17; // rbp
  unsigned __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rbp
  __int64 v21; // rdi
  __int64 v22; // r13
  int v23; // r13d
  __int64 v24; // r14
  char v26; // al
  __int64 v27; // rax
  __int64 v28; // rdi
  unsigned __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rax
  int v32; // [rsp+4h] [rbp-B4h]
  __int64 v33; // [rsp+8h] [rbp-B0h]
  __int64 v34; // [rsp+10h] [rbp-A8h]
  _QWORD *v35; // [rsp+18h] [rbp-A0h]
  bool v37; // [rsp+30h] [rbp-88h]
  __int64 tinfo_size; // [rsp+30h] [rbp-88h]
  int v39; // [rsp+30h] [rbp-88h]
  char v40; // [rsp+38h] [rbp-80h]
  __int64 v41; // [rsp+40h] [rbp-78h]
  unsigned int v42; // [rsp+50h] [rbp-68h]
  int v43; // [rsp+54h] [rbp-64h]
  bool v45; // [rsp+63h] [rbp-55h]
  unsigned int v46; // [rsp+64h] [rbp-54h]
  __int64 tinfo_property; // [rsp+70h] [rbp-48h] BYREF
  unsigned __int64 v48; // [rsp+78h] [rbp-40h]

  v45 = a5;
  v48 = __readfsqword(0x28u);
  v7 = a3[1];
  if ( a5 )
  {
    if ( !v7 )
      return v48 - __readfsqword(0x28u);
    v8 = 0;
    v9 = 0;
    do
    {
      v11 = *a3 + 32 * v9;
      if ( (**a4)(a4, v11 + 16) && (get_tinfo_property(*(_QWORD *)(v11 + 16), 2) & 0xF) == 0xA )
      {
        v10 = a3[1];
        v12 = v8;
        v45 = v9 != v10;
        if ( v8 < v10 )
          goto LABEL_10;
        goto LABEL_16;
      }
      ++v8;
      v10 = a3[1];
      v9 = v8;
    }
    while ( v8 < v10 );
    v12 = 0;
    v8 = 0;
    v45 = v9 != v10;
    if ( v10 )
      goto LABEL_10;
  }
  else
  {
    v12 = 0;
    v8 = 0;
    if ( !v7 )
      return v48 - __readfsqword(0x28u);
LABEL_10:
    while ( 1 )
    {
      v13 = *a3 + 32 * v12;
      if ( (**a4)(a4, v13 + 16) )
      {
        v14 = *(_QWORD *)(v13 + 16);
        if ( (_BYTE)v14 )
        {
          if ( (v14 & 0xE) != 0 || (v14 & 0x30) == 0 )
          {
            tinfo_property = 0;
            tinfo_property = get_tinfo_property(v14, 9);
            v15 = get_tinfo_property(tinfo_property, 2);
            clear_tinfo_t(&tinfo_property);
            if ( (v15 & 0x3F) != 0x30 )
              break;
          }
        }
      }
      ++v8;
      v10 = a3[1];
      v12 = v8;
      if ( v8 >= v10 )
        goto LABEL_16;
    }
    v10 = a3[1];
  }
LABEL_16:
  if ( v10 == v12 )
    return v48 - __readfsqword(0x28u);
  v16 = v8 + 1;
  v17 = *a3;
  v18 = v8 + 1;
  v42 = v8 + 1;
  v19 = *(unsigned int *)(*a3 + 32 * v12 + 28);
  if ( v18 < v10 )
  {
    do
    {
      v18 *= 32LL;
      if ( *(_DWORD *)(v17 + v18 + 28) > (int)v19 )
        break;
      v18 = (int)++v16;
    }
    while ( (int)v16 < v10 );
    v42 = v16;
  }
  if ( (int)v42 <= v8 )
    return v48 - __readfsqword(0x28u);
  v32 = v8;
  v46 = 0;
  v41 = 32LL * v8;
  while ( 2 )
  {
    v20 = v41 + v17;
    v35 = (_QWORD *)(v20 + 16);
    if ( !((unsigned __int8 (__fastcall *)(unsigned __int8 (__fastcall ***)(_QWORD, __int64), __int64, unsigned __int64, __int64))**a4)(
            a4,
            v20 + 16,
            v18,
            v19)
      || v45 && (get_tinfo_property(*(_QWORD *)(v20 + 16), 2) & 0xF) != 0xA )
    {
      goto LABEL_46;
    }
    v21 = *(_QWORD *)(v20 + 16);
    if ( !(_BYTE)v21 || (v21 & 0xE) == 0 && (v21 & 0x30) != 0 )
      goto LABEL_46;
    tinfo_property = 0;
    tinfo_property = get_tinfo_property(v21, 9);
    v22 = get_tinfo_property(tinfo_property, 2) & 0x3F;
    clear_tinfo_t(&tinfo_property);
    if ( (_BYTE)v22 == 48 )
      goto LABEL_46;
    v23 = v8;
    v43 = *(_DWORD *)(*a3 + v41 + 24);
    v33 = 32LL * v8;
    do
    {
      if ( v23 == v32 )
        goto LABEL_33;
      v24 = *a3 + v33;
      tinfo_property = 0;
      v34 = *(_QWORD *)(a1 + 1496);
      tinfo_property = get_tinfo_property(*(_QWORD *)(v24 + 16), 9);
      v37 = (get_tinfo_property(tinfo_property, 2) & 0x3F) == 1;
      clear_tinfo_t(&tinfo_property);
      tinfo_property = 0;
      tinfo_property = get_tinfo_property(*(_QWORD *)(v20 + 16), 9);
      v40 = get_tinfo_property(tinfo_property, 2);
      clear_tinfo_t(&tinfo_property);
      if ( v37 == ((v40 & 0x3F) == 1) && sub_240DB0(v34, (__int64 *)(v24 + 16), v35, 0) )
      {
        if ( (get_tinfo_property(*(_QWORD *)(v20 + 16), 2) & 0xF) != 0xA )
          goto LABEL_32;
        tinfo_property = 0;
        tinfo_property = get_tinfo_property(*(_QWORD *)(v20 + 16), 9);
        v26 = get_tinfo_property(tinfo_property, 2);
        if ( (v26 & 0xFu) <= 0xA || (v26 & 0x3F) == 0x2D )
        {
          clear_tinfo_t(&tinfo_property);
LABEL_32:
          v43 += *(_DWORD *)(*a3 + v33 + 24);
          goto LABEL_33;
        }
        clear_tinfo_t(&tinfo_property);
        if ( *(_DWORD *)v24 != 6 )
        {
LABEL_37:
          if ( (unsigned __int8)sub_298A30(v34, a1, v24, v35, (_QWORD *)(v24 + 16)) )
            goto LABEL_32;
          if ( (get_tinfo_property(*(_QWORD *)(v20 + 16), 2) & 0x2F) == 0xD )
          {
            tinfo_size = get_tinfo_size(0, *(_QWORD *)(v20 + 16), 0);
            if ( tinfo_size == get_tinfo_size(0, *(_QWORD *)(v24 + 16), 0)
              && sub_296790(*(_QWORD *)(v34 + 112), v35, 0, (_QWORD *)(v24 + 16)) )
            {
              goto LABEL_32;
            }
          }
          goto LABEL_33;
        }
      }
      else if ( *(_DWORD *)v24 != 6 )
      {
        goto LABEL_37;
      }
      v27 = *(_QWORD *)(v24 + 8);
      if ( *(_DWORD *)(v27 + 8) != 61 )
        goto LABEL_37;
      tinfo_property = sub_2511B0(*(__int64 **)(v27 + 24), (_QWORD *)(v27 + 48));
      if ( (get_tinfo_property(*(_QWORD *)(v20 + 16), 2) & 0xF) != 9 )
        goto LABEL_37;
      v39 = get_tinfo_size(0, *(_QWORD *)(v24 + 16), 0);
      if ( get_tinfo_size(0, *(_QWORD *)(v20 + 16), 0) != v39 )
        goto LABEL_37;
      if ( !tinfo_property || (unsigned int)sub_CBD70(0x4Bu, &tinfo_property, 0, (unsigned __int16)(v39 / 2 - 1)) == 1 )
        goto LABEL_32;
LABEL_33:
      ++v23;
      v33 += 32;
    }
    while ( v23 != v42 );
    v18 = v46;
    if ( v43 > (int)v46 )
    {
      v28 = *a2;
      if ( *a2 )
      {
        a2[1] = 0;
        qfree(v28);
        *a2 = 0;
        v28 = 0;
        v29 = 0;
        a2[2] = 0;
      }
      else
      {
        v29 = a2[2];
      }
    }
    else
    {
      if ( v43 != v46 )
        goto LABEL_46;
      v29 = a2[2];
      v28 = *a2;
    }
    v30 = a2[1];
    v18 = v30 + 1;
    if ( v29 < v30 + 1 )
    {
      v31 = qvector_reserve(a2, v28, v18, 4);
      *a2 = v31;
      v28 = v31;
      v30 = a2[1];
    }
    *(_DWORD *)(v28 + 4 * v30) = v32;
    ++a2[1];
    v46 = v43;
LABEL_46:
    ++v32;
    v19 = v42;
    v41 += 32;
    if ( v32 != v42 )
    {
      v17 = *a3;
      continue;
    }
    return v48 - __readfsqword(0x28u);
  }
}
