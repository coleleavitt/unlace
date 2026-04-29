__int64 __fastcall sub_1136B0(__m128i *a1, _DWORD *a2)
{
  unsigned int v2; // ebp
  __m128i v6; // xmm0
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  char v10; // bp
  __int64 v11; // r13
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned int v17; // r12d
  int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // ecx
  char v21; // r11
  __int64 v22; // rbp
  int v23; // eax
  __int64 v24; // rsi
  int v25; // ecx
  int v26; // eax
  _QWORD *v27; // rdi
  int v28; // eax
  int v29; // [rsp+0h] [rbp-C8h]
  int *v30; // [rsp+0h] [rbp-C8h]
  unsigned int v31; // [rsp+8h] [rbp-C0h]
  __int64 v32; // [rsp+8h] [rbp-C0h]
  unsigned int v33; // [rsp+8h] [rbp-C0h]
  unsigned int v34; // [rsp+10h] [rbp-B8h]
  int v35; // [rsp+14h] [rbp-B4h]
  char v36; // [rsp+14h] [rbp-B4h]
  unsigned int *v37; // [rsp+18h] [rbp-B0h]
  __int64 v38; // [rsp+20h] [rbp-A8h]
  int v39; // [rsp+28h] [rbp-A0h]
  int v40; // [rsp+2Ch] [rbp-9Ch]
  __m128i v41; // [rsp+30h] [rbp-98h] BYREF
  __int128 v42; // [rsp+40h] [rbp-88h]
  _DWORD *v43; // [rsp+50h] [rbp-78h]
  int *v44; // [rsp+58h] [rbp-70h]
  unsigned int *v45; // [rsp+60h] [rbp-68h]
  __int16 v46; // [rsp+68h] [rbp-60h]
  __int64 v47; // [rsp+6Ch] [rbp-5Ch]
  __int64 v48; // [rsp+74h] [rbp-54h]
  unsigned __int64 v49; // [rsp+88h] [rbp-40h]

  v49 = __readfsqword(0x28u);
  if ( a1[4].m128i_i32[3] != 4 )
    return 0;
  if ( a1[3].m128i_i64[1] != (_QWORD)a2 || *(_BYTE *)(a1[3].m128i_i64[1] + 64) != 7 )
    return 0;
  if ( (unsigned int)(*a2 - 43) > 9 )
    return 0;
  v43 = a2;
  v6 = _mm_loadl_epi64(a1 + 4);
  v46 = 0;
  v42 = 0;
  v47 = 0;
  v48 = 0;
  v44 = nullptr;
  v45 = nullptr;
  v41 = _mm_unpacklo_epi64(v6, (__m128i)(unsigned __int64)a1);
  if ( !(unsigned __int8)sub_1132B0(v41.m128i_i64, 1) )
    return 0;
  v10 = sub_1134B0(v41.m128i_i64, 0, v7, v8, v9);
  if ( !v10 )
    return 0;
  v11 = *((_QWORD *)&v42 + 1);
  v12 = *(_QWORD *)(*((_QWORD *)&v42 + 1) + 8LL);
  v29 = *(_DWORD *)(sub_1120C0(v12, 0) + 72);
  v37 = v45;
  v15 = v45[18];
  if ( (unsigned int)v15 >= *(_DWORD *)(v41.m128i_i64[0] + 64) )
    sub_111110(v12, 0, v13, v41.m128i_i64[0], v14);
  v16 = sub_1120C0(*(_QWORD *)(*(_QWORD *)(v41.m128i_i64[0] + 528) + 8 * v15), 0);
  v17 = v48;
  v35 = *(_DWORD *)(v16 + 72);
  v18 = sub_32EAF0((unsigned int)v48);
  v34 = HIDWORD(v48);
  if ( v17 != v18 )
  {
    v34 = sub_32EA20(HIDWORD(v48));
    HIDWORD(v48) = v34;
  }
  v19 = sub_32EC60(v34);
  v20 = v19;
  if ( (_DWORD)v47 )
  {
    if ( v29 == (_DWORD)v47 )
    {
      v20 = sub_32EA00(v19);
      v29 = v35;
    }
    else if ( v35 != (_DWORD)v47 )
    {
      return 0;
    }
    v31 = v20;
    if ( (unsigned int)sub_32EA00(v17) == v20 )
    {
      v21 = v10;
    }
    else
    {
      if ( v17 != v31 )
        return 0;
      v21 = 0;
    }
  }
  else
  {
    v33 = v19;
    if ( v19 == (unsigned int)sub_32EA00(v17) )
    {
      v21 = v10;
      v29 = v35;
    }
    else
    {
      if ( v17 != v33 )
        return 0;
      v21 = 0;
    }
  }
  if ( HIDWORD(v47) && HIDWORD(v47) != v29 )
    return 0;
  v36 = v21;
  v30 = v44;
  v22 = (__int64)(v44 + 12);
  v32 = (__int64)(v44 + 8);
  v38 = *(_QWORD *)(a1[30].m128i_i64[0] + 112);
  v39 = sub_32E9E0(v17);
  v40 = sub_32EA00(v17);
  v23 = sub_32EBC0(v17);
  v24 = v32;
  v25 = *v30;
  if ( (unsigned int)(*v30 - 43) <= 1 )
  {
    v24 = v22;
    LODWORD(v22) = v32;
    v26 = 2;
  }
  else if ( v25 == v17 || v39 == v25 )
  {
    v26 = 0;
  }
  else
  {
    if ( v40 != v25 && v23 != v25 )
      return 0;
    v24 = v22;
    LODWORD(v22) = v32;
    v26 = 0;
  }
  if ( (unsigned int)sub_130480(v38, (_DWORD)a1, (_DWORD)a2, (_DWORD)a2, (_DWORD)a2, v22, v24, v26) )
  {
    v2 = sub_111A30((__int64)v37, a1, (__int64)a2, (__int64)a2, (__int64)v37, v36 == 0 ? 3 : 7);
    if ( (_BYTE)v2 )
    {
      v27 = (_QWORD *)v41.m128i_i64[1];
      *v37 = v34;
      sub_111130(v27);
      sub_111130((_QWORD *)v42);
      sub_111130((_QWORD *)v11);
      v28 = *(_DWORD *)(v11 + 24);
      BYTE1(v28) &= ~2u;
      LOBYTE(v28) = v28 | 0x80;
      *(_DWORD *)(v11 + 24) = v28;
      sub_113680((__int64)&v41, 0);
      sub_113680((__int64)&v41, 1);
      *(_DWORD *)a1[4].m128i_i64[0] |= 0x400u;
      sub_66FA0(a1[4].m128i_i64[0], 1u, (__int64)"3CHECK64 (%d)", *(_DWORD *)(v11 + 72));
      return v2;
    }
  }
  return 0;
}
