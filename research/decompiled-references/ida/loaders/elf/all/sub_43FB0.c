__int64 __fastcall sub_43FB0(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned __int16 *)(a1 + 522);
  if ( (_WORD)result == 0x8000 )
  {
    result = find_custom_fixup("PTPOFF");
    *(_WORD *)(a1 + 522) = result;
  }
  return result;
}

