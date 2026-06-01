__int64 __fastcall sub_213A1D0(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  unsigned int v6; // ebp
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdi
  __int64 v10; // r8
  _QWORD *v11; // rcx
  __int64 v12; // rsi
  _QWORD *v13; // rdx
  __m128i v15; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v16; // [rsp+10h] [rbp-A8h]
  __int64 v17; // [rsp+18h] [rbp-A0h]
  __int16 v18; // [rsp+20h] [rbp-98h]
  __m128i v19[2]; // [rsp+30h] [rbp-88h] BYREF
  __int16 v20; // [rsp+50h] [rbp-68h]
  __m128i v21[5]; // [rsp+60h] [rbp-58h] BYREF

  v6 = sub_21544B0(a1);
  if ( (_BYTE)v6 )
    return v6;
  v9 = a1[46];
  if ( a1[45] != v9 )
  {
    v10 = a1[39];
    if ( (a1[40] - v10) >> 3 != *(_QWORD *)(*(_QWORD *)(v9 - 8) + 24LL) )
    {
      v11 = (_QWORD *)(a1[40] - 8LL);
      do
      {
        v12 = *v11;
        v13 = v11;
        a1[40] = v11--;
        *(_QWORD *)((char *)a1 + 300) = v12;
      }
      while ( *(_QWORD *)(*(_QWORD *)(v9 - 8) + 24LL) != ((__int64)v13 - v10) >> 3 );
    }
    sub_213A120((__int64)a1);
    return v6;
  }
  v19[0].m128i_i64[0] = (__int64)"' in file, no current macro definition";
  v20 = 259;
  v18 = 1283;
  v15.m128i_i64[0] = (__int64)"unexpected '";
  v16 = a2;
  v17 = a3;
  sub_A41580(v21, &v15, v19, v5, v7, v8);
  return (unsigned int)sub_21543E0(a1, v21, 0, 0);
}
