__int64 __fastcall sub_3AC380(_QWORD *a1)
{
  __int64 *v2; // rsi
  __int64 v3; // r12
  __int64 **v4; // rcx
  __int64 **v5; // rdx
  unsigned __int64 v6; // r13
  __int64 **v7; // r15
  __int64 *v8; // rdi
  int v9; // r15d
  __int64 v10; // rax
  __int64 v11; // r12
  unsigned int v12; // ecx
  unsigned int v13; // r14d
  __int64 v14; // r13
  __int64 v15; // r14
  int v16; // eax
  int v17; // r8d
  int v18; // r9d
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // r12
  unsigned int v22; // r14d
  __int64 v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rax
  int v26; // ecx
  __int64 v27; // r13
  _QWORD *v28; // rdi
  __int64 v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rdi
  __int64 v32; // r12
  __int64 v33; // rbx
  __int64 v34; // rsi
  __int64 v35; // rdi
  void (__fastcall ***v36)(_QWORD); // rbx
  int v39; // eax
  int v40; // [rsp-8h] [rbp-D8h]
  int v41; // [rsp+0h] [rbp-D0h]
  int v42; // [rsp+0h] [rbp-D0h]
  int *v43; // [rsp+8h] [rbp-C8h]
  int v44; // [rsp+8h] [rbp-C8h]
  __int64 *v45; // [rsp+10h] [rbp-C0h]
  int v46; // [rsp+10h] [rbp-C0h]
  _QWORD *v47; // [rsp+10h] [rbp-C0h]
  __int64 v48; // [rsp+10h] [rbp-C0h]
  int v49; // [rsp+18h] [rbp-B8h]
  int v50; // [rsp+18h] [rbp-B8h]
  __int64 v51; // [rsp+18h] [rbp-B8h]
  __int64 v52; // [rsp+18h] [rbp-B8h]
  __int64 *v53; // [rsp+20h] [rbp-B0h]
  int v54; // [rsp+20h] [rbp-B0h]
  __int64 *v55; // [rsp+28h] [rbp-A8h]
  char v56; // [rsp+28h] [rbp-A8h]
  char v57; // [rsp+30h] [rbp-A0h]
  int v58; // [rsp+30h] [rbp-A0h]
  __int64 v59; // [rsp+30h] [rbp-A0h]
  int v60; // [rsp+30h] [rbp-A0h]
  __int64 v61; // [rsp+38h] [rbp-98h]
  int v62; // [rsp+38h] [rbp-98h]
  __int64 v63; // [rsp+38h] [rbp-98h]
  int v64; // [rsp+40h] [rbp-90h]
  int v65; // [rsp+40h] [rbp-90h]
  void *ptr; // [rsp+48h] [rbp-88h] BYREF
  __int64 v67; // [rsp+50h] [rbp-80h] BYREF
  __int64 v68; // [rsp+58h] [rbp-78h]
  __int64 v69; // [rsp+60h] [rbp-70h] BYREF
  __int64 v70; // [rsp+68h] [rbp-68h]
  __int64 v71; // [rsp+70h] [rbp-60h] BYREF
  __int64 v72; // [rsp+78h] [rbp-58h]
  int v73[2]; // [rsp+80h] [rbp-50h] BYREF
  __int64 v74; // [rsp+88h] [rbp-48h]
  __int64 v75; // [rsp+90h] [rbp-40h] BYREF
  __int64 v76; // [rsp+98h] [rbp-38h]
  int v77; // [rsp+A0h] [rbp-30h]
  void *v78; // [rsp+A8h] [rbp-28h]
  int v79; // [rsp+B0h] [rbp-20h]
  __int64 v80; // [rsp+B8h] [rbp-18h]

  v75 = 0;
  v55 = &v75;
  sub_1862370(&v75, "smt.relevancy", 2);
  v2 = &v75;
  (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(*a1 + 64LL) + 88LL))(*(_QWORD *)(*a1 + 64LL), &v75);
  v3 = *a1;
  v4 = *(__int64 ***)(*a1 + 360LL);
  v5 = v4;
  if ( v4 )
  {
    v6 = (unsigned __int64)&v4[*((unsigned int *)v4 - 1)];
    if ( (unsigned __int64)v4 >= v6 )
      goto LABEL_5;
    do
    {
      v2 = *v5;
      v7 = v5;
      sub_62A410(*(_QWORD *)(v3 + 352), *v5);
      v5 = v7 + 1;
    }
    while ( (unsigned __int64)(v7 + 1) < v6 );
    v5 = *(__int64 ***)(v3 + 360);
    if ( v5 )
LABEL_5:
      *((_DWORD *)v5 - 1) = 0;
  }
  v8 = &v75;
  v9 = 0;
  sub_18572D0(&v75);
  v53 = &v67;
  v45 = &v69;
  if ( (unsigned int)sub_180B130(&v75) )
    goto LABEL_18;
  while ( 1 )
  {
    sub_EE4F40(*(_QWORD *)(*a1 + 56LL));
    v10 = a1[1];
    v68 = 0;
    v67 = v10;
    sub_3AA940((__int64)a1, *a1 + 72LL, (__int64)v53, v9);
    v11 = v68;
    v12 = 0;
    if ( v68 )
    {
      while ( 1 )
      {
        v24 = *a1;
        if ( v12 >= *(_DWORD *)(v11 - 4) )
          break;
        v13 = v12;
        sub_E5EBF0(*(_QWORD *)(v24 + 64), *(_QWORD *)(v11 + 8LL * v12));
        v12 = v13 + 1;
      }
    }
    else
    {
      v24 = *a1;
    }
    sub_3A6520((int)v45, (__int64)a1, *(_QWORD *)(v24 + 320));
    v14 = a1[1];
    v57 = v69;
    v15 = *(_QWORD *)(v14 + 840);
    v49 = v70;
    sub_180C5A0(v55, "q");
    v16 = sub_15E3D10(
            v14,
            (int)v55,
            (int)&qword_18D6CD0,
            0,
            0,
            v15,
            1,
            v40,
            v41,
            (int)v43,
            (int)v45,
            v49,
            (int)v53,
            (int)v55,
            v57,
            v61,
            v64,
            (int)ptr,
            v67,
            v68,
            v69,
            v70,
            v71,
            v72,
            v73[0],
            v74,
            v75,
            v76,
            v77,
            v78,
            v79,
            v80);
    v19 = sub_15DC610(v14, v16, 0, 0, v17, v18, v42, v44, v46, v50, v54, v56, v58, v62, v65, ptr);
    v61 = v19;
    if ( v19 )
      ++*(_DWORD *)(v19 + 8);
    v20 = sub_15E1B70(a1[1]);
    v21 = v20;
    if ( v20 )
      ++*(_DWORD *)(v20 + 8);
    sub_E5EBF0(*(_QWORD *)(*a1 + 64LL), v20);
    v43 = v73;
    *(_QWORD *)v73 = v61;
    v22 = sub_E60CB0(*(std::ios_base **)(*a1 + 64LL), 1, (int)v73);
    sub_399450(v21, v14);
    sub_399450(v61, v14);
    v2 = (__int64 *)v51;
    sub_399450(v59, v51);
    if ( !v22 )
      break;
    if ( v22 == 1 )
    {
      v25 = a1[1];
      v26 = *(_DWORD *)(v25 + 712);
      v63 = v25;
      *(_DWORD *)(v25 + 712) = 1;
      v60 = v26;
      sub_3A6520((int)&v71, (__int64)a1, *(_QWORD *)(*a1 + 320LL));
      v27 = v71;
      ptr = nullptr;
      v52 = v72;
      v47 = *(_QWORD **)(*a1 + 64LL);
      v28 = v47;
      (*(void (__fastcall **)(_QWORD *, void **))(*v47 + 32LL))(v47, &ptr);
      if ( ptr )
      {
        v28 = (_QWORD *)v47[7];
        if ( v28 )
          (*(void (__fastcall **)(_QWORD *, void **))(*v28 + 32LL))(v28, &ptr);
      }
      if ( (unsigned int)sub_180B130(v28) > 1 )
      {
        if ( (unsigned __int8)sub_186A530() )
        {
          sub_186A4C0();
          v48 = a1[1];
          v29 = sub_180B150(v28, v48);
          sub_1352510(v29);
          sub_186A500(v29, v48);
        }
        else
        {
          v39 = sub_180B150(v28, a1[1]);
          sub_1352510(v39);
        }
      }
      v30 = a1[1];
      *(_QWORD *)v73 = 0;
      v74 = v30;
      sub_3A6C00(v55, a1, (__int64)&ptr, *(_QWORD *)(*a1 + 320LL), v27, v9);
      v31 = *(_QWORD *)v73;
      *(_QWORD *)v73 = v75;
      sub_399410(v31, v76);
      sub_132F9B0(a1[1], *(_QWORD *)(*(_QWORD *)(*a1 + 48LL) + 2960LL), v73);
      v32 = *(_QWORD *)v73;
      v33 = *a1;
      if ( *(_QWORD *)v73 )
        ++*(_DWORD *)(*(_QWORD *)v73 + 8LL);
      sub_399450(*(_QWORD *)(v33 + 336), *(_QWORD *)(v33 + 344));
      v34 = v74;
      v35 = *(_QWORD *)v73;
      *(_QWORD *)(v33 + 336) = v32;
      sub_399410(v35, v34);
      v36 = (void (__fastcall ***)(_QWORD))ptr;
      if ( ptr )
      {
        if ( (*((_DWORD *)ptr + 4))-- == 1 )
        {
          (**v36)(v36);
          sub_186B220(v36);
        }
      }
      sub_399450(v27, v52);
      *(_DWORD *)(v63 + 712) = v60;
      break;
    }
    v8 = v53;
    ++v9;
    sub_2334C0(v53);
    if ( (unsigned int)sub_180B130(v53) )
    {
LABEL_18:
      if ( (unsigned __int8)sub_186A530() )
      {
        sub_186A4C0();
        sub_180B150(v8, v2);
        std::__ostream_insert<char,std::char_traits<char>>();
        v23 = std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_186A500(v23, "\n");
      }
      else
      {
        sub_180B150(v8, v2);
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
      }
    }
  }
  sub_2334C0(v53);
  return v22;
}

