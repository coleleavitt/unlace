__int64 __fastcall sub_28B420(__int64 a1, const char *a2)
{
  const char *v3; // rsi
  unsigned int v4; // ebx
  const char *v6; // [rsp+0h] [rbp-448h] BYREF
  __int128 v7; // [rsp+8h] [rbp-440h]
  _BYTE v8[1032]; // [rsp+20h] [rbp-428h] BYREF
  unsigned __int64 v9; // [rsp+428h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  v6 = nullptr;
  v7 = 0;
  get_ea_name(&v6, a1, 21, 0);
  v3 = "HIDECANCEL\nDo you really want to change the function '%s' end to %a?";
  if ( !sub_28AA30(unk_8D0ADA, (int)"HIDECANCEL\nDo you really want to change the function '%s' end to %a?", v6, a2)
    || (v3 = a2, (unsigned __int8)set_func_end(a1, a2)) )
  {
    v4 = 1;
  }
  else
  {
    ea2str(v8, 1024, a2);
    v3 = v6;
    sub_17CE30(154, v6, v8);
    v4 = 0;
  }
  if ( v6 )
  {
    *(_QWORD *)&v7 = 0;
    qfree(v6, v3);
  }
  return v4;
}
