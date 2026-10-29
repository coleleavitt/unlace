/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000194C8
// Address: 0x00000001000194C8

//----- (00000001000194C8) ----------------------------------------------------
__int64 __fastcall sub_1000194C8(__int64 a1, __int64 a2, _BYTE *a3, __int64 a4, int a5)
{
  int v11; // w23
  __int64 v12; // x22
  void (*v13)(void); // x8
  _DWORD v14[2]; // [xsp+20h] [xbp-60h] BYREF
  _DWORD v15[4]; // [xsp+28h] [xbp-58h] BYREF
  unsigned int v16; // [xsp+38h] [xbp-48h]

  if ( (*(__int64 (__fastcall **)(_QWORD, __int64, _DWORD *, __int64, _QWORD))(**(_QWORD **)(a1 + 8) + 288LL))(
         *(_QWORD *)(a1 + 8),
         a2,
         v15,
         32,
         0) != 32 )
    return 0;
  if ( v15[0] != a5 || v15[3] != 7 )
    return 0;
  if ( a3 )
  {
    *a3 = 0;
    if ( v16 )
    {
      v11 = 0;
      v12 = a2 + 32;
      while ( 1 )
      {
        v14[0] = 0;
        (*(void (__fastcall **)(_QWORD, __int64, _DWORD *, __int64, _QWORD))(**(_QWORD **)(a1 + 8) + 288LL))(
          *(_QWORD *)(a1 + 8),
          v12,
          v14,
          8,
          0);
        if ( v14[0] == 15 )
          break;
        if ( v14[0] == 13 )
        {
          v13 = *(void (**)(void))(**(_QWORD **)(a1 + 8) + 288LL);
          goto LABEL_16;
        }
        v12 += v14[1];
        if ( ++v11 >= v16 )
          return 1;
      }
      v13 = *(void (**)(void))(**(_QWORD **)(a1 + 8) + 288LL);
LABEL_16:
      v13();
      (*(void (**)(void))(**(_QWORD **)(a1 + 8) + 288LL))();
    }
  }
  return 1;
}
