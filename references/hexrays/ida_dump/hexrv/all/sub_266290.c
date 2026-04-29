_QWORD *__fastcall sub_266290(_QWORD *a1, __int64 a2, __int64 a3, __int64 *a4, _BYTE *a5, int a6)
{
  int v6; // eax
  __int64 v8; // rsi
  __int64 v9; // r12
  unsigned int v10; // r14d
  __int64 v11; // r13
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // r15
  __int64 v15; // r14
  __int64 v16; // rdi
  int v18; // eax
  __int64 v19; // r15
  __int64 v20; // rdi
  char v21; // bp
  int v22; // eax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rbx
  char tinfo_property; // al
  int tinfo_size; // r14d
  __int64 v29; // rax
  char v31; // [rsp+17h] [rbp-71h]
  __int64 v35; // [rsp+30h] [rbp-58h] BYREF
  __int64 v36; // [rsp+38h] [rbp-50h] BYREF
  _QWORD v37[9]; // [rsp+40h] [rbp-48h] BYREF

  v6 = a6;
  v37[1] = __readfsqword(0x28u);
  v8 = *a4;
  if ( a6 == -1 )
  {
    v6 = *((_DWORD *)a4 + 2);
    v9 = a2;
  }
  else
  {
    v9 = *(_QWORD *)(v8 + 8LL * a6);
  }
  v10 = v6 - 1;
  v11 = v6 - 1;
  v12 = *(_QWORD *)(v8 + 8 * v11);
  v13 = 8 * v11;
  if ( *(_DWORD *)(v12 + 8) == 52 )
  {
    v11 = (int)--v10;
    v9 = *(_QWORD *)(v8 + 8LL * (int)v10);
    *a1 = 0;
    v13 = 8LL * (int)v10;
    if ( *(_DWORD *)(v9 + 8) != 48 )
    {
      v31 = 1;
      v9 = v12;
LABEL_5:
      v14 = *(_QWORD *)(*a4 + v13);
      if ( *(_DWORD *)(v14 + 8) != 2 )
        goto LABEL_21;
LABEL_6:
      v15 = *(_QWORD *)(v14 + 32);
      if ( v15 == v9 )
        v15 = *(_QWORD *)(v14 + 24);
      if ( *(_DWORD *)(v15 + 8) == 51 )
      {
        v24 = *(_QWORD *)(v15 + 24);
        if ( *(_DWORD *)(v24 + 8) == 48 )
        {
          v25 = *(_QWORD *)(v24 + 24);
          if ( *(_DWORD *)(v25 + 8) == 52 )
          {
            v26 = *(_QWORD *)(v25 + 24);
            tinfo_property = get_tinfo_property(*(_QWORD *)(v26 + 48), 2);
            if ( (tinfo_property & 0x3E) != 0 && ((tinfo_property & 0xFu) <= 9 || (tinfo_property & 0x3F) == 0x2D) )
            {
              tinfo_size = get_tinfo_size(0, *(_QWORD *)(v15 + 48), 0);
              if ( tinfo_size == (unsigned int)get_tinfo_size(0, *(_QWORD *)(v26 + 48), 0) )
                copy_tinfo_t(a1, v26 + 48);
            }
          }
        }
      }
      v16 = *a1;
      if ( (unsigned __int8)*a1 )
        goto LABEL_10;
LABEL_21:
      if ( !(unsigned __int8)sub_27FA60((_DWORD)a1, *(_QWORD *)(a3 + 8), v14, v9, (_DWORD)a5, a6)
        || ((v20 = *a1, !(unsigned __int8)*a1)
         || (v20 & 0xE) == 0 && (v20 & 0x30) != 0
         || (v37[0] = 0,
             v37[0] = get_tinfo_property(v20, 9),
             v21 = get_tinfo_property(v37[0], 2),
             clear_tinfo_t(v37),
             (v21 & 0x3F) == 0x30))
        && *(_DWORD *)(v14 + 8) == 57 )
      {
        clear_tinfo_t(a1);
      }
      if ( !v31 )
      {
LABEL_29:
        v16 = *a1;
        if ( !(unsigned __int8)*a1 )
          return a1;
        goto LABEL_11;
      }
      v16 = *a1;
LABEL_28:
      v37[0] = 0;
      v37[0] = get_tinfo_property(v16, 10);
      copy_tinfo_t(a1, v37);
      clear_tinfo_t(v37);
      goto LABEL_29;
    }
    v22 = *(_DWORD *)(v12 + 8);
    if ( v22 == 48 )
    {
      v29 = v9;
      v31 = 1;
      v9 = v12;
      v12 = v29;
      goto LABEL_17;
    }
    if ( v22 != 51 )
    {
      v31 = 1;
      v12 = v9;
      goto LABEL_17;
    }
    v31 = 1;
    v23 = v9;
    v9 = v12;
    v12 = v23;
  }
  else
  {
    v31 = 0;
    *a1 = 0;
    if ( *(_DWORD *)(v12 + 8) != 48 )
      goto LABEL_5;
    v18 = *(_DWORD *)(v9 + 8);
    if ( v18 == 48 )
      goto LABEL_17;
    if ( v18 != 51 )
    {
      v9 = v12;
      goto LABEL_17;
    }
  }
  if ( *(_DWORD *)(*(_QWORD *)(v9 + 24) + 8LL) != 48 )
    v9 = v12;
LABEL_17:
  while ( 1 )
  {
    v19 = v9 + 48;
    if ( !sub_2660C0((_QWORD *)(v12 + 48), (_QWORD *)(v9 + 48)) )
      break;
    --v10;
    v9 = v12;
    v11 = (int)v10;
    v12 = *(_QWORD *)(*a4 + 8LL * (int)v10);
    if ( *(_DWORD *)(v12 + 8) != 48 )
    {
      v19 = v9 + 48;
      break;
    }
  }
  copy_tinfo_t(a1, v19);
  if ( *(_DWORD *)(v12 + 8) == 51 )
  {
    sub_266290(&v35, a2, a3, a4, a5, v10);
    if ( (_BYTE)v35 )
    {
      v36 = 0;
      v36 = get_tinfo_property(*a1, 10);
      if ( sub_2660C0(&v35, &v36) )
      {
        copy_tinfo_t(a1, &v35);
        sub_327290(v37, *(_QWORD *)(*(_QWORD *)(a3 + 216) + 112LL), a1);
        copy_tinfo_t(a1, v37);
        clear_tinfo_t(v37);
      }
      clear_tinfo_t(&v36);
    }
    if ( a5 && *(_DWORD *)(*(_QWORD *)(*a4 + 8LL * (int)(v10 - 1)) + 8LL) == 21 )
      *a5 = 1;
    clear_tinfo_t(&v35);
  }
  v16 = *a1;
  if ( !(unsigned __int8)*a1 )
  {
    v14 = *(_QWORD *)(*a4 + 8 * v11);
    if ( *(_DWORD *)(v14 + 8) != 2 )
      goto LABEL_21;
    goto LABEL_6;
  }
LABEL_10:
  if ( v31 )
    goto LABEL_28;
LABEL_11:
  LOBYTE(v16) = v16 | 0xC0;
  *a1 = v16;
  return a1;
}
