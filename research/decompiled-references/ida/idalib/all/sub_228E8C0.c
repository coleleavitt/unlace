void __fastcall sub_228E8C0(const char **a1, char **a2)
{
  unsigned __int64 v3; // rbp
  char *v4; // r12
  __int128 v5; // rax
  unsigned __int64 v6; // rdx
  unsigned __int8 *v7; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rdx
  _BYTE *v11; // rax
  __int64 v12; // rdx
  char *v13; // rax
  unsigned __int64 v14; // r15
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rcx
  __int128 v19; // rdi
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // [rsp+0h] [rbp-278h]
  __int64 v22; // [rsp+8h] [rbp-270h]
  __int64 v23; // [rsp+8h] [rbp-270h]
  _BYTE *v24; // [rsp+18h] [rbp-260h]
  __int64 v25; // [rsp+20h] [rbp-258h]
  char *v26; // [rsp+28h] [rbp-250h]
  unsigned __int64 v27; // [rsp+30h] [rbp-248h]
  unsigned __int64 v28; // [rsp+38h] [rbp-240h]
  _QWORD v29[4]; // [rsp+40h] [rbp-238h] BYREF
  __int16 v30; // [rsp+60h] [rbp-218h]
  char *v31; // [rsp+70h] [rbp-208h] BYREF
  unsigned __int64 v32; // [rsp+78h] [rbp-200h]
  __int16 v33; // [rsp+90h] [rbp-1E8h]
  _QWORD v34[4]; // [rsp+A0h] [rbp-1D8h] BYREF
  __int16 v35; // [rsp+C0h] [rbp-1B8h]
  char *v36; // [rsp+D0h] [rbp-1A8h] BYREF
  unsigned __int64 v37; // [rsp+D8h] [rbp-1A0h]
  __int16 v38; // [rsp+F0h] [rbp-188h]
  _BYTE v39[24]; // [rsp+100h] [rbp-178h] BYREF
  unsigned __int64 v40; // [rsp+118h] [rbp-160h] BYREF
  __int16 v41; // [rsp+120h] [rbp-158h]
  void *ptr; // [rsp+1A0h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+1A8h] [rbp-D0h]
  _WORD v44[96]; // [rsp+1B8h] [rbp-C0h] BYREF

  v3 = (unsigned __int64)a2[1];
  v4 = *a2;
  v41 = 261;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  *(_QWORD *)v39 = v4;
  *(_QWORD *)&v39[8] = v3;
  ptr = v44;
  *(_QWORD *)&v5 = sub_116C3C0((const char **)v39, (__int64)&ptr);
  sub_2289AE0(v5, 0);
  v21 = v6;
  if ( ptr != v44 )
    free(ptr);
  ptr = v44;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  v38 = 261;
  v36 = v4;
  v37 = v3;
  v7 = (unsigned __int8 *)sub_116C3C0((const char **)&v36, (__int64)&ptr);
  v9 = v8;
  *(_QWORD *)&v39[16] = sub_2288A70(v7, v8, 0);
  v40 = v10;
  if ( v9 )
  {
    v9 = 0;
    if ( v10 > 2 && **(_WORD **)&v39[16] == 12079 )
      v9 = v10;
  }
  if ( ptr != v44 )
    free(ptr);
  if ( !v21 )
  {
    *(_QWORD *)v39 = &v40;
    *(__m128i *)&v39[8] = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    sub_22538C0(a1, (__int64)v39);
    if ( v9 )
    {
      v11 = sub_2289A60((unsigned __int8 *)v4, v3, 0);
      v25 = v12;
      v24 = v11;
      v13 = sub_2289AE0(*(__int128 *)v39, 0);
      v14 = *(_QWORD *)&v39[8];
      v27 = v15;
      v22 = *(_QWORD *)v39;
      v26 = v13;
      sub_2289830(*(__int128 *)v39, 0);
      v17 = 0;
      if ( v14 >= v16 )
      {
        v18 = v14;
        v14 = v16;
        v17 = v18 - v16;
      }
      *(_QWORD *)&v19 = v4;
      *((_QWORD *)&v19 + 1) = v3;
      v28 = v17;
      v23 = v22 + v14;
      sub_2289830(v19, 0);
      if ( v3 >= v20 )
      {
        v21 = v3 - v20;
        v3 = v20;
      }
      v38 = 261;
      v34[1] = v28;
      v35 = 261;
      v37 = v21;
      v33 = 261;
      v34[0] = v23;
      v30 = 261;
      v31 = v26;
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
      v32 = v27;
      ptr = v44;
      v29[0] = v24;
      v36 = &v4[v3];
      v29[1] = v25;
      sub_2288C30(&ptr, (__int64)v29, (__int64)&v31, (__int64)v34, (__int64)&v36);
      sub_228E730(a2, &ptr);
      if ( ptr != v44 )
        free(ptr);
    }
    else
    {
      v31 = v4;
      v44[4] = 257;
      v38 = 257;
      v35 = 257;
      v33 = 261;
      v32 = v3;
      sub_2288C30(v39, (__int64)&v31, (__int64)v34, (__int64)&v36, (__int64)&ptr);
      sub_228E730(a2, v39);
    }
    if ( *(unsigned __int64 **)v39 != &v40 )
      free(*(void **)v39);
  }
}
