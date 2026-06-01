__int64 __fastcall sub_1F8A10(__int64 a1, int a2, __int64 a3, __int64 a4, double a5)
{
  __int64 v5; // rax

  switch ( a2 )
  {
    case 2:
      v5 = *(_QWORD *)(a1 + 896);
      break;
    case 3:
      if ( *(_QWORD *)(a1 + 904) )
        goto LABEL_6;
      return 0;
    case 1:
      v5 = *(_QWORD *)(a1 + 888);
      break;
    default:
      return 0;
  }
  if ( v5 )
  {
LABEL_6:
    *(_DWORD *)(a1 + 944) = a2;
    return sub_1F8860(a1, (const char *)(unsigned __int8)a3, a3, a4, a5);
  }
  return 0;
}
