/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14005B880
// Address: 0x000000014005B880

//----- (000000014005B880) ----------------------------------------------------
__int64 __fastcall sub_14005B880(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 *v6; // rsi
  __int64 *v7; // rbp
  int v8; // eax
  _QWORD *v9; // r15
  unsigned __int16 *v10; // rdi
  __int64 *v11; // rbx
  unsigned __int16 *v12; // rdx
  unsigned __int16 *v13; // rcx
  unsigned int v14; // eax
  unsigned __int16 *v15; // rdx
  __int64 *v16; // rbx
  _QWORD *v17; // rax
  __int128 v19; // [rsp+20h] [rbp-58h] BYREF
  __int128 v20; // [rsp+30h] [rbp-48h]

  v6 = (__int64 *)*a1;
  v7 = *(__int64 **)(*a1 + 8LL);
  v8 = 0;
  v9 = (_QWORD *)(a3 + 8);
  v10 = (unsigned __int16 *)&dword_140092834;
  if ( !*((_BYTE *)v7 + 25) )
  {
    v11 = *(__int64 **)(*a1 + 8LL);
    do
    {
      v7 = v11;
      v12 = (unsigned __int16 *)&dword_140092834;
      if ( *v9 )
        v12 = *(unsigned __int16 **)a3;
      v13 = (unsigned __int16 *)&dword_140092834;
      if ( v11[5] )
        v13 = (unsigned __int16 *)v11[4];
      v14 = (unsigned int)sub_14007B4C8(v13, v12) >> 31;
      if ( (_BYTE)v14 )
        v11 += 2;
      else
        v6 = v11;
      v8 = (unsigned __int8)v14 ^ 1;
      v11 = (__int64 *)*v11;
    }
    while ( !*((_BYTE *)v11 + 25) );
  }
  *(_QWORD *)&v20 = v7;
  DWORD2(v20) = v8;
  if ( !*((_BYTE *)v6 + 25) )
  {
    v15 = (unsigned __int16 *)&dword_140092834;
    if ( v6[5] )
      v15 = (unsigned __int16 *)v6[4];
    if ( *v9 )
      v10 = *(unsigned __int16 **)a3;
    if ( (int)sub_14007B4C8(v10, v15) >= 0 )
    {
      *(_QWORD *)a2 = v6;
      *(_BYTE *)(a2 + 8) = 0;
      return a2;
    }
    v9 = (_QWORD *)(a3 + 8);
  }
  if ( a1[1] == 0x333333333333333LL )
    unknown_libname_1(a1, a2);
  v16 = (__int64 *)*a1;
  v19 = (unsigned __int64)a1;
  v17 = operator new(0x50u);
  v17[4] = *(_QWORD *)a3;
  *(_QWORD *)a3 = 0;
  v17[5] = *v9;
  *v9 = 0;
  v17[6] = *(_QWORD *)(a3 + 16);
  *(_QWORD *)(a3 + 16) = 0;
  v17[7] = *(_QWORD *)(a3 + 24);
  *(_QWORD *)(a3 + 24) = 0;
  v17[8] = *(_QWORD *)(a3 + 32);
  *(_QWORD *)(a3 + 32) = 0;
  v17[9] = *(_QWORD *)(a3 + 40);
  *(_QWORD *)(a3 + 40) = 0;
  *v17 = v16;
  v17[1] = v16;
  v17[2] = v16;
  *((_WORD *)v17 + 12) = 0;
  v19 = v20;
  *(_QWORD *)a2 = sub_140003FC0(a1, (__int64)&v19, (__int64)v17);
  *(_BYTE *)(a2 + 8) = 1;
  return a2;
}
// 14005BA18: variable 'a1' is possibly undefined
// 14005BA18: variable 'a2' is possibly undefined
// 140004240: using guessed type void __fastcall __noreturn unknown_libname_1(_QWORD, _QWORD);
// 140092834: using guessed type int dword_140092834;
