__int64 __fastcall sub_D58580(__int64 a1, __int64 a2, int a3, int a4, __int64 *a5, int a6)
{
  __int64 v8; // r12
  __int64 v9; // rax
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // rbx
  int exception_class; // edx
  __int64 result; // rax
  __int64 v15; // rsi
  __int64 v16; // rdi
  bool v17; // zf
  __int64 v18; // rax
  int v19; // eax
  int v20; // r8d
  int v21; // r9d
  __int64 v22; // rax
  __int64 v23; // r15
  __int64 v24; // rax
  __int64 v25; // r14
  __int64 v26; // rax
  _QWORD *v27; // rdx
  unsigned int v28; // eax
  __int64 v29; // rcx
  int v30; // eax
  __int64 *v31; // rcx
  __int64 v32; // rax
  int v33; // eax
  int v34; // r8d
  int v35; // r9d
  __int64 v36; // rax
  _Unwind_Word private_1; // r14
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  _QWORD *private_2; // rdx
  unsigned int v42; // eax
  __int64 v43; // rcx
  int v44; // eax
  __int64 *v45; // rcx
  unsigned int v46; // ecx
  size_t v47; // rsi
  unsigned int *v48; // rax
  unsigned int v49; // ecx
  size_t v50; // rsi
  unsigned int *v51; // rax
  _QWORD *v52; // rax
  _QWORD *v53; // rax
  int v54; // [rsp+0h] [rbp-B0h]
  int v55; // [rsp+0h] [rbp-B0h]
  _Unwind_Exception_Cleanup_Fn v56; // [rsp+0h] [rbp-B0h]
  __int64 v57; // [rsp+0h] [rbp-B0h]
  int v58; // [rsp+8h] [rbp-A8h]
  int v59; // [rsp+8h] [rbp-A8h]
  int v60; // [rsp+8h] [rbp-A8h]
  unsigned int v61; // [rsp+8h] [rbp-A8h]
  int v62; // [rsp+10h] [rbp-A0h]
  int v63; // [rsp+10h] [rbp-A0h]
  int v64; // [rsp+10h] [rbp-A0h]
  int v65; // [rsp+10h] [rbp-A0h]
  __int64 v66; // [rsp+10h] [rbp-A0h]
  unsigned int v67; // [rsp+10h] [rbp-A0h]
  int v68; // [rsp+18h] [rbp-98h]
  int v69; // [rsp+18h] [rbp-98h]
  __int64 v70; // [rsp+18h] [rbp-98h]
  _Unwind_Exception_Cleanup_Fn exception_cleanup; // [rsp+18h] [rbp-98h]
  __int64 v72; // [rsp+18h] [rbp-98h]
  int v73; // [rsp+20h] [rbp-90h]
  int v74; // [rsp+20h] [rbp-90h]
  __int64 v75; // [rsp+20h] [rbp-90h]
  __int64 v76; // [rsp+20h] [rbp-90h]
  int v77; // [rsp+20h] [rbp-90h]
  __int64 v78; // [rsp+20h] [rbp-90h]
  int v79; // [rsp+28h] [rbp-88h]
  __int64 v80; // [rsp+28h] [rbp-88h]
  __int64 v81; // [rsp+28h] [rbp-88h]
  int v82[2]; // [rsp+30h] [rbp-80h]
  int v83[2]; // [rsp+30h] [rbp-80h]
  struct _Unwind_Exception *v84; // [rsp+38h] [rbp-78h]
  struct _Unwind_Exception *exception; // [rsp+38h] [rbp-78h]
  struct _Unwind_Exception *v86; // [rsp+38h] [rbp-78h]
  struct _Unwind_Exception *v87; // [rsp+38h] [rbp-78h]
  int v88; // [rsp+38h] [rbp-78h]
  struct _Unwind_Exception *v89; // [rsp+38h] [rbp-78h]
  int v90; // [rsp+38h] [rbp-78h]
  int v91; // [rsp+40h] [rbp-70h]
  int v92; // [rsp+40h] [rbp-70h]
  void *v93; // [rsp+48h] [rbp-68h]
  void *v94; // [rsp+48h] [rbp-68h]
  __m128i v95; // [rsp+50h] [rbp-60h] BYREF
  int v96[2]; // [rsp+60h] [rbp-50h] BYREF

  v8 = *(_QWORD *)(a2 + 40);
  *(_QWORD *)v82 = *(_QWORD *)(a1 + 8);
  if ( v8 )
    ++*(_DWORD *)(v8 + 8);
  v9 = sub_15DC610(v82[0], a2, a3, a4, (int)a5, a6, v54, v58, v62, v68, v73, a3, v82[0], a1, v91, v93);
  v12 = v9;
  if ( v9 )
    ++*(_DWORD *)(v9 + 8);
  exception_class = v86[14].exception_class;
  result = *(_QWORD *)(v8 + 24);
  if ( result && *(_DWORD *)result == exception_class )
  {
    result = *(unsigned int *)(result + 4);
    if ( (_DWORD)result )
    {
      if ( (_DWORD)result != 1 )
        goto LABEL_7;
      exception_cleanup = v86->exception_cleanup;
      v32 = sub_1674700(&v86[7].exception_cleanup, 3);
      v77 = v32;
      if ( v32 )
        ++*(_DWORD *)(v32 + 8);
      v33 = sub_D567F0(v86, a2, a2 + 48, v32);
      v36 = sub_15DC610(
              (int)v86->exception_cleanup,
              v33,
              v79,
              a4,
              v34,
              v35,
              v55,
              v59,
              v63,
              (int)exception_cleanup,
              v77,
              v79,
              v83[0],
              (int)v86,
              v92,
              v94);
      v23 = v36;
      if ( v36 )
        ++*(_DWORD *)(v36 + 8);
      *(_QWORD *)v96 = v36;
      private_1 = v89[13].private_1;
      v38 = sub_15D2CD0(private_1, LODWORD(v89[14].exception_class), 1, 0, 0);
      v39 = sub_15DCAD0(private_1, (int)v96, v38);
      v25 = v39;
      if ( v39 )
        ++*(_DWORD *)(v39 + 8);
      v40 = sub_15E1B70((int)v89->exception_cleanup);
      v81 = v40;
      if ( v40 )
        ++*(_DWORD *)(v40 + 8);
      sub_D50BD0(&v95, (__int64)v89, v40);
      private_2 = (_QWORD *)v89[19].private_2;
      v66 = v95.m128i_i64[0];
      if ( private_2 )
      {
        v42 = *((_DWORD *)private_2 - 1);
        if ( v42 == *((_DWORD *)private_2 - 2) )
        {
          v49 = (3 * v42 + 1) >> 1;
          v50 = 8 * v49 + 8;
          if ( 8 * v42 + 8 >= (unsigned int)v50 || v42 >= v49 )
          {
            exception = (struct _Unwind_Exception *)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)v96, "Overflow encountered when expanding vector");
            exception->exception_class = (_Unwind_Exception_Class)off_1C63128;
            sub_2333C0((char **)&exception->exception_cleanup, v96);
            sub_233E40((__int64)v96);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v61 = (3 * v42 + 1) >> 1;
          v51 = (unsigned int *)sub_186B300(private_2 - 1, v50);
          private_2 = v51 + 2;
          v89[19].private_2 = (_Unwind_Word)(v51 + 2);
          *v51 = v61;
          LODWORD(v51) = v51[1];
          v45 = &private_2[(unsigned int)v51];
          v44 = (_DWORD)v51 + 1;
        }
        else
        {
          v43 = v42;
          v44 = v42 + 1;
          v45 = &private_2[v43];
        }
      }
      else
      {
        v53 = (_QWORD *)sub_186B270(0x18u);
        private_2 = v53 + 1;
        *v53 = 2;
        v45 = v53 + 1;
        v89[19].private_2 = (_Unwind_Word)(v53 + 1);
        v44 = 1;
      }
      *v45 = v66;
      *((_DWORD *)private_2 - 1) = v44;
      if ( v25 )
        ++*(_DWORD *)(v25 + 8);
      sub_D50200(*a5, a5[1]);
      *a5 = v25;
      result = sub_D50200(v81, v72);
      if ( v78 )
      {
        v90 = *(_DWORD *)(v78 + 8);
        result = (unsigned int)(v90 - 1);
        *(_DWORD *)(v78 + 8) = result;
        if ( v90 == 1 )
          result = sub_15D7BC0(v72, v78);
      }
    }
    else
    {
      v56 = v86->exception_cleanup;
      v74 = sub_15C5540((int)v86 + 432, v8, exception_class, (_DWORD)v56, v10, v11);
      v64 = sub_15C5560(&v86[13].private_1, v8);
      v18 = sub_1674700(&v86[7].exception_cleanup, (unsigned int)(v64 + v74));
      v69 = v18;
      if ( v18 )
        ++*(_DWORD *)(v18 + 8);
      v19 = sub_D567F0(v86, a2, a2 + 48, v18);
      v22 = sub_15DC610(
              (int)v86->exception_cleanup,
              v19,
              v79,
              a4,
              v20,
              v21,
              (int)v56,
              v64 + v74,
              v64,
              v69,
              (int)v86 + 232,
              v79,
              v83[0],
              (int)v86,
              v92,
              v94);
      v23 = v22;
      if ( v22 )
        ++*(_DWORD *)(v22 + 8);
      sub_D50160(v75, v65 - 2, v22);
      sub_D81CD0(v75, (unsigned int)(v60 - 2), (unsigned int)(v65 - 1), v23);
      sub_D81CD0(v75, (unsigned int)(v60 - 1), (unsigned int)(v60 - 1), v23);
      v24 = sub_15E1BF0(v87[13].private_1);
      v25 = v24;
      if ( v24 )
        ++*(_DWORD *)(v24 + 8);
      v26 = sub_15E1B70((int)v87->exception_cleanup);
      v80 = v26;
      if ( v26 )
        ++*(_DWORD *)(v26 + 8);
      sub_D50BD0(&v95, (__int64)v87, v26);
      v27 = (_QWORD *)v87[19].private_2;
      v76 = v95.m128i_i64[0];
      if ( v27 )
      {
        v28 = *((_DWORD *)v27 - 1);
        if ( v28 == *((_DWORD *)v27 - 2) )
        {
          v46 = (3 * v28 + 1) >> 1;
          v47 = 8 * v46 + 8;
          if ( 8 * v28 + 8 >= (unsigned int)v47 || v28 >= v46 )
          {
            v84 = (struct _Unwind_Exception *)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)v96, "Overflow encountered when expanding vector");
            v84->exception_class = (_Unwind_Exception_Class)off_1C63128;
            sub_2333C0((char **)&v84->exception_cleanup, v96);
            sub_233E40((__int64)v96);
            __cxa_throw(v84, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v67 = (3 * v28 + 1) >> 1;
          v48 = (unsigned int *)sub_186B300(v27 - 1, v47);
          v27 = v48 + 2;
          v87[19].private_2 = (_Unwind_Word)(v48 + 2);
          *v48 = v67;
          LODWORD(v48) = v48[1];
          v31 = &v27[(unsigned int)v48];
          v30 = (_DWORD)v48 + 1;
        }
        else
        {
          v29 = v28;
          v30 = v28 + 1;
          v31 = &v27[v29];
        }
      }
      else
      {
        v52 = (_QWORD *)sub_186B270(0x18u);
        v27 = v52 + 1;
        *v52 = 2;
        v31 = v52 + 1;
        v87[19].private_2 = (_Unwind_Word)(v52 + 1);
        v30 = 1;
      }
      *v31 = v76;
      *((_DWORD *)v27 - 1) = v30;
      if ( v25 )
        ++*(_DWORD *)(v25 + 8);
      sub_D50200(*a5, a5[1]);
      *a5 = v25;
      result = sub_D50200(v80, v57);
      if ( v70 )
      {
        v88 = *(_DWORD *)(v70 + 8);
        result = (unsigned int)(v88 - 1);
        *(_DWORD *)(v70 + 8) = result;
        if ( v88 == 1 )
          result = sub_15D7BC0(v57, v70);
      }
    }
    if ( v25 )
    {
      v17 = (*(_DWORD *)(v25 + 8))-- == 1;
      if ( v17 )
        result = sub_15D7BC0(*(_QWORD *)v83, v25);
    }
    if ( v23 )
    {
      v17 = (*(_DWORD *)(v23 + 8))-- == 1;
      if ( v17 )
        result = sub_15D7BC0(*(_QWORD *)v83, v23);
    }
LABEL_36:
    v17 = (*(_DWORD *)(v8 + 8))-- == 1;
    if ( !v17 )
    {
LABEL_37:
      if ( !v12 )
        return result;
      goto LABEL_38;
    }
    goto LABEL_13;
  }
LABEL_7:
  v15 = *a5;
  if ( v12 == *a5 )
    goto LABEL_36;
  if ( v15 )
  {
    v16 = a5[1];
    v17 = (*(_DWORD *)(v15 + 8))-- == 1;
    if ( v17 )
      result = sub_15D7BC0(v16, v15);
  }
  *a5 = v12;
  if ( !v12 )
  {
    v17 = (*(_DWORD *)(v8 + 8))-- == 1;
    if ( !v17 )
      return result;
    goto LABEL_13;
  }
  ++*(_DWORD *)(v12 + 8);
  v17 = (*(_DWORD *)(v8 + 8))-- == 1;
  if ( v17 )
  {
LABEL_13:
    result = sub_15D7BC0(*(_QWORD *)v83, v8);
    goto LABEL_37;
  }
LABEL_38:
  v17 = (*(_DWORD *)(v12 + 8))-- == 1;
  if ( v17 )
    return sub_15D7BC0(*(_QWORD *)v83, v12);
  return result;
}

