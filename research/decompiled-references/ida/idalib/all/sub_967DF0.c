char *__fastcall sub_967DF0(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int64 a8)
{
  __int64 v8; // r13
  __int64 (__fastcall *v9)(__int64, size_t); // rbp
  void (__fastcall *v10)(__int64, char *); // r14
  unsigned int v12; // r12d
  char *v13; // rax
  char *v14; // rbx
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  pthread_mutex_t *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  pthread_mutex_t *v33; // rax
  pthread_mutex_t *v34; // rbp
  int v35; // r12d
  int v36; // r12d
  int v37; // ebp
  int v38; // eax
  bool v39; // zf
  bool v40; // dl
  _QWORD *v42; // rax
  __int128 v43; // [rsp-20h] [rbp-A8h]
  unsigned int v44; // [rsp+Ch] [rbp-7Ch] BYREF
  __int128 v45; // [rsp+10h] [rbp-78h]
  __int64 v46; // [rsp+20h] [rbp-68h]
  __int64 (__fastcall *v47)(__int64, size_t); // [rsp+30h] [rbp-58h]
  void (__fastcall *v48)(__int64, char *); // [rsp+38h] [rbp-50h]
  __int64 v49; // [rsp+40h] [rbp-48h]
  unsigned __int64 v50; // [rsp+48h] [rbp-40h]

  v8 = a8;
  v9 = (__int64 (__fastcall *)(__int64, size_t))a7;
  v50 = __readfsqword(0x28u);
  v10 = *((void (__fastcall **)(__int64, char *))&a7 + 1);
  v46 = a8;
  v45 = (__int128)_mm_loadu_si128((const __m128i *)&a7);
  v44 = a1 + 2;
  if ( !a1 || ((_QWORD)a7 != 0) != (*((_QWORD *)&a7 + 1) != 0) )
    return nullptr;
  v12 = a1;
  if ( (_QWORD)a7 )
  {
    v13 = (char *)((__int64 (__fastcall *)(__int64, __int64))a7)(a8, 3104);
    *(_QWORD *)v13 = 0;
    v14 = v13;
    *((_QWORD *)v13 + 387) = 0;
    memset(
      (void *)((unsigned __int64)(v13 + 8) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * (((unsigned int)v13 - (((_DWORD)v13 + 8) & 0xFFFFFFF8) + 3104) >> 3));
  }
  else
  {
    v14 = (char *)calloc(1u, 0xC20u);
  }
  if ( !v14 )
    return nullptr;
  v15 = 400;
  if ( a1 > 0x100 )
    v12 = 256;
  sub_911150((__int64)(v14 + 40), 0x190u, v12);
  *((_QWORD *)v14 + 382) = v9;
  *((_QWORD *)v14 + 383) = v10;
  *((_QWORD *)v14 + 384) = v8;
  *((_DWORD *)v14 + 756) = 1;
  if ( a2 )
  {
    v14[3096] |= 1u;
    *(_QWORD *)v14 = a2;
  }
  else
  {
    v15 = 0;
    v42 = sub_902FB0(v12, 0, v16, v17, v18, v19, v45, v46);
    v14[3096] &= ~1u;
    *(_QWORD *)v14 = v42;
  }
  *(_QWORD *)&v45 = v9;
  *((_QWORD *)&v45 + 1) = v10;
  v46 = v8;
  *((_QWORD *)v14 + 1) = sub_966F00(&v44, v15, v16, v17, v18, v19, v9, v10, v8);
  *((_DWORD *)v14 + 752) = v44 - 1;
  *((_QWORD *)v14 + 2) = sub_967180(2 * v12 + 3, v15, v20, v21, v22, v23, v45, v46);
  v28 = sub_967020(v12, v15, v24, v25, v26, v27, v45, v46);
  v47 = v9;
  v48 = v10;
  v49 = v8;
  *((_QWORD *)v14 + 3) = v28;
  *((_QWORD *)&v43 + 1) = v48;
  *(_QWORD *)&v43 = v9;
  v33 = (pthread_mutex_t *)sub_967180(v12, v15, v29, v30, v31, v32, v43, v49);
  v34 = v33;
  if ( v33 )
  {
    pthread_mutex_lock(v33);
    v34[1].__align = 0;
    pthread_mutex_unlock(v34);
  }
  *((_QWORD *)v14 + 4) = v34;
  *((_QWORD *)v14 + 43) = 0;
  *((_QWORD *)v14 + 372) = 0;
  memset(
    (void *)((unsigned __int64)(v14 + 352) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((_DWORD)v14 + 344 - (((_DWORD)v14 + 352) & 0xFFFFFFF8) + 2640) >> 3));
  v35 = pthread_mutex_init((pthread_mutex_t *)(v14 + 344), nullptr);
  v36 = pthread_cond_init((pthread_cond_t *)v14 + 8, nullptr) | v35;
  v37 = pthread_mutex_init((pthread_mutex_t *)(v14 + 2856), nullptr);
  v38 = pthread_cond_init((pthread_cond_t *)(v14 + 2896), nullptr);
  v39 = *(_QWORD *)v14 == 0;
  *((_QWORD *)v14 + 40) = 0;
  *((_QWORD *)v14 + 41) = 0;
  v40 = v39;
  v39 = *((_QWORD *)v14 + 1) == 0;
  *((_QWORD *)v14 + 42) = 0;
  if ( v38
     | v37
     | v36
     | (*((_QWORD *)v14 + 4) == 0 || *((_QWORD *)v14 + 3) == 0 || *((_QWORD *)v14 + 2) == 0 || v39 || v40) )
  {
    sub_967C50(v14);
    return nullptr;
  }
  return v14;
}
