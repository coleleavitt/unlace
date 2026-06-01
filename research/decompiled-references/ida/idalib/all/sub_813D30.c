__int64 __fastcall sub_813D30(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 not_tail; // rbx
  __int64 v7; // rbp
  __int64 result; // rax
  __int64 name_ea; // r15
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rdx
  int v13; // ebp
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // [rsp+8h] [rbp-40h]

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
      sub_3879F0();
    if ( get_name_ea(-1, *(_QWORD *)(a1 + 8) + 22LL) == -1 )
      return sub_8139E0((_QWORD *)a1, not_tail);
  }
  if ( !v7 )
  {
    *(_BYTE *)(a1 + 24) = 1;
    return 1;
  }
LABEL_4:
  if ( *(_QWORD *)(a4 + 8) == not_tail )
  {
    result = *(unsigned int *)(a4 + 24);
    if ( !(_DWORD)result )
      return result;
  }
  else
  {
    sub_813C60(a4, not_tail);
    result = *(unsigned int *)(a4 + 24);
    if ( !(_DWORD)result )
      return result;
  }
  name_ea = get_name_ea(-1, a3);
  v10 = sub_8131F0(a3);
  v11 = *(_QWORD *)(a4 + 16);
  v12 = v10;
  if ( *(int *)(a4 + 24) <= 0 )
    return *(unsigned __int8 *)(a1 + 24);
  v13 = 0;
  while ( 1 )
  {
    v14 = *(_QWORD *)(v11 + 24);
    if ( name_ea == v14 || v12 == v14 )
      break;
    if ( !*(_DWORD *)(v11 + 32) )
    {
      if ( *(_QWORD *)(v11 + 8) > 1u )
      {
        v16 = v12;
        v15 = strcmp(*(const char **)v11, (const char *)a3);
        v12 = v16;
        if ( !v15 )
          return 2;
      }
      *(_BYTE *)(a1 + 24) = 1;
    }
    ++v13;
    v11 += 40;
    if ( *(_DWORD *)(a4 + 24) <= v13 )
      return *(unsigned __int8 *)(a1 + 24);
  }
  return 2;
}
