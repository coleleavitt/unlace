/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140053750
// Address: 0x0000000140053750

//----- (0000000140053750) ----------------------------------------------------
__int64 __fastcall sub_140053750(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 *v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 i; // rcx
  __int64 *v11; // rax
  __int128 v13; // [rsp+20h] [rbp-48h] BYREF
  __int128 v14; // [rsp+30h] [rbp-38h]

  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 88) + 8LL))(*(_QWORD *)(a1 + 88));
  v7 = (__int64 *)(*(_QWORD *)(a1 + 88) + 8LL);
  v8 = *v7;
  v9 = *(_QWORD *)(*v7 + 8);
  *(_QWORD *)&v14 = v9;
  DWORD2(v14) = 0;
  for ( i = v8; !*(_BYTE *)(v9 + 25); v9 = *(_QWORD *)v9 )
  {
    *(_QWORD *)&v14 = v9;
    if ( *(_QWORD *)(v9 + 32) >= a2 )
    {
      DWORD2(v14) = 1;
      i = v9;
    }
    else
    {
      DWORD2(v14) = 0;
      v9 += 16;
    }
  }
  if ( *(_BYTE *)(i + 25) || a2 < *(_QWORD *)(i + 32) )
  {
    if ( v7[1] == 0x555555555555555LL )
      unknown_libname_1(i, v6);
    v11 = (__int64 *)operator new(0x30u);
    v11[4] = a2;
    v11[5] = 0;
    *v11 = v8;
    v11[1] = v8;
    v11[2] = v8;
    *((_WORD *)v11 + 12) = 0;
    v13 = v14;
    i = sub_140003FC0(v7, (__int64)&v13, (__int64)v11);
  }
  *(_QWORD *)(i + 40) = a3;
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 88) + 16LL))(*(_QWORD *)(a1 + 88));
}
// 14005385B: variable 'v6' is possibly undefined
// 140004240: using guessed type void __fastcall __noreturn unknown_libname_1(_QWORD, _QWORD);
