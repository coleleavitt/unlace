__int64 __fastcall sub_1804C00(__int64 a1, const void *a2, size_t a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  unsigned __int64 v12; // rbp
  __int64 *v13; // rbx
  __int64 *v14; // rdx
  bool v15; // zf
  __int64 *v16; // rax
  __int64 *v17; // rax
  __int64 result; // rax
  __int64 v19; // rax
  __int64 *v20; // rdx
  __int64 *v21; // rax
  __int64 v22; // rdx
  bool v23; // zf
  __int64 v24; // rax
  __int64 *v25; // rbp
  __int64 v26; // rax
  __int64 *v27; // rdx

  if ( (*(_BYTE *)(a1 + 29) & 1) != 0 )
  {
    v7 = sub_B8C3D0(a1, (__int64)a2, a3, a4, a5, a6);
    v11 = *((unsigned int *)v7 + 2);
    v12 = *v7 + 8 * v11;
    if ( (*(_BYTE *)(a1 + 29) & 1) != 0 )
      v13 = (__int64 *)*sub_B8C3D0(a1, (__int64)a2, v11, v8, v9, v10);
    else
      v13 = nullptr;
  }
  else
  {
    v12 = 0;
    v13 = nullptr;
  }
  v14 = v13;
  v15 = v13 == (__int64 *)v12;
  if ( (unsigned __int64)v13 >= v12 )
    goto LABEL_21;
LABEL_5:
  v16 = v13;
  while ( *(_WORD *)(*v16 + 36) != 208 )
  {
    if ( (__int64 *)v12 == ++v16 )
      goto LABEL_8;
  }
  if ( (__int64 *)v12 == v16 )
    goto LABEL_8;
  do
  {
LABEL_14:
    v19 = *v13;
    if ( *(_WORD *)(*v13 + 36) != 208 )
    {
      v20 = v13 + 1;
      do
        v19 = *v20++;
      while ( *(_WORD *)(v19 + 36) != 208 );
    }
    if ( a3 == *(_DWORD *)(v19 + 40) && (!a3 || !memcmp(*(const void **)(v19 + 48), a2, a3)) )
    {
      v14 = v13;
      v23 = v12 == (_QWORD)v13;
      if ( v12 <= (unsigned __int64)v13 )
        goto LABEL_27;
      goto LABEL_8;
    }
    v14 = ++v13;
    v15 = v13 == (__int64 *)v12;
    if ( (unsigned __int64)v13 < v12 )
      goto LABEL_5;
LABEL_21:
    if ( v15 )
      return 0;
  }
  while ( *(_WORD *)(*(_QWORD *)v12 + 36LL) == 208 );
  v21 = (__int64 *)(v12 + 8);
  while ( 1 )
  {
    v14 = v21;
    if ( v13 == v21 )
      break;
    v22 = *v21++;
    if ( *(_WORD *)(v22 + 36) == 208 )
      goto LABEL_14;
  }
  v23 = v12 == (_QWORD)v21;
  if ( v12 > (unsigned __int64)v21 )
  {
LABEL_8:
    v17 = v14;
    while ( *(_WORD *)(*v17 + 36) != 208 )
    {
      if ( (__int64 *)v12 == ++v17 )
        return 0;
    }
    goto LABEL_35;
  }
LABEL_27:
  if ( v23 )
    return 0;
  v24 = *(_QWORD *)v12;
  v25 = (__int64 *)(v12 + 8);
  if ( *(_WORD *)(v24 + 36) != 208 )
  {
    while ( v25 != v14 )
    {
      v26 = *v25++;
      if ( *(_WORD *)(v26 + 36) == 208 )
        goto LABEL_35;
    }
    return 0;
  }
  do
  {
LABEL_35:
    result = *v14;
    v27 = v14 + 1;
    if ( *(_WORD *)(result + 36) == 208 )
      break;
    result = *v27;
    v14 = v27 + 1;
  }
  while ( *(_WORD *)(result + 36) != 208 );
  return result;
}
