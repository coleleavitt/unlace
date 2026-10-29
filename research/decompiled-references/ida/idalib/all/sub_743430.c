__int64 __fastcall sub_743430(
        unsigned __int64 a1,
        __int16 *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6)
{
  unsigned int v8; // r14d
  unsigned int v9; // r11d
  __int64 v10; // r15
  __int64 v11; // rax
  unsigned int v12; // eax
  __int64 result; // rax
  __int64 v14; // rax
  __int64 v17; // [rsp+10h] [rbp-48h]
  __int64 v18; // [rsp+18h] [rbp-40h]

  v8 = *(__int16 *)(*(_QWORD *)a2 + 4LL);
  v9 = v8 - 1;
  if ( **(_DWORD **)a2 )
  {
    v10 = *(_QWORD *)(a1 + 16);
    v17 = *(_QWORD *)(v10 + 8);
    v11 = sub_73AFA0(a1, *(unsigned int *)(*(_QWORD *)a2 + 6LL * (int)v9 + 6), 1u);
    if ( !v11 || *(__int16 *)(v11 + 8) < 0 )
      sub_743130();
    v18 = v11;
    sub_743430(a1, v11, a3, a2, a5, v8);
    if ( unk_2CCC5C9 )
      sub_740180((unsigned int *)a1, (__int64)a2, v18, v8, 0);
    *(_QWORD *)(v10 + 8) = v17;
    v12 = a2[4];
    if ( a2[4] < 0 )
    {
      result = sub_744680(a1, a2, a4, a6);
      unk_2CCC5C9 = 0;
      return result;
    }
  }
  else
  {
    v14 = sub_745C10(a1, a2, v9);
    sub_745D70(a1, a3, a5, v14, 0);
    sub_746320(a1, a2, v8 - 1);
    v12 = a2[4];
  }
  unk_2CCC5C9 = *(_DWORD *)a1 >> 1 < v12;
  return sub_73AB60(a1, (__int64)a2);
}
