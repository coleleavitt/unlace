__int64 __fastcall sub_23F570(double a1, __int64 a2, __int64 a3)
{
  char v3; // dl
  __int64 result; // rax
  __int64 v5; // rdx
  char *v6; // rcx

  v3 = sub_1E2E60();
  result = 0;
  if ( v3 )
  {
    v5 = (unsigned int)sub_22FC60(0x12u);
    result = 1;
    if ( !(_DWORD)v5 )
      return sub_23F2E0(dword_8CC428, a1, a3, v5, v6);
  }
  return result;
}
