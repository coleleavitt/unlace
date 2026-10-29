__int64 __fastcall sub_5DF8B0(__int64 a1)
{
  char v1; // dl
  __int64 result; // rax
  int v3; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v4; // [rsp+8h] [rbp-10h]

  v4 = __readfsqword(0x28u);
  v1 = sub_727BB0(&v3, a1);
  result = 3;
  if ( v1 )
  {
    set_undo_param(3, v3);
    return 0;
  }
  return result;
}

