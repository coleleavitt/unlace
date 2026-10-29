__int64 __fastcall sub_EE9D60(__int64 a1, char a2)
{
  __int16 v2; // dx
  __int64 result; // rax

  v2 = *(_WORD *)a1 & 0x1FF;
  if ( a2 && v2 == 250 )
  {
    result = *(_QWORD *)(a1 + 8LL * *(unsigned int *)(a1 + 8) + 32);
    if ( !result )
      return result;
    a1 = *(_QWORD *)(a1 + 8LL * *(unsigned int *)(a1 + 8) + 32);
    v2 = *(_WORD *)result & 0x1FF;
  }
  result = a1;
  if ( v2 != 130 )
    goto LABEL_10;
LABEL_7:
  for ( result = *(_QWORD *)(result + 8); result; result = *(_QWORD *)(result + 16) )
  {
    v2 = *(_WORD *)result & 0x1FF;
    if ( v2 == 130 )
      goto LABEL_7;
LABEL_10:
    if ( v2 != 249 || *(_DWORD *)(result + 4) != 1 )
      break;
  }
  return result;
}
