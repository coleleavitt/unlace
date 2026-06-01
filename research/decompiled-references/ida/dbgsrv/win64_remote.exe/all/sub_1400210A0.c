/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400210A0
// Address: 0x00000001400210A0

//----- (00000001400210A0) ----------------------------------------------------
__int64 __fastcall sub_1400210A0(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  _BYTE *v6; // rbx
  struct _RTL_CRITICAL_SECTION *v7; // rbx
  __int64 v8; // rax
  struct __crt_locale_pointers *v9; // rdx
  signed __int64 v10; // r8
  va_list v11; // r9
  __int64 v12; // rax

  *(_DWORD *)a1 = 289621065;
  *(_QWORD *)(a1 + 8) = sub_14002DA30();
  *(_QWORD *)(a1 + 16) = sub_140020800();
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 136) = a2;
  *(_WORD *)(a1 + 144) = a3;
  *(_QWORD *)(a1 + 104) = 0;
  v6 = (_BYTE *)(a1 + 144);
  if ( !a3 )
  {
    v7 = (struct _RTL_CRITICAL_SECTION *)qword_1400CAFD8;
    sub_14005D6B0((struct _RTL_CRITICAL_SECTION *)qword_1400CAFD8);
    v8 = *(_QWORD *)(a1 + 8);
    if ( ++*(_DWORD *)(v8 + 120) == 1 && qword_1400C6070 )
      qword_1400C6070();
    *(_BYTE *)(a1 + 145) = 1;
    sub_14005D6D0(v7);
    v6 = (_BYTE *)(a1 + 144);
  }
  if ( !sub_14005C830() )
    *(_BYTE *)(a1 + 144) = 1;
  if ( *(_BYTE *)(a1 + 144) )
    v12 = -1;
  else
    v12 = unknown_libname_44(0);
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL) = v12;
  if ( !*v6 )
    ((void (__fastcall *)(int, struct __crt_locale_pointers *, signed __int64, va_list))off_1400C6AE0)(25, v9, v10, v11);
  return a1;
}
// 1400211AB: variable 'v9' is possibly undefined
// 1400211AB: variable 'v10' is possibly undefined
// 1400211AB: variable 'v11' is possibly undefined
// 14007117C: using guessed type __int64 __fastcall unknown_libname_44(_QWORD);
// 1400C6070: using guessed type __int64 (*qword_1400C6070)(void);
// 1400C6AE0: using guessed type __int64 (__fastcall *off_1400C6AE0)(int a1, struct __crt_locale_pointers *a2, signed __int64 a3, va_list a4, int a5);
