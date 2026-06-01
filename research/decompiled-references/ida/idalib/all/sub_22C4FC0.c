__int64 __fastcall sub_22C4FC0(__int64 a1, int a2, __int64 a3, __m128i a4)
{
  __int64 *v4; // rbx
  size_t v6; // rax
  unsigned int v7; // ebx
  size_t v9; // rax
  _BYTE v10[16]; // [rsp+0h] [rbp-38h] BYREF
  void (__fastcall *v11)(_BYTE *, _BYTE *, __int64); // [rsp+10h] [rbp-28h]

  v4 = *(__int64 **)(a1 + 40);
  if ( a2 != 1 )
  {
    v6 = j__strlen("FunctionDebugify (original debuginfo)");
    return (unsigned int)sub_22C40E0(
                           (__int64)v4,
                           v4[4],
                           (__int64)(v4 + 3),
                           a3,
                           "FunctionDebugify (original debuginfo)",
                           v6);
  }
  v11 = nullptr;
  v9 = j__strlen("FunctionDebugify: ");
  v7 = sub_22C1780(v4, a1 + 56, *(_QWORD *)(a1 + 64), "FunctionDebugify: ", v9, (__int64)v10, a4);
  if ( !v11 )
    return v7;
  v11(v10, v10, 3);
  return v7;
}
