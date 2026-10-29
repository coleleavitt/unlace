__int64 __fastcall sub_6896E0(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15)
{
  __int64 v16; // rax
  __int64 (*v17)(void); // rax
  __int64 v18; // rsi
  __int64 v19; // rax
  _QWORD *v20; // rbx
  _QWORD *i; // r15
  _QWORD *v22; // rbx
  _QWORD *v23; // r13
  __int64 v24; // r14
  _QWORD *v25; // rbx
  _QWORD *v26; // r13
  __int64 v27; // rsi
  __int64 v28; // rdi
  bool v29; // zf
  __int64 *v30; // rbx
  unsigned __int64 v31; // r12
  __int64 v32; // rsi
  __int64 v33; // rsi
  __int64 v34; // rdi
  __int64 v35; // rsi
  __int64 v36; // rdi
  __int64 v37; // rsi
  __int64 v38; // rdi
  _QWORD *v40; // [rsp+8h] [rbp-90h]
  __int64 v41; // [rsp+20h] [rbp-78h] BYREF
  __int64 v42; // [rsp+28h] [rbp-70h]
  __int64 v43; // [rsp+30h] [rbp-68h] BYREF
  __int64 v44; // [rsp+38h] [rbp-60h]
  __int64 v45; // [rsp+40h] [rbp-58h] BYREF
  __int64 v46; // [rsp+48h] [rbp-50h]
  __int64 v47; // [rsp+50h] [rbp-48h] BYREF
  _QWORD *v48; // [rsp+58h] [rbp-40h]

  v16 = a1[17];
  if ( v16 && *(_DWORD *)(v16 - 4) )
  {
    v40 = a1 + 21;
    v17 = *(__int64 (**)(void))(*a1 + 104LL);
    if ( (char *)v17 == (char *)sub_2B1DE0 )
      v18 = (__int64)(a1 + 10);
    else
      v18 = v17();
    sub_1473C20(v40, v18);
    v19 = a1[15];
    v20 = (_QWORD *)a1[17];
    v41 = 0;
    v43 = 0;
    v42 = v19;
    v44 = v19;
    v45 = 0;
    v46 = v19;
    v47 = v19;
    v48 = nullptr;
    if ( v20 )
    {
      for ( i = &v20[*((unsigned int *)v20 - 1)]; i != v20; ++v20 )
      {
        sub_14BB8A0(a1 + 19, *v20, &v43, &v41);
        sub_1475DD0(v40, 0, v43, &v45, &v41);
        sub_E5EBF0(a1[18], v45);
      }
    }
    sub_1474200(v40, &v47);
    v22 = v48;
    if ( v48 )
    {
      v23 = &v48[*((unsigned int *)v48 - 1)];
      if ( v48 != v23 )
      {
        v24 = a1[18];
        do
          sub_E5EBF0(v24, *v22++);
        while ( v23 != v22 );
      }
    }
    v25 = (_QWORD *)a1[17];
    if ( v25 )
    {
      v26 = &v25[*((unsigned int *)v25 - 1)];
      if ( v25 >= v26 )
        goto LABEL_20;
      do
      {
        while ( 1 )
        {
          v27 = *v25;
          if ( *v25 )
          {
            v28 = a1[16];
            v29 = (*(_DWORD *)(v27 + 8))-- == 1;
            if ( v29 )
              break;
          }
          if ( ++v25 >= v26 )
            goto LABEL_19;
        }
        sub_15D7BC0(v28, v27);
        ++v25;
      }
      while ( v25 < v26 );
LABEL_19:
      v25 = (_QWORD *)a1[17];
      if ( v25 )
LABEL_20:
        *((_DWORD *)v25 - 1) = 0;
    }
    v30 = v48;
    if ( v48 )
    {
      v31 = (unsigned __int64)&v48[*((unsigned int *)v48 - 1)];
      if ( (unsigned __int64)v48 >= v31 )
        goto LABEL_29;
      do
      {
        while ( 1 )
        {
          v32 = *v30;
          if ( *v30 )
          {
            v29 = (*(_DWORD *)(v32 + 8))-- == 1;
            if ( v29 )
              break;
          }
          if ( (unsigned __int64)++v30 >= v31 )
            goto LABEL_28;
        }
        sub_15D7BC0(v47, v32);
        ++v30;
      }
      while ( (unsigned __int64)v30 < v31 );
LABEL_28:
      v30 = v48;
      if ( v48 )
LABEL_29:
        sub_186B220(v30 - 1);
    }
    v33 = v45;
    if ( v45 )
    {
      v34 = v46;
      v29 = (*(_DWORD *)(v45 + 8))-- == 1;
      if ( v29 )
        sub_15D7BC0(v34, v33);
    }
    v35 = v43;
    if ( v43 )
    {
      v36 = v44;
      v29 = (*(_DWORD *)(v43 + 8))-- == 1;
      if ( v29 )
        sub_15D7BC0(v36, v35);
    }
    v37 = v41;
    if ( v41 )
    {
      v38 = v42;
      v29 = (*(_DWORD *)(v41 + 8))-- == 1;
      if ( v29 )
        sub_15D7BC0(v38, v37);
    }
  }
  return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)a1[18] + 232LL))(a1[18]);
}

