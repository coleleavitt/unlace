unsigned __int64 __fastcall sub_425A70(_QWORD *a1)
{
  __int64 v1; // rax
  _BYTE *v2; // rdx
  __int64 v4; // [rsp+0h] [rbp-18h] BYREF
  unsigned __int64 v5; // [rsp+8h] [rbp-10h]

  v5 = __readfsqword(0x28u);
  sub_774320();
  v1 = a1[5];
  if ( *(_QWORD *)(v1 + 24) && (v2 = *(_BYTE **)(v1 + 16)) != nullptr && *v2 )
  {
    if ( a1[19] == -1 )
    {
      sub_7BEFF0(&v4, a1[18], v2, 0, 0);
      a1[19] = v4;
    }
  }
  else
  {
    a1[19] = -1;
  }
  return v5 - __readfsqword(0x28u);
}
