__int64 __fastcall sub_22C7CF0(__int64 a1, _QWORD *a2)
{
  size_t v2; // rax
  __int64 v4; // r15
  size_t v5; // rax
  int v6; // [rsp+Ch] [rbp-3Ch]

  if ( *(_DWORD *)(a1 + 80) == 1 )
  {
    v4 = *(_QWORD *)(a1 + 64);
    v6 = *(unsigned __int8 *)(a1 + 84);
    v5 = j__strlen("CheckModuleDebugify");
    return sub_22C29A0(
             a2,
             a2[4],
             (__int64)(a2 + 3),
             *(_QWORD *)(a1 + 32),
             *(_QWORD *)(a1 + 40),
             v6,
             "CheckModuleDebugify",
             v5,
             v4);
  }
  else
  {
    v2 = j__strlen("CheckModuleDebugify (original debuginfo)");
    return sub_22C5140(
             (__int64)a2,
             (char **)a2[4],
             (__int64)(a2 + 3),
             *(_QWORD *)(a1 + 72),
             "CheckModuleDebugify (original debuginfo)",
             v2,
             *(void **)(a1 + 32),
             *(_QWORD *)(a1 + 40),
             *(_BYTE **)(a1 + 48),
             *(__int64 **)(a1 + 56));
  }
}
