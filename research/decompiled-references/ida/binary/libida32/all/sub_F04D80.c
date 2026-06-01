__int64 __fastcall sub_F04D80(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 1096);
  switch ( *(_DWORD *)(a2 + 40) )
  {
    case 0:
      result = sub_971800(v2, " OMF_None");
      break;
    case 1:
      result = sub_971800(v2, " OMF_alloc");
      break;
    case 2:
      result = sub_971800(v2, " OMF_copy");
      break;
    case 3:
      result = sub_971800(v2, " OMF_init");
      break;
    case 4:
      result = sub_971800(v2, " OMF_mutableCopy");
      break;
    case 5:
      result = sub_971800(v2, " OMF_new");
      break;
    default:
      return result;
  }
  return result;
}

