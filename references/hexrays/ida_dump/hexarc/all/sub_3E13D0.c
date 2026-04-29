__int64 __fastcall sub_3E13D0(__m128i *a1, _QWORD *a2, __m128 a3)
{
  _QWORD *exception; // rdi
  unsigned int v4; // r13d
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rbx
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rax
  int v13; // edx
  int v14; // esi
  __int64 v16; // rax
  _QWORD *v17; // [rsp+8h] [rbp-80h]
  _QWORD v18[2]; // [rsp+10h] [rbp-78h] BYREF
  __int64 v19[2]; // [rsp+20h] [rbp-68h] BYREF
  __int64 *v20; // [rsp+30h] [rbp-58h] BYREF
  __int128 v21; // [rsp+38h] [rbp-50h]
  unsigned __int64 v22; // [rsp+48h] [rbp-40h]

  v4 = 0;
  v22 = __readfsqword(0x28u);
  v17 = a2 + 6;
  do
  {
    while ( 1 )
    {
      v9 = a2[6];
      v10 = a2[8];
      v18[1] = 0;
      v18[0] = 0xFFFFFFFF00000000LL;
      if ( (unsigned __int64)v18 < v9 || (unsigned __int64)v18 >= v9 + 16 * v10 )
      {
        v11 = a2[7];
        if ( v10 < v11 + 1 )
        {
          v12 = qvector_reserve(v17, v9, v11 + 1, 16);
          a2[6] = v12;
          v9 = v12;
          v11 = a2[7];
        }
        sub_11D380(v9 + 16 * v11, (unsigned __int8 *)v18);
      }
      else
      {
        sub_11D380((__int64)v19, (unsigned __int8 *)v18);
        v6 = a2[7];
        v7 = a2[6];
        if ( a2[8] < (unsigned __int64)(v6 + 1) )
        {
          v16 = qvector_reserve(v17, v7, v6 + 1, 16);
          a2[6] = v16;
          v7 = v16;
          v6 = a2[7];
        }
        sub_11D380(v7 + 16 * v6, (unsigned __int8 *)v19);
        sub_1166E0((__int64)v19);
      }
      ++a2[7];
      sub_1166E0((__int64)v18);
      v8 = a2[6] + 16LL * a2[7] - 16;
      sub_3DECE0(a1);
      sub_3E0550(a1, v8, 1, a3);
      if ( *(_BYTE *)v8 == 1 )
        break;
      if ( *(_BYTE *)v8 != 9 )
      {
        exception = __cxa_allocate_exception(8u);
        *exception = "Return value must be in a register";
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'char const*, nullptr);
      }
      v4 += *(_DWORD *)(v8 + 4);
      if ( a1[67].m128i_i16[2] != 58 )
        return v4;
    }
    v13 = *(_DWORD *)(v8 + 4);
    v14 = *(_DWORD *)(v8 + 8);
    v19[0] = 0;
    v19[1] = 0;
    sub_5D900(v19, v14, v13);
    a3 = 0;
    v20 = nullptr;
    v21 = 0;
    sub_5DD00(a2 + 12, v19);
    sub_30F930(a2 + 14, &v20);
    if ( v20 )
    {
      *(_QWORD *)&v21 = 0;
      qfree(v20);
    }
    qfree(v19[0]);
    v4 += *(_DWORD *)(v8 + 4);
  }
  while ( a1[67].m128i_i16[2] == 58 );
  return v4;
}
