__int64 __fastcall sub_1A421C0(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 *v7; // r12
  __int64 *v8; // rbx
  __int64 result; // rax

  v2 = sub_A85080(*(_QWORD *)(a1 + 248), a2);
  v7 = (__int64 *)(v2 + 8 * v3);
  if ( (__int64 *)v2 == v7 )
    return 0;
  v8 = (__int64 *)v2;
  while ( 1 )
  {
    result = sub_1A42000(a1, *v8, v3, v4, v5, v6);
    if ( (_BYTE)result )
      break;
    if ( v7 == ++v8 )
      return 0;
  }
  return result;
}
