__int64 __fastcall sub_11BF6C0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, char a5, __int64 a6, __m128i a7)
{
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r9
  int v14; // eax
  __m128i *v15; // rsi
  __int64 v16; // rax
  __int64 v17; // r15
  __int64 result; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rbp
  _BYTE *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __m128i *v27; // rsi
  __int64 v28; // rax
  __m128i *v29; // rsi
  __int64 v30; // rax
  _BYTE *v31; // rax
  signed __int64 v32; // rdx
  __m128i v33[2]; // [rsp+20h] [rbp-148h] BYREF
  __int16 v34; // [rsp+40h] [rbp-128h]
  __m128i v35[2]; // [rsp+50h] [rbp-118h] BYREF
  __int16 v36; // [rsp+70h] [rbp-F8h]
  __m128i v37; // [rsp+80h] [rbp-E8h] BYREF
  __int64 v38; // [rsp+90h] [rbp-D8h] BYREF
  __int16 v39; // [rsp+A0h] [rbp-C8h]
  __m128i v40; // [rsp+B0h] [rbp-B8h] BYREF
  __int64 v41; // [rsp+C0h] [rbp-A8h] BYREF
  __m128i v42[2]; // [rsp+E0h] [rbp-88h] BYREF
  __int16 v43; // [rsp+100h] [rbp-68h]

  v11 = sub_10DE660(a2, 0xAE8u, 0xA6Cu);
  if ( v11 )
  {
    if ( (unsigned __int8)sub_21B9810(v11, 2792) )
    {
      v14 = *(_DWORD *)(a4 + 32);
      if ( (unsigned int)(v14 - 35) > 1 && (unsigned int)(v14 - 1) > 4 )
      {
        sub_FC70B0((__int64)v42, *a1, 0, 571);
        v31 = (_BYTE *)sub_22B7480(a4);
        sub_AEC220((unsigned __int8 **)v42, v31, v32);
        sub_AEA040((__int64)v42);
        goto LABEL_8;
      }
      v37.m128i_i64[0] = (__int64)"-enable-machine-outliner";
      v39 = 259;
      if ( !a5 )
        goto LABEL_6;
    }
    else
    {
      v13 = 259;
      v37.m128i_i64[0] = (__int64)"-enable-machine-outliner=never";
      v39 = 259;
      if ( !a5 )
      {
LABEL_6:
        sub_10DC5D0(a3, (__int64)"-mllvm");
        v15 = &v37;
LABEL_7:
        v16 = sub_10DA6C0(a2, (__int64)v15);
        sub_10DC5D0(a3, v16);
        goto LABEL_8;
      }
    }
    v43 = 261;
    v42[0] = a7;
    sub_A41580(&v40, v42, &v37, v12, 261, v13);
    v15 = &v40;
    goto LABEL_7;
  }
LABEL_8:
  v17 = sub_10DCD30(a2, 0x1F8u);
  result = sub_10DCD30(a2, 0x1FAu);
  v22 = result;
  if ( v17 && result )
  {
    sub_FC70B0((__int64)v42, *a1, 0, 323);
    sub_21B5FF0(&v37, v17, a2);
    sub_AEC220((unsigned __int8 **)v42, v37.m128i_i64[0], v37.m128i_i64[1]);
    sub_21B5FF0(&v40, v22, a2);
    sub_AEC220((unsigned __int8 **)v42, v40.m128i_i64[0], v40.m128i_i64[1]);
    if ( (__int64 *)v40.m128i_i64[0] != &v41 )
      operator delete((void *)v40.m128i_i64[0]);
    if ( (__int64 *)v37.m128i_i64[0] != &v38 )
      operator delete((void *)v37.m128i_i64[0]);
    sub_AEA040((__int64)v42);
  }
  else if ( !v17 )
  {
    goto LABEL_11;
  }
  v37.m128i_i64[0] = (__int64)"-codegen-data-generate";
  v39 = 259;
  if ( a5 )
  {
    v43 = 261;
    v42[0] = a7;
    sub_A41580(&v40, v42, &v37, v19, v20, v21);
    v29 = &v40;
  }
  else
  {
    sub_10DC5D0(a3, (__int64)"-mllvm");
    v29 = &v37;
  }
  v30 = sub_10DA6C0(a2, (__int64)v29);
  result = sub_10DC5D0(a3, v30);
LABEL_11:
  if ( v22 )
  {
    v23 = **(_BYTE ***)(v22 + 48);
    v36 = 257;
    if ( *v23 )
    {
      v35[0].m128i_i64[0] = (__int64)v23;
      LOBYTE(v36) = 3;
    }
    v34 = 259;
    v33[0].m128i_i64[0] = (__int64)"-codegen-data-use-path=";
    sub_A41580(&v37, v33, v35, 257, v20, v21);
    if ( a5 )
    {
      v43 = 261;
      v42[0] = a7;
      sub_A41580(&v40, v42, &v37, v24, v25, v26);
      v27 = &v40;
    }
    else
    {
      sub_10DC5D0(a3, (__int64)"-mllvm");
      v27 = &v37;
    }
    v28 = sub_10DA6C0(a2, (__int64)v27);
    return sub_10DC5D0(a3, v28);
  }
  return result;
}
