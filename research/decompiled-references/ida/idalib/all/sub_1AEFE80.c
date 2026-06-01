bool __fastcall sub_1AEFE80(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // r14
  __int64 v5; // r12
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned int v8; // ebp
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 **v11; // rax
  __int64 *v12; // rbp
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 *v19; // rbx
  bool result; // al
  _QWORD *v21; // rax
  _QWORD *v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rcx
  char v25; // al
  _QWORD *v26; // rdi
  __int64 v27; // rdi

  v3 = 0;
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2);
  v6 = *(unsigned int *)(a1 + 344);
  if ( (_DWORD)v6 )
    v3 = *(_QWORD *)(*(_QWORD *)(a1 + 336) + 6776 * v6 - 6776);
  v7 = *a3;
  if ( v3 == *a3 )
    return 0;
  while ( 1 )
  {
    v8 = *(_DWORD *)(v7 - 712);
    if ( sub_FFE740(v8) )
      break;
    if ( sub_FFEA60(v8, a2, v9, v10) )
      break;
    v25 = sub_FFEF70(v8, a2, v23, v24);
    if ( v8 == 103 || v25 || sub_FFE8A0(*(_DWORD *)(*a3 - 712)) )
      break;
    v7 = *a3 - 1688;
    *a3 = v7;
    if ( v3 == v7 )
      return 0;
  }
  v11 = *(__int64 ***)(*a3 - 680);
  if ( !v11 )
  {
    v26 = (_QWORD *)(*(_QWORD *)(v5 + 16) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(v5 + 16) & 4) != 0 )
      v26 = (_QWORD *)*v26;
    if ( v26 )
    {
      if ( *(_QWORD **)(*a3 - 672) == v26 )
        return 1;
      while ( 1 )
      {
        v27 = *(_QWORD *)(sub_B8C1B0((__int64)v26) + 16);
        v26 = (v27 & 4) != 0 ? *(_QWORD **)(v27 & 0xFFFFFFFFFFFFFFF8LL) : (_QWORD *)(v27 & 0xFFFFFFFFFFFFFFF8LL);
        if ( !v26 )
          break;
        if ( *(_QWORD **)(*a3 - 672) == v26 )
          return 1;
      }
    }
    return 0;
  }
  v12 = *v11;
  v13 = *(unsigned int *)(a1 + 344);
  if ( !(_DWORD)v13 )
    return v12 != nullptr;
  v14 = *(_QWORD *)(a1 + 336) + 6776 * v13 - 6776;
  if ( *(_QWORD *)(v14 + 6768) != *(_QWORD *)(a1 + 328) )
    return v12 != nullptr;
  v15 = *(unsigned int *)(v14 + 8);
  v16 = *(unsigned int *)(a1 + 27504);
  if ( (unsigned int)v15 <= (unsigned int)v16 )
    return v12 != nullptr;
  v17 = v15 - v16;
  if ( !v17 )
    return v12 != nullptr;
  v18 = *(_QWORD *)v14 + 1688 * (v17 - 1);
  if ( !v18 )
    return v12 != nullptr;
  v19 = *(__int64 **)(v18 + 1008);
  result = v12 != v19;
  if ( v19 && v12 != v19 )
  {
    do
    {
      if ( *((_BYTE *)v19 + 100) )
      {
        v21 = (_QWORD *)v19[10];
        v22 = &v21[*((unsigned int *)v19 + 23)];
        if ( v21 != v22 )
        {
          while ( v5 != *v21 )
          {
            if ( v22 == ++v21 )
              goto LABEL_38;
          }
          return 1;
        }
      }
      else if ( sub_2236570(v19 + 10, v5) )
      {
        return 1;
      }
LABEL_38:
      v19 = (__int64 *)*v19;
      result = v12 != v19;
    }
    while ( v12 != v19 && v19 != nullptr );
  }
  return result;
}
