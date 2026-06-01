__int64 __fastcall sub_C70940(__int64 a1)
{
  __int64 v1; // rcx
  __int16 v2; // dx
  __int64 result; // rax

  v1 = sub_BD7CB0(*(_QWORD *)(a1 + 32));
  v2 = *(_WORD *)v1 & 0x1FF;
  if ( v2 == 46 )
    return *(_QWORD *)(v1 + 16);
  result = 0;
  if ( ((v2 + 394) & 0x1FFu) <= 1 && ((*(_WORD *)(v1 + 2) >> 3) & 0x3Fu) <= 1 )
    return *(_QWORD *)(v1 + 16);
  return result;
}

