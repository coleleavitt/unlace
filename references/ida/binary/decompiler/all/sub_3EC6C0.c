__int64 __fastcall sub_3EC6C0(__int64 a1, unsigned int a2, unsigned __int8 *a3)
{
  __int16 v3; // ax
  bool v4; // zf
  char *v5; // rax
  __int64 v6; // rbx

  v3 = *(_WORD *)(a1 + 48);
  if ( v3 == 44 )
  {
    a3 = 0;
    v5 = "inc";
  }
  else
  {
    v4 = v3 == 6;
    v5 = "write";
    if ( v4 )
      v5 = "add";
  }
  v6 = sub_3EC5A0(a1, (__int64)v5, a2, a3, 0xFFFFFFFF);
  sub_313730(*(_QWORD *)(v6 + 72) + 152LL, *(_QWORD *)(v6 + 72) + 216LL);
  return v6;
}
