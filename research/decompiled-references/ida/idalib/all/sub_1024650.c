__int16 __fastcall sub_1024650(__int64 a1, int *a2, int *a3)
{
  int *v4; // r11
  __int16 result; // ax

  if ( !sub_101D610(a1, a2, a3) )
    return 0;
  if ( *v4 != *a3 )
    return sub_1023F40(a1, v4, (unsigned int *)a3);
  LOBYTE(result) = 1;
  HIBYTE(result) = v4[1] < (unsigned int)a3[1];
  return result;
}
