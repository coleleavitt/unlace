__int64 __fastcall sub_C79B60(__int64 a1, __int64 *a2)
{
  __int64 result; // rax

  switch ( *(_DWORD *)a1 )
  {
    case 2:
      result = *(_QWORD *)(a1 + 8);
      if ( *(_BYTE *)(a1 + 24) )
        return sub_A4C2D0((__int64)a2, result);
      return result;
    case 3:
      result = a2[2392];
      goto LABEL_3;
    case 4:
      result = a2[2382];
      goto LABEL_3;
    case 5:
      result = a2[2331];
      goto LABEL_3;
    case 6:
      result = sub_A4C2D0((__int64)a2, a2[2331]);
      goto LABEL_3;
    case 7:
      result = sub_A4C2D0((__int64)a2, a2[2333]);
      goto LABEL_3;
    case 8:
      result = a2[2334];
      goto LABEL_3;
    default:
      result = 0;
LABEL_3:
      if ( *(_BYTE *)(a1 + 24) )
        return sub_A4C2D0((__int64)a2, result);
      return result;
  }
}

