_BYTE *__fastcall sub_13780A0(_BYTE *a1, int a2, __int64 a3, __int64 *a4)
{
  int v6; // ebx
  __int32 v7; // ebp
  bool v8; // al
  __int64 v9; // rdx
  const char *v10; // r12
  __int64 v11; // rdi
  size_t v12; // r14
  char *v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rbx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v20; // [rsp+10h] [rbp-1B8h]
  _QWORD v21[4]; // [rsp+40h] [rbp-188h] BYREF
  __int16 v22; // [rsp+60h] [rbp-168h]
  char *v23; // [rsp+70h] [rbp-158h]
  __int64 v24; // [rsp+78h] [rbp-150h]
  __int16 v25; // [rsp+90h] [rbp-138h]
  _QWORD v26[2]; // [rsp+A0h] [rbp-128h] BYREF
  char *v27; // [rsp+B0h] [rbp-118h]
  __int64 v28; // [rsp+B8h] [rbp-110h]
  __int16 v29; // [rsp+C0h] [rbp-108h]
  __m128i v30; // [rsp+D0h] [rbp-F8h] BYREF
  __int16 v31; // [rsp+F0h] [rbp-D8h]
  __m128i v32; // [rsp+100h] [rbp-C8h] BYREF
  char *v33; // [rsp+110h] [rbp-B8h]
  __int64 v34; // [rsp+118h] [rbp-B0h]
  __int16 v35; // [rsp+120h] [rbp-A8h]
  __m128i v36[2]; // [rsp+130h] [rbp-98h] BYREF
  __int16 v37; // [rsp+150h] [rbp-78h]
  __m128i *v38; // [rsp+160h] [rbp-68h] BYREF
  __int64 v39; // [rsp+168h] [rbp-60h]
  char *v40; // [rsp+170h] [rbp-58h]
  __int64 v41; // [rsp+178h] [rbp-50h]
  __int64 v42; // [rsp+180h] [rbp-48h]

  v6 = a2;
  v7 = sub_102DB30((unsigned __int8 *)a3, a2);
  v8 = sub_102DCD0(a2);
  if ( v7 == 64 )
  {
    v6 = *(_DWORD *)(a3 + 168);
    v10 = "__INT";
    if ( v8 )
      goto LABEL_7;
    switch ( *(_DWORD *)(a3 + 168) )
    {
      case 0:
      case 2:
      case 4:
      case 6:
      case 8:
      case 9:
        v6 = 10;
        break;
      case 1:
LABEL_17:
        v6 = 2;
        break;
      case 3:
        v6 = 4;
        break;
      case 5:
LABEL_16:
        v6 = 6;
        break;
      case 7:
        v6 = 8;
        break;
    }
LABEL_6:
    v10 = "__UINT";
    goto LABEL_7;
  }
  if ( v7 != 16 )
  {
    v10 = "__INT";
    if ( v8 )
      goto LABEL_7;
    goto LABEL_6;
  }
  v6 = *(_DWORD *)(a3 + 172);
  if ( !v8 )
  {
    switch ( *(_DWORD *)(a3 + 172) )
    {
      case 1:
        goto LABEL_17;
      case 3:
        v6 = 4;
        v10 = "__UINT";
        goto LABEL_7;
      case 5:
        goto LABEL_16;
      case 7:
        v6 = 8;
        v10 = "__UINT";
        goto LABEL_7;
      case 9:
        v6 = 10;
        v10 = "__UINT";
        goto LABEL_7;
      default:
        *(_QWORD *)&dword_0 = v9;
        BUG();
    }
  }
  v10 = "__INT";
LABEL_7:
  v30.m128i_i32[0] = v7;
  v36[0].m128i_i64[0] = (__int64)"_TYPE__";
  v40 = "_TYPE__";
  v33 = (char *)v30.m128i_i64[0];
  v41 = v36[0].m128i_i64[1];
  v35 = 2563;
  LOWORD(v42) = 770;
  v32.m128i_i64[0] = (__int64)v10;
  v38 = &v32;
  v39 = 0;
  sub_1377870((__int64)&v38, v6, a4);
  v36[0].m128i_i32[0] = v7;
  LOWORD(v42) = 2563;
  v40 = (char *)v36[0].m128i_i64[0];
  v38 = (__m128i *)v10;
  sub_13778E0(a1, (__int64)&v38, v6, a4);
  v11 = a3;
  v12 = 0;
  v13 = sub_102DA20(v11, v6);
  v16 = (__int64)v13;
  if ( v13 )
    v12 = strlen(v13);
  LODWORD(v23) = v7;
  LOWORD(v42) = 257;
  v37 = 261;
  v30.m128i_i64[0] = (__int64)"_C_SUFFIX__";
  v31 = 259;
  v33 = "_C_SUFFIX__";
  v29 = 2563;
  v27 = v23;
  v34 = v30.m128i_i64[1];
  v35 = 770;
  v36[0].m128i_i64[0] = v16;
  v36[0].m128i_i64[1] = v12;
  v26[0] = v10;
  v32.m128i_i64[0] = (__int64)v26;
  v32.m128i_i64[1] = 0;
  sub_1039E30(a4, (__int64)&v32, (__int64)v36, (__int64)v26, v14, v15, (char)v38, v39, (int)v40, v41, 1u);
  LOWORD(v42) = 257;
  if ( v12 )
  {
    v32.m128i_i64[0] = v16;
    v30.m128i_i64[0] = (__int64)"c##";
    v35 = 261;
    v32.m128i_i64[1] = v12;
    v31 = 259;
    sub_A41580(v36, &v30, &v32, (__int64)"c##", v17, v18);
  }
  else
  {
    v36[0].m128i_i64[0] = (__int64)"c";
    v37 = 259;
  }
  LODWORD(v20) = v7;
  v23 = "_C(c)";
  v27 = "_C(c)";
  v21[2] = v20;
  v25 = 259;
  v21[0] = v10;
  v26[0] = v21;
  v28 = v24;
  v22 = 2563;
  v26[1] = 0;
  v29 = 770;
  return sub_1039E30(a4, (__int64)v26, (__int64)v36, (__int64)v26, 2563, 770, (char)v38, v39, (int)v40, v41, v42);
}
