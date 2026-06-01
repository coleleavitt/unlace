__int64 __fastcall sub_397480(__int64 a1, double a2)
{
  __int64 v2; // rax
  int v3; // edx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 vars0; // [rsp+0h] [rbp+0h]
  unsigned __int64 vars8; // [rsp+8h] [rbp+8h]

  vars8 = __readfsqword(0x28u);
  vars0 = 0;
  if ( !(unsigned __int8)sub_3767A0(*(_QWORD *)(a1 + 24)) )
  {
    if ( !under_debugger )
      sub_383060(0xC51Au, a2);
    BUG();
  }
  v2 = *(_QWORD *)(a1 + 32);
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 108);
    if ( (v3 & 8) != 0 )
    {
      set_tinfo();
      goto LABEL_5;
    }
    *(_DWORD *)(v2 + 108) = v3 | 8;
  }
  set_tinfo();
  v8 = *(_QWORD *)(a1 + 32);
  if ( v8 )
  {
    *(_DWORD *)(v8 + 108) &= ~8u;
    if ( (*(_BYTE *)a1 & 2) == 0 )
      sub_395A90(a1, 0, a2, v5, v6, v7);
  }
LABEL_5:
  clear_tinfo_t();
  return 1;
}
