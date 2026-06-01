__int64 __fastcall sub_3AA7A0(__int64 a1, __int64 a2, __int64 *a3, __int64 *a4)
{
  __int64 v8; // rax
  _QWORD *v9; // rbx
  _QWORD *v10; // r15
  __int64 v11; // rsi
  __int64 v12; // rdi
  bool v13; // zf
  _QWORD *v14; // rbx
  _QWORD *v15; // r15
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // rax

  v8 = *(_QWORD *)(a1 + 40);
  if ( v8 )
  {
    if ( !*(_DWORD *)(v8 - 4) && *(_QWORD *)(a1 + 32) == **(_QWORD **)(a1 + 24) )
      goto LABEL_25;
    *(_DWORD *)(v8 - 4) = 0;
  }
  else if ( *(_QWORD *)(a1 + 32) == **(_QWORD **)(a1 + 24) )
  {
    goto LABEL_25;
  }
  v9 = *(_QWORD **)(a1 + 56);
  if ( v9 )
  {
    v10 = &v9[*((unsigned int *)v9 - 1)];
    if ( v9 >= v10 )
      goto LABEL_12;
    do
    {
      while ( 1 )
      {
        v11 = *v9;
        if ( *v9 )
        {
          v12 = *(_QWORD *)(a1 + 48);
          v13 = (*(_DWORD *)(v11 + 8))-- == 1;
          if ( v13 )
            break;
        }
        if ( ++v9 >= v10 )
          goto LABEL_11;
      }
      sub_15D7BC0(v12, v11);
      ++v9;
    }
    while ( v9 < v10 );
LABEL_11:
    v9 = *(_QWORD **)(a1 + 56);
    if ( v9 )
LABEL_12:
      *((_DWORD *)v9 - 1) = 0;
  }
  v14 = *(_QWORD **)(a1 + 88);
  if ( v14 )
  {
    v15 = &v14[*((unsigned int *)v14 - 1)];
    if ( v14 >= v15 )
      goto LABEL_21;
    do
    {
      while ( 1 )
      {
        v16 = *v14;
        if ( *v14 )
        {
          v17 = *(_QWORD *)(a1 + 80);
          v13 = (*(_DWORD *)(v16 + 8))-- == 1;
          if ( v13 )
            break;
        }
        if ( ++v14 >= v15 )
          goto LABEL_20;
      }
      sub_15D7BC0(v17, v16);
      ++v14;
    }
    while ( v14 < v15 );
LABEL_20:
    v14 = *(_QWORD **)(a1 + 88);
    if ( v14 )
LABEL_21:
      *((_DWORD *)v14 - 1) = 0;
  }
  v18 = *(_QWORD *)(a1 + 136);
  if ( v18 )
    *(_DWORD *)(v18 - 4) = 0;
  sub_15843E0(a1);
LABEL_25:
  if ( *(_BYTE *)(a1 + 16) )
    return sub_3AA580(a1, a2, a3, a4);
  else
    return sub_3A97E0(a1, a2, a3, a4);
}

