__int64 __fastcall sub_860760(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbp
  __int64 v3; // rbp
  __int64 v4; // r13
  _DWORD *v5; // rax
  _QWORD *v6; // r14
  __int64 v7; // rax
  __int16 v8; // dx
  __int64 *v9; // rbx
  __int64 *v10; // r12
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 88);
  if ( !v1 )
    return 1;
  v2 = *(unsigned int *)(v1 - 4);
  if ( !(_DWORD)v2 )
    return 1;
  v3 = 8 * v2;
  v4 = 0;
  while ( 1 )
  {
    v6 = *(_QWORD **)(v1 + v4);
    v7 = *v6;
    v8 = *(_WORD *)(*v6 + 4LL);
    if ( v8 )
      break;
    v5 = *(_DWORD **)(*(_QWORD *)(v7 + 16) + 24LL);
    if ( !v5 || *v5 != *(_DWORD *)(a1 + 112) )
      goto LABEL_6;
    if ( v5[1] == 13 )
      goto LABEL_11;
    v4 += 8;
    if ( v3 == v4 )
      return 1;
LABEL_7:
    v1 = *(_QWORD *)(a1 + 88);
  }
  if ( v8 != 2 || *(_DWORD *)(v7 + 16) != 2 )
  {
LABEL_6:
    v4 += 8;
    if ( v3 == v4 )
      return 1;
    goto LABEL_7;
  }
LABEL_11:
  v9 = (__int64 *)v6[6];
  if ( !v9 )
    goto LABEL_6;
  v10 = &v9[*((unsigned int *)v9 - 1)];
  if ( v10 == v9 )
    goto LABEL_6;
  while ( 1 )
  {
    result = sub_79AA20(*(_QWORD *)(a1 + 80), *v9, (__int64)v6);
    if ( !(_BYTE)result )
      return result;
    if ( v10 == ++v9 )
      goto LABEL_6;
  }
}

