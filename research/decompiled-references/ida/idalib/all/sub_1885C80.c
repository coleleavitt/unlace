void __fastcall sub_1885C80(__int64 *a1, _DWORD *a2, unsigned int a3, double a4, __m128 a5)
{
  __int16 v6; // ax
  __int64 v7; // r8
  __int64 v8; // r9

  v6 = sub_183C740((__int64)a1, a2);
  if ( HIBYTE(v6) )
  {
    sub_186C610((__int64)a1, a3, (__int64)a2, HIBYTE(v6), v7, v8, a4, a5);
  }
  else
  {
    switch ( (char)v6 )
    {
      case 0:
        sub_1885A80(a1, a3, (__int64)a2, a4, *(double *)a5.m128_u64);
        break;
      case 1:
        sub_1885680(a1, a3, (__int64)a2, a4, *(double *)a5.m128_u64);
        break;
      case 2:
        sub_18854F0(a1, a3, (__int64)a2, a4, *(double *)a5.m128_u64);
        break;
      case 3:
        sub_185D2A0(a1, a3, (__int64)a2);
        break;
      case 4:
        sub_1883360(a1, a3, (__int64)a2);
        break;
      case 5:
        sub_1885830((__int64)a1, a3, (__int64)a2);
        break;
      default:
        return;
    }
  }
}
