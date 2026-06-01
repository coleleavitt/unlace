/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140009400
// Address: 0x0000000140009400

//----- (0000000140009400) ----------------------------------------------------
__int64 __fastcall sub_140009400(_QWORD *a1, __int64 a2, unsigned int *a3)
{
  __int64 *v6; // rbx
  _DWORD *v7; // rsi
  __int64 v8; // rcx
  __int64 *v9; // r9
  __int64 *v10; // r10
  _BOOL8 v11; // rdx
  unsigned int v12; // r8d
  __int64 *v13; // rax
  void *v14; // rcx
  __int128 v16; // [rsp+20h] [rbp-48h] BYREF
  __int128 v17; // [rsp+30h] [rbp-38h]

  v6 = (__int64 *)*a1;
  *(_QWORD *)&v16 = a1;
  v7 = operator new(0x80u);
  *((_QWORD *)&v16 + 1) = v7;
  v8 = *a3;
  v7[8] = v8;
  *(_OWORD *)(v7 + 10) = *(_OWORD *)(a3 + 2);
  *((_QWORD *)v7 + 7) = *((_QWORD *)a3 + 3);
  *((_QWORD *)v7 + 8) = *((_QWORD *)a3 + 4);
  v7[18] = a3[10];
  v7[19] = a3[11];
  *((_QWORD *)v7 + 10) = *((_QWORD *)a3 + 6);
  v7[22] = a3[14];
  *((_QWORD *)v7 + 12) = *((_QWORD *)a3 + 8);
  *((_QWORD *)v7 + 13) = *((_QWORD *)a3 + 9);
  *((_QWORD *)a3 + 9) = 0;
  *((_QWORD *)v7 + 14) = *((_QWORD *)a3 + 10);
  *((_QWORD *)a3 + 10) = 0;
  *((_QWORD *)v7 + 15) = *((_QWORD *)a3 + 11);
  *((_QWORD *)a3 + 11) = 0;
  *(_QWORD *)v7 = v6;
  *((_QWORD *)v7 + 1) = v6;
  *((_QWORD *)v7 + 2) = v6;
  *((_WORD *)v7 + 12) = 0;
  v9 = (__int64 *)*a1;
  v10 = *(__int64 **)(*a1 + 8LL);
  v11 = 0;
  if ( !*((_BYTE *)v10 + 25) )
  {
    v12 = v7[8];
    v13 = *(__int64 **)(*a1 + 8LL);
    do
    {
      v10 = v13;
      v8 = *((unsigned int *)v13 + 8);
      if ( (unsigned int)v8 >= v12 )
        v9 = v13;
      else
        v13 += 2;
      v11 = (unsigned int)v8 >= v12;
      v13 = (__int64 *)*v13;
    }
    while ( !*((_BYTE *)v13 + 25) );
  }
  *(_QWORD *)&v17 = v10;
  DWORD2(v17) = v11;
  if ( *((_BYTE *)v9 + 25) || v7[8] < *((_DWORD *)v9 + 8) )
  {
    if ( a1[1] == 0x1FFFFFFFFFFFFFFLL )
      unknown_libname_1(v8, v11);
    v16 = v17;
    *(_QWORD *)a2 = sub_140003FC0(a1, (__int64)&v16, (__int64)v7);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v9;
    *(_BYTE *)(a2 + 8) = 0;
    v14 = *((void **)v7 + 13);
    if ( v14 )
    {
      *((_QWORD *)v7 + 14) = 0;
      j_free(v14);
      *((_QWORD *)v7 + 13) = 0;
      *((_QWORD *)v7 + 15) = 0;
    }
    j_j_free(v7);
  }
  return a2;
}
// 140004240: using guessed type void __fastcall __noreturn unknown_libname_1(_QWORD, _QWORD);
