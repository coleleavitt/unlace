__int64 __fastcall sub_4B92B0(__int64 *a1, __int64 a2, __int64 a3, unsigned int *a4, __int64 a5, double a6)
{
  __int64 v8; // r8
  int v9; // r9d
  unsigned int v10; // r12d
  __int64 v12[4]; // [rsp+0h] [rbp-58h] BYREF
  char v13; // [rsp+24h] [rbp-34h]
  unsigned __int64 v14; // [rsp+28h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  if ( a2 && *(_QWORD *)(a2 + 40) && a4 )
  {
    sub_4B7DA0(v12, *a1, a2, a5, 0, a6);
    v10 = v13 & 1;
    if ( (v13 & 1) != 0 || *a4 == -1 )
      v10 = sub_4B8F10(v12, a2, a3, a4, v8, v9);
    qfree((void *)v12[1]);
  }
  else
  {
    return 0;
  }
  return v10;
}
