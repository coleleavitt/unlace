__int64 __fastcall sub_22C5090(__int64 a1, __int64 *a2, __m128i a3)
{
  __int64 v3; // rbp
  __int64 v4; // r12
  size_t v5; // rax
  unsigned int v6; // ebx
  size_t v8; // rax
  _BYTE v9[16]; // [rsp+0h] [rbp-38h] BYREF
  void (__fastcall *v10)(_BYTE *, _BYTE *, __int64); // [rsp+10h] [rbp-28h]

  v3 = (__int64)(a2 + 3);
  if ( *(_DWORD *)(a1 + 56) != 1 )
  {
    v4 = *(_QWORD *)(a1 + 48);
    v5 = j__strlen("ModuleDebugify (original debuginfo)");
    return (unsigned int)sub_22C40E0((__int64)a2, a2[4], v3, v4, "ModuleDebugify (original debuginfo)", v5);
  }
  v10 = nullptr;
  v8 = j__strlen("ModuleDebugify: ");
  v6 = sub_22C1780(a2, a2[4], v3, "ModuleDebugify: ", v8, (__int64)v9, a3);
  if ( !v10 )
    return v6;
  v10(v9, v9, 3);
  return v6;
}
