__int64 __fastcall sub_21B4650(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rcx
  __int64 (__fastcall ***v5)(); // rax
  __int64 v6; // rax
  __int64 v7; // rdi
  unsigned __int64 v9; // rbx
  unsigned __int32 v10; // r13d
  __int64 (__fastcall ***v11)(); // rax
  __int64 v12; // rcx
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 (__fastcall ***v23)(); // r15
  __int64 v24; // r14
  __int64 *v25; // rdi
  __int64 (__fastcall ***v26)(); // rax
  __int64 v27; // rax
  __int64 v28; // [rsp+8h] [rbp-250h] BYREF
  __int64 v29; // [rsp+10h] [rbp-248h] BYREF
  __int64 v30; // [rsp+18h] [rbp-240h] BYREF
  unsigned __int64 v31; // [rsp+20h] [rbp-238h] BYREF
  char v32; // [rsp+28h] [rbp-230h]
  __m128i v33; // [rsp+30h] [rbp-228h] BYREF
  __int64 v34; // [rsp+40h] [rbp-218h] BYREF
  __m128i v35; // [rsp+50h] [rbp-208h] BYREF
  __int64 v36; // [rsp+60h] [rbp-1F8h] BYREF
  __m128i v37; // [rsp+70h] [rbp-1E8h] BYREF
  __int64 v38; // [rsp+80h] [rbp-1D8h]
  __int16 v39; // [rsp+90h] [rbp-1C8h]
  __m128i v40[2]; // [rsp+A0h] [rbp-1B8h] BYREF
  __int16 v41; // [rsp+C0h] [rbp-198h]
  __m128i v42[3]; // [rsp+D0h] [rbp-188h] BYREF
  __m128i v43[2]; // [rsp+100h] [rbp-158h] BYREF
  __int16 v44; // [rsp+120h] [rbp-138h]
  __m128i v45[3]; // [rsp+130h] [rbp-128h] BYREF
  __m128i v46; // [rsp+160h] [rbp-F8h] BYREF
  __int64 v47; // [rsp+170h] [rbp-E8h]
  __int16 v48; // [rsp+180h] [rbp-D8h]
  __m128i v49[3]; // [rsp+190h] [rbp-C8h] BYREF
  __m128i v50[2]; // [rsp+1C0h] [rbp-98h] BYREF
  __int16 v51; // [rsp+1E0h] [rbp-78h]
  __m128i v52[6]; // [rsp+1F0h] [rbp-68h] BYREF

  v4 = *(_QWORD *)(a2 + 16);
  v28 = a3;
  if ( v4 + a3 >= 0xFFFFFFFFFFFFFFFCLL || v4 + a3 + 4 > v4 + *(_QWORD *)(a2 + 24) || v4 > v4 + a3 )
  {
    v5 = sub_2195B10();
    sub_2220500(v49, 4, v5);
    v6 = v49[0].m128i_i64[0];
    if ( v49[0].m128i_i64[0] )
    {
      v49[0].m128i_i64[0] = 0;
      v50[0].m128i_i64[0] = v6;
      sub_A05760(v52, v50);
      if ( v50[0].m128i_i64[0] )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v50[0].m128i_i64[0] + 8LL))(v50[0].m128i_i64[0]);
      v7 = v49[0].m128i_i64[0];
      *(_BYTE *)(a1 + 16) &= ~1u;
      *(_DWORD *)a1 = 0;
      *(_QWORD *)(a1 + 8) = 0;
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
      return a1;
    }
    v4 = *(_QWORD *)(a2 + 16);
    a3 = v28;
  }
  v9 = v4 + a3;
  v10 = _byteswap_ulong(*(_DWORD *)(v4 + a3));
  if ( v10 > 4 )
  {
    if ( (__CFADD__(v9, v10) || __CFADD__(v9, v10) || v9 + v10 > v4 + *(_QWORD *)(a2 + 24) || v4 > v9)
      && (v11 = sub_2195B10(), sub_2220500(v52, 4, v11), v52[0].m128i_i64[0]) )
    {
      v51 = 259;
      v50[0].m128i_i64[0] = (__int64)" goes past the end of the file";
      v46.m128i_i64[0] = (__int64)&v30;
      v43[0].m128i_i64[0] = (__int64)" and size 0x";
      v44 = 259;
      v39 = 271;
      v48 = 271;
      v29 = v52[0].m128i_i64[0];
      v30 = v10;
      v37.m128i_i64[0] = (__int64)&v28;
      v32 |= 1u;
      v47 = 0;
      v38 = 0;
      v31 = 0;
      sub_2221210(&v33, &v29);
      sub_10E1980(&v35, &v33, ": string table with offset 0x");
      v40[0].m128i_i64[0] = (__int64)&v35;
      v41 = 260;
      sub_A41580(v42, v40, &v37, v12, 260, v13);
      sub_A41580(v45, v42, v43, v14, v15, v16);
      sub_A41580(v49, v45, &v46, v17, v18, v19);
      sub_A41580(v52, v49, v50, v20, v21, v22);
      v23 = sub_2195B10();
      v24 = operator new(0x40u);
      sub_2220590(v24, v52, 3, v23);
      v25 = (__int64 *)v35.m128i_i64[0];
      *(_BYTE *)(a1 + 16) |= 1u;
      *(_QWORD *)a1 = v24;
      if ( v25 != &v36 )
        operator delete(v25);
      if ( (__int64 *)v33.m128i_i64[0] != &v34 )
        operator delete((void *)v33.m128i_i64[0]);
      if ( v29 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 8LL))(v29);
    }
    else
    {
      v31 = v9;
      v32 &= ~1u;
      if ( *(_BYTE *)(v9 + v10 - 1) )
      {
        v26 = sub_2195B10();
        sub_2220500(v52, 5, v26);
        v27 = v52[0].m128i_i64[0];
        *(_BYTE *)(a1 + 16) |= 1u;
        *(_QWORD *)a1 = v27;
      }
      else
      {
        *(_BYTE *)(a1 + 16) &= ~1u;
        *(_DWORD *)a1 = v10;
        *(_QWORD *)(a1 + 8) = v9;
      }
    }
    sub_20CE630((__int64 *)&v31);
  }
  else
  {
    *(_BYTE *)(a1 + 16) &= ~1u;
    *(_DWORD *)a1 = 4;
    *(_QWORD *)(a1 + 8) = 0;
  }
  return a1;
}
