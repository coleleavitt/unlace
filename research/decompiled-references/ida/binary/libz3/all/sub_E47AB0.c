_QWORD *__fastcall sub_E47AB0(__int64 a1, __int64 a2, __int64 a3)
{
  char **exception; // rbp
  _DWORD *v4; // r13
  __int64 (__fastcall *v5)(__int64); // rax
  _QWORD *v6; // rax
  char v7; // r14
  __int16 v8; // r15
  _QWORD *v9; // rbx
  __int64 v10; // rax
  _DWORD *v11; // r13
  unsigned __int64 v13; // r13
  _OWORD *v14; // rax
  unsigned int v15; // r14d
  __int64 v16; // rax
  __int64 v17; // r13
  _QWORD *v18; // rdx
  unsigned int v19; // eax
  __int64 v20; // rcx
  int v21; // eax
  __int64 *v22; // rcx
  unsigned int v24; // r15d
  size_t v25; // rsi
  unsigned int *v26; // rax
  __int64 v27; // rcx
  _QWORD *v28; // rax
  __int64 v30[4]; // [rsp+20h] [rbp-B8h] BYREF
  _OWORD v31[2]; // [rsp+40h] [rbp-98h] BYREF
  __int64 v32; // [rsp+60h] [rbp-78h]
  _OWORD *v33; // [rsp+68h] [rbp-70h]
  __int64 v34; // [rsp+70h] [rbp-68h]
  int v35; // [rsp+78h] [rbp-60h]
  __int128 v36; // [rsp+80h] [rbp-58h]
  int v37; // [rsp+90h] [rbp-48h]

  v4 = *(_DWORD **)(a1 + 176);
  v5 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 184LL);
  if ( v5 != sub_E1B790 )
    v4 = (_DWORD *)v5((__int64)v4);
  v6 = (_QWORD *)sub_186B270(0xE8u);
  v7 = *(_BYTE *)(a1 + 202);
  v8 = *(_WORD *)(a1 + 200);
  v9 = v6;
  sub_E1F060(v6, a2);
  v9[15] = a2;
  *v9 = &off_1C767A0;
  v9[9] = off_1C769B0;
  v9[16] = 0;
  v9[17] = a2;
  v9[18] = 0;
  *((_DWORD *)v9 + 38) = 0;
  v9[23] = 0;
  *((_BYTE *)v9 + 224) = 0;
  *((_OWORD *)v9 + 10) = 0;
  *((_OWORD *)v9 + 13) = 0;
  if ( v4 )
    ++v4[2];
  v10 = *(_QWORD *)(a1 + 192);
  v9[22] = v4;
  v9[24] = v10;
  sub_E5E9C0(v9, a3);
  v11 = (_DWORD *)v9[21];
  *((_WORD *)v9 + 100) = v8;
  *((_BYTE *)v9 + 202) = v7;
  if ( v11 )
  {
    if ( v11[12]-- == 1 )
    {
      (**(void (__fastcall ***)(_DWORD *))v11)(v11);
      sub_186B220(v11);
    }
  }
  v13 = *(_QWORD *)(a1 + 120);
  v9[21] = 0;
  v32 = 0;
  v31[0] = _mm_unpacklo_epi64((__m128i)v13, (__m128i)(unsigned __int64)a2);
  v31[1] = 0;
  v14 = (_OWORD *)sub_186B270(0x80u);
  v33 = v14;
  *v14 = 0;
  v14[1] = 0;
  v14[2] = 0;
  v14[3] = 0;
  v14[4] = 0;
  v14[5] = 0;
  v14[6] = 0;
  v14[7] = 0;
  v34 = 8;
  v35 = 0;
  v37 = 0;
  v36 = 0;
  if ( a2 != v13 )
    sub_15D2280(*((_QWORD *)&v31[0] + 1), *(_QWORD *)&v31[0]);
  v15 = 0;
  while ( *(_DWORD *)(a1 + 152) )
  {
    v16 = *(_QWORD *)(a1 + 144);
    if ( !v16 )
      goto LABEL_23;
LABEL_12:
    if ( v15 >= *(_DWORD *)(v16 - 4) )
      goto LABEL_23;
    v17 = *(_QWORD *)(v16 + 8LL * v15);
    if ( *((_QWORD *)&v31[0] + 1) != *(_QWORD *)&v31[0] )
      v17 = sub_15CFF50(v31, v17);
    if ( v17 )
      ++*(_DWORD *)(v17 + 8);
    v18 = (_QWORD *)v9[16];
    if ( v18 )
    {
      v19 = *((_DWORD *)v18 - 1);
      if ( v19 == *((_DWORD *)v18 - 2) )
      {
        v24 = (3 * v19 + 1) >> 1;
        v25 = 8 * v24 + 8;
        if ( 8 * v19 + 8 >= (unsigned int)v25 || v19 >= v24 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v30, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v30);
          sub_233E40((__int64)v30);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v26 = (unsigned int *)sub_186B300(v18 - 1, v25);
        v27 = v26[1];
        v18 = v26 + 2;
        *v26 = v24;
        v9[16] = v26 + 2;
        LODWORD(v26) = v27;
        v22 = &v18[v27];
        v21 = (_DWORD)v26 + 1;
      }
      else
      {
        v20 = v19;
        v21 = v19 + 1;
        v22 = &v18[v20];
      }
    }
    else
    {
      v28 = (_QWORD *)sub_186B270(0x18u);
      v18 = v28 + 1;
      *v28 = 2;
      v21 = 1;
      v9[16] = v18;
      v22 = v18;
    }
    *v22 = v17;
    ++v15;
    *((_DWORD *)v18 - 1) = v21;
  }
  v16 = *(_QWORD *)(a1 + 128);
  if ( v16 )
    goto LABEL_12;
LABEL_23:
  sub_15CE760(v31);
  return v9;
}

