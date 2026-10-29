/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_433960
// Address: 0x0000000000433960

//----- (0000000000433960) ----------------------------------------------------
char __fastcall sub_433960(_QWORD *a1, int a2, int a3)
{
  __int64 v4; // rax
  int v5; // ebx
  int v6; // eax
  unsigned __int64 v8; // rsi
  __int64 v9; // rax
  char v10; // [rsp+7h] [rbp-21h] BYREF
  unsigned __int64 v11; // [rsp+8h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  v10 = 0;
  if ( a2 < 0 )
  {
    v8 = -a2;
    if ( v8 >= qword_4C56E0[0] )
      return 0;
    v9 = qword_4C56E0[1] + 40 * v8;
    v5 = *(_DWORD *)(v9 + 32);
    v6 = sub_43A000(*(const char **)(v9 + 16), &v10);
  }
  else
  {
    if ( a2 == 0x7FFFFFFF || (unsigned __int64)a2 >= a1[1] )
      return 0;
    v4 = *(_QWORD *)(*a1 + 8LL * a2);
    v5 = *(_DWORD *)(v4 + 72);
    v6 = *(_DWORD *)(v4 + 24);
  }
  if ( v5 + a3 >= v6 )
    return v10 | (v6 >= a3);
  return 0;
}
// 4C56E0: using guessed type __int64 qword_4C56E0[3];
