__int64 __fastcall sub_2199280(__int64 a1, __int64 a2, unsigned int *a3)
{
  unsigned __int64 v4; // r14
  unsigned __int32 v5; // eax
  __int32 v7; // r12d
  const char *v8; // r14
  __int64 v9; // rax
  __int64 v10; // rdx
  size_t v11; // rax
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
  unsigned __int64 v23; // [rsp+0h] [rbp-188h] BYREF
  __int64 v24; // [rsp+8h] [rbp-180h] BYREF
  __m128i v25[2]; // [rsp+10h] [rbp-178h] BYREF
  __int16 v26; // [rsp+30h] [rbp-158h]
  __m128i v27[2]; // [rsp+40h] [rbp-148h] BYREF
  __int16 v28; // [rsp+60h] [rbp-128h]
  __m128i v29[3]; // [rsp+70h] [rbp-118h] BYREF
  __m128i v30[2]; // [rsp+A0h] [rbp-E8h] BYREF
  __int16 v31; // [rsp+C0h] [rbp-C8h]
  __m128i v32[3]; // [rsp+D0h] [rbp-B8h] BYREF
  __m128i v33[2]; // [rsp+100h] [rbp-88h] BYREF
  __int16 v34; // [rsp+120h] [rbp-68h]
  __m128i v35[5]; // [rsp+130h] [rbp-58h] BYREF

  v4 = sub_21991E0(a2);
  v5 = sub_2195C60(a2, a3);
  if ( v5 )
  {
    v7 = v5;
    v8 = (const char *)(v5 + v4);
    if ( (unsigned __int64)v8 < sub_215DEC0(a2) || (v9 = sub_215DEC0(a2), (unsigned __int64)v8 >= v10 + v9) )
    {
      v23 = sub_2198690(a2, (__int64)a3);
      v34 = 267;
      v33[0].m128i_i64[0] = (__int64)&v23;
      v30[0].m128i_i64[0] = (__int64)" for symbol at index ";
      v31 = 259;
      v25[0].m128i_i32[0] = v7;
      v28 = 259;
      v27[0].m128i_i64[0] = (__int64)"bad string index: ";
      v26 = 265;
      sub_A41580(v29, v27, v25, 265, v12, v13);
      sub_A41580(v32, v29, v30, v14, v15, v16);
      sub_A41580(v35, v32, v33, v17, v18, v19);
      sub_21967F0(&v24, v35[0].m128i_i64, v20, v21);
      v22 = v24;
      *(_BYTE *)(a1 + 16) |= 1u;
      *(_QWORD *)a1 = v22;
    }
    else
    {
      v11 = 0;
      if ( v8 )
        v11 = j__strlen(v8);
      *(_BYTE *)(a1 + 16) &= ~1u;
      *(_QWORD *)a1 = v8;
      *(_QWORD *)(a1 + 8) = v11;
    }
  }
  else
  {
    *(_BYTE *)(a1 + 16) &= ~1u;
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 8) = 0;
  }
  return a1;
}
