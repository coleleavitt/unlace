__int64 __fastcall sub_3ED9D0(__int64 a1)
{
  unsigned int v1; // eax
  unsigned int v2; // ebx
  int v3; // eax
  char *v5; // rdi
  unsigned int v6; // ebp
  __int64 abi_name; // rax
  char *s1; // [rsp+10h] [rbp-38h] BYREF
  __int128 v9; // [rsp+18h] [rbp-30h]
  unsigned __int64 v10; // [rsp+28h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  v1 = getinf_flag(67, 16);
  if ( (_BYTE)v1 )
    return 0;
  v2 = v1;
  v3 = *(_DWORD *)(a1 + 16);
  switch ( v3 )
  {
    case 72:
      return 0;
    case 15:
      if ( (getinf(57) & 0xF) == 6 )
        return (unsigned int)getinf_flag(3, 4) ^ 1;
      return 0;
    case 12:
      s1 = nullptr;
      v9 = 0;
      if ( (getinf(57) & 0xF) != 6 || (v6 = getinf_flag(3, 4), (_BYTE)v6) )
      {
        v5 = s1;
      }
      else
      {
        abi_name = get_abi_name(&s1);
        v5 = s1;
        v2 = 0;
        if ( abi_name )
        {
          if ( (_QWORD)v9 )
          {
            v5 = s1;
            LOBYTE(v6) = strcmp(s1, "eabi32") == 0;
          }
          v2 = v6;
        }
      }
      if ( v5 )
      {
        *(_QWORD *)&v9 = 0;
        qfree(v5);
      }
      return v2;
  }
  if ( (getinf(57) & 0xF) != 6 )
    return 0;
  return getinf_flag(3, 4);
}
