void __fastcall __noreturn sub_2EAD22()
{
  __int64 v0; // rbx

  *(_DWORD *)(v0 + 8) = (2 * (*(_DWORD *)(v0 + 8) >> 1) + 2) | *(_DWORD *)(v0 + 8) & 1;
  BUG();
}
