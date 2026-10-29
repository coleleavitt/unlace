__int64 __fastcall sub_F04400(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(unsigned __int8 *)(a2 + 39);
  switch ( (_BYTE)result )
  {
    case 1:
      return sub_971800(*(_QWORD *)(a1 + 1096), " UAV");
    case 0:
      return sub_971800(*(_QWORD *)(a1 + 1096), " SRV");
    case 2:
      return sub_971800(*(_QWORD *)(a1 + 1096), " CBuffer");
    case 3:
      return sub_971800(*(_QWORD *)(a1 + 1096), " Sampler");
  }
  return result;
}

