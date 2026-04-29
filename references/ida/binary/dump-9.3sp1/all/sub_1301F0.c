__int64 __fastcall sub_1301F0(const __m128i *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // r15d
  __int64 v7; // rdx
  __int64 v10; // rax
  signed int v11; // r8d
  __int64 v12; // r15
  int v13; // [rsp+Ch] [rbp-64h]
  __int64 v14; // [rsp+10h] [rbp-60h]
  char v15[4]; // [rsp+20h] [rbp-50h] BYREF
  signed int v16; // [rsp+24h] [rbp-4Ch]
  unsigned __int64 v17; // [rsp+38h] [rbp-38h]

  v5 = 0;
  v17 = __readfsqword(0x28u);
  v7 = *(unsigned int *)(a3 + 4);
  if ( *(_DWORD *)(a5 + 4) > (int)v7 )
  {
    sub_123A40((__int64)v15, (unsigned __int8 *)a5, v7, a4);
    v10 = a2;
    if ( !a2 )
      v10 = a1[3].m128i_i64[1];
    v11 = *(_DWORD *)(a3 + 4);
    v14 = *(_QWORD *)(v10 + 24);
    if ( v11 >= v16 || v11 <= 0 )
    {
      v5 = 0;
    }
    else
    {
      v13 = *(_DWORD *)(a3 + 4);
      v12 = *(_QWORD *)(a1[30].m128i_i64[0] + 112);
      if ( !(unsigned __int8)sub_127850((unsigned __int64)v15, v12, v11, 0) )
        sub_1207E0(v15, v12, 11, v14, v13);
      v5 = sub_12EA80(v12, a1, a2, a3, a4, (__int64)v15, 2);
    }
    sub_11CDA0((__int64)v15);
  }
  return v5;
}
