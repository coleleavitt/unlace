__int64 __fastcall sub_B0A90(__m128i *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rbp
  _QWORD *v4; // r12

  result = (__int64)sub_AF5F0(a1, 6u, *(_DWORD *)(a2 + 4), *(_QWORD *)(a2 + 8));
  if ( result )
  {
    v3 = result;
    v4 = (_QWORD *)operator new(0x48u);
    v4[1] = -1;
    *v4 = 0xFFFFFFFFLL;
    v4[2] = 0;
    result = copy_debug_event();
    *(_QWORD *)(v3 + 24) = v4;
  }
  return result;
}

