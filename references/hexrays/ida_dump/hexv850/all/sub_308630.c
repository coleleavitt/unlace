char __fastcall sub_308630(__int128 a1, __int64 a2, int *a3, __int64 a4, __int64 a5)
{
  _DWORD *v7; // rax
  __int64 v8; // rcx
  _DWORD *v10; // rax
  _DWORD *v11; // rax
  __int64 v12[7]; // [rsp+0h] [rbp-38h] BYREF

  v12[1] = __readfsqword(0x28u);
  v12[0] = a2;
  v7 = sub_307F80(a1, *((__int64 *)&a1 + 1), v12, a3);
  if ( !v7 )
    return 0;
  if ( !a5 )
    return 1;
  v8 = (__int64)v7;
  if ( *(_BYTE *)v7 == 4 )
  {
    v11 = *((_DWORD **)v7 + 1);
    if ( *v11 == 8 )
      v8 = (__int64)(v11 + 8);
  }
  if ( *(_BYTE *)a5 == 4 )
  {
    v10 = *(_DWORD **)(a5 + 8);
    if ( *v10 == 8 )
      a5 = (__int64)(v10 + 8);
  }
  return sub_307C10(a1, v12[0], v8, a4, a5);
}
