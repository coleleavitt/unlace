__int64 __fastcall sub_A915E0(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned __int8 a4,
        unsigned __int8 a5,
        __int64 *a6,
        __int64 a7,
        __int64 a8,
        char a9)
{
  int v10; // r13d
  unsigned __int8 v11; // r8
  int v12; // r12d
  void **p_ptr; // rsi
  __int64 v14; // r12
  unsigned __int64 v15; // r12
  unsigned __int64 v17; // r12
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // r8
  int v21; // eax
  int v22; // esi
  __int64 v23; // rcx
  __int64 v24; // rbp
  __int64 v25; // rax
  __int64 (__fastcall *v26)(__int64); // rax
  __int64 v27; // r12
  void **v28; // [rsp-10h] [rbp-2B8h]
  _QWORD *v30; // [rsp+10h] [rbp-298h]
  __int64 v31; // [rsp+20h] [rbp-288h]
  unsigned int v34; // [rsp+30h] [rbp-278h]
  int v35; // [rsp+38h] [rbp-270h]
  int v36; // [rsp+3Ch] [rbp-26Ch]
  __int64 v37; // [rsp+40h] [rbp-268h] BYREF
  __int64 v38; // [rsp+48h] [rbp-260h] BYREF
  void *v39; // [rsp+50h] [rbp-258h] BYREF
  __int64 v40; // [rsp+58h] [rbp-250h]
  _BYTE v41[128]; // [rsp+60h] [rbp-248h] BYREF
  void *ptr; // [rsp+E0h] [rbp-1C8h] BYREF
  _DWORD v43[112]; // [rsp+E8h] [rbp-1C0h] BYREF

  v10 = a2;
  v30 = (_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (a2 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    v39 = v41;
    v40 = 0x2000000000LL;
    v11 = a4 | ((*(_BYTE *)(*v30 + 17LL) & 4) != 0);
  }
  else
  {
    if ( a6 == nullptr && a3 == 0 && !a4 )
      return sub_A51DB0(a1);
    v11 = a4;
    v39 = v41;
    v40 = 0x2000000000LL;
  }
  sub_F3CAE0((unsigned int)&v39, a1, a2, a3, v11, (_DWORD)a6, a7, a8);
  v12 = *(_DWORD *)(a1 + 752);
  v31 = *(_QWORD *)(a1 + 736);
  p_ptr = v28;
  if ( v12 )
  {
    memset(v43, 0, 0x88u);
    v43[1] = 32;
    ptr = &v43[2];
    v35 = 1;
    v36 = v12 - 1;
    v34 = (v12 - 1) & sub_961DD0(v39, (__int64)v39 + 4 * (unsigned int)v40);
    while ( 1 )
    {
      v14 = v31 + 152LL * v34;
      p_ptr = (void **)v14;
      if ( (unsigned __int8)sub_21FF190(&v39, v14) )
        break;
      p_ptr = &ptr;
      if ( (unsigned __int8)sub_21FF190(v14, &ptr) )
      {
        if ( ptr != &v43[2] )
          free(ptr);
        goto LABEL_20;
      }
      v34 = v36 & (v35 + v34);
      ++v35;
    }
    if ( ptr != &v43[2] )
      free(ptr);
    if ( v14 && v14 != *(_QWORD *)(a1 + 736) + 152LL * *(unsigned int *)(a1 + 752) )
    {
      v15 = *(_QWORD *)(v14 + 144) & 0xFFFFFFFFFFFFFFF0LL;
      goto LABEL_13;
    }
  }
LABEL_20:
  if ( a9 )
  {
    LODWORD(v30) = 0;
  }
  else if ( v30 )
  {
    v30 = (_QWORD *)(v30[1] & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v10 | (unsigned __int8)v30[1]) & 7);
  }
  else if ( a6 )
  {
    v25 = *a6;
    LOBYTE(v38) = 0;
    v26 = *(__int64 (__fastcall **)(__int64))(v25 + 32);
    if ( v26 == sub_A32330 )
      v27 = sub_B4E9E0(a6);
    else
      v27 = ((__int64 (__fastcall *)(__int64 *, void **))v26)(a6, p_ptr);
    sub_A93410(&ptr, a1, a7, a8, &v38);
    if ( a6 != (__int64 *)v27 || (_BYTE)v38 )
      LODWORD(v30) = sub_A915E0(a1, 0, a3, a4, a5, v27, (__int64)ptr, v43[0], 1);
    if ( ptr != &v43[2] )
      free(ptr);
  }
  v17 = sub_A4C290((__int64 *)(a1 + 2352), 24 * a8 + 48, 4u);
  sub_F3AE10(v17, v10, a3, a5 | (a4 != 0 ? 6 : 0), (_DWORD)v30, (_DWORD)a6, a7, a8);
  sub_A469E0(a1 + 8, v17);
  if ( !(unsigned __int8)sub_A4B260((__int64 *)(a1 + 736), (__int64)&v39, &v37) )
  {
    v19 = *(unsigned int *)(a1 + 752);
    v20 = v37;
    v21 = *(_DWORD *)(a1 + 744) + 1;
    v22 = 2 * v19;
    v23 = (unsigned int)(3 * v19);
    v38 = v37;
    if ( 4 * v21 < (unsigned int)v23 )
    {
      v23 = (unsigned int)(v19 - *(_DWORD *)(a1 + 748) - v21);
      if ( (unsigned int)v23 > (unsigned int)v19 >> 3 )
      {
LABEL_28:
        *(_DWORD *)(a1 + 744) = v21;
        memset(v43, 0, 0x88u);
        v43[1] = 32;
        ptr = &v43[2];
        if ( !(unsigned __int8)sub_21FF190(v20, &ptr) )
          --*(_DWORD *)(a1 + 748);
        v24 = v38;
        if ( ptr != &v43[2] )
          free(ptr);
        sub_A49E30((void **)v24, (char **)&v39);
        *(_QWORD *)(v24 + 144) = v17;
        goto LABEL_23;
      }
      v22 = v19;
    }
    sub_A91470(a1 + 736, v22, v19, v23, v37, v18);
    sub_A4B260((__int64 *)(a1 + 736), (__int64)&v39, &v38);
    v20 = v38;
    v21 = *(_DWORD *)(a1 + 744) + 1;
    goto LABEL_28;
  }
LABEL_23:
  v15 = v17 & 0xFFFFFFFFFFFFFFF0LL;
LABEL_13:
  if ( v39 != v41 )
    free(v39);
  return v15;
}

