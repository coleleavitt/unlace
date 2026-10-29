__int64 __fastcall sub_F058C0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // kr00_8
  __int64 v4; // kr08_8
  __int64 v5; // rdi
  __int64 result; // rax

  v2 = sub_971800(*(_QWORD *)(a1 + 1096), " \"");
  v3 = sub_9717A0(v2, *(const void **)(a2 + 48), *(unsigned int *)(a2 + 40));
  v4 = sub_971800(v3, "\"");
  v5 = *(_QWORD *)(a1 + 1096);
  switch ( *(_DWORD *)(a2 + 56) )
  {
    case 0:
      result = sub_971800(v5, " IR_None");
      break;
    case 1:
      result = sub_971800(v5, " IR_ARCForbiddenType");
      break;
    case 2:
      result = sub_971800(v5, " IR_ForbiddenWeak");
      break;
    case 3:
      result = sub_971800(v5, " IR_ARCForbiddenConversion");
      break;
    case 4:
      result = sub_971800(v5, " IR_ARCInitReturnsUnrelated");
      break;
    case 5:
      result = sub_971800(v5, " IR_ARCFieldWithOwnership");
      break;
    default:
      result = v4;
      break;
  }
  return result;
}

