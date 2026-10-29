__int64 __fastcall sub_BA6800(__int64 *a1)
{
  __int64 result; // rax
  __int64 v2; // rdx

  for ( result = *a1; result; *a1 = result )
  {
    if ( *(char *)(result + 28) >= 0 )
    {
      v2 = *(_QWORD *)(result + 40);
      if ( ((v2 & 7) != 0 || (v2 & 0xFFFFFFFFFFFFFFF8LL) == 0) && (*(_BYTE *)(result + 8) & 6) == 0 )
        break;
    }
    result = *(_QWORD *)(result + 128);
  }
  return result;
}
