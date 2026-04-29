_BYTE *__fastcall sub_122200(_BYTE *a1, __int64 a2)
{
  _BYTE *result; // rax
  __int64 v3; // rdx

  result = a1;
  if ( *a1 == 4 )
  {
    do
    {
      v3 = *((_QWORD *)result + 1);
      if ( (unsigned int)(*(_DWORD *)v3 - 8) > 1 || a2 && *(_DWORD *)(v3 + 36) < *(_DWORD *)(a2 + 4) )
        break;
      result = (_BYTE *)(v3 + 32);
    }
    while ( *(_BYTE *)(v3 + 32) == 4 );
  }
  return result;
}
