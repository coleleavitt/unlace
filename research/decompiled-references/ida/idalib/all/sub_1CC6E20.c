void __fastcall sub_1CC6E20(__int64 a1, __int64 a2)
{
  unsigned int v2; // edx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 *v6; // r9
  __m128i v7; // rax
  signed __int64 v8; // r14
  _BYTE *v9; // r15
  char v10; // al
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  _QWORD *v16; // rax
  __int64 v17; // [rsp+8h] [rbp-250h]
  __m128i v18; // [rsp+10h] [rbp-248h] BYREF
  __int64 (__fastcall **v19)(); // [rsp+20h] [rbp-238h] BYREF
  int v20; // [rsp+28h] [rbp-230h]
  __int128 v21; // [rsp+30h] [rbp-228h]
  __int64 v22; // [rsp+40h] [rbp-218h]
  char v23; // [rsp+48h] [rbp-210h]
  int v24; // [rsp+4Ch] [rbp-20Ch]
  void **p_ptr; // [rsp+50h] [rbp-208h]
  __int64 v26; // [rsp+60h] [rbp-1F8h] BYREF
  int v27; // [rsp+68h] [rbp-1F0h]
  int v28; // [rsp+6Ch] [rbp-1ECh]
  __int64 v29; // [rsp+70h] [rbp-1E8h]
  char v30; // [rsp+78h] [rbp-1E0h]
  _QWORD v31[10]; // [rsp+80h] [rbp-1D8h] BYREF
  int v32; // [rsp+D0h] [rbp-188h]
  char v33; // [rsp+D8h] [rbp-180h]
  __int64 v34; // [rsp+E0h] [rbp-178h]
  __int64 v35; // [rsp+F0h] [rbp-168h] BYREF
  int v36; // [rsp+F8h] [rbp-160h]
  int v37; // [rsp+FCh] [rbp-15Ch]
  __int64 v38; // [rsp+100h] [rbp-158h]
  char v39; // [rsp+108h] [rbp-150h]
  unsigned __int8 *v40[10]; // [rsp+110h] [rbp-148h] BYREF
  int v41; // [rsp+160h] [rbp-F8h]
  char v42; // [rsp+168h] [rbp-F0h]
  __int64 v43; // [rsp+170h] [rbp-E8h]
  void *ptr; // [rsp+180h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+188h] [rbp-D0h]
  _BYTE v46[192]; // [rsp+198h] [rbp-C0h] BYREF

  v2 = *(_DWORD *)(a2 + 24);
  if ( v2 )
  {
    sub_168B9F0((__int64)&v26, (__int64 *)(a1 + 8), v2, 0x1902u, 0);
    goto LABEL_3;
  }
  ptr = v46;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  v21 = 0;
  v19 = &off_2BEBEE0;
  v20 = 2;
  v23 = 0;
  v24 = 1;
  v22 = 0;
  p_ptr = &ptr;
  sub_227B8B0(&v19, 0, 0, 0);
  v7.m128i_i64[0] = sub_16043A0(*(_QWORD **)(a1 + 248), *(_QWORD **)(a1 + 240), v3, v4, v5, v6);
  v18 = v7;
  v18.m128i_i8[3] = v7.m128i_i8[3] | 0x80;
  sub_BB7900(a2, (__int64)&v19, &v18, 0, 0);
  sub_168B9F0((__int64)&v35, (__int64 *)(a1 + 8), *(_DWORD *)(a2 + 24), 0x1901u, 0);
  v8 = (signed __int64)p_ptr[1];
  v9 = *p_ptr;
  if ( v42 )
  {
    sub_AEC220(v40, *p_ptr, (signed __int64)p_ptr[1]);
    v10 = v42;
LABEL_10:
    v33 = 0;
    v26 = v35;
    v27 = v36;
    v28 = v37;
    v29 = v38;
    v30 = v39;
    if ( v10 )
    {
      sub_FC70F0((__int64)v31, (__int64)v40);
      v33 = 1;
      v31[9] = v40[9];
      v32 = v41;
    }
    goto LABEL_7;
  }
  if ( BYTE4(v43) )
  {
    v11 = sub_168B9E0(&v35);
    v15 = v38;
    if ( v38 )
    {
      v17 = v11;
      v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v38 + 32LL))(v38);
      v11 = v17;
    }
    v26 = v15;
    v16 = sub_1587BC0(v11, &v26, v11, v12, v13, v14);
    sub_AEC220((unsigned __int8 **)(*v16 + 32LL * (unsigned int)v43 + 8), v9, v8);
    v10 = v42;
    goto LABEL_10;
  }
  v33 = 0;
  v26 = v35;
  v27 = v36;
  v28 = v37;
  v29 = v38;
  v30 = v39;
LABEL_7:
  v34 = v43;
  sub_15F7200(&v35);
  v19 = (__int64 (__fastcall **)())&unk_2C76288;
  sub_227B7A0(&v19);
  if ( ptr != v46 )
    free(ptr);
LABEL_3:
  sub_15F7200(&v26);
}
