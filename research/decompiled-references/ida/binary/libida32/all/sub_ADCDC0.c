__int64 __fastcall sub_ADCDC0(__int64 a1, __int64 a2)
{
  int v3; // eax
  __int64 result; // rax
  const char *v5; // rsi

  if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
    v3 = sub_F83A90(a1);
  else
    v3 = *(_BYTE *)(a1 + 34) >> 4;
  switch ( v3 )
  {
    case 0:
      v5 = "__generic";
      goto LABEL_8;
    case 1:
      v5 = "generic";
LABEL_8:
      sub_971800(a2, v5);
      result = sub_971800(a2, &byte_22CD811);
      break;
    case 2:
      sub_971800(a2, "__attribute__((opencl_generic");
      result = sub_971800(a2, "))");
      break;
    case 3:
    case 4:
      sub_971800(a2, "[[clang::opencl_generic");
      result = sub_971800(a2, "]]");
      break;
  }
  return result;
}

