__int64 __fastcall sub_F08190(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  unsigned __int8 v3; // al
  __int64 result; // rax

  v2 = *a2;
  if ( (*a2 & 0x4000) != 0 )
  {
    sub_971800(*(_QWORD *)(a1 + 1096), " has_init");
    v2 = *a2;
  }
  if ( (v2 & 0x2000) != 0 )
  {
    sub_971800(*(_QWORD *)(a1 + 1096), " has_var");
    v2 = *a2;
  }
  if ( (v2 & 0x1000) != 0 )
  {
    sub_971800(*(_QWORD *)(a1 + 1096), " has_else");
    v3 = (*((_BYTE *)a2 + 1) >> 1) & 7;
    if ( v3 != 1 )
      goto LABEL_7;
  }
  else
  {
    v3 = (*((_BYTE *)a2 + 1) >> 1) & 7;
    if ( v3 != 1 )
      goto LABEL_7;
  }
  sub_971800(*(_QWORD *)(a1 + 1096), " constexpr");
  v3 = (*((_BYTE *)a2 + 1) >> 1) & 7;
LABEL_7:
  result = (unsigned int)v3 - 2;
  if ( (unsigned int)result <= 1 )
  {
    sub_971800(*(_QWORD *)(a1 + 1096), " ");
    if ( ((*((_BYTE *)a2 + 1) >> 1) & 7) == 3 )
      sub_971800(*(_QWORD *)(a1 + 1096), "!");
    return sub_971800(*(_QWORD *)(a1 + 1096), "consteval");
  }
  return result;
}

