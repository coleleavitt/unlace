__int64 __fastcall sub_588460(__int64 a1, __int64 a2, int a3)
{
  __int64 *v4; // rax
  __int64 v5; // rcx
  __int64 v8; // rbx
  int v9; // r15d
  __int64 v10; // rdi
  unsigned __int64 v11; // rdx
  __int64 v13; // rsi

  if ( *(_QWORD *)a2 == a1 )
    return 0;
  v4 = *(__int64 **)(a1 + 32);
  if ( !v4 )
    return 1;
  v5 = v4[1];
  if ( !(56 * v5) )
    goto LABEL_7;
  v8 = *v4;
  v9 = 1;
  do
  {
    v10 = v8;
    v8 += 56;
    v9 &= sub_588460(v10, a2, (unsigned int)(a3 + 1));
    v4 = *(__int64 **)(a1 + 32);
    v5 = v4[1];
  }
  while ( v8 != *v4 + 56 * v5 );
  if ( (_BYTE)v9 )
  {
LABEL_7:
    v11 = *(int *)(a2 + 16);
    if ( (!(_DWORD)v11 || v11 >= *(_QWORD *)(a1 + 24) + *(_DWORD *)(a2 + 20) * a3)
      && v4
      && v5
      && (*(_BYTE *)(a1 + 48) & 1) == 0 )
    {
      v13 = *(unsigned int *)(a2 + 8);
      if ( !(unsigned __int8)sub_587F60((__int64 *)a1, v13, *(_DWORD *)(a2 + 12)) )
        set_qerrno(1645, v13);
    }
    return 1;
  }
  return 0;
}

