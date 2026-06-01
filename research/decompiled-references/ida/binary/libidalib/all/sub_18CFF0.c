unsigned __int64 __fastcall sub_18CFF0(__int64 a1, int a2)
{
  __int64 v2; // rax
  char v4; // [rsp+7h] [rbp-11h] BYREF
  unsigned __int64 v5; // [rsp+8h] [rbp-10h]

  v5 = __readfsqword(0x28u);
  v2 = sub_184EF0(a1, a2, &v4, nullptr);
  if ( v4 == 69 )
    sub_196B90(*(_QWORD *)(v2 + 160), 0, 7, 0);
  return v5 - __readfsqword(0x28u);
}

