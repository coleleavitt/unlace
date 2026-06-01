/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_DF400
// Address: 0x00000000000DF400

//----- (00000000000DF400) ----------------------------------------------------
unsigned __int64 __fastcall sub_DF400(char ***a1)
{
  char **v1; // rbx
  char **v2; // r15
  char *v3; // rdx
  unsigned __int64 v4; // rsi
  size_t v5; // rcx
  char *v6; // rax
  size_t v7; // rsi
  char *v8; // rax
  char **v9; // rbx
  char **v10; // rbx
  char *v11; // rdx
  unsigned __int64 v12; // rsi
  char *v13; // rcx
  char *v14; // rax
  size_t v15; // rsi
  __int64 (__fastcall **v17)(); // [rsp+0h] [rbp-38h] BYREF
  int v18; // [rsp+8h] [rbp-30h]
  char *v19; // [rsp+10h] [rbp-28h]
  unsigned __int64 v20; // [rsp+18h] [rbp-20h]

  v20 = __readfsqword(0x28u);
  v1 = *a1;
  v2 = a1[1];
  v3 = (*a1)[1];
  v4 = (unsigned __int64)(*a1)[2];
  v5 = (size_t)(v3 + 1);
  if ( (unsigned __int64)(v3 + 1) >= v4 )
  {
    v7 = 2 * v4;
    if ( v7 < v5 )
      v7 = (size_t)(v3 + 1);
    v1[2] = (char *)v7;
    v6 = (char *)realloc(*v1, v7);
    *v1 = v6;
    v3 = v1[1];
    v5 = (size_t)(v3 + 1);
  }
  else
  {
    v6 = *v1;
  }
  v1[1] = (char *)v5;
  v3[(_QWORD)v6] = 40;
  v8 = v2[2];
  v18 = 16843037;
  v17 = off_151EA8;
  v19 = v8;
  v9 = *a1;
  sub_DF510((__int64)&v17, *a1);
  if ( BYTE1(v18) != 1 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(), char **))v17[4])(&v17, v9);
  v10 = *a1;
  v11 = (*a1)[1];
  v12 = (unsigned __int64)(*a1)[2];
  v13 = v11 + 1;
  if ( (unsigned __int64)(v11 + 1) >= v12 )
  {
    v15 = 2 * v12;
    if ( v15 < (unsigned __int64)v13 )
      v15 = (size_t)(v11 + 1);
    v10[2] = (char *)v15;
    v14 = (char *)realloc(*v10, v15);
    *v10 = v14;
    v11 = v10[1];
    v13 = v11 + 1;
  }
  else
  {
    v14 = *v10;
  }
  v10[1] = v13;
  v11[(_QWORD)v14] = 41;
  return __readfsqword(0x28u);
}
// 151EA8: using guessed type __int64 (__fastcall *off_151EA8[7])();
