__int64 __fastcall sub_440BA0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  int v5; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v6; // [rsp+8h] [rbp-30h]

  v6 = __readfsqword(0x28u);
  if ( *(int *)(a1 + 28) <= 0 )
    return 0;
  v2 = 0;
  while ( 1 )
  {
    v3 = switch_dbctx(*(int *)(a1 + 4 * v2 + 16));
    sub_79BBF0(&v5, v3, a2, 0, 0);
    if ( v5 != -1 )
      break;
    if ( *(_DWORD *)(a1 + 28) <= (int)++v2 )
      return 0;
  }
  return 1;
}

