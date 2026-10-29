_WORD *__fastcall sub_1BE1B90(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        int *a4,
        int a5,
        char a6,
        double a7,
        int *a8)
{
  unsigned int v11; // ecx
  unsigned int *v12; // rsi
  __int64 *v13; // rbp
  unsigned int v14; // eax
  __int64 v15; // rsi
  unsigned __int64 v16; // rdi
  int v17; // r13d
  __int64 i; // rax
  _WORD *v19; // r13
  unsigned int *v20; // rbp
  unsigned int *v21; // rbx
  unsigned __int64 v22; // rsi
  unsigned __int64 v23; // rdi
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned int *v28; // rdx
  unsigned int v29; // eax
  int v30; // r13d
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rax
  _QWORD *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rbp
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rax
  _QWORD *v44; // rax
  __int64 v46; // [rsp+8h] [rbp-240h]
  __int64 v47; // [rsp+18h] [rbp-230h] BYREF
  __int16 v48; // [rsp+20h] [rbp-228h] BYREF
  unsigned int **v49; // [rsp+28h] [rbp-220h]
  unsigned int v50; // [rsp+30h] [rbp-218h] BYREF
  char v51; // [rsp+34h] [rbp-214h]
  _QWORD v52[2]; // [rsp+70h] [rbp-1D8h] BYREF
  __int64 v53; // [rsp+80h] [rbp-1C8h]
  unsigned __int8 *v54[11]; // [rsp+90h] [rbp-1B8h] BYREF
  char v55; // [rsp+E8h] [rbp-160h]
  unsigned int v56; // [rsp+F0h] [rbp-158h]
  char v57; // [rsp+F4h] [rbp-154h]
  unsigned int *v58; // [rsp+100h] [rbp-148h] BYREF
  __int64 v59; // [rsp+108h] [rbp-140h]
  _BYTE v60[312]; // [rsp+110h] [rbp-138h] BYREF

  v11 = 0;
  v48 = 0;
  v58 = (unsigned int *)v60;
  v59 = 0x800000000LL;
  v50 = 0;
  v51 &= ~1u;
  v49 = &v58;
  if ( a5 == 2 )
    v11 = (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                    + 16LL) == 48)
        + 1;
  v12 = (unsigned int *)&v48;
  if ( !(unsigned __int8)sub_C82410(a2, (__int64)&v48, *(_QWORD *)(a1 + 248), v11, a5, a6) || a6 && v50 != 2 )
  {
    v13 = (__int64 *)(a1 + 8);
    if ( (_DWORD)v59 != 1 )
    {
      if ( !(_DWORD)v59 )
        goto LABEL_8;
      goto LABEL_32;
    }
    goto LABEL_26;
  }
  v12 = &v50;
  sub_A54D20((__int64)a4, (int *)&v50);
  if ( (_DWORD)v59 )
  {
    v13 = (__int64 *)(a1 + 8);
    if ( (_DWORD)v59 != 1 )
    {
LABEL_32:
      v28 = v58;
      v29 = v58[6];
      goto LABEL_27;
    }
LABEL_26:
    v28 = v58;
    v29 = v58[6];
    if ( v29 == 108 )
    {
      sub_168B9F0((__int64)v52, v13, *v58, 0xED4u, 0);
      if ( v55 )
      {
        sub_AE9DF0(v54, a5, 2u);
      }
      else if ( v57 )
      {
        v40 = sub_168B9E0(v52);
        v43 = v53;
        if ( v53 )
          v43 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v53 + 32LL))(v53);
        v47 = v43;
        v44 = sub_1587BC0(v40, &v47, v38, v39, v41, v42);
        sub_AE9DF0((unsigned __int8 **)(*v44 + 32LL * v56 + 8), a5, 2u);
      }
      sub_15F7200(v52);
      goto LABEL_12;
    }
LABEL_27:
    if ( v29 == 101 )
    {
      v28[6] = 8;
      v30 = 0;
      v31 = 0;
      while ( 1 )
      {
        sub_168CDE0((__int64)v52, v13, v28[8 * v31], (__int64)&v28[8 * v31 + 2], 0);
        sub_15F7200(v52);
        v31 = (unsigned int)(v30 + 1);
        v30 = v31;
        if ( (unsigned int)v31 >= (unsigned int)v59 )
          break;
        v28 = v58;
      }
LABEL_12:
      v19 = (_WORD *)(&dword_0 + 1);
      goto LABEL_13;
    }
LABEL_8:
    v14 = sub_EEB7E0(a2, (__int64)v12, a7);
    v15 = (__int64)v13;
    sub_168B9F0((__int64)v52, v13, v14, 0xED4u, 0);
    if ( v55 )
    {
      v15 = a5;
      sub_AE9DF0(v54, a5, 2u);
    }
    else if ( v57 )
    {
      v32 = sub_168B9E0(v52);
      v36 = v53;
      if ( v53 )
      {
        v46 = v32;
        v36 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v53 + 32LL))(v53);
        v32 = v46;
      }
      v47 = v36;
      v37 = sub_1587BC0(v32, &v47, v32, v33, v34, v35);
      v15 = a5;
      sub_AE9DF0((unsigned __int8 **)(*v37 + 32LL * v56 + 8), a5, 2u);
    }
    v16 = a2;
    v17 = 0;
    v47 = sub_EEC8C0(v16, v15, a7);
    sub_1587DB0((__int64)v52, &v47);
    sub_15F7200(v52);
    for ( i = 0; (unsigned int)i < (unsigned int)v59; v17 = i )
    {
      sub_168CDE0((__int64)v52, v13, v58[8 * i], (__int64)&v58[8 * i + 2], 0);
      sub_15F7200(v52);
      i = (unsigned int)(v17 + 1);
    }
    goto LABEL_12;
  }
  v19 = (_WORD *)(a2 & 0xFFFFFFFFFFFFFFFELL);
  if ( (*v19 & 0x1FF) != 0x3D )
    v19 = (_WORD *)sub_C09C20(*(_QWORD **)(a1 + 248), (__int64)v19, a4, v25, v26, v27);
  if ( *a8 )
    sub_A54D20((__int64)a4, a8);
LABEL_13:
  if ( v50 > 1 )
    sub_A4F8E0((int *)&v50);
  v20 = v58;
  v21 = &v58[8 * (unsigned int)v59];
  if ( v58 != v21 )
  {
    do
    {
      v21 -= 8;
      v22 = *((_QWORD *)v21 + 1);
      if ( v22 )
      {
        v23 = *((_QWORD *)v21 + 2);
        if ( v23 )
          sub_1580C40(v23, v22);
      }
    }
    while ( v20 != v21 );
    v21 = v58;
  }
  if ( v21 != (unsigned int *)v60 )
    free(v21);
  return v19;
}
