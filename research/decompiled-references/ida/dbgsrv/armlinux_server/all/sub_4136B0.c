/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4136B0
// Address: 0x00000000004136B0

//----- (00000000004136B0) ----------------------------------------------------
__int64 __fastcall sub_4136B0(__int64 a1)
{
  int v2; // w0
  int v3; // w0
  const char *v4; // x0
  __int64 v6; // x0
  __int64 v7; // x3
  const char *v8; // x0
  int v9; // [xsp+40h] [xbp-1A0h] BYREF
  __int64 v10; // [xsp+48h] [xbp-198h]
  _BYTE v11[32]; // [xsp+58h] [xbp-188h] BYREF
  int *v12; // [xsp+78h] [xbp-168h]
  signed int v13; // [xsp+C0h] [xbp-120h]
  __int64 v14; // [xsp+1D8h] [xbp-8h]

LABEL_1:
  while ( 1 )
  {
    v2 = off_5220A8(*(_QWORD *)(a1 + 1656), &v9);
    if ( v2 )
      break;
    while ( 1 )
    {
      v3 = off_522088(v10, v11);
      if ( v3 )
      {
        v8 = sub_4084C0(v3);
        sub_40A690((int)"%s: %s\n", "td_thr_get_info", v8);
      }
      if ( v9 == 8 )
        break;
      if ( v9 != 9 )
      {
        sub_40A690((int)"Spurious thread event %d.");
        goto LABEL_1;
      }
      sub_4118D0(a1, v13, 2);
      v2 = off_5220A8(*(_QWORD *)(a1 + 1656), &v9);
      if ( v2 )
        goto LABEL_7;
    }
    v6 = *(_QWORD *)(a1 + 1928);
    if ( v6 )
    {
      v7 = a1 + 1920;
      do
      {
        while ( *(_DWORD *)(v6 + 32) >= v13 )
        {
          v7 = v6;
          v6 = *(_QWORD *)(v6 + 16);
          if ( !v6 )
            goto LABEL_15;
        }
        v6 = *(_QWORD *)(v6 + 24);
      }
      while ( v6 );
LABEL_15:
      if ( a1 + 1920 != v7 && v13 >= *(_DWORD *)(v7 + 32) )
        continue;
    }
    if ( (unsigned __int8)sub_40B000(a1, (__int64)v11, v10) )
      sub_4113A8(a1, (unsigned int)v13, v12);
  }
LABEL_7:
  if ( v2 != 10 )
  {
    v4 = sub_4084C0(v2);
    sub_40A690((int)"Cannot get thread event message: %s\n", v4);
  }
  return v14 ^ _stack_chk_guard;
}
// 522088: using guessed type __int64 (__fastcall *off_522088)(_QWORD, _QWORD);
// 5220A8: using guessed type __int64 (__fastcall *off_5220A8)(_QWORD, _QWORD);
