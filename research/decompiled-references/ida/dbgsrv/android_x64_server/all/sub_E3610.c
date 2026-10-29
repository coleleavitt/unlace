/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E3610
// Address: 0x00000000000E3610

//----- (00000000000E3610) ----------------------------------------------------
unsigned __int64 __fastcall sub_E3610(__int64 a1, void **a2)
{
  char *v3; // rcx
  unsigned __int64 v4; // rsi
  char *v5; // rax
  size_t v6; // rsi
  __int64 v7; // rax
  char *v8; // rcx
  unsigned __int64 v9; // rsi
  void *v10; // rax
  size_t v11; // rsi
  __int64 (__fastcall **v13)(); // [rsp+8h] [rbp-30h] BYREF
  int v14; // [rsp+10h] [rbp-28h]
  __int64 v15; // [rsp+18h] [rbp-20h]
  unsigned __int64 v16; // [rsp+20h] [rbp-18h]

  v16 = __readfsqword(0x28u);
  v3 = (char *)a2[1];
  v4 = (unsigned __int64)a2[2];
  if ( (unsigned __int64)(v3 + 10) >= v4 )
  {
    v6 = 2 * v4;
    if ( v6 < (unsigned __int64)(v3 + 10) )
      v6 = (size_t)(v3 + 10);
    a2[2] = (void *)v6;
    v5 = (char *)realloc(*a2, v6);
    *a2 = v5;
    v3 = (char *)a2[1];
  }
  else
  {
    v5 = (char *)*a2;
  }
  qmemcpy(&v3[(_QWORD)v5], "sizeof...(", 10);
  a2[1] = (char *)a2[1] + 10;
  v7 = *(_QWORD *)(a1 + 16);
  v14 = 16843037;
  v13 = off_151EA8;
  v15 = v7;
  sub_DF510((__int64)&v13, (char **)a2);
  v8 = (char *)a2[1];
  v9 = (unsigned __int64)a2[2];
  if ( (unsigned __int64)(v8 + 1) >= v9 )
  {
    v11 = 2 * v9;
    if ( v11 < (unsigned __int64)(v8 + 1) )
      v11 = (size_t)(v8 + 1);
    a2[2] = (void *)v11;
    v10 = realloc(*a2, v11);
    *a2 = v10;
    v8 = (char *)a2[1];
  }
  else
  {
    v10 = *a2;
  }
  v8[(_QWORD)v10] = 41;
  a2[1] = (char *)a2[1] + 1;
  return __readfsqword(0x28u);
}
// 151EA8: using guessed type __int64 (__fastcall *off_151EA8[7])();
