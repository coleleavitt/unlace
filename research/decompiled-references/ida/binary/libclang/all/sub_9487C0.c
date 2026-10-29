__int64 __fastcall sub_9487C0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r14
  _QWORD *v5; // rax
  __int64 v6; // r13
  _QWORD *v7; // r15
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbp
  __int64 v12; // r15
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD *v15; // rsi
  __int64 v16; // r15
  unsigned int v17; // eax
  __int64 v18; // rsi
  __int64 v19; // rax
  unsigned int v20; // ebx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned __int8 **v27; // [rsp+8h] [rbp-150h]
  __int64 v28; // [rsp+28h] [rbp-130h] BYREF
  __int64 v29[4]; // [rsp+30h] [rbp-128h] BYREF
  __int64 v30[4]; // [rsp+50h] [rbp-108h] BYREF
  void *v31; // [rsp+70h] [rbp-E8h] BYREF
  size_t v32; // [rsp+78h] [rbp-E0h]
  _QWORD v33[2]; // [rsp+80h] [rbp-D8h] BYREF
  void *v34; // [rsp+90h] [rbp-C8h] BYREF
  size_t v35; // [rsp+98h] [rbp-C0h]
  _QWORD v36[2]; // [rsp+A0h] [rbp-B8h] BYREF
  void *ptr; // [rsp+B0h] [rbp-A8h] BYREF
  __m128i si128; // [rsp+B8h] [rbp-A0h]
  _BYTE v39[24]; // [rsp+C8h] [rbp-90h] BYREF
  void *v40; // [rsp+E0h] [rbp-78h] BYREF
  unsigned int v41; // [rsp+E8h] [rbp-70h]
  __int128 v42; // [rsp+F0h] [rbp-68h]
  __int64 v43; // [rsp+100h] [rbp-58h]
  char v44; // [rsp+108h] [rbp-50h]
  int v45; // [rsp+10Ch] [rbp-4Ch]
  void **v46; // [rsp+110h] [rbp-48h]

  v4 = *(_QWORD *)(a1 + 184);
  v5 = (_QWORD *)sub_A1A5A0(v4, 24);
  v6 = *v5;
  v7 = v5;
  v11 = sub_2575D20(v4, 24, v8);
  if ( v6 == v11 )
    sub_257D000(v29, v7, v9, v10);
  else
    sub_2576960(v29, v7);
  sub_A1A5E0(v4, 24);
  v12 = *(_QWORD *)(a1 + 184);
  v15 = (_QWORD *)sub_A1A5A0(v12, 24);
  if ( v11 == *v15 )
    sub_257D000(v30, v15, v13, v14);
  else
    sub_2576960(v30, v15);
  sub_A1A5E0(v12, 24);
  v16 = sub_A1A5A0(*(_QWORD *)(a1 + 184), 56);
  if ( v30[0] == v11 )
    v17 = sub_257E370(v30, v29);
  else
    v17 = sub_2577560(v30, v29);
  v18 = *((unsigned __int8 *)&dword_3C9A374 + v17);
  if ( (_BYTE)v18 == 4 )
  {
    v28 = sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
    v27 = (unsigned __int8 **)sub_A2E0C0(a1, &v28, 2271, 0);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
    v31 = v33;
    v32 = 0;
    LOBYTE(v33[0]) = 0;
    v40 = &off_49DA2C8;
    v41 = 0;
    v44 = 0;
    v45 = 1;
    v43 = 0;
    v46 = &v31;
    v42 = 0;
    sub_2623850(&v40, 0, 0, 0, v22, v23);
    ptr = v39;
    si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E9C0);
    if ( v11 == v30[0] )
      sub_2584F50(v30, &ptr, 0, 3, 1);
    else
      sub_2584B70(v30, &ptr, 0, 3, 1);
    sub_26240F0(&v40, ptr, si128.m128i_i64[0]);
    if ( ptr != v39 )
      free(ptr);
    v40 = &off_49DA2C8;
    sub_2623770(&v40);
    if ( v27 )
      sub_838D50(v27, v31, v32);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
    v34 = v36;
    v35 = 0;
    v40 = &off_49DA2C8;
    LOBYTE(v36[0]) = 0;
    v41 = 0;
    v44 = 0;
    v45 = 1;
    v43 = 0;
    v46 = &v34;
    v42 = 0;
    sub_2623850(&v40, 0, 0, 0, v24, v25);
    ptr = v39;
    si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E9C0);
    if ( v11 == v29[0] )
      sub_2584F50(v29, &ptr, 0, 3, 1);
    else
      sub_2584B70(v29, &ptr, 0, 3, 1);
    sub_26240F0(&v40, ptr, si128.m128i_i64[0]);
    if ( ptr != v39 )
      free(ptr);
    v40 = &off_49DA2C8;
    sub_2623770(&v40);
    if ( v27 )
      sub_838D50(v27, v34, v35);
    if ( v34 != v36 )
      operator delete(v34, v36[0] + 1LL);
    if ( v31 != v33 )
      operator delete(v31, v33[0] + 1LL);
    v20 = 0;
  }
  else
  {
    if ( *(_BYTE *)(a3 + 112) != 2 && !(_BYTE)v18 )
      v18 = 1;
    v19 = sub_B9AC80(a3, v18);
    sub_B99210(&v40, v19);
    v20 = sub_987D60(a1, a2, v16, &v40);
    if ( v41 > 0x40 && v40 )
      operator delete[](v40);
  }
  sub_5FF3B0(v30);
  sub_5FF3B0(v29);
  return v20;
}

