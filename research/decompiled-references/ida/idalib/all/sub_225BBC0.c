__int64 __fastcall sub_225BBC0(_QWORD *a1, __int64 a2, __int64 *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r8
  unsigned int v7; // ebx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __m128i v15[2]; // [rsp+0h] [rbp-118h] BYREF
  __int16 v16; // [rsp+20h] [rbp-F8h]
  __m128i v17; // [rsp+30h] [rbp-E8h] BYREF
  __int16 v18; // [rsp+50h] [rbp-C8h]
  __m128i v19[3]; // [rsp+60h] [rbp-B8h] BYREF
  __m128i v20[2]; // [rsp+90h] [rbp-88h] BYREF
  __int16 v21; // [rsp+B0h] [rbp-68h]
  __m128i v22[5]; // [rsp+C0h] [rbp-58h] BYREF

  v6 = *((unsigned int *)a3 + 2);
  if ( (_DWORD)v6 )
  {
    v9 = *a3;
    v10 = *a3 + 24LL * *((unsigned int *)a3 + 4);
    if ( v9 != v10 )
    {
      while ( *(_QWORD *)v9 == -1 || *(_QWORD *)v9 == -2 )
      {
        v9 += 24;
        if ( v10 == v9 )
          return 1;
      }
      while ( v10 != v9 )
      {
        if ( *(_BYTE *)(v9 + 16) )
        {
          v7 = *(unsigned __int8 *)(v9 + 17);
          if ( !(_BYTE)v7 )
          {
            v18 = 261;
            v20[0].m128i_i64[0] = (__int64)"'";
            v21 = 259;
            v17.m128i_i64[0] = *(_QWORD *)v9;
            v11 = *(_QWORD *)(v9 + 8);
            v16 = 259;
            v17.m128i_i64[1] = v11;
            v15[0].m128i_i64[0] = (__int64)"missing key '";
            sub_A41580(v19, v15, &v17, 259, v6, a6);
            sub_A41580(v22, v19, v20, v12, v13, v14);
            sub_226EEF0(*a1, a2, v22, 0);
            return v7;
          }
        }
        v9 += 24;
        if ( v9 == v10 )
          return 1;
        while ( *(_QWORD *)v9 == -1 || *(_QWORD *)v9 == -2 )
        {
          v9 += 24;
          if ( v10 == v9 )
            return 1;
        }
      }
    }
  }
  return 1;
}
