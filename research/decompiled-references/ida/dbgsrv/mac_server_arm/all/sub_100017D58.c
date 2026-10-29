/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100017D58
// Address: 0x0000000100017D58

//----- (0000000100017D58) ----------------------------------------------------
__int64 __fastcall sub_100017D58(__int64 a1, __int64 a2, _BYTE *a3, __int64 a4, int a5)
{
  int v12; // w23
  __int64 v13; // x22
  void (*v14)(void); // x8
  unsigned int v15; // [xsp+10h] [xbp-70h]
  _DWORD v16[2]; // [xsp+20h] [xbp-60h] BYREF
  _DWORD v17[4]; // [xsp+28h] [xbp-58h] BYREF
  unsigned int v18; // [xsp+38h] [xbp-48h]

  if ( (*(__int64 (__fastcall **)(_QWORD, __int64, _DWORD *, __int64, _QWORD))(**(_QWORD **)(a1 + 8) + 288LL))(
         *(_QWORD *)(a1 + 8),
         a2,
         v17,
         32,
         0) != 32 )
    return 0;
  if ( v17[0] != a5 || v17[3] != 7 )
    return 0;
  if ( a3 )
  {
    *a3 = 0;
    if ( v18 )
    {
      v12 = 0;
      v13 = a2 + 32;
      while ( 1 )
      {
        v16[0] = 0;
        (*(void (__fastcall **)(_QWORD, __int64, _DWORD *, __int64, _QWORD))(**(_QWORD **)(a1 + 8) + 288LL))(
          *(_QWORD *)(a1 + 8),
          v13,
          v16,
          8,
          0);
        if ( v16[0] == 15 )
          break;
        if ( v16[0] == 13 )
        {
          v14 = *(void (**)(void))(**(_QWORD **)(a1 + 8) + 288LL);
          goto LABEL_16;
        }
        v13 += v16[1];
        if ( ++v12 >= v18 )
          return 1;
      }
      v14 = *(void (**)(void))(**(_QWORD **)(a1 + 8) + 288LL);
LABEL_16:
      v14();
      (*(void (__fastcall **)(_QWORD, __int64, _BYTE *, __int64, _QWORD))(**(_QWORD **)(a1 + 8) + 288LL))(
        *(_QWORD *)(a1 + 8),
        v13 + v15,
        a3,
        a4,
        0);
    }
  }
  return 1;
}
// 100017E7C: variable 'v15' is possibly undefined
