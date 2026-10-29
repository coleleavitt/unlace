/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40CF60
// Address: 0x000000000040CF60

//----- (000000000040CF60) ----------------------------------------------------
__int64 __fastcall sub_40CF60(int a1, char *a2, unsigned __int64 a3)
{
  int v4; // eax
  FILE *v6; // rax
  FILE *v7; // r12
  int v8; // r13d
  char v9[4104]; // [rsp+0h] [rbp-1038h] BYREF
  unsigned __int64 v10; // [rsp+1008h] [rbp-30h]

  v10 = __readfsqword(0x28u);
  sub_485490(v9, 4096, "/proc/%u/exe", a1);
  v4 = readlink(v9, a2, a3 - 1);
  if ( v4 > 0 )
  {
    a2[v4] = 0;
    return 1;
  }
  v6 = sub_47F960(v9, "r");
  v7 = v6;
  if ( v6 )
  {
    v8 = sub_480BA0(v6, a2, a3);
    sub_480D70(v7);
    if ( v8 > 1 && v8 < a3 && *a2 == 47 )
    {
      a2[v8] = 0;
      return 1;
    }
  }
  *a2 = 0;
  return 0;
}
