unsigned __int64 __fastcall sub_428010(_QWORD *a1, unsigned __int8 a2)
{
  __int64 v2; // rax
  _BYTE *v3; // rdx
  __int64 v5; // [rsp+0h] [rbp-18h] BYREF
  unsigned __int64 v6; // [rsp+8h] [rbp-10h]

  v2 = a1[5];
  v6 = __readfsqword(0x28u);
  if ( *(_QWORD *)(v2 + 24) && (v3 = *(_BYTE **)(v2 + 16)) != nullptr && *v3 )
  {
    if ( a1[19] == -1 )
    {
      sub_7BEFF0(&v5, a1[18], v3, 0, a2);
      a1[19] = v5;
    }
  }
  else
  {
    a1[19] = -1;
  }
  return v6 - __readfsqword(0x28u);
}
