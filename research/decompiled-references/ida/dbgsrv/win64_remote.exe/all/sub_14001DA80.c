/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14001DA80
// Address: 0x000000014001DA80

//----- (000000014001DA80) ----------------------------------------------------
__int64 __fastcall sub_14001DA80(__int64 a1, unsigned int a2, unsigned __int64 a3, int a4)
{
  double v4; // xmm2_8
  __int64 *v9; // rsi
  const void *v10; // rbx
  int v12; // r15d
  unsigned __int64 v13; // rcx
  __int64 v14; // r13
  __int64 v15; // r9
  _BOOL8 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rax
  char *v19; // rax
  DWORD Protect; // [rsp+20h] [rbp-C8h] BYREF
  int v21; // [rsp+24h] [rbp-C4h]
  __int64 v22; // [rsp+28h] [rbp-C0h] BYREF
  __int128 v23; // [rsp+30h] [rbp-B8h] BYREF
  __int128 v24; // [rsp+40h] [rbp-A8h]
  struct _MEMORY_BASIC_INFORMATION Buffer; // [rsp+58h] [rbp-90h] BYREF
  __int64 v26; // [rsp+A8h] [rbp-40h]

  sub_140043920((_QWORD *)a1, &v22, a3, a4);
  v9 = (__int64 *)(a1 + 472);
  if ( v22 != *(_QWORD *)(a1 + 472) )
    return 0;
  v10 = (const void *)(a3 & (int)-(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 488LL))(a1));
  if ( !VirtualQueryEx(*(HANDLE *)(a1 + 792), v10, &Buffer, 0x30u) )
  {
    sub_140043190(a1, (struct __crt_locale_pointers *)"VirtualQueryEx");
    return 0;
  }
  if ( (Buffer.State & 0x10000) != 0 )
  {
    sub_140043190(a1, (struct __crt_locale_pointers *)"%a: the page has not been allocated", v4);
    return 0;
  }
  else if ( Buffer.Protect )
  {
    v12 = (a4 + a3 - (_DWORD)v10 + 4095) & 0xFFFFF000;
    v21 = v12;
    Protect = Buffer.Protect;
    if ( !sub_14001E980(&Protect, a2, *(_DWORD *)(a1 + 800), *(_QWORD *)(a1 + 792)) )
      v12 = 0;
    v26 = 0;
    v14 = *v9;
    v15 = *(_QWORD *)(*v9 + 8);
    v16 = 0;
    v17 = *v9;
    if ( !*(_BYTE *)(v15 + 25) )
    {
      v18 = *(_QWORD *)(*v9 + 8);
      do
      {
        v15 = v18;
        v13 = *(_QWORD *)(v18 + 32);
        if ( v13 >= (unsigned __int64)v10 )
          v17 = v18;
        else
          v18 += 16;
        v16 = v13 >= (unsigned __int64)v10;
        v18 = *(_QWORD *)v18;
      }
      while ( !*(_BYTE *)(v18 + 25) );
    }
    *(_QWORD *)&v24 = v15;
    DWORD2(v24) = v16;
    if ( *(_BYTE *)(v17 + 25) || (unsigned __int64)v10 < *(_QWORD *)(v17 + 32) )
    {
      if ( *(_QWORD *)(a1 + 480) == 0x333333333333333LL )
        unknown_libname_1(v13, v17);
      v23 = (unsigned __int64)(a1 + 472);
      v19 = (char *)operator new(0x50u);
      *((_QWORD *)v19 + 4) = v10;
      *(_OWORD *)(v19 + 40) = 0;
      *(_OWORD *)(v19 + 56) = 0;
      *((_QWORD *)v19 + 9) = v26;
      *(_QWORD *)v19 = v14;
      *((_QWORD *)v19 + 1) = v14;
      *((_QWORD *)v19 + 2) = v14;
      *((_WORD *)v19 + 12) = 0;
      v23 = v24;
      v17 = sub_140003FC0((_QWORD *)(a1 + 472), (__int64)&v23, (__int64)v19);
    }
    v22 = v17;
    *(_QWORD *)(v17 + 40) = a3;
    *(_DWORD *)(v17 + 56) = a4;
    *(_QWORD *)(v17 + 48) = v10;
    *(_DWORD *)(v17 + 60) = v21;
    *(_DWORD *)(v17 + 64) = v12;
    *(_DWORD *)(v17 + 68) = 0;
    *(_DWORD *)(v17 + 72) = Protect;
    *(_DWORD *)(v17 + 76) = a2;
    if ( v12 )
    {
      LOBYTE(v16) = 1;
      return (*(unsigned __int8 (__fastcall **)(__int64, __int64, _BOOL8))(*(_QWORD *)a1 + 336LL))(a1, v22, v16) != 0
           ? 2
           : 0;
    }
    else
    {
      *(_DWORD *)(v17 + 68) = Buffer.Protect;
      return 2;
    }
  }
  else
  {
    sub_140043190(a1, (struct __crt_locale_pointers *)"%a: the page cannot be accessed", v4);
    return 0;
  }
}
// 14001DB1F: variable 'v4' is possibly undefined
// 14001DCB9: variable 'v16' is possibly undefined
// 14001DCE1: variable 'v13' is possibly undefined
// 140004240: using guessed type void __fastcall __noreturn unknown_libname_1(_QWORD, _QWORD);
