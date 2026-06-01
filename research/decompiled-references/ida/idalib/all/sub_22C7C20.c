__int64 __fastcall sub_22C7C20(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r12
  size_t v3; // rax
  size_t v5; // rax
  int v6; // [rsp+4h] [rbp-44h]
  __int64 v7; // [rsp+8h] [rbp-40h]

  v2 = *(_QWORD **)(a2 + 40);
  if ( *(_DWORD *)(a1 + 80) == 1 )
  {
    v7 = *(_QWORD *)(a1 + 64);
    v6 = *(unsigned __int8 *)(a1 + 84);
    v5 = j__strlen("CheckFunctionDebugify");
    return sub_22C29A0(
             v2,
             a2 + 56,
             *(_QWORD *)(a2 + 64),
             *(_QWORD *)(a1 + 32),
             *(_QWORD *)(a1 + 40),
             v6,
             "CheckFunctionDebugify",
             v5,
             v7);
  }
  else
  {
    v3 = j__strlen("CheckFunctionDebugify (original debuginfo)");
    return sub_22C5140(
             (__int64)v2,
             (char **)(a2 + 56),
             *(_QWORD *)(a2 + 64),
             *(_QWORD *)(a1 + 72),
             "CheckFunctionDebugify (original debuginfo)",
             v3,
             *(void **)(a1 + 32),
             *(_QWORD *)(a1 + 40),
             *(_BYTE **)(a1 + 48),
             *(__int64 **)(a1 + 56));
  }
}
