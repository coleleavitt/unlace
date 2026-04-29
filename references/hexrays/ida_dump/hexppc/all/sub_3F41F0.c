__int64 __fastcall sub_3F41F0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 v3; // al
  __int64 result; // rax
  __int64 v5; // rax
  __int64 v6; // rdi

  v3 = *(_BYTE *)(a3 + 5);
  if ( v3 == 10 )
    return *(unsigned int *)(*(_QWORD *)(a1 + 832) + 80LL);
  switch ( *(_BYTE *)(a3 + 1) )
  {
    case 2:
    case 7:
      return *(unsigned int *)(*(_QWORD *)(a1 + 832) + 84LL);
    case 3:
    case 4:
      v5 = *(_QWORD *)(a1 + 832);
      v6 = 2;
      if ( *(_DWORD *)(v5 + 84) == 8 )
        v6 = 7;
      goto LABEL_7;
    case 5:
      return *(unsigned int *)(*(_QWORD *)(a1 + 832) + 80LL);
    case 0xB:
      return 4;
    default:
      v6 = v3;
LABEL_7:
      result = get_dtype_size(v6);
      break;
  }
  return result;
}
