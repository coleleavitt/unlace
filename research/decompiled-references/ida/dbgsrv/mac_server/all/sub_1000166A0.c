/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000166A0
// Address: 0x00000001000166A0

//----- (00000001000166A0) ----------------------------------------------------
__int64 __fastcall sub_1000166A0(
        __int64 a1,
        __int64 a2,
        off_t a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  unsigned __int64 v7; // r13
  unsigned __int64 v10; // r14
  off_t v11; // r15
  unsigned __int64 v12; // r15
  int v13; // eax
  unsigned __int64 v14; // rcx
  char *v15; // rax
  char *v16; // r12
  int v17; // esi
  int v18; // edx
  int v19; // r8d
  int v20; // r9d
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // r15
  bool v23; // cc
  unsigned __int64 v24; // r14
  size_t v25; // rax
  char v27; // [rsp+0h] [rbp-50h]
  __int64 v29; // [rsp+10h] [rbp-40h] BYREF
  int v30; // [rsp+18h] [rbp-38h]

  if ( !a4 )
  {
    LOBYTE(v7) = 1;
    return (unsigned int)v7;
  }
  v10 = a4;
  v11 = a3;
  if ( a3 != -1 )
  {
    qlseek(a2, a3, 0);
    if ( a5 != -1 )
      goto LABEL_5;
    goto LABEL_4;
  }
  v11 = qlseek(a2, 0, 1);
  if ( a5 == -1 )
LABEL_4:
    a5 = qlsize(a2);
LABEL_5:
  v7 = a5 - v11;
  if ( ((v7 | v11) & 0x8000000000000000LL) != 0LL )
  {
    v12 = 0;
  }
  else
  {
    if ( v10 <= 0x1555555555555555LL && v7 >= 12 * v10 )
      goto LABEL_12;
    v12 = v7 / 0xC;
  }
  v13 = sub_10001D6D0(
          1,
          (int)"AUTOHIDE SESSION\nHIDECANCEL\n%s %llu is incorrect, maximum possible value is %llu%s",
          a6,
          v10,
          v12,
          ". Do you want to continue with the new value?");
  v10 = v12;
  if ( v13 != 1 )
    sub_10001D7A0(0);
LABEL_12:
  v14 = *(_QWORD *)(a1 + 8);
  if ( v14 >= v10 )
  {
    if ( v14 != v10 )
    {
      v30 = 0;
      v29 = 0;
      sub_10001E9B0(a1, v10, (unsigned __int64)&v29);
    }
  }
  else
  {
    v15 = *(char **)a1;
    if ( *(_QWORD *)(a1 + 16) < v10 )
    {
      v15 = (char *)qvector_reserve(a1, *(void **)a1, v10, 0xCu);
      *(_QWORD *)a1 = v15;
      v14 = *(_QWORD *)(a1 + 8);
    }
    __bzero(&v15[12 * v14], 12 * (v10 - v14));
    *(_QWORD *)(a1 + 8) = v10;
  }
  if ( a7 )
  {
    v16 = *(char **)a1;
    v17 = a6;
    sub_10001DA30((int)"Loading %s", a6);
    v21 = 0;
    while ( 1 )
    {
      LOBYTE(v7) = 1;
      v22 = v10;
      v23 = v10 <= v21;
      v24 = v10 - v21;
      if ( v23 || (callui(27, v17, v18, (unsigned int)&callui, v19, v20, v27) & 1) != 0 )
        break;
      if ( v24 >= 0xAAA )
        v24 = 2730;
      v7 = 12 * v24;
      v17 = (int)v16;
      v25 = qlread(a2, v16, 12 * v24);
      v21 += v24;
      v16 += 12 * v24;
      v10 = v22;
      if ( v25 != v7 )
      {
        LODWORD(v7) = 0;
        break;
      }
    }
    callui(24, 10, 0, (unsigned int)&callui, v19, v20, v27);
  }
  else
  {
    LOBYTE(v7) = qlread(a2, *(void **)a1, 12 * v10) == 12 * v10;
  }
  return (unsigned int)v7;
}
// 100016829: variable 'v18' is possibly undefined
// 100016829: variable 'v19' is possibly undefined
// 100016829: variable 'v20' is possibly undefined
// 100016829: variable 'v27' is possibly undefined
// 1000168B8: variable 'v7' is possibly undefined
// 100082B16: using guessed type __int64 __fastcall __bzero(_QWORD, _QWORD);
// 1000ACFA8: using guessed type __int64 (__fastcall *callui)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, char);
