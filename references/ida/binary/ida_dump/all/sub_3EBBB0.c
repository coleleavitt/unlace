__int64 __fastcall sub_3EBBB0(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  char *v4; // rbx
  unsigned int v5; // eax
  char *s1; // [rsp+0h] [rbp-38h] BYREF
  __int128 v7; // [rsp+8h] [rbp-30h]
  unsigned __int64 v8; // [rsp+18h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  s1 = nullptr;
  v7 = 0;
  v2 = 1;
  if ( !sub_3EB450(a2, (__int64 *)&s1) )
  {
    v4 = s1;
    if ( s1 && sub_3EBB10(s1) )
      goto LABEL_6;
    LOBYTE(v5) = sub_1D3280(v4);
    v2 = v5;
  }
  if ( s1 )
  {
LABEL_6:
    *(_QWORD *)&v7 = 0;
    qfree();
  }
  return v2;
}
