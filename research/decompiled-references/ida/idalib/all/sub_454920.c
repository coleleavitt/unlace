__int64 __fastcall sub_454920(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  _QWORD v5[7]; // [rsp+0h] [rbp-38h] BYREF

  v5[1] = __readfsqword(0x28u);
  if ( *(int *)(a1 + 28) <= 0 )
    return 0;
  v2 = 0;
  while ( 1 )
  {
    v3 = switch_dbctx(*(int *)(a1 + 4 * v2 + 16));
    sub_7BEFF0(v5, v3, a2, 0, 0);
    if ( v5[0] != -1 )
      break;
    if ( *(_DWORD *)(a1 + 28) <= (int)++v2 )
      return 0;
  }
  return 1;
}
