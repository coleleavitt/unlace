__int64 __fastcall sub_5A2550(__int64 a1, __int64 a2, int a3)
{
  __int64 *v4; // rax
  __int64 v5; // rcx
  __int64 v7; // rbx
  int v8; // r15d
  __int64 v9; // rdi
  unsigned __int64 v10; // rdx

  if ( *(_QWORD *)a2 == a1 )
    return 0;
  v4 = *(__int64 **)(a1 + 32);
  if ( !v4 )
    return 1;
  v5 = v4[1];
  if ( !(56 * v5) )
    goto LABEL_7;
  v7 = *v4;
  v8 = 1;
  do
  {
    v9 = v7;
    v7 += 56;
    v8 &= sub_5A2550(v9, a2, (unsigned int)(a3 + 1));
    v4 = *(__int64 **)(a1 + 32);
    v5 = v4[1];
  }
  while ( v7 != *v4 + 56 * v5 );
  if ( (_BYTE)v8 )
  {
LABEL_7:
    v10 = *(int *)(a2 + 16);
    if ( (!(_DWORD)v10 || v10 >= *(_QWORD *)(a1 + 24) + *(_DWORD *)(a2 + 20) * a3)
      && v4
      && v5
      && (*(_BYTE *)(a1 + 48) & 1) == 0
      && !(unsigned __int8)sub_5A2050((__int64 *)a1, *(_DWORD *)(a2 + 8), *(_DWORD *)(a2 + 12)) )
    {
      set_qerrno(1645);
    }
    return 1;
  }
  return 0;
}
