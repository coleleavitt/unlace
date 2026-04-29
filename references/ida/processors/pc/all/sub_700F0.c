__int64 __fastcall sub_700F0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 result; // rax
  __int64 v4; // rbp
  __int64 *func; // rax
  __int64 v6; // rdi
  __int64 v7; // rcx
  _DWORD *i; // rdx
  _QWORD *v9; // [rsp+8h] [rbp-30h] BYREF
  __int64 v10[5]; // [rsp+10h] [rbp-28h] BYREF

  v10[1] = __readfsqword(0x28u);
  v10[0] = -1;
  v2 = sub_6B0C0(a1, a2, v10);
  if ( v10[0] != a2 )
    return 0;
  if ( v2 == -1 )
    return 0;
  v4 = *(_QWORD *)(a1 + 5304);
  func = (__int64 *)get_func();
  result = sub_6F3C0(v4, func, &v9, 0);
  if ( !(_BYTE)result )
    return 0;
  v6 = v9[1];
  if ( !v6 )
    return 0;
  v7 = 0;
  for ( i = (_DWORD *)(*v9 + 4LL); *i != a2 && i[1] != a2; i += 3 )
  {
    if ( ++v7 == v6 )
      return 0;
  }
  return result;
}
