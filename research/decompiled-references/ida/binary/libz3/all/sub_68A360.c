__int64 __fastcall sub_68A360(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        __int64 a17)
{
  __int64 v18; // rax
  __int64 (__fastcall *v19)(__int64); // rax
  __int64 v20; // rsi
  __int64 v21; // rax
  _QWORD *v22; // rbx
  _QWORD *i; // r15
  _QWORD *v24; // r14
  _QWORD *v25; // rbx
  __int64 v26; // r13
  _QWORD *v27; // rbx
  _QWORD *v28; // r13
  __int64 v29; // rsi
  __int64 v30; // rdi
  bool v31; // zf
  __int64 *v32; // rbx
  unsigned __int64 v33; // r12
  __int64 v34; // rsi
  __int64 v35; // rsi
  __int64 v36; // rdi
  __int64 v37; // rsi
  __int64 v38; // rdi
  __int64 v39; // rsi
  __int64 v40; // rdi
  _QWORD *v42; // [rsp+0h] [rbp-A8h]
  __int64 v46; // [rsp+30h] [rbp-78h] BYREF
  __int64 v47; // [rsp+38h] [rbp-70h]
  __int64 v48; // [rsp+40h] [rbp-68h] BYREF
  __int64 v49; // [rsp+48h] [rbp-60h]
  __int64 v50; // [rsp+50h] [rbp-58h] BYREF
  __int64 v51; // [rsp+58h] [rbp-50h]
  __int64 v52; // [rsp+60h] [rbp-48h] BYREF
  _QWORD *v53; // [rsp+68h] [rbp-40h]

  v18 = a1[17];
  if ( v18 && *(_DWORD *)(v18 - 4) )
  {
    v42 = a1 + 21;
    v19 = *(__int64 (__fastcall **)(__int64))(*a1 + 104LL);
    if ( v19 == sub_2B1DE0 )
      v20 = (__int64)(a1 + 10);
    else
      v20 = v19((__int64)a1);
    sub_1473C20(v42, v20);
    v21 = a1[15];
    v22 = (_QWORD *)a1[17];
    v46 = 0;
    v48 = 0;
    v47 = v21;
    v49 = v21;
    v50 = 0;
    v51 = v21;
    v52 = v21;
    v53 = nullptr;
    if ( v22 )
    {
      for ( i = &v22[*((unsigned int *)v22 - 1)]; i != v22; ++v22 )
      {
        sub_14BB8A0(a1 + 19, *v22, &v48, &v46);
        sub_1475DD0(v42, 0, v48, &v50, &v46);
        sub_E5EBF0(a1[18], v50);
      }
    }
    sub_1474200(v42, &v52);
    v24 = v53;
    if ( v53 )
    {
      v25 = &v53[*((unsigned int *)v53 - 1)];
      if ( v53 != v25 )
      {
        v26 = a1[18];
        do
          sub_E5EBF0(v26, *v24++);
        while ( v25 != v24 );
      }
    }
    v27 = (_QWORD *)a1[17];
    if ( v27 )
    {
      v28 = &v27[*((unsigned int *)v27 - 1)];
      if ( v27 >= v28 )
        goto LABEL_20;
      do
      {
        while ( 1 )
        {
          v29 = *v27;
          if ( *v27 )
          {
            v30 = a1[16];
            v31 = (*(_DWORD *)(v29 + 8))-- == 1;
            if ( v31 )
              break;
          }
          if ( ++v27 >= v28 )
            goto LABEL_19;
        }
        sub_15D7BC0(v30, v29);
        ++v27;
      }
      while ( v27 < v28 );
LABEL_19:
      v27 = (_QWORD *)a1[17];
      if ( v27 )
LABEL_20:
        *((_DWORD *)v27 - 1) = 0;
    }
    v32 = v53;
    if ( v53 )
    {
      v33 = (unsigned __int64)&v53[*((unsigned int *)v53 - 1)];
      if ( (unsigned __int64)v53 >= v33 )
        goto LABEL_29;
      do
      {
        while ( 1 )
        {
          v34 = *v32;
          if ( *v32 )
          {
            v31 = (*(_DWORD *)(v34 + 8))-- == 1;
            if ( v31 )
              break;
          }
          if ( (unsigned __int64)++v32 >= v33 )
            goto LABEL_28;
        }
        sub_15D7BC0(v52, v34);
        ++v32;
      }
      while ( (unsigned __int64)v32 < v33 );
LABEL_28:
      v32 = v53;
      if ( v53 )
LABEL_29:
        sub_186B220(v32 - 1);
    }
    v35 = v50;
    if ( v50 )
    {
      v36 = v51;
      v31 = (*(_DWORD *)(v50 + 8))-- == 1;
      if ( v31 )
        sub_15D7BC0(v36, v35);
    }
    v37 = v48;
    if ( v48 )
    {
      v38 = v49;
      v31 = (*(_DWORD *)(v48 + 8))-- == 1;
      if ( v31 )
        sub_15D7BC0(v38, v37);
    }
    v39 = v46;
    if ( v46 )
    {
      v40 = v47;
      v31 = (*(_DWORD *)(v46 + 8))-- == 1;
      if ( v31 )
        sub_15D7BC0(v40, v39);
    }
  }
  return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))(*(_QWORD *)a1[18] + 264LL))(a1[18], a2, a3, a4);
}

