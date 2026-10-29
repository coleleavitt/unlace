__int64 __fastcall sub_21B2E70(__int64 a1, unsigned __int8 **a2)
{
  void (*v4)(void); // rax
  __int64 v5; // r13
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  unsigned __int8 *v10; // rdi
  unsigned __int8 *v11; // rsi
  unsigned __int64 v12; // rdx
  __int64 (*v13)(void); // rax
  char v14; // al
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 (__fastcall ***v19)(); // r14
  __int64 v20; // rbp
  __int64 v21; // rax
  unsigned __int8 *v22; // rcx
  unsigned __int8 *v23; // rax
  unsigned __int64 v24; // [rsp+8h] [rbp-1A0h]
  __int64 v25; // [rsp+10h] [rbp-198h] BYREF
  __int64 v26; // [rsp+18h] [rbp-190h]
  char v27; // [rsp+20h] [rbp-188h]
  __m128i v28; // [rsp+30h] [rbp-178h] BYREF
  __int64 v29; // [rsp+40h] [rbp-168h]
  __int64 v30; // [rsp+48h] [rbp-160h]
  __int16 v31; // [rsp+50h] [rbp-158h]
  __m128i v32[2]; // [rsp+60h] [rbp-148h] BYREF
  __int16 v33; // [rsp+80h] [rbp-128h]
  __m128i v34; // [rsp+90h] [rbp-118h] BYREF
  __int64 v35; // [rsp+A0h] [rbp-108h]
  __int64 v36; // [rsp+A8h] [rbp-100h]
  __int16 v37; // [rsp+B0h] [rbp-F8h]
  __m128i v38[2]; // [rsp+C0h] [rbp-E8h] BYREF
  __int16 v39; // [rsp+E0h] [rbp-C8h]
  __m128i v40[3]; // [rsp+F0h] [rbp-B8h] BYREF
  __m128i v41[2]; // [rsp+120h] [rbp-88h] BYREF
  __int16 v42; // [rsp+140h] [rbp-68h]
  __m128i v43[5]; // [rsp+150h] [rbp-58h] BYREF

  v4 = *(void (**)(void))(*(_QWORD *)a2[1] + 64LL);
  if ( (char *)v4 != (char *)sub_21B1110 )
    v4();
  v5 = (*a2)[17];
  sub_21B2CC0((__int64)&v25, (__int64)a2);
  if ( (v27 & 1) != 0 && (v8 = v25, v25 = 0, v8) )
  {
    *(_BYTE *)(a1 + 16) |= 1u;
    *(_QWORD *)a1 = v8;
  }
  else
  {
    v10 = a2[1];
    v11 = *a2;
    v12 = (unsigned __int64)&(*a2)[-*((_QWORD *)v10 + 9)] / 0x12;
    if ( (_BYTE)v5 )
    {
      v13 = *(__int64 (**)(void))(*(_QWORD *)v10 + 64LL);
      if ( (char *)v13 == (char *)sub_21B1110 )
      {
        v14 = *((_DWORD *)v10 + 2) == 12;
      }
      else
      {
        v24 = (unsigned __int64)&(*a2)[-*((_QWORD *)v10 + 9)] / 0x12;
        v14 = v13();
        v11 = *a2;
        LODWORD(v12) = v24;
      }
      if ( v14 )
      {
        v21 = 18LL * (unsigned __int8)v5;
        v22 = &v11[v21];
        v23 = &v11[v21 - 18 - 18LL * (unsigned __int8)(v5 - 1)];
        while ( v22[17] != 0xFB )
        {
          v22 -= 18;
          if ( v23 == v22 )
          {
            v41[0].m128i_i32[0] = v12;
            v15 = 1283;
            v42 = 265;
            v38[0].m128i_i64[0] = (__int64)"\" with index ";
            v34.m128i_i64[0] = (__int64)"a csect auxiliary entry has not been found for symbol \"";
            v39 = 259;
            v35 = v25;
            v37 = 1283;
            v36 = v26;
            goto LABEL_13;
          }
        }
        *(_BYTE *)(a1 + 16) &= ~1u;
        *(_QWORD *)a1 = 0;
        *(_QWORD *)(a1 + 8) = v22;
      }
      else
      {
        *(_BYTE *)(a1 + 16) &= ~1u;
        *(_QWORD *)(a1 + 8) = 0;
        *(_QWORD *)a1 = &v11[18 * v5];
      }
    }
    else
    {
      v38[0].m128i_i32[0] = (unsigned __int64)&(*a2)[-*((_QWORD *)v10 + 9)] / 0x12;
      v41[0].m128i_i64[0] = (__int64)" contains no auxiliary entry";
      v32[0].m128i_i64[0] = (__int64)"\" with index ";
      v28.m128i_i64[0] = (__int64)"csect symbol \"";
      v42 = 259;
      v29 = v25;
      v39 = 265;
      v33 = 259;
      v31 = 1283;
      v30 = v26;
      sub_A41580(&v34, &v28, v32, 0xE38E38E38E38E38FLL, 259, 1283);
LABEL_13:
      sub_A41580(v40, &v34, v38, v15, v6, v7);
      sub_A41580(v43, v40, v41, v16, v17, v18);
      v19 = sub_2195B10();
      v20 = operator new(0x40u);
      sub_2220590(v20, v43, 3, v19);
      *(_BYTE *)(a1 + 16) |= 1u;
      *(_QWORD *)a1 = v20;
    }
  }
  sub_111DFC0(&v25);
  return a1;
}
