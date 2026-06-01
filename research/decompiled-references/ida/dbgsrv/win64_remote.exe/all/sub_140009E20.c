/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140009E20
// Address: 0x0000000140009E20

//----- (0000000140009E20) ----------------------------------------------------
__int64 __fastcall sub_140009E20(_QWORD *a1, __int64 a2, __int64 a3)
{
  _QWORD *v5; // r14
  __int64 v6; // rbp
  __int64 v7; // rbx
  BOOL v8; // r9d
  __int64 v9; // r11
  __int64 v10; // rax
  char v11; // al
  char *v12; // rax
  __int128 v14; // [rsp+20h] [rbp-48h] BYREF
  __int128 v15; // [rsp+30h] [rbp-38h]

  v5 = a1;
  v6 = *a1;
  v7 = *(_QWORD *)(*a1 + 8LL);
  v8 = 0;
  v9 = *a1;
  if ( !*(_BYTE *)(v7 + 25) )
  {
    v10 = *(_QWORD *)(*a1 + 8LL);
    do
    {
      v7 = v10;
      a1 = *(_QWORD **)(v10 + 32);
      if ( (unsigned __int64)a1 >= *(_QWORD *)a3 )
        v9 = v10;
      else
        v10 += 16;
      v8 = (unsigned __int64)a1 >= *(_QWORD *)a3;
      v10 = *(_QWORD *)v10;
    }
    while ( !*(_BYTE *)(v10 + 25) );
  }
  *(_QWORD *)&v15 = v7;
  DWORD2(v15) = v8;
  if ( *(_BYTE *)(v9 + 25) || *(_QWORD *)a3 < *(_QWORD *)(v9 + 32) )
  {
    if ( v5[1] == 0x1FFFFFFFFFFFFFFLL )
      unknown_libname_1(a1, a2);
    v14 = (unsigned __int64)v5;
    v12 = (char *)operator new(0x80u);
    *((_QWORD *)v12 + 4) = *(_QWORD *)a3;
    *((_QWORD *)v12 + 5) = *(_QWORD *)(a3 + 8);
    *((_QWORD *)v12 + 6) = *(_QWORD *)(a3 + 16);
    *((_QWORD *)v12 + 7) = *(_QWORD *)(a3 + 24);
    *((_QWORD *)v12 + 8) = *(_QWORD *)(a3 + 32);
    *(_QWORD *)(a3 + 32) = 0;
    *((_QWORD *)v12 + 9) = *(_QWORD *)(a3 + 40);
    *(_QWORD *)(a3 + 40) = 0;
    *((_QWORD *)v12 + 10) = *(_QWORD *)(a3 + 48);
    *(_QWORD *)(a3 + 48) = 0;
    *(_OWORD *)(v12 + 88) = *(_OWORD *)(a3 + 56);
    *(_OWORD *)(v12 + 104) = *(_OWORD *)(a3 + 72);
    *((_QWORD *)v12 + 15) = *(_QWORD *)(a3 + 88);
    *(_QWORD *)v12 = v6;
    *((_QWORD *)v12 + 1) = v6;
    *((_QWORD *)v12 + 2) = v6;
    *((_WORD *)v12 + 12) = 0;
    v14 = v15;
    v9 = sub_140003FC0(v5, (__int64)&v14, (__int64)v12);
    v11 = 1;
  }
  else
  {
    v11 = 0;
  }
  *(_QWORD *)a2 = v9;
  *(_BYTE *)(a2 + 8) = v11;
  return a2;
}
// 140004240: using guessed type void __fastcall __noreturn unknown_libname_1(_QWORD, _QWORD);
