__int64 __fastcall sub_B0AC0(__m128i *a1, signed int *a2, unsigned int a3, int a4)
{
  __int64 v8; // rax
  int *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v13; // rax

  if ( (dword_2440D8 & 0x10) != 0 )
  {
    v8 = qword_250B30;
    if ( qword_250B30 )
    {
      v9 = &dword_250B28;
      do
      {
        while ( 1 )
        {
          v10 = *(_QWORD *)(v8 + 16);
          v11 = *(_QWORD *)(v8 + 24);
          if ( *(_DWORD *)(v8 + 32) >= a3 )
            break;
          v8 = *(_QWORD *)(v8 + 24);
          if ( !v11 )
            goto LABEL_7;
        }
        v9 = (int *)v8;
        v8 = *(_QWORD *)(v8 + 16);
      }
      while ( v10 );
LABEL_7:
      if ( v9 != &dword_250B28 && a3 >= v9[8] )
        return 0;
    }
  }
  v13 = sub_CE480(a2, 0xFFFFFFFFLL);
  return sub_B0420(a1, v13, *a2, a3, a4);
}

