__int64 __fastcall sub_7F0A90(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  unsigned int not_tail; // ebx
  __int64 v7; // rbp
  __int64 result; // rax
  int name_ea; // r15d
  int v10; // eax
  __int64 v11; // rbx
  int v12; // edx
  int v13; // ebp
  int v14; // eax
  int v15; // eax
  int v16; // [rsp+Ch] [rbp-3Ch]

  not_tail = a2;
  v7 = get_flags_ex(a2, 4) & 0x600;
  if ( v7 == 512 )
  {
    not_tail = prev_not_tail(a2);
    if ( *(_BYTE *)a3 != 46 || *(_BYTE *)(a3 + 1) )
      goto LABEL_4;
    goto LABEL_21;
  }
  if ( *(_BYTE *)a3 == 46 && !*(_BYTE *)(a3 + 1) )
  {
LABEL_21:
    if ( (debug & 4) != 0 )
      sub_383DA0();
    if ( (unsigned int)get_name_ea(0xFFFFFFFFLL, *(_QWORD *)(a1 + 8) + 22LL) == -1 )
      return sub_7F0790((__int64 *)a1, not_tail);
  }
  if ( !v7 )
  {
    *(_BYTE *)(a1 + 20) = 1;
    return 1;
  }
LABEL_4:
  if ( *(_DWORD *)(a4 + 8) == not_tail )
  {
    result = *(unsigned int *)(a4 + 24);
    if ( !(_DWORD)result )
      return result;
  }
  else
  {
    sub_7F09D0(a4, not_tail);
    result = *(unsigned int *)(a4 + 24);
    if ( !(_DWORD)result )
      return result;
  }
  name_ea = get_name_ea(0xFFFFFFFFLL, a3);
  v10 = sub_7F0030(a3);
  v11 = *(_QWORD *)(a4 + 16);
  v12 = v10;
  if ( *(int *)(a4 + 24) <= 0 )
    return *(unsigned __int8 *)(a1 + 20);
  v13 = 0;
  while ( 1 )
  {
    v14 = *(_DWORD *)(v11 + 24);
    if ( name_ea == v14 || v12 == v14 )
      break;
    if ( !*(_DWORD *)(v11 + 28) )
    {
      if ( *(_QWORD *)(v11 + 8) > 1u )
      {
        v16 = v12;
        v15 = strcmp(*(const char **)v11, (const char *)a3);
        v12 = v16;
        if ( !v15 )
          return 2;
      }
      *(_BYTE *)(a1 + 20) = 1;
    }
    ++v13;
    v11 += 32;
    if ( *(_DWORD *)(a4 + 24) <= v13 )
      return *(unsigned __int8 *)(a1 + 20);
  }
  return 2;
}

