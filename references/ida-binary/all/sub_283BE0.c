__int64 __fastcall sub_283BE0(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int16 v4; // dx

  result = operator new(0x18u);
  *(_WORD *)(result + 16) = 0x8000;
  v2 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)result = renderer_model_reload_strategy_t___vtable;
  *(_QWORD *)(result + 8) = 0;
  if ( v2 )
  {
    v3 = *(_QWORD *)(v2 + 948);
    v4 = *(_WORD *)(v2 + 956);
    *(_QWORD *)(result + 8) = v3;
    *(_WORD *)(result + 16) = v4;
  }
  return result;
}
