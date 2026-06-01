void __fastcall sub_1189CE0(__int64 a1, char a2, const char **a3, __int64 a4)
{
  __int64 *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  void *v12; // rdi
  const char **v13; // r13
  __int64 v14; // r14
  const char **i; // rbx
  const char *v16; // rbp
  size_t v17; // rax
  __int64 *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  void *v21[2]; // [rsp+0h] [rbp-188h] BYREF
  __int64 v22; // [rsp+10h] [rbp-178h] BYREF
  __m128i v23[2]; // [rsp+20h] [rbp-168h] BYREF
  __int16 v24; // [rsp+40h] [rbp-148h]
  __m128i v25; // [rsp+50h] [rbp-138h] BYREF
  __int16 v26; // [rsp+70h] [rbp-118h]
  __m128i v27; // [rsp+80h] [rbp-108h] BYREF
  __int64 v28; // [rsp+90h] [rbp-F8h] BYREF
  __m128i v29; // [rsp+B0h] [rbp-D8h] BYREF
  char *v30; // [rsp+C0h] [rbp-C8h]
  __int16 v31; // [rsp+D0h] [rbp-B8h]
  __m128i v32; // [rsp+E0h] [rbp-A8h] BYREF
  __int64 v33; // [rsp+F0h] [rbp-98h]
  __int64 v34; // [rsp+F8h] [rbp-90h]
  __int16 v35; // [rsp+100h] [rbp-88h]
  unsigned __int8 *v36[15]; // [rsp+110h] [rbp-78h] BYREF

  if ( a2 )
  {
    v13 = &a3[a4];
    v14 = *(_QWORD *)(a1 + 8);
    if ( v13 != a3 )
    {
      for ( i = a3; v13 != i; ++i )
      {
        v16 = *i;
        if ( *i )
        {
          v17 = strlen(*i);
          if ( *(_QWORD *)(v14 + 24) == v17 && (!v17 || !memcmp(v16, *(const void **)(v14 + 16), v17)) )
            return;
        }
        else if ( !*(_QWORD *)(v14 + 24) )
        {
          return;
        }
      }
    }
    sub_FC70B0((__int64)v36, **(_QWORD **)a1, 0, 497);
    v18 = *(__int64 **)(a1 + 8);
    v19 = *v18;
    v20 = v18[1];
    v32.m128i_i64[0] = (__int64)"-Wa,";
    v34 = v20;
    v35 = 1283;
    v33 = v19;
    v29.m128i_i64[0] = (__int64)&v32;
    v30 = "=";
    v31 = 770;
    sub_2253560(&v27, &v29);
    sub_AEC220(v36, v27.m128i_i64[0], v27.m128i_i64[1]);
    sub_AEC220(v36, *(_BYTE **)(*(_QWORD *)(a1 + 8) + 16LL), *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL));
    v12 = (void *)v27.m128i_i64[0];
    if ( (__int64 *)v27.m128i_i64[0] != &v28 )
      goto LABEL_3;
  }
  else
  {
    sub_FC70B0((__int64)v36, **(_QWORD **)a1, 0, 495);
    v29.m128i_i64[0] = (__int64)"=";
    v4 = *(__int64 **)(a1 + 8);
    v26 = 261;
    v5 = *v4;
    v6 = v4[1];
    v24 = 259;
    v31 = 259;
    v25.m128i_i64[0] = v5;
    v25.m128i_i64[1] = v6;
    v23[0].m128i_i64[0] = (__int64)"-Wa,";
    sub_A41580(&v27, v23, &v25, 259, v7, v8);
    sub_A41580(&v32, &v27, &v29, v9, v10, v11);
    sub_2253560(v21, &v32);
    sub_AEC220(v36, (_BYTE *)v21[0], (signed __int64)v21[1]);
    sub_AEC220(v36, **(_BYTE ***)(a1 + 16), *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL));
    v12 = v21[0];
    if ( v21[0] != &v22 )
LABEL_3:
      operator delete(v12);
  }
  sub_AEA040((__int64)v36);
}
