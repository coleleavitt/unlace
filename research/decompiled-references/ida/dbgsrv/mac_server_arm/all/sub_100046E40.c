/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100046E40
// Address: 0x0000000100046E40

//----- (0000000100046E40) ----------------------------------------------------
__int64 __fastcall sub_100046E40(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, int a5, __int64 a6)
{
  _QWORD *v7; // x21
  __int64 v8; // x8
  int v9; // w22
  __int64 *v10; // x24
  __int64 *v11; // x25
  _DWORD *v12; // x8
  _QWORD *v13; // x9
  __int64 v14; // x8
  __int64 v15; // x8
  _QWORD *v16; // x1
  __int64 v17; // x8
  _QWORD *v18; // x1

  *(_QWORD *)a1 = off_10009A9A0;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = a3;
  *(_QWORD *)(a1 + 24) = a4;
  *(_DWORD *)(a1 + 32) = a5;
  *(_QWORD *)(a1 + 40) = a6;
  *(_QWORD *)(a1 + 4144) = -1;
  *(_QWORD *)(a1 + 4152) = a1 + 4152;
  *(_QWORD *)(a1 + 4160) = a1 + 4152;
  *(_QWORD *)(a1 + 4168) = 0;
  *(_QWORD *)(a1 + 4176) = -1;
  v7 = (_QWORD *)(a1 + 4184);
  *(_OWORD *)(a1 + 4184) = 0u;
  *(_OWORD *)(a1 + 4200) = 0u;
  *(_OWORD *)(a1 + 4216) = 0u;
  if ( a4[1] )
  {
    v8 = 0;
    v9 = 0;
    v10 = (__int64 *)(a1 + 4192);
    v11 = (__int64 *)(a1 + 4216);
    do
    {
      v14 = *a4 + 80 * v8;
      if ( *(_QWORD *)(v14 + 8) )
      {
        if ( (*(_BYTE *)(a1 + 32) & 1) != 0 && !*(_QWORD *)(v14 + 32) )
        {
          v17 = *(_QWORD *)(a1 + 4192);
          v18 = *(_QWORD **)(a1 + 4184);
          if ( *(_QWORD *)(a1 + 4200) < (unsigned __int64)(v17 + 1) )
          {
            v18 = qvector_reserve(v7, v18, v17 + 1, 4u);
            *v7 = v18;
            v17 = *v10;
          }
          v12 = (_DWORD *)v18 + v17;
          v13 = (_QWORD *)(a1 + 4192);
        }
        else
        {
          v15 = *(_QWORD *)(a1 + 4216);
          v16 = *(_QWORD **)(a1 + 4208);
          if ( *(_QWORD *)(a1 + 4224) < (unsigned __int64)(v15 + 1) )
          {
            v16 = qvector_reserve((_QWORD *)(a1 + 4208), v16, v15 + 1, 4u);
            *(_QWORD *)(a1 + 4208) = v16;
            v15 = *v11;
          }
          v12 = (_DWORD *)v16 + v15;
          v13 = (_QWORD *)(a1 + 4216);
        }
        *v12 = v9;
        ++*v13;
      }
      v8 = ++v9;
      a4 = *(_QWORD **)(a1 + 24);
    }
    while ( a4[1] > (unsigned __int64)v9 );
  }
  bzero((void *)(a1 + 48), 0x1000u);
  *(_DWORD *)(a1 + 4232) = (unsigned __int64)qtime64() >> 32;
  return a1;
}
// 10009A9A0: using guessed type void (__fastcall __noreturn *off_10009A9A0[2])();
