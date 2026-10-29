void __fastcall sub_16DB700(__int64 a1, __int64 a2, __int64 a3, __m128i a4, double a5)
{
  __int64 v6; // rbp
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // rax
  int v9; // r15d
  unsigned __int64 v10; // rbp
  unsigned int v11; // eax
  __int16 v12; // ax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r15
  unsigned int v15; // eax
  __int64 v16; // rax
  __int64 v17; // r15
  unsigned __int64 v18; // r15
  size_t v19; // r14
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 *v23; // r9
  __int64 v24; // rdx
  unsigned int v25; // eax
  __int64 v26; // r13
  _BYTE *v27; // r14
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  _QWORD *v34; // rax
  __int64 *v35; // [rsp+0h] [rbp-210h]
  unsigned __int64 v36; // [rsp+8h] [rbp-208h]
  __int64 v37; // [rsp+10h] [rbp-200h]
  __int64 (__fastcall **v38)(); // [rsp+28h] [rbp-1E8h] BYREF
  int v39; // [rsp+30h] [rbp-1E0h]
  __int128 v40; // [rsp+38h] [rbp-1D8h]
  __int64 v41; // [rsp+48h] [rbp-1C8h]
  char v42; // [rsp+50h] [rbp-1C0h]
  int v43; // [rsp+54h] [rbp-1BCh]
  void **p_ptr; // [rsp+58h] [rbp-1B8h]
  __int64 v45[3]; // [rsp+68h] [rbp-1A8h] BYREF
  void *v46; // [rsp+80h] [rbp-190h]
  __int64 v47; // [rsp+90h] [rbp-180h] BYREF
  __m128i v48[9]; // [rsp+A8h] [rbp-168h] BYREF
  void *ptr; // [rsp+138h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+140h] [rbp-D0h]
  _BYTE v51[192]; // [rsp+150h] [rbp-C0h] BYREF

  if ( (unsigned int)(*(_DWORD *)(a2 + 16) - 3) <= 1 )
  {
    v6 = 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL);
    v7 = sub_16B67E0(*(_QWORD *)(a2 + v6 + 40));
    v8 = sub_16B67E0(*(_QWORD *)(a2 + v6 + 48));
    v9 = *(_DWORD *)(a2 + 20);
    v10 = v8;
    v11 = sub_BF6D70(a2);
    if ( !(unsigned __int8)sub_16D92B0(a1, v10, a3, v11, v9, a4, a5) )
    {
      v12 = *(_WORD *)v10 & 0x1FF;
      if ( v12 == 5 )
      {
        if ( (*(_BYTE *)(v10 + 2) & 0x78) != 0 )
          return;
        if ( *(char *)(v10 + 2) < 0 )
          return;
        v13 = sub_BFBAE0(*(_QWORD *)(v10 + 16));
        if ( !v13 )
          return;
      }
      else
      {
        if ( ((v12 + 423) & 0x1FFu) > 4 )
          return;
        if ( (unsigned int)sub_BFBE70(v10) != 1243 )
          return;
        if ( *(_DWORD *)(v10 + 16) != 1 )
          return;
        v13 = sub_16B67E0(*(_QWORD *)(v10 + 8 * (((*(_BYTE *)(v10 + 2) & 8) != 0) + 1LL) + 32));
        if ( !v13 )
          return;
      }
      if ( (*(_WORD *)v7 & 0x1FF) == 0x47
        && (*(_WORD *)v13 & 0x1FF) == 0x47
        && *(_QWORD *)(v7 + 16) == *(_QWORD *)(v13 + 16) )
      {
        v35 = (__int64 *)(a1 + 8);
        v14 = *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 48);
        v36 = v14;
        v15 = sub_16C50A0(v13);
        sub_168B9F0((__int64)&ptr, (__int64 *)(a1 + 8), v15, 0x1CDFu, 0);
        v48[0].m128i_i64[0] = sub_EEC8C0(v14, a1 + 8, *(double *)a4.m128i_i64);
        v16 = sub_1587DB0((__int64)&ptr, v48[0].m128i_i64);
        v17 = v16;
        if ( *(_BYTE *)(v16 + 120) )
        {
          sub_AE9DF0((unsigned __int8 **)(v16 + 32), a3, 5u);
        }
        else if ( *(_BYTE *)(v16 + 132) )
        {
          v30 = sub_168B9E0((_QWORD *)v16);
          v33 = *(_QWORD *)(v17 + 16);
          if ( v33 )
          {
            v37 = v30;
            v33 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v33 + 32LL))(v33);
            v30 = v37;
          }
          v45[0] = v33;
          v34 = sub_1587BC0(v30, v45, v29, v30, v31, v32);
          sub_AE9DF0((unsigned __int8 **)(*v34 + 32LL * *(unsigned int *)(v17 + 128) + 8), a3, 5u);
        }
        sub_15F7200(&ptr);
        v18 = sub_BFBAE0(*(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32));
        if ( sub_16B6E30(*(_QWORD *)(v18 + 8), *(_QWORD **)(a1 + 248)) )
        {
          v39 = 2;
          ptr = v51;
          si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
          v40 = 0;
          v38 = &off_2BEBEE0;
          v42 = 0;
          v43 = 1;
          v41 = 0;
          p_ptr = &ptr;
          sub_A1F700(&v38);
          sub_995540((__int64)&v38, "sizeof(");
          v19 = j__strlen("\n");
          v48[0].m128i_i64[0] = sub_16043A0(*(_QWORD **)(a1 + 248), *(_QWORD **)(a1 + 240), v20, v21, v22, v23);
          v48[0].m128i_i64[1] = v24;
          sub_F07C00((char *)v18, (__int64)&v38, 0, v48, 0, 0, "\n", v19);
          sub_995540((__int64)&v38, ")");
          v25 = sub_EEB7E0(v36, (__int64)")", 0.0);
          sub_168B9F0((__int64)v48, v35, v25, 0x18E1u, 0);
          v26 = (__int64)p_ptr[1];
          v27 = *p_ptr;
          v28 = sub_EEC8C0(v36, (__int64)v35, 0.0);
          sub_16BA3D0((__int64)v45, v28, 1, v27, v26);
          sub_1589170((__int64)v48, v45);
          if ( v46 != &v47 )
            operator delete(v46);
          sub_15F7200(v48);
          v38 = (__int64 (__fastcall **)())&unk_2C76288;
          sub_227B7A0(&v38);
          if ( ptr != v51 )
            free(ptr);
        }
      }
    }
  }
}
