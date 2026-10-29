void __fastcall sub_1CCCAD0(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned int v4; // edx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 *v8; // r9
  __m128i v9; // rax
  signed __int64 v10; // r14
  _BYTE *v11; // r15
  char v12; // al
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  _QWORD *v18; // rax
  __int64 v19; // [rsp+8h] [rbp-260h]
  __int64 v20; // [rsp+10h] [rbp-258h] BYREF
  int v21; // [rsp+18h] [rbp-250h]
  __m128i v22; // [rsp+20h] [rbp-248h] BYREF
  __int64 (__fastcall **v23)(); // [rsp+30h] [rbp-238h] BYREF
  int v24; // [rsp+38h] [rbp-230h]
  __int128 v25; // [rsp+40h] [rbp-228h]
  __int64 v26; // [rsp+50h] [rbp-218h]
  char v27; // [rsp+58h] [rbp-210h]
  int v28; // [rsp+5Ch] [rbp-20Ch]
  void **p_ptr; // [rsp+60h] [rbp-208h]
  __int64 v30; // [rsp+70h] [rbp-1F8h] BYREF
  int v31; // [rsp+78h] [rbp-1F0h]
  int v32; // [rsp+7Ch] [rbp-1ECh]
  __int64 v33; // [rsp+80h] [rbp-1E8h]
  char v34; // [rsp+88h] [rbp-1E0h]
  _QWORD v35[10]; // [rsp+90h] [rbp-1D8h] BYREF
  int v36; // [rsp+E0h] [rbp-188h]
  char v37; // [rsp+E8h] [rbp-180h]
  __int64 v38; // [rsp+F0h] [rbp-178h]
  __int64 v39; // [rsp+100h] [rbp-168h] BYREF
  int v40; // [rsp+108h] [rbp-160h]
  int v41; // [rsp+10Ch] [rbp-15Ch]
  __int64 v42; // [rsp+110h] [rbp-158h]
  char v43; // [rsp+118h] [rbp-150h]
  unsigned __int8 *v44[10]; // [rsp+120h] [rbp-148h] BYREF
  int v45; // [rsp+170h] [rbp-F8h]
  char v46; // [rsp+178h] [rbp-F0h]
  __int64 v47; // [rsp+180h] [rbp-E8h]
  void *ptr; // [rsp+190h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+198h] [rbp-D0h]
  _BYTE v50[192]; // [rsp+1A8h] [rbp-C0h] BYREF

  v20 = a3;
  v4 = *(_DWORD *)(a2 + 24);
  v21 = a4;
  if ( v4 )
  {
    sub_168B9F0((__int64)&v30, (__int64 *)(a1 + 8), v4, 0x18F5u, 0);
    goto LABEL_3;
  }
  ptr = v50;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  v25 = 0;
  v23 = &off_2BEBEE0;
  v24 = 2;
  v27 = 0;
  v28 = 1;
  v26 = 0;
  p_ptr = &ptr;
  sub_227B8B0(&v23, 0, 0, 0);
  v9.m128i_i64[0] = sub_16043A0(*(_QWORD **)(a1 + 248), *(_QWORD **)(a1 + 240), v5, v6, v7, v8);
  v22 = v9;
  v22.m128i_i8[3] = v9.m128i_i8[3] | 0x80;
  sub_BB7900(a2, (__int64)&v23, &v22, 0, 0);
  sub_168B9F0((__int64)&v39, (__int64 *)(a1 + 8), *(_DWORD *)(a2 + 24), 0x18F4u, 0);
  v10 = (signed __int64)p_ptr[1];
  v11 = *p_ptr;
  if ( v46 )
  {
    sub_AEC220(v44, *p_ptr, (signed __int64)p_ptr[1]);
    v12 = v46;
LABEL_14:
    v37 = 0;
    v30 = v39;
    v31 = v40;
    v32 = v41;
    v33 = v42;
    v34 = v43;
    if ( v12 )
    {
      sub_FC70F0((__int64)v35, (__int64)v44);
      v37 = 1;
      v35[9] = v44[9];
      v36 = v45;
    }
    goto LABEL_11;
  }
  if ( BYTE4(v47) )
  {
    v13 = sub_168B9E0(&v39);
    v17 = v42;
    if ( v42 )
    {
      v19 = v13;
      v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v42 + 32LL))(v42);
      v13 = v19;
    }
    v30 = v17;
    v18 = sub_1587BC0(v13, &v30, v13, v14, v15, v16);
    sub_AEC220((unsigned __int8 **)(*v18 + 32LL * (unsigned int)v47 + 8), v11, v10);
    v12 = v46;
    goto LABEL_14;
  }
  v37 = 0;
  v30 = v39;
  v31 = v40;
  v32 = v41;
  v33 = v42;
  v34 = v43;
LABEL_11:
  v38 = v47;
  sub_15F7200(&v39);
  v23 = (__int64 (__fastcall **)())&unk_2C76288;
  sub_227B7A0(&v23);
  if ( ptr != v50 )
    free(ptr);
LABEL_3:
  if ( (_BYTE)v21 && (_DWORD)v20 && HIDWORD(v20) )
    sub_15884C0((__int64)&v30, &v20);
  sub_15F7200(&v30);
}
