char __fastcall sub_984870(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 *v4; // rax
  __int64 *v5; // rbp
  __int64 *v6; // rax
  __int64 *v7; // rbx
  __int64 *v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rax

  if ( a2 )
  {
    v4 = a2;
    do
    {
      *((_BYTE *)v4 + 44) |= 2u;
      v4 = (__int64 *)v4[10];
    }
    while ( v4 );
    if ( (*((_BYTE *)a3 + 44) & 2) != 0 )
    {
      v5 = a3;
      goto LABEL_8;
    }
  }
  else if ( (*((_BYTE *)a3 + 44) & 2) != 0 )
  {
    v5 = a3;
LABEL_11:
    v7 = a2;
    do
    {
      sub_983F60(a1, v7, (_DWORD **)v7[10], v7[11]);
      v7 = (__int64 *)v7[10];
    }
    while ( v7 != v5 );
    goto LABEL_13;
  }
  v5 = a3;
  do
    v5 = (__int64 *)v5[10];
  while ( (*((_BYTE *)v5 + 44) & 2) == 0 );
  if ( !a2 )
    goto LABEL_11;
LABEL_8:
  v6 = a2;
  do
  {
    *((_BYTE *)v6 + 44) &= ~2u;
    v6 = (__int64 *)v6[10];
  }
  while ( v6 );
  if ( a2 != v5 )
    goto LABEL_11;
LABEL_13:
  if ( a3 != v5 )
  {
    v8 = a3;
    do
    {
      sub_983F60(a1, v8, (_DWORD **)v8[10], v8[11]);
      v8 = (__int64 *)v8[10];
    }
    while ( v8 != v5 );
  }
  v9 = *(_QWORD *)(a1 + 32);
  v10 = *(_QWORD *)(v9 + 16);
  if ( *(_BYTE *)(v10 + 4) )
    LOBYTE(v10) = sub_95AB10(v9, (_DWORD *)*a2, (_DWORD *)*a3, (_DWORD *)*v5);
  return v10;
}

