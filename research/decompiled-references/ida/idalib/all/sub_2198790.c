__int64 __fastcall sub_2198790(__int64 a1, _DWORD *a2, unsigned int *a3)
{
  _DWORD *v4; // rbp
  unsigned __int64 v5; // rax
  __int64 (__fastcall *v6)(__int64); // rax
  __int64 v7; // rax
  __int32 v9; // r12d
  unsigned int v10; // eax
  _DWORD *v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  unsigned __int64 v23; // [rsp+10h] [rbp-188h] BYREF
  __int64 v24; // [rsp+18h] [rbp-180h] BYREF
  __m128i v25[2]; // [rsp+20h] [rbp-178h] BYREF
  __int16 v26; // [rsp+40h] [rbp-158h]
  __m128i v27[2]; // [rsp+50h] [rbp-148h] BYREF
  __int16 v28; // [rsp+70h] [rbp-128h]
  __m128i v29[3]; // [rsp+80h] [rbp-118h] BYREF
  __m128i v30[2]; // [rsp+B0h] [rbp-E8h] BYREF
  __int16 v31; // [rsp+D0h] [rbp-C8h]
  __m128i v32[3]; // [rsp+E0h] [rbp-B8h] BYREF
  __m128i v33[2]; // [rsp+110h] [rbp-88h] BYREF
  __int16 v34; // [rsp+130h] [rbp-68h]
  __m128i v35; // [rsp+140h] [rbp-58h] BYREF

  v4 = a2;
  v5 = sub_2195C60((__int64)a2, a3) >> 40;
  if ( (_BYTE)v5 )
  {
    v9 = (unsigned __int8)v5;
    v10 = (unsigned __int8)v5 - 1;
    if ( v10 >= a2[22] )
    {
      v23 = sub_2198690((__int64)a2, (__int64)a3);
      v34 = 267;
      v33[0].m128i_i64[0] = (__int64)&v23;
      v30[0].m128i_i64[0] = (__int64)" for symbol at index ";
      v31 = 259;
      v25[0].m128i_i32[0] = v9;
      v28 = 259;
      v27[0].m128i_i64[0] = (__int64)"bad section index: ";
      v26 = 266;
      sub_A41580(v29, v27, v25, 266, v12, v13);
      sub_A41580(v32, v29, v30, v14, v15, v16);
      sub_A41580(&v35, v32, v33, v17, v18, v19);
      sub_21967F0(&v24, v35.m128i_i64, v20, v21);
      v22 = v24;
      *(_BYTE *)(a1 + 16) |= 1u;
      *(_QWORD *)a1 = v22;
    }
    else
    {
      *(_BYTE *)(a1 + 16) &= ~1u;
      *(_QWORD *)(a1 + 8) = a2;
      *(_QWORD *)a1 = v10;
    }
  }
  else
  {
    v6 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 360LL);
    if ( v6 == sub_2195DB0 )
    {
      v35.m128i_i32[1] = 0;
      v35.m128i_i32[0] = a2[22];
      v7 = v35.m128i_u32[0];
    }
    else
    {
      v7 = v6((__int64)a2);
      v4 = v11;
    }
    *(_BYTE *)(a1 + 16) &= ~1u;
    *(_QWORD *)a1 = v7;
    *(_QWORD *)(a1 + 8) = v4;
  }
  return a1;
}
