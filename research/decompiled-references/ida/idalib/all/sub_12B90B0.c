const char *__fastcall sub_12B90B0(__int64 a1, __int64 a2)
{
  const char *result; // rax
  __int64 v3; // rax
  __int64 v4; // rdx
  _DWORD *v5; // rcx
  __int64 v6; // rdx

  if ( *(_DWORD *)(a1 + 60) != 36 )
    return "wasm-ld";
  v3 = sub_22B75A0(a1 + 16, a2);
  if ( v4 == 6 && *(_DWORD *)v3 == 1769169271 && *(_WORD *)(v3 + 4) == 12656 )
    return "wasm-ld";
  v5 = (_DWORD *)sub_22B75A0(a1 + 16, a2);
  result = "wasm-component-ld";
  if ( v6 == 4 && *v5 == 1769169271 )
    return "wasm-ld";
  return result;
}
