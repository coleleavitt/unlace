__int64 __fastcall sub_23DE70(double a1, __int64 a2, __int64 a3)
{
  _QWORD *v4; // rax
  __int64 v5; // rdx
  char *v6; // rcx

  if ( !dword_8CC5F0 || (*(_BYTE *)(dbg + 36) & 4) == 0 )
    return 0;
  v4 = (_QWORD *)operator new(0x10u);
  v4[1] = 0;
  *v4 = detach_process;
  if ( (int)sub_23DBF0(v4, a1, a3, v5, v6) <= 0 )
    return 0;
  sub_30A040("Detaching...");
  return 1;
}
