/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_416B0
// Address: 0x00000000000416B0

//----- (00000000000416B0) ----------------------------------------------------
unsigned __int64 __fastcall sub_416B0(__int64 a1, __int64 a2, _QWORD *a3)
{
  const char *v3; // rdi
  const char *v4; // rdx
  __int64 (__fastcall **v6)(); // [rsp+8h] [rbp-30h] BYREF
  int v7; // [rsp+10h] [rbp-28h]
  __int64 v8; // [rsp+18h] [rbp-20h]
  _QWORD *v9; // [rsp+20h] [rbp-18h]
  __int64 v10; // [rsp+28h] [rbp-10h]
  unsigned __int64 v11; // [rsp+30h] [rbp-8h]

  v11 = __readfsqword(0x28u);
  if ( *a3 == -1 )
  {
    if ( a3[3] )
      v4 = (const char *)a3[2];
    else
      v4 = s1;
    sub_9FDA0(a1, "Can't import symbols from %s: no imagebase\n", v4);
    return __readfsqword(0x28u);
  }
  else
  {
    v7 = 49;
    v6 = off_146DB0;
    v8 = a1;
    v9 = a3;
    v10 = a2;
    if ( a3[3] )
      v3 = (const char *)a3[2];
    else
      v3 = s1;
    sub_5B480(v3, &v6, 0);
    return __readfsqword(0x28u);
  }
}
// 146DB0: using guessed type __int64 (__fastcall *off_146DB0[4])();
