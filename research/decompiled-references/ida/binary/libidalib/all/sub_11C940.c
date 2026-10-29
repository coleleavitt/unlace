__int64 __fastcall sub_11C940(_QWORD *a1)
{
  __int64 v1; // rax
  const char *v2; // rdx
  unsigned int v3; // ebx
  const char *v5; // rsi
  const char *v6; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v7; // [rsp+8h] [rbp-20h]
  unsigned __int64 v8; // [rsp+18h] [rbp-10h]

  v8 = __readfsqword(0x28u);
  v1 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 24LL))(*a1, **(_QWORD **)(*a1 + 16LL));
  sub_118D00((__int64)&v6, 1u, v1, "Export script to file");
  if ( v7 <= 1 )
    goto LABEL_6;
  if ( !(unsigned __int8)qfileexist() )
    goto LABEL_10;
  v2 = s1;
  if ( v7 )
    v2 = v6;
  if ( (unsigned int)sub_92580(0, (__int64)"HIDECANCEL\nFile '%s' already exists.\nDo you want to overwrite it?", v2) == 1 )
  {
LABEL_10:
    sub_11C830(a1, 1);
    v5 = s1;
    if ( v7 )
      v5 = v6;
    (*(void (__fastcall **)(_QWORD, const char *))(*(_QWORD *)*a1 + 72LL))(*a1, v5);
    v3 = 1;
  }
  else
  {
LABEL_6:
    v3 = 0;
  }
  if ( v6 )
  {
    v7 = 0;
    qfree();
  }
  return v3;
}

