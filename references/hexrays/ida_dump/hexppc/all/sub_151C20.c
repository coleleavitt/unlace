__int64 __fastcall sub_151C20(__int64 a1)
{
  __int64 ea_name; // rax
  char *v2; // rbx
  unsigned int v3; // ebp
  char *s1; // [rsp+0h] [rbp-38h] BYREF
  __int128 v6; // [rsp+8h] [rbp-30h]
  unsigned __int64 v7; // [rsp+18h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  s1 = nullptr;
  v6 = 0;
  ea_name = get_ea_name(&s1, a1, 21, 0);
  v2 = s1;
  v3 = 0;
  if ( ea_name > 0 && (unsigned __int64)v6 > 0xC )
    LOBYTE(v3) = strncmp(s1, "operator new", 0xCu) == 0;
  if ( v2 )
  {
    *(_QWORD *)&v6 = 0;
    qfree(v2);
  }
  return v3;
}
