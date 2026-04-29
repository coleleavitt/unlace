__int64 __fastcall sub_1C22E0(__int64 a1, __int64 a2, int a3, int a4)
{
  int v5; // ebp
  __int64 *v7; // r14
  __int64 v8; // r12
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rax
  int v12; // edx
  _WORD *v13; // r13
  _WORD *v14; // rbp
  _WORD *v15; // r15
  _WORD *v16; // rdi
  size_t v17; // rdx

  if ( a3 <= a4 )
    return 0;
  if ( *(_DWORD *)a1 > 6u )
  {
LABEL_29:
    if ( !under_debugger )
      sub_3835A0(51133);
    BUG();
  }
  switch ( *(_DWORD *)a1 )
  {
    case 0:
      goto LABEL_29;
    case 1:
    case 5:
    case 6:
      return 1;
    case 2:
      v7 = *(__int64 **)(a1 + 8);
      v8 = v7[1];
      v9 = v8 - 1;
      if ( v8 - 1 < 0 )
        return v9 >= 0;
      v10 = *v7;
      v11 = 24 * v9;
      break;
    case 3:
      return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 216LL))(a2, *(unsigned int *)(a1 + 8));
    case 4:
      if ( 2 * a4 > a3 )
        return 0;
      v5 = *(unsigned __int16 *)(a1 + 8);
      if ( 2 * a4 != a3
        && !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 216LL))(
              a2,
              *(unsigned __int16 *)(a1 + 8)) )
      {
        return 0;
      }
      *(_DWORD *)a1 = 3;
      *(_DWORD *)(a1 + 8) = v5;
      return 1;
  }
  while ( 1 )
  {
    v12 = *(unsigned __int16 *)(v10 + v11 + 16);
    if ( v12 <= a4 )
      break;
    --v9;
    v11 -= 24;
    if ( v9 == -1 )
      return v9 >= 0;
  }
  v13 = (_WORD *)(v10 + v11);
  if ( v12 < a4 )
  {
    if ( (unsigned __int16)v13[9] == a4 - v12 )
    {
LABEL_17:
      ++v9;
      v11 = 24 * v9;
      v13 = (_WORD *)(v10 + 24 * v9);
      goto LABEL_22;
    }
    if ( (unsigned __int8)sub_1C22E0(v13, a2, (unsigned __int16)v13[9], (unsigned int)(a4 - v12)) )
    {
      v13[9] = a4 - v13[8];
      v10 = *v7;
      v8 = v7[1];
      goto LABEL_17;
    }
    return 0;
  }
  if ( !v9 )
    return 0;
LABEL_22:
  v14 = (_WORD *)(v10 + 24 * v8);
  if ( 24 * v8 == v11 )
  {
    v17 = 0;
  }
  else
  {
    v15 = v13;
    do
    {
      v16 = v15;
      v15 += 12;
      cleanup_argloc(v16);
    }
    while ( v14 != v15 );
    v17 = *v7 + 24 * v7[1] - (_QWORD)v14;
  }
  memmove(v13, v14, v17);
  v7[1] -= 0xAAAAAAAAAAAAAAABLL * ((24 * (v8 - v9)) >> 3);
  return v9 >= 0;
}
