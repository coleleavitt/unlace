/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7C780
// Address: 0x000000000007C780

//----- (000000000007C780) ----------------------------------------------------
__int64 __fastcall sub_7C780(__int64 a1, char **a2, unsigned __int64 a3, __int64 a4, int a5, int a6, int a7, int a8)
{
  unsigned __int64 StatusReg; // x27
  unsigned __int64 v9; // x28
  __int64 v10; // x20
  unsigned __int64 v12; // x29
  char **v13; // x26
  const char *v14; // x23
  size_t v15; // x0
  size_t v16; // x22
  char *v17; // x24
  size_t v18; // x25
  __int64 v21; // [xsp+10h] [xbp-80h] BYREF
  size_t v22; // [xsp+18h] [xbp-78h]
  void *ptr; // [xsp+20h] [xbp-70h]
  __int64 v24; // [xsp+28h] [xbp-68h]

  StatusReg = _ReadStatusReg(TPIDR_EL0);
  if ( a2 )
    v9 = a3;
  else
    v9 = 132;
  v24 = *(_QWORD *)(StatusReg + 40);
  *(_OWORD *)(a1 + 88) = 0u;
  v10 = a1 + 88;
  *(_QWORD *)(a1 + 184) = 0;
  *(_QWORD *)(a1 + 192) = a4;
  *(_OWORD *)(a1 + 104) = 0u;
  *(_OWORD *)(a1 + 48) = 0u;
  *(_OWORD *)(a1 + 64) = 0u;
  *(_OWORD *)(a1 + 16) = 0u;
  *(_OWORD *)(a1 + 32) = 0u;
  *(_OWORD *)a1 = 0u;
  *(_QWORD *)(a1 + 77) = 0;
  *(_DWORD *)(a1 + 120) = 1065353216;
  *(_BYTE *)(a1 + 128) = 0;
  *(_OWORD *)(a1 + 168) = 0u;
  *(_OWORD *)(a1 + 152) = 0u;
  *(_OWORD *)(a1 + 136) = 0u;
  *(_QWORD *)(a1 + 200) = sub_7CAE4;
  *(_QWORD *)(a1 + 208) = a1;
  *(_OWORD *)(a1 + 264) = 0u;
  *(_DWORD *)(a1 + 288) = -1;
  *(_QWORD *)(a1 + 280) = 0;
  *(_OWORD *)(a1 + 248) = 0u;
  *(_OWORD *)(a1 + 232) = 0u;
  *(_OWORD *)(a1 + 216) = 0u;
  *(_BYTE *)(a1 + 320) = 0;
  *(_QWORD *)(a1 + 312) = 0;
  *(_OWORD *)(a1 + 296) = 0u;
  *(_OWORD *)(a1 + 324) = 0u;
  *(_DWORD *)(a1 + 340) = 1;
  *(_QWORD *)(a1 + 600) = 0;
  *(_BYTE *)(a1 + 608) = 0;
  *(_BYTE *)(a1 + 612) = 0;
  *(_DWORD *)(a1 + 616) = 0;
  *(_BYTE *)(a1 + 620) = 0;
  *(_QWORD *)(a1 + 656) = 0;
  *(_OWORD *)(a1 + 624) = 0u;
  *(_OWORD *)(a1 + 640) = 0u;
  *(_DWORD *)(a1 + 664) = 1065353216;
  *(_BYTE *)(a1 + 672) = 0;
  *(_DWORD *)(a1 + 676) = 5;
  if ( v9 )
  {
    v12 = 0;
    if ( a2 )
      v13 = a2;
    else
      v13 = off_15D7A8;
    do
    {
      v14 = v13[v12];
      v21 = 0;
      v22 = 0;
      ptr = nullptr;
      v15 = strlen(v14);
      if ( v15 >= 0xFFFFFFFFFFFFFFF0LL )
        sub_86648();
      v16 = v15;
      if ( v15 >= 0x17 )
      {
        v18 = (v15 + 16) & 0xFFFFFFFFFFFFFFF0LL;
        v17 = (char *)operator new(v18);
        v22 = v16;
        ptr = v17;
        v21 = v18 | 1;
      }
      else
      {
        v17 = (char *)&v21 + 1;
        LOBYTE(v21) = 2 * v15;
        if ( !v15 )
          goto LABEL_14;
      }
      memcpy(v17, v14, v16);
LABEL_14:
      v17[v16] = 0;
      *(_WORD *)sub_7CBCC(v10, (unsigned __int8 *)&v21) = v12 + 128;
      if ( (v21 & 1) != 0 )
        operator delete(ptr);
      ++v12;
    }
    while ( v12 < v9 );
  }
  return sub_7CEC8(a1, 0, a5, a4, a5, a6, a7, a8);
}
// 7C940: variable 'a4' is possibly undefined
// 7C940: variable 'a5' is possibly undefined
// 7C940: variable 'a6' is possibly undefined
// 7C940: variable 'a7' is possibly undefined
// 7C940: variable 'a8' is possibly undefined
// 15D7A8: using guessed type char *off_15D7A8[17];
