__int64 __fastcall sub_143C0(__int64 a1, __int64 a2, __int64 a3)
{
  char *v3; // rax
  __int64 func; // r12
  __int16 v6; // ax
  __int64 v7; // r14
  _QWORD *v8; // rax
  int v9; // eax
  int v10; // r15d
  int v11; // r14d
  __int64 v12; // r13
  __int64 v13; // rax
  char *v14; // rbp
  __int64 v15; // rdi
  __int64 v16; // rdx
  int v17; // eax
  int v18; // ebp
  __int64 v19; // rsi
  int v21; // eax
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rcx
  __int64 v25; // [rsp+8h] [rbp-488h]
  unsigned __int64 that; // [rsp+10h] [rbp-480h]
  unsigned __int64 v27; // [rsp+28h] [rbp-468h]
  unsigned __int8 idainfo_by_type; // [rsp+36h] [rbp-45Ah]
  unsigned __int8 v29; // [rsp+37h] [rbp-459h]
  __int64 v30; // [rsp+38h] [rbp-458h] BYREF
  char v31[8]; // [rsp+40h] [rbp-450h] BYREF
  __int64 v32; // [rsp+48h] [rbp-448h] BYREF
  int v33; // [rsp+50h] [rbp-440h]
  __int128 v34; // [rsp+58h] [rbp-438h]
  char v35[272]; // [rsp+68h] [rbp-428h] BYREF
  __int128 v36; // [rsp+178h] [rbp-318h] BYREF
  __int64 v37; // [rsp+188h] [rbp-308h]
  __int64 v38; // [rsp+190h] [rbp-300h]
  __int64 v39; // [rsp+198h] [rbp-2F8h]
  _BYTE v40[6]; // [rsp+1A0h] [rbp-2F0h] BYREF
  unsigned __int16 v41; // [rsp+1A6h] [rbp-2EAh]
  _BYTE v42[6]; // [rsp+1C8h] [rbp-2C8h] BYREF
  unsigned __int16 v43; // [rsp+1CEh] [rbp-2C2h]
  __int64 v44; // [rsp+1D8h] [rbp-2B8h]
  char v45[8]; // [rsp+2E0h] [rbp-1B0h] BYREF
  __int128 v46; // [rsp+2E8h] [rbp-1A8h] BYREF
  __int64 v47; // [rsp+2F8h] [rbp-198h]
  __int64 v48; // [rsp+300h] [rbp-190h]
  __int64 v49; // [rsp+308h] [rbp-188h]
  _QWORD v50[40]; // [rsp+310h] [rbp-180h] BYREF
  _QWORD v51[8]; // [rsp+450h] [rbp-40h] BYREF

  v3 = v40;
  v51[0] = __readfsqword(0x28u);
  v36 = -1;
  v37 = -1;
  v38 = 0;
  v39 = 0;
  do
  {
    *(_WORD *)v3 = 0;
    v3 += 40;
    *((_WORD *)v3 - 19) = 0;
    *((_WORD *)v3 - 18) = 0;
    *((_DWORD *)v3 - 2) = 0;
    *((_WORD *)v3 - 17) = 0;
    *((_OWORD *)v3 - 2) = 0;
    *((_QWORD *)v3 - 2) = 0;
  }
  while ( v45 != v3 );
  if ( (int)decode_insn(&v36, a2, v45, 0.0) <= 0 )
    return 0;
  func = get_func(a2);
  v6 = v38;
  if ( (_WORD)v38 == 122 )
  {
    if ( v42[1] != 1 )
      return 0;
    v18 = v43;
    do
    {
LABEL_36:
      v19 = decode_prev_insn(&v36, v37);
      if ( v19 == -1 || (int)get_func_chunknum(func, v19) < 0 )
        return 0;
    }
    while ( !sub_13BC0((__int64)&v36, v18, 0) );
    v6 = v38;
  }
  else if ( (_WORD)v38 == 143 )
  {
    if ( v40[1] == 1 )
    {
      v18 = v41;
      goto LABEL_36;
    }
    return 0;
  }
  if ( v6 != 92 || !sub_141C0((__int64)&v36, (__int64)v42) )
    return 0;
  if ( !(unsigned int)sub_7FF0(0x2Eu, &v32, &v36, v42) )
    goto LABEL_9;
  if ( !(*(_QWORD *)(func + 16) & 0x10LL | v32 & 1) )
    return 0;
  if ( (v32 & 1) != 0 )
  {
LABEL_9:
    v7 = v44;
    v25 = v7 + get_spd(func, v37);
  }
  else
  {
    v21 = *(unsigned __int16 *)(func + 40);
    if ( !*(_WORD *)(func + 40) )
      v21 = (1 << (get_func_bitness(func) + 4)) / 8;
    v25 = v44 - *(_QWORD *)(func + 56) - v21;
  }
  idainfo_by_type = get_idainfo_by_type(&v30, v31, v35, a3, 0);
  if ( idainfo_by_type )
  {
    v32 = 0;
    v34 = 0;
    func_tail_iterator_set(&v32, func, -1);
    v27 = *(_QWORD *)(func + 8);
    that = *(_QWORD *)func;
    if ( *(_QWORD *)func < v27 )
    {
      v29 = 0;
      goto LABEL_13;
    }
    v15 = v32;
    while ( 1 )
    {
      if ( !v15 )
        return idainfo_by_type;
      v33 = 0;
      v16 = v15;
      v17 = 0;
      if ( *(int *)(v15 + 128) <= 0 )
      {
LABEL_31:
        lock_func_range(v15, 0);
        return idainfo_by_type;
      }
LABEL_52:
      v15 = *(_QWORD *)(v15 + 136) + 16LL * v17;
      while ( 1 )
      {
        v22 = *(_QWORD *)v15;
        v23 = *(_QWORD *)(v15 + 8);
        v15 = v16;
        that = v22;
        v27 = v23;
        v29 = idainfo_by_type;
        if ( v22 < v23 )
          break;
LABEL_29:
        if ( !v15 )
          return idainfo_by_type;
        v17 = v33 + 1;
        if ( v33 + 1 >= *(_DWORD *)(v15 + 128) )
          goto LABEL_31;
        ++v33;
        if ( v17 >= 0 )
          goto LABEL_52;
      }
LABEL_13:
      while ( 1 )
      {
        v8 = v50;
        v47 = -1;
        v48 = 0;
        v49 = 0;
        v46 = -1;
        do
        {
          *(_WORD *)v8 = 0;
          v8 += 5;
          *((_WORD *)v8 - 19) = 0;
          *((_WORD *)v8 - 18) = 0;
          *((_DWORD *)v8 - 2) = 0;
          *((_WORD *)v8 - 17) = 0;
          *((_OWORD *)v8 - 2) = 0;
          *(v8 - 2) = 0;
        }
        while ( v51 != v8 );
        if ( (int)decode_insn(&v46, that, v51, 0.0) <= 0 )
          break;
        switch ( (_WORD)v48 )
        {
          case 0x7A:
            v9 = 1;
            v10 = 0;
LABEL_20:
            v11 = v10 + v9 + 1;
            do
            {
              while ( 1 )
              {
                v12 = v10;
                v13 = 5LL * v10++ + 5;
                v14 = (char *)&v46 + 8 * v13;
                if ( sub_14290(a1, func, (__int64)&v46, (__int64)v14, v25, v30) )
                {
                  if ( (unsigned __int8)insn_create_stkvar(&v46, v14, v50[5 * v12 + 2], 1) )
                    break;
                }
                if ( v10 == v11 )
                  goto LABEL_25;
              }
              op_stkvar(v47, LOBYTE(v50[5 * v12]));
            }
            while ( v10 != v11 );
            break;
          case 0x8F:
            v9 = 0;
            v10 = 0;
            goto LABEL_20;
          case 0x5C:
            v9 = 0;
            v10 = 1;
            goto LABEL_20;
        }
LABEL_25:
        if ( that + WORD1(v38) < v27 )
        {
          that = next_that(that, v27, sub_E0F0, 0);
          if ( that < v27 )
            continue;
        }
        break;
      }
      v15 = v32;
      if ( v29 )
      {
        v16 = v32;
        goto LABEL_29;
      }
    }
  }
  return 0;
}
