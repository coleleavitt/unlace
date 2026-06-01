__int64 __fastcall sub_1994E0(__int64 a1)
{
  __int64 v1; // rax
  __int64 (__fastcall *v3)(ClpPackedMatrix *); // rdx
  _QWORD *v4; // rax
  int v5; // r8d
  __int64 v6; // r11
  __int64 v7; // r9
  __int64 v8; // r10
  __int64 v9; // rdi
  __int64 v10; // rbx
  __int64 result; // rax
  int i; // r12d
  __int64 v13; // rdx
  int v14; // ebp
  int v15; // edx
  __int64 v16; // rcx
  int v17; // esi
  bool v18; // dl

  v1 = *(_QWORD *)(a1 + 192);
  if ( !v1 )
    BUG();
  v3 = **(__int64 (__fastcall ***)(ClpPackedMatrix *))v1;
  if ( v3 == ClpPackedMatrix::getPackedMatrix )
    v4 = *(_QWORD **)(v1 + 88);
  else
    v4 = (_QWORD *)v3((ClpPackedMatrix *)v1);
  v5 = *(_DWORD *)(a1 + 104);
  v6 = v4[5];
  v7 = v4[6];
  v8 = v4[7];
  v9 = v4[4];
  v10 = *(_QWORD *)(a1 + 152);
  result = (unsigned int)(*(_DWORD *)(a1 + 108) - v5);
  if ( v5 >= *(_DWORD *)(a1 + 108) )
    return 0xFFFFFFFFLL;
  i = v5;
  if ( v5 > 0 )
    goto LABEL_6;
LABEL_19:
  v14 = i;
  v18 = i != 0;
  for ( i = 0; (_DWORD)result; i = 0 )
  {
    if ( v18 )
      break;
    result = 0;
    if ( v5 <= 0 )
      goto LABEL_19;
LABEL_6:
    v13 = *(int *)(v7 + 4LL * (int)result);
    if ( *(_DWORD *)(v8 + 4LL * (int)result) != 1 || (v14 = *(_DWORD *)(v6 + 4 * v13)) != 0 )
    {
      v18 = 0;
      v14 = 0;
    }
    else
    {
      if ( *(double *)(v9 + 8 * v13) == 1.0 )
      {
        v15 = 0;
        do
        {
          if ( *(double *)(v10 + 8LL * v15) <= 0.0 )
            break;
          if ( ++v15 >= v5 )
            goto LABEL_19;
          v16 = (int)result + v15;
          v17 = *(_DWORD *)(v7 + 4 * v16);
          if ( *(_DWORD *)(v8 + 4 * v16) != 1 )
            break;
        }
        while ( *(_DWORD *)(v6 + 4LL * v17) == v15 && *(double *)(v9 + 8LL * v17) == 1.0 );
      }
      v18 = 0;
    }
  }
  if ( !v14 )
    return 0xFFFFFFFFLL;
  return result;
}

