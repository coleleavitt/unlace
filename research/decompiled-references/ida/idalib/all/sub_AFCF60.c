__int64 __fastcall sub_AFCF60(__int64 a1, __int64 a2)
{
  int v3; // eax
  __int64 result; // rax
  const char *v5; // rsi

  if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
    v3 = sub_FA77D0(a1);
  else
    v3 = *(_BYTE *)(a1 + 34) >> 4;
  switch ( v3 )
  {
    case 0:
      sub_995540(a2, "__attribute__((thiscall");
      result = sub_995540(a2, "))");
      break;
    case 1:
    case 2:
      sub_995540(a2, "[[gnu::thiscall");
      result = sub_995540(a2, "]]");
      break;
    case 3:
      v5 = "__thiscall";
      goto LABEL_8;
    case 4:
      v5 = "_thiscall";
LABEL_8:
      sub_995540(a2, v5);
      result = sub_995540(a2, &byte_22F0C30);
      break;
  }
  return result;
}
