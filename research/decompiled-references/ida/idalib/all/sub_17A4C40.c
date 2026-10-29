__int64 __fastcall sub_17A4C40(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rsi
  unsigned int v9; // eax
  __int64 v10; // r13
  bool v11; // r14
  char v12; // r13
  _DWORD *v13; // rdi
  __int64 (*v14)(void); // rax
  char v15; // al
  __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  unsigned __int64 v21; // rbx
  char v22; // al
  _QWORD *v23; // rdi
  __int64 v24; // rax
  __int64 *v25; // rax
  __int64 *v26; // rax
  __int64 *v27; // rax
  __int64 *v28; // rax
  __int64 *i; // rax
  __int64 v30; // rcx
  __int64 *v31; // rax
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  unsigned __int64 v35; // rcx
  __int64 *v36; // rax
  unsigned __int64 *v37; // rax
  __int64 *v38; // rdx
  unsigned __int64 v39; // rcx
  unsigned __int64 v40; // rax
  __int64 *j; // rax
  __int64 v42; // rcx

  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8) == 0 )
    return 0;
  v5 = a2;
  v6 = sub_B8C330(a2);
  if ( !(unsigned int)sub_B74100(a2, v6) )
    return 0;
  v7 = sub_B8C330(a2);
  v8 = *(unsigned int *)(a2 + 24);
  LOBYTE(v9) = sub_1021600(*(_QWORD *)(v7 + 2312), v8);
  v2 = v9;
  if ( (_BYTE)v9 )
    return 0;
  LOBYTE(v10) = 0;
  if ( (*(_BYTE *)(v5 + 28) & 0x7F) != 0x2B )
    LOBYTE(v10) = (*(_BYTE *)(v5 + 97) & 0x20) != 0;
  v11 = (unsigned int)sub_B740B0(v5) != 0;
  if ( ((*(_BYTE *)(v5 + 96) & 7) == 2 || (*(_BYTE *)(v5 + 96) & 7) == 0 && ((*(_BYTE *)(v5 + 96) >> 3) & 3) == 2)
    && !sub_A5EB90(v5) )
  {
    v23 = (_QWORD *)(*(_QWORD *)(v5 + 16) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(v5 + 16) & 4) != 0 )
      v23 = (_QWORD *)*v23;
    if ( !v23 )
      return v2;
    v24 = sub_B8E070((unsigned __int64)v23);
    v5 = v24;
    if ( !v24 || (*(_BYTE *)(v24 + 28) & 0x7Fu) - 34 > 5 )
      return v2;
    v10 = (*(_QWORD *)(v24 + 80) >> 16) & 1LL;
    v11 = (unsigned int)sub_B77D20(v24) != 0;
  }
  if ( v11 | (unsigned __int8)v10 ^ 1 )
    return v2;
  v12 = sub_B81B00(v5);
  v13 = *(_DWORD **)(*(_QWORD *)(a1 + 248) + 17448LL);
  v14 = *(__int64 (**)(void))(*(_QWORD *)v13 + 416LL);
  if ( (char *)v14 == (char *)sub_102B960 )
    v15 = sub_102B960(v13);
  else
    v15 = v14();
  if ( !v15 )
  {
    if ( (v12 & 0x18) != 0 )
      return v2;
    goto LABEL_21;
  }
  if ( (*(_BYTE *)(v5 + 29) & 1) != 0 )
  {
    v25 = sub_B8C3D0(v5, v8, v16, v17, v18, v19);
    v16 = *v25;
    v17 = *v25 + 8LL * *((unsigned int *)v25 + 2);
    if ( *v25 >= v17 )
    {
      if ( v16 != v17 )
      {
        if ( *(_WORD *)(*(_QWORD *)v17 + 36LL) == 195 )
          return v2;
        for ( i = (__int64 *)(v17 + 8); ; ++i )
        {
          v17 = (unsigned __int64)i;
          if ( (__int64 *)v16 == i )
            break;
          v30 = *i;
          if ( *(_WORD *)(v30 + 36) == 195 )
            return v2;
        }
      }
    }
    else
    {
      v26 = (__int64 *)*v25;
      while ( 1 )
      {
        v16 = *v26;
        if ( *(_WORD *)(*v26 + 36) == 195 )
          break;
        if ( (__int64 *)v17 == ++v26 )
          goto LABEL_38;
      }
      if ( (__int64 *)v17 != v26 )
        return v2;
    }
LABEL_38:
    if ( (*(_BYTE *)(v5 + 29) & 1) != 0 )
    {
      v27 = sub_B8C3D0(v5, v8, v16, v17, v18, v19);
      v16 = *v27;
      v17 = *v27 + 8LL * *((unsigned int *)v27 + 2);
      if ( *v27 >= v17 )
      {
        if ( v16 != v17 )
        {
          while ( *(_WORD *)(*(_QWORD *)v17 + 36LL) != 197 )
          {
            v17 += 8LL;
            if ( v16 == v17 )
              goto LABEL_16;
          }
          return v2;
        }
      }
      else
      {
        v28 = (__int64 *)*v27;
        while ( 1 )
        {
          v16 = *v28;
          if ( *(_WORD *)(*v28 + 36) == 197 )
            break;
          if ( (__int64 *)v17 == ++v28 )
            goto LABEL_16;
        }
        if ( (__int64 *)v17 != v28 )
          return v2;
      }
    }
  }
LABEL_16:
  v20 = *(_QWORD *)(v5 + 16);
  v21 = v20 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v20 & 4) != 0 )
    v21 = *(_QWORD *)v21;
  if ( (*(_BYTE *)(v21 + 8) & 0x7Fu) - 59 > 2 || v21 == 64 || (*(_BYTE *)(v21 - 35) & 1) == 0 )
    goto LABEL_21;
  v31 = sub_B8C3D0(v21 - 64, v8, v16, v17, v18, v19);
  v34 = *v31;
  v35 = *v31 + 8LL * *((unsigned int *)v31 + 2);
  if ( *v31 >= v35 )
  {
    if ( v34 != v35 )
    {
      while ( *(_WORD *)(*(_QWORD *)v35 + 36LL) != 195 )
      {
        v35 += 8LL;
        if ( v34 == v35 )
          goto LABEL_60;
      }
      return v2;
    }
  }
  else
  {
    v36 = (__int64 *)*v31;
    while ( 1 )
    {
      v34 = *v36;
      if ( *(_WORD *)(*v36 + 36) == 195 )
        break;
      if ( (__int64 *)v35 == ++v36 )
        goto LABEL_60;
    }
    if ( (__int64 *)v35 != v36 )
      return v2;
  }
LABEL_60:
  if ( (*(_BYTE *)(v21 - 35) & 1) == 0 )
    goto LABEL_21;
  v37 = sub_B8C3D0(v21 - 64, v8, v34, v35, v32, v33);
  v38 = (__int64 *)*v37;
  v39 = *v37 + 8LL * *((unsigned int *)v37 + 2);
  if ( *v37 >= v39 )
  {
    if ( v38 != (__int64 *)v39 )
    {
      if ( *(_WORD *)(*(_QWORD *)v39 + 36LL) == 197 )
        return v2;
      for ( j = (__int64 *)(v39 + 8); v38 != j; ++j )
      {
        v42 = *j;
        if ( *(_WORD *)(v42 + 36) == 197 )
          return v2;
      }
    }
    goto LABEL_21;
  }
  v40 = *v37;
  while ( *(_WORD *)(*(_QWORD *)v40 + 36LL) != 197 )
  {
    v40 += 8LL;
    if ( v39 == v40 )
      goto LABEL_21;
  }
  if ( v39 == v40 )
  {
LABEL_21:
    v2 = 1;
    v22 = v12 & 7;
    if ( (v12 & 7) != 3 )
    {
      v2 = 0;
      if ( v22 != 4 )
        LOBYTE(v2) = v22 == 6;
    }
  }
  return v2;
}
