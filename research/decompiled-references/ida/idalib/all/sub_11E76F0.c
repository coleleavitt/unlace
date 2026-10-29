__int64 __fastcall sub_11E76F0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 result; // rax
  unsigned __int64 v7; // rcx
  __int64 v8; // rax

  v2 = *(unsigned int *)(a2 + 8);
  if ( v2 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
  {
    sub_2237220(a2, a2 + 16, v2 + 1, 8);
    v2 = *(unsigned int *)(a2 + 8);
  }
  *(_QWORD *)(*(_QWORD *)a2 + 8 * v2) = "-Wundef-prefix=TARGET_OS_";
  v3 = *(unsigned int *)(a2 + 12);
  v4 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
  *(_DWORD *)(a2 + 8) = v4;
  if ( v4 + 1 > v3 )
  {
    sub_2237220(a2, a2 + 16, v4 + 1, 8);
    v4 = *(unsigned int *)(a2 + 8);
  }
  *(_QWORD *)(*(_QWORD *)a2 + 8 * v4) = "-Werror=undef-prefix";
  v5 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
  *(_DWORD *)(a2 + 8) = v5;
  if ( *(_DWORD *)(a1 + 3932) != 3 )
  {
    result = sub_22B7EA0(a1 + 16);
    if ( !(_BYTE)result )
      return result;
    v5 = *(unsigned int *)(a2 + 8);
  }
  if ( v5 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
  {
    sub_2237220(a2, a2 + 16, v5 + 1, 8);
    v5 = *(unsigned int *)(a2 + 8);
  }
  *(_QWORD *)(*(_QWORD *)a2 + 8 * v5) = "-Wdeprecated-objc-isa-usage";
  v7 = *(unsigned int *)(a2 + 12);
  v8 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
  *(_DWORD *)(a2 + 8) = v8;
  if ( v8 + 1 > v7 )
  {
    sub_2237220(a2, a2 + 16, v8 + 1, 8);
    v8 = *(unsigned int *)(a2 + 8);
  }
  *(_QWORD *)(*(_QWORD *)a2 + 8 * v8) = "-Werror=deprecated-objc-isa-usage";
  ++*(_DWORD *)(a2 + 8);
  result = *(unsigned int *)(a1 + 3932);
  if ( (_DWORD)result )
    return sub_10DC5D0(a2, (__int64)"-Werror=implicit-function-declaration");
  return result;
}
