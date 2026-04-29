__int64 __fastcall sub_12FC30(const __m128i *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // r15d
  __int64 v9; // rax
  int v10; // r8d
  __int64 v11; // r15
  int v12; // [rsp+Ch] [rbp-64h]
  __int64 v13; // [rsp+10h] [rbp-60h]
  char v14[4]; // [rsp+20h] [rbp-50h] BYREF
  int v15; // [rsp+24h] [rbp-4Ch]
  unsigned __int64 v16; // [rsp+38h] [rbp-38h]

  v5 = 0;
  v16 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a5 + 4) > *(_DWORD *)(a3 + 4) )
  {
    sub_123480((__int64)v14, (unsigned __int8 *)a5);
    v9 = a2;
    if ( !a2 )
      v9 = a1[3].m128i_i64[1];
    v10 = *(_DWORD *)(a3 + 4);
    v13 = *(_QWORD *)(v9 + 24);
    if ( v10 >= v15 || v10 <= 0 )
    {
      v5 = 0;
    }
    else
    {
      v12 = *(_DWORD *)(a3 + 4);
      v11 = *(_QWORD *)(a1[30].m128i_i64[0] + 112);
      if ( !(unsigned __int8)sub_127290((unsigned __int64)v14, v11, v10, 0) )
        sub_120220(v14, v11, 11, v13, v12);
      v5 = sub_12E4C0(v11, a1, a2, a3, a4, (__int64)v14, 2);
    }
    sub_11C7E0((__int64)v14);
  }
  return v5;
}
