__int64 __fastcall sub_98F50(__int64 a1, __int64 a2, const char *a3, _BYTE *a4)
{
  __int64 result; // rax
  bool v6; // [rsp+7h] [rbp-11h] BYREF
  unsigned __int64 v7; // [rsp+8h] [rbp-10h]

  v7 = __readfsqword(0x28u);
  result = (unsigned int)sub_98C00(a1, a2, &v6, a3) ^ 1;
  if ( a4 )
    *a4 = result;
  if ( !(_BYTE)result )
    return v6;
  return result;
}

