bool __fastcall sub_23DCD0(double a1, __int64 a2, __int64 a3, __int64 a4, char *a5)
{
  _QWORD *v5; // rax
  __int64 v6; // rdx
  char *v7; // rcx

  if ( !dbg )
    return 0;
  if ( !dword_8CC5F0 )
    return 1;
  if ( (*(_BYTE *)(dbg + 33) & 1) != 0 )
  {
    v5 = (_QWORD *)operator new(0x10u);
    v5[1] = 0;
    *v5 = exit_process;
    return (int)sub_23DBF0(v5, a1, a3, v6, v7) > 0;
  }
  else if ( (int)sub_23D480((__int64)qword_8CC600, 3, (unsigned int)dword_8CC5F0, a5, a1) <= 0 )
  {
    return 0;
  }
  else
  {
    dword_8CC55C |= 2u;
    sub_30A040("Exiting...");
    sub_226B70(0);
    return 1;
  }
}
