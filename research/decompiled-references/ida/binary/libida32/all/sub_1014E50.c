__int64 __fastcall sub_1014E50(__int64 a1)
{
  __int64 result; // rax

  *(_BYTE *)(a1 + 286) = 0x80;
  result = sub_2286200(*(_QWORD *)(a1 + 576), "a", 1);
  if ( (_BYTE)result )
    *(_BYTE *)(a1 + 287) = 32;
  return result;
}

