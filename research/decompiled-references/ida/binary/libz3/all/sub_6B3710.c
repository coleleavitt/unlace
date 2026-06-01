void __fastcall sub_6B3710(__int64 a1, int a2, __int64 *a3, __int64 *a4)
{
  __int64 *v4; // rbx
  __int64 v6; // r15
  _QWORD *v7; // r13
  _QWORD *v8; // r12
  __m128i v9; // xmm0
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rdx
  unsigned int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  __int64 *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned int v20; // eax
  __int64 v21; // rsi
  int v22; // eax
  _QWORD *v23; // rsi
  __int64 v24; // rcx
  __int64 v25; // rsi
  __int64 v26; // rdi
  int v28; // edx
  __int64 v29; // r8
  __int64 v30; // rax
  __int64 v31; // rbx
  unsigned int v32; // edx
  size_t v33; // rsi
  _DWORD *v34; // rax
  __int64 v35; // rsi
  unsigned int v36; // ecx
  size_t v37; // rsi
  __int64 v38; // rax
  _QWORD *v39; // rax
  _QWORD *v40; // rax
  char **exception; // r14
  char **v42; // r14
  __int64 v43; // [rsp+0h] [rbp-160h]
  __int64 v44; // [rsp+8h] [rbp-158h]
  __int64 v45; // [rsp+10h] [rbp-150h]
  unsigned __int64 *v46; // [rsp+28h] [rbp-138h]
  __int64 v48; // [rsp+40h] [rbp-120h]
  __int64 v49; // [rsp+50h] [rbp-110h] BYREF
  __int64 v50; // [rsp+58h] [rbp-108h] BYREF
  __int64 v51[4]; // [rsp+60h] [rbp-100h] BYREF
  int v52[4]; // [rsp+80h] [rbp-E0h] BYREF
  _QWORD v53[2]; // [rsp+90h] [rbp-D0h] BYREF
  _QWORD *v54; // [rsp+A0h] [rbp-C0h] BYREF
  __int64 (__fastcall **v55)(); // [rsp+A8h] [rbp-B8h]
  __int64 v56; // [rsp+B8h] [rbp-A8h]
  void *v57; // [rsp+C0h] [rbp-A0h]
  __int64 v58; // [rsp+D0h] [rbp-90h]
  void *v59; // [rsp+D8h] [rbp-88h]
  __int64 (__fastcall **v60)(); // [rsp+E0h] [rbp-80h]
  __int64 v61; // [rsp+F0h] [rbp-70h]
  void *v62; // [rsp+F8h] [rbp-68h]
  __int64 v63; // [rsp+108h] [rbp-58h]
  void *ptr; // [rsp+110h] [rbp-50h]
  __int64 v65[2]; // [rsp+118h] [rbp-48h] BYREF
  char v66; // [rsp+128h] [rbp-38h]

  if ( !a2 )
    return;
  v4 = a3;
  v6 = 0;
  v7 = nullptr;
  v8 = nullptr;
  v48 = *(_QWORD *)(a1 + 8);
  v9 = (__m128i)(unsigned __int64)v48;
  v46 = (unsigned __int64 *)&a3[a2];
  while ( 1 )
  {
    v10 = *v4;
    *(__m128i *)v52 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v4, v9);
    if ( v10 )
      ++*(_DWORD *)(v10 + 8);
    v11 = *a4;
    v53[1] = v10;
    v66 = 1;
    v53[0] = &off_1C4E7B8;
    v54 = v53;
    v56 = 0;
    v55 = &off_1C62200;
    v57 = nullptr;
    v58 = 0;
    v59 = nullptr;
    v60 = &off_1C62200;
    v61 = 0;
    v62 = nullptr;
    v63 = 0;
    ptr = nullptr;
    v65[1] = 0;
    v65[0] = v9.m128i_i64[0];
    if ( (unsigned __int8)sub_168D740(&v54, v11) )
    {
      v12 = sub_15D1F10(*v4);
      v13 = v12;
      if ( v8 )
      {
        v14 = *((_DWORD *)v8 - 1);
        if ( v14 == *((_DWORD *)v8 - 2) )
        {
          v36 = (3 * v14 + 1) >> 1;
          v37 = 8 * v36 + 8;
          if ( 8 * v14 + 8 >= (unsigned int)v37 || v14 >= v36 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_6A99E0(v51, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v51);
            sub_233E40((__int64)v51);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          HIDWORD(v44) = (3 * v14 + 1) >> 1;
          v45 = v13;
          v38 = sub_186B300(v8 - 1, v37);
          v8 = (_QWORD *)(v38 + 8);
          v13 = v45;
          *(_DWORD *)v38 = HIDWORD(v44);
          LODWORD(v38) = *(_DWORD *)(v38 + 4);
          v17 = &v8[(unsigned int)v38];
          v16 = v38 + 1;
        }
        else
        {
          v15 = v14;
          v16 = v14 + 1;
          v17 = &v8[v15];
        }
      }
      else
      {
        v45 = v12;
        v40 = (_QWORD *)sub_186B270(0x18u);
        v8 = v40 + 1;
        *v40 = 2;
        v13 = v45;
        v16 = 1;
        v17 = v8;
      }
      *v17 = v13;
      v18 = *v4;
      *((_DWORD *)v8 - 1) = v16;
      v19 = *(_QWORD *)(v18 + 16);
      if ( v7 )
      {
        v20 = *((_DWORD *)v7 - 1);
        if ( v20 == *((_DWORD *)v7 - 2) )
        {
          v32 = (3 * v20 + 1) >> 1;
          v33 = 8 * v32 + 8;
          if ( 8 * v20 + 8 >= (unsigned int)v33 || v20 >= v32 )
          {
            v42 = (char **)__cxa_allocate_exception(0x28u);
            sub_6A99E0(v51, "Overflow encountered when expanding vector");
            *v42 = (char *)off_1C63128;
            sub_2333C0(v42 + 1, v51);
            sub_233E40((__int64)v51);
            __cxa_throw(v42, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          HIDWORD(v44) = (3 * v20 + 1) >> 1;
          v45 = v19;
          v34 = (_DWORD *)sub_186B300(v7 - 1, v33);
          v35 = (unsigned int)v34[1];
          v7 = v34 + 2;
          v19 = v45;
          *v34 = HIDWORD(v44);
          LODWORD(v34) = v35;
          v18 = *v4;
          v23 = &v7[v35];
          v22 = (_DWORD)v34 + 1;
        }
        else
        {
          v21 = v20;
          v22 = v20 + 1;
          v23 = &v7[v21];
        }
      }
      else
      {
        v45 = *(_QWORD *)(v18 + 16);
        v39 = (_QWORD *)sub_186B270(0x18u);
        v7 = v39 + 1;
        *v39 = 2;
        v18 = *v4;
        v22 = 1;
        v19 = v45;
        v23 = v7;
      }
      v24 = *(_QWORD *)(v19 + 16);
      v51[0] = v18;
      *v23 = v24;
      *((_DWORD *)v7 - 1) = v22;
      if ( v18 )
        ++*(_DWORD *)(v18 + 8);
      v50 = v6;
      v49 = v48;
      sub_6ACAE0(&v50, v51);
      v6 = v50;
    }
    sub_2334C0(v65);
    v60 = &off_1C62200;
    if ( ptr )
      sub_186B220(ptr);
    if ( v62 )
      sub_186B220(v62);
    v55 = &off_1C62200;
    if ( v59 )
      sub_186B220(v59);
    if ( v57 )
      sub_186B220(v57);
    v25 = *(_QWORD *)v52;
    if ( *(_QWORD *)v52 )
    {
      v26 = *(_QWORD *)&v52[2];
      if ( (*(_DWORD *)(*(_QWORD *)v52 + 8LL))-- == 1 )
        break;
    }
    if ( ++v4 == (__int64 *)v46 )
      goto LABEL_28;
LABEL_4:
    v9 = _mm_loadl_epi64((const __m128i *)(a1 + 8));
  }
  sub_15D7BC0(v26, v25);
  if ( ++v4 != (__int64 *)v46 )
    goto LABEL_4;
LABEL_28:
  if ( v6 )
  {
    v28 = *(_DWORD *)(v6 - 4);
    if ( v28 )
    {
      v29 = *a4;
      *(_QWORD *)v52 = 0;
      *(_QWORD *)&v52[2] = v48;
      sub_1697FC0(v48, 0, v28, v6, v29, (int)v52, v43, v44, v45, (__int64)&v54, v53);
      v30 = sub_15DB6A0(
              *(_QWORD *)(a1 + 8),
              1,
              *(unsigned int *)(v6 - 4),
              v8,
              v7,
              *(_QWORD *)v52,
              1,
              &qword_18D6CD0,
              &qword_18D6CD0,
              0,
              0,
              0,
              0);
      v31 = v30;
      if ( v30 )
        ++*(_DWORD *)(v30 + 8);
      sub_6A99C0(*a4, a4[1]);
      *a4 = v31;
      sub_6A99C0(*(__int64 *)v52, *(__int64 *)&v52[2]);
    }
  }
  v50 = v6;
  v49 = v48;
  sub_2B4F40(&v49);
  if ( v7 )
    sub_186B220(v7 - 1);
  if ( v8 )
    sub_186B220(v8 - 1);
}

