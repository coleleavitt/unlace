void __fastcall sub_B3F9E0(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  __int64 v6; // rdx
  unsigned int v7; // r12d
  __int64 v8; // rax
  int v9; // edx
  __int64 v10; // rax
  unsigned int *v11; // r14
  _DWORD *v12; // rax
  _QWORD *v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  bool v17; // si
  bool v18; // r8
  __int64 v19; // rcx
  int v20; // eax
  int v21; // esi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rdx
  unsigned int v26; // r12d
  __int64 v27; // rax
  _DWORD *v28; // rax
  __int64 v29; // rax
  __int64 v30; // rdx
  bool v31; // r8
  bool v32; // si
  unsigned int *v33; // r14
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rcx
  int v37; // eax
  int v38; // edx
  __int64 v39; // rax
  unsigned int *v40; // r15
  unsigned int v41; // eax
  __int64 v42; // rax
  unsigned int *v43; // r15
  unsigned int v44; // eax
  __int64 v45; // rax
  int v46; // ecx
  __int64 v47; // rax
  unsigned int *v48[8]; // [rsp+8h] [rbp-40h] BYREF

  *a3 = 0;
  v6 = *(_QWORD *)(a1 + 32);
  if ( !v6 || (v7 = *(_DWORD *)(v6 - 4), v8 = *(unsigned int *)(a1 + 40), (unsigned int)v8 >= v7) )
  {
LABEL_29:
    *a2 = 0x7FFFFFFF;
    goto LABEL_30;
  }
  while ( 1 )
  {
    v11 = *(unsigned int **)(v6 + 8 * v8);
    if ( *((_WORD *)v11 + 2) )
      break;
    v12 = *(_DWORD **)(*((_QWORD *)v11 + 2) + 24LL);
    if ( !v12 || *v12 )
      break;
    v13 = *(_QWORD **)(a1 + 8);
    v21 = v12[1];
    v22 = v13[1104];
    if ( v22 )
    {
      v23 = *v11;
      if ( (unsigned int)v23 < *(_DWORD *)(v22 - 4) )
      {
        v16 = *(unsigned int *)(v22 + 4 * v23);
        if ( (_DWORD)v16 != 0x7FFFFFFF )
        {
          v17 = v21 == 6;
          v18 = v12[1] == 5;
          goto LABEL_16;
        }
      }
    }
    if ( v21 == 6 )
      goto LABEL_5;
LABEL_7:
    v8 = (unsigned int)(*(_DWORD *)(a1 + 40) + 1);
    *(_DWORD *)(a1 + 40) = v8;
    if ( (unsigned int)v8 >= v7 )
      goto LABEL_29;
    v6 = *(_QWORD *)(a1 + 32);
  }
  v13 = *(_QWORD **)(a1 + 8);
  v14 = v13[1104];
  if ( !v14 )
    goto LABEL_7;
  v15 = *v11;
  if ( (unsigned int)v15 >= *(_DWORD *)(v14 - 4) )
    goto LABEL_7;
  v16 = *(unsigned int *)(v14 + 4 * v15);
  if ( (_DWORD)v16 == 0x7FFFFFFF )
    goto LABEL_7;
  v17 = 0;
  v18 = 0;
LABEL_16:
  v19 = v13[1106];
  *a2 = v16;
  v20 = *(char *)(v19 + (unsigned int)(2 * v16));
  if ( v20 == 1 && v17 )
  {
LABEL_5:
    v9 = 1;
    goto LABEL_6;
  }
  if ( v20 != -1 || !v18 )
  {
    if ( !*(_BYTE *)(v19 + (unsigned int)(2 * v16)) )
    {
      v24 = *(_QWORD *)(a1 + 16);
      *a3 = 0;
      if ( *(_BYTE *)(v24 + 588) )
        goto LABEL_60;
      return;
    }
    goto LABEL_7;
  }
  v9 = -1;
LABEL_6:
  v10 = *(_QWORD *)(a1 + 16);
  v48[0] = nullptr;
  if ( (unsigned __int8)sub_B3F3F0((__int64)v13, (__int64)v11, v9, v48, *(_DWORD *)(v10 + 584)) )
    goto LABEL_7;
  v43 = v48[0];
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 24) + 912LL) )
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::_M_insert<unsigned long>();
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::_M_insert<unsigned long>();
    std::__ostream_insert<char,std::char_traits<char>>();
  }
  v44 = sub_B645B0(*(_QWORD *)(a1 + 8), v43);
  v16 = v44 >> 1;
  *a2 = v16;
  if ( (v44 & 1) != 0 )
  {
    *a3 = -1;
    if ( (_DWORD)v16 != 0x7FFFFFFF )
      return;
  }
  else
  {
    *a3 = 1;
    if ( (_DWORD)v16 != 0x7FFFFFFF )
    {
      if ( *(_BYTE *)(*(_QWORD *)(a1 + 16) + 588LL) )
        goto LABEL_59;
      return;
    }
  }
LABEL_30:
  v25 = *(_QWORD *)(a1 + 48);
  *a3 = 0;
  if ( !v25 || (v26 = *(_DWORD *)(v25 - 4), v27 = *(unsigned int *)(a1 + 56), (unsigned int)v27 >= v26) )
  {
LABEL_66:
    *a2 = 0x7FFFFFFF;
    return;
  }
  while ( 2 )
  {
    v33 = *(unsigned int **)(v25 + 8 * v27);
    if ( *((_WORD *)v33 + 2) || (v28 = *(_DWORD **)(*((_QWORD *)v33 + 2) + 24LL)) == nullptr )
    {
      v13 = *(_QWORD **)(a1 + 8);
      v34 = v13[1104];
      if ( v34 )
      {
        v35 = *v33;
        if ( (unsigned int)v35 < *(_DWORD *)(v34 - 4) )
        {
          v16 = *(unsigned int *)(v34 + 4 * v35);
          if ( (_DWORD)v16 != 0x7FFFFFFF )
          {
            v32 = 0;
            v31 = 0;
            goto LABEL_44;
          }
        }
      }
      goto LABEL_37;
    }
    if ( !*v28 )
    {
      v13 = *(_QWORD **)(a1 + 8);
      v46 = v28[1];
      v30 = v13[1104];
      v32 = v46 == 6;
      if ( v30 )
      {
        v29 = *v33;
        if ( (unsigned int)v29 < *(_DWORD *)(v30 - 4) )
        {
          v31 = v46 == 5;
          goto LABEL_72;
        }
      }
LABEL_75:
      if ( v32 )
        goto LABEL_46;
      goto LABEL_37;
    }
    v13 = *(_QWORD **)(a1 + 8);
    v29 = *v33;
    v30 = v13[1104];
    if ( !v30 )
      goto LABEL_37;
    v31 = 0;
    v32 = 0;
    if ( (unsigned int)v29 >= *(_DWORD *)(v30 - 4) )
      goto LABEL_37;
LABEL_72:
    v16 = *(unsigned int *)(v30 + 4 * v29);
    if ( (_DWORD)v16 == 0x7FFFFFFF )
      goto LABEL_75;
LABEL_44:
    v36 = v13[1106];
    *a2 = v16;
    v37 = *(char *)(v36 + (unsigned int)(2 * v16));
    if ( v37 == 1 && v32 )
    {
LABEL_46:
      v38 = 1;
    }
    else
    {
      if ( v37 != -1 || !v31 )
      {
        if ( !*(_BYTE *)(v36 + (unsigned int)(2 * v16)) )
        {
          v47 = *(_QWORD *)(a1 + 16);
          *a3 = 0;
          if ( *(_BYTE *)(v47 + 588) )
            goto LABEL_60;
          return;
        }
        goto LABEL_37;
      }
      v38 = -1;
    }
    v39 = *(_QWORD *)(a1 + 16);
    v48[0] = nullptr;
    if ( (unsigned __int8)sub_B3F3F0((__int64)v13, (__int64)v33, v38, v48, *(_DWORD *)(v39 + 584)) )
    {
LABEL_37:
      v27 = (unsigned int)(*(_DWORD *)(a1 + 56) + 1);
      *(_DWORD *)(a1 + 56) = v27;
      if ( (unsigned int)v27 >= v26 )
        goto LABEL_66;
      v25 = *(_QWORD *)(a1 + 48);
      continue;
    }
    break;
  }
  v40 = v48[0];
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 24) + 912LL) )
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::_M_insert<unsigned long>();
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::_M_insert<unsigned long>();
    std::__ostream_insert<char,std::char_traits<char>>();
  }
  v41 = sub_B645B0(*(_QWORD *)(a1 + 8), v40);
  v16 = v41 >> 1;
  *a2 = v16;
  if ( (v41 & 1) != 0 )
    goto LABEL_63;
  v42 = *(_QWORD *)(a1 + 16);
  *a3 = 1;
  if ( !*(_BYTE *)(v42 + 588) || (_DWORD)v16 == 0x7FFFFFFF )
    return;
LABEL_59:
  v13 = *(_QWORD **)(a1 + 8);
LABEL_60:
  if ( (*(_BYTE *)(v13[1109] + 16 * v16 + 11) & 0x40) != 0 )
  {
    v45 = *(_QWORD *)(v13[1082] + 8LL * **(unsigned int **)(v13[1105] + 8 * v16));
    if ( (*(_BYTE *)(v45 + 44) & 0x10) != 0 )
    {
      if ( (unsigned __int8)sub_8EBDD0((__int64)v13, *(_QWORD *)(v45 + 112), *(_QWORD *)(v45 + 120), 2u) )
LABEL_63:
        *a3 = -1;
    }
  }
}

