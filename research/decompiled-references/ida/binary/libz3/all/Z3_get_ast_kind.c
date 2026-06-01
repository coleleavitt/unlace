__int64 __fastcall Z3_get_ast_kind(__int64 a1, __int64 a2)
{
  char v2; // r12
  __int64 result; // rax
  __int64 v4; // rax
  char v5; // dl

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v2 )
  {
    sub_29A680();
    *(_DWORD *)(a1 + 1520) = 0;
    if ( !a2 || !*(_DWORD *)(a2 + 8) )
    {
      sub_24EA30(a1, 3u, "not a valid ast");
      result = 1000;
LABEL_9:
      byte_1C7EBA0 = 1;
      return result;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 1520) = 0;
    if ( !a2 || !*(_DWORD *)(a2 + 8) )
    {
      sub_24EA30(a1, 3u, "not a valid ast");
      return 1000;
    }
  }
  switch ( *(_WORD *)(a2 + 4) )
  {
    case 0:
      v4 = sub_15D1F10(a2);
      v5 = sub_2B7300(a1, v4);
      result = 1;
      if ( v5 )
        result = (unsigned __int8)sub_15D2710(*(_QWORD *)(a1 + 232), a2) ^ 1u;
      break;
    case 1:
      result = 2;
      break;
    case 2:
      result = 3;
      break;
    case 3:
      result = 4;
      break;
    case 4:
      result = 5;
      break;
    default:
      result = 1000;
      break;
  }
  if ( v2 )
    goto LABEL_9;
  return result;
}

