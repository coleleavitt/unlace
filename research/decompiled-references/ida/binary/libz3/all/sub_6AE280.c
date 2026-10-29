__int64 __fastcall sub_6AE280(__int64 *a1, __int64 a2, __int64 a3, __int64 *a4, __int64 *a5)
{
  char **v5; // r15
  char **exception; // r15
  __int64 v10; // rax
  __int64 *v11; // rdi
  __int64 v12; // rax
  __int64 *v13; // r15
  __int64 v14; // rax
  __int64 *v15; // rbx
  __int64 *v16; // r12
  __int64 v17; // rsi
  __int64 v18; // rdi
  bool v19; // zf
  _QWORD *v21; // rbx
  _QWORD *v22; // rdx
  __int64 v23; // rsi
  __int64 v24; // rdi
  _QWORD *v25; // rbx
  unsigned int v26; // r8d
  __int64 v27; // rsi
  __int64 v28; // rcx
  __int64 v29; // rax
  unsigned int v30; // edx
  __int64 v31; // rsi
  unsigned int v32; // r8d
  __int64 v33; // rcx
  _QWORD *v34; // rdx
  unsigned int v35; // eax
  __int64 v36; // rdi
  int v37; // eax
  _QWORD *v38; // rdi
  __int64 v39; // rbx
  unsigned int v40; // r9d
  size_t v41; // rsi
  unsigned int *v42; // rax
  __int64 v43; // rsi
  unsigned int v44; // r9d
  size_t v45; // rsi
  unsigned int *v46; // rax
  __int64 v47; // rdi
  _QWORD *v48; // rdx
  __int64 v49; // rcx
  unsigned int v50; // r8d
  int v51; // eax
  _QWORD *v52; // rdi
  _QWORD *v53; // rdx
  _QWORD *v54; // rdx
  unsigned int v55; // [rsp+8h] [rbp-98h]
  unsigned int v56; // [rsp+8h] [rbp-98h]
  unsigned int v57; // [rsp+Ch] [rbp-94h]
  unsigned int v58; // [rsp+Ch] [rbp-94h]
  unsigned int v59; // [rsp+Ch] [rbp-94h]
  unsigned int v60; // [rsp+Ch] [rbp-94h]
  unsigned int v61; // [rsp+10h] [rbp-90h]
  __int64 v62; // [rsp+10h] [rbp-90h]
  __int64 *v63; // [rsp+18h] [rbp-88h]
  unsigned __int64 v64; // [rsp+18h] [rbp-88h]
  __int64 v65; // [rsp+18h] [rbp-88h]
  __int64 v66; // [rsp+18h] [rbp-88h]
  __int64 v67; // [rsp+18h] [rbp-88h]
  __int64 v68; // [rsp+18h] [rbp-88h]
  __int64 v69[2]; // [rsp+20h] [rbp-80h] BYREF
  __int64 v70; // [rsp+30h] [rbp-70h] BYREF
  __int64 *v71; // [rsp+38h] [rbp-68h]
  _QWORD *v72; // [rsp+40h] [rbp-60h]
  __int64 v73[10]; // [rsp+50h] [rbp-50h] BYREF

  v10 = *a1;
  v11 = (__int64 *)a1[8];
  v69[1] = 0;
  v69[0] = v10;
  if ( !v11 )
  {
    v62 = a3;
    sub_6A9880(a1);
    v10 = *a1;
    v11 = (__int64 *)a1[8];
    a3 = v62;
    a2 = (unsigned int)a2;
  }
  v70 = v10;
  v12 = *v11;
  v71 = nullptr;
  v72 = nullptr;
  v61 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64, __int64 *, __int64 *, __int64, __int64 *))(v12 + 16))(
          v11,
          a2,
          a3,
          a4,
          v69,
          1,
          &v70);
  if ( v71 && *((_DWORD *)v71 - 1) )
  {
    v21 = (_QWORD *)a5[1];
    if ( v21 )
    {
      v22 = &v21[*((unsigned int *)v21 - 1)];
      if ( v21 >= v22 )
        goto LABEL_29;
      do
      {
        while ( 1 )
        {
          v23 = *v21;
          if ( *v21 )
          {
            v24 = *a5;
            v19 = (*(_DWORD *)(v23 + 8))-- == 1;
            if ( v19 )
              break;
          }
          if ( ++v21 >= v22 )
            goto LABEL_28;
        }
        v64 = (unsigned __int64)v22;
        sub_15D7BC0(v24, v23);
        v22 = (_QWORD *)v64;
        ++v21;
      }
      while ( (unsigned __int64)v21 < v64 );
LABEL_28:
      v21 = (_QWORD *)a5[1];
      if ( v21 )
LABEL_29:
        *((_DWORD *)v21 - 1) = 0;
    }
    sub_2FCDE0(a5 + 2);
    v25 = v72;
    v26 = 0;
    v27 = v72[1];
    if ( v27 )
    {
      while ( v26 < *(_DWORD *)(v27 - 4) )
      {
        while ( 1 )
        {
          v28 = *(_QWORD *)(v27 + 8LL * v26);
          if ( v28 )
            ++*(_DWORD *)(v28 + 8);
          v29 = a5[1];
          if ( !v29 )
          {
            v60 = v26;
            v68 = v28;
            v54 = (_QWORD *)sub_186B270(0x18u);
            *v54 = 2;
            v49 = v68;
            v51 = 1;
            v48 = v54 + 1;
            v50 = v60;
            a5[1] = (__int64)v48;
            v52 = v48;
            v27 = v25[1];
            goto LABEL_55;
          }
          v30 = *(_DWORD *)(v29 - 4);
          if ( v30 == *(_DWORD *)(v29 - 8) )
            break;
          ++v26;
          *(_QWORD *)(v29 + 8LL * v30) = v28;
          *(_DWORD *)(v29 - 4) = v30 + 1;
          if ( v26 >= *(_DWORD *)(v27 - 4) )
            goto LABEL_37;
        }
        v44 = (3 * v30 + 1) >> 1;
        v45 = 8 * v44 + 8;
        if ( 8 * v30 + 8 >= (unsigned int)v45 || v30 >= v44 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_6A99E0(v73, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v73);
          sub_233E40((__int64)v73);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v56 = (3 * v30 + 1) >> 1;
        v58 = v26;
        v66 = v28;
        v46 = (unsigned int *)sub_186B300((void *)(v29 - 8), v45);
        v47 = v46[1];
        v48 = v46 + 2;
        a5[1] = (__int64)(v46 + 2);
        v49 = v66;
        v27 = v25[1];
        v50 = v58;
        *v46 = v56;
        v51 = v47 + 1;
        v52 = &v48[v47];
LABEL_55:
        *v52 = v49;
        *((_DWORD *)v48 - 1) = v51;
        if ( !v27 )
          break;
        v26 = v50 + 1;
      }
    }
LABEL_37:
    v31 = v25[3];
    if ( v31 )
    {
      v32 = 0;
      do
      {
        if ( v32 >= *(_DWORD *)(v31 - 4) )
          break;
        v33 = *(_QWORD *)(v31 + 8LL * v32);
        if ( v33 )
          ++*(_DWORD *)(v33 + 8);
        v34 = (_QWORD *)a5[3];
        if ( v34 )
        {
          v35 = *((_DWORD *)v34 - 1);
          if ( v35 == *((_DWORD *)v34 - 2) )
          {
            v40 = (3 * v35 + 1) >> 1;
            v41 = 8 * v40 + 8;
            if ( 8 * v35 + 8 >= (unsigned int)v41 || v35 >= v40 )
            {
              v5 = (char **)__cxa_allocate_exception(0x28u);
              sub_6A99E0(v73, "Overflow encountered when expanding vector");
              *v5 = (char *)off_1C63128;
              sub_2333C0(v5 + 1, v73);
              sub_233E40((__int64)v73);
              __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v55 = (3 * v35 + 1) >> 1;
            v57 = v32;
            v65 = v33;
            v42 = (unsigned int *)sub_186B300(v34 - 1, v41);
            v43 = v42[1];
            v34 = v42 + 2;
            a5[3] = (__int64)(v42 + 2);
            v33 = v65;
            *v42 = v55;
            LODWORD(v42) = v43;
            v38 = &v34[v43];
            v32 = v57;
            v31 = v25[3];
            v37 = (_DWORD)v42 + 1;
          }
          else
          {
            v36 = v35;
            v37 = v35 + 1;
            v38 = &v34[v36];
          }
        }
        else
        {
          v59 = v32;
          v67 = v33;
          v53 = (_QWORD *)sub_186B270(0x18u);
          *v53 = 2;
          v33 = v67;
          v37 = 1;
          v34 = v53 + 1;
          v32 = v59;
          a5[3] = (__int64)v34;
          v38 = v34;
          v31 = v25[3];
        }
        *v38 = v33;
        ++v32;
        *((_DWORD *)v34 - 1) = v37;
      }
      while ( v31 );
    }
    v39 = *v71;
    if ( *v71 )
      ++*(_DWORD *)(v39 + 8);
    sub_6A99C0(*a4, a4[1]);
    *a4 = v39;
  }
  v13 = v72;
  if ( v72 )
  {
    v14 = *((unsigned int *)v72 - 1);
    if ( (_DWORD)v14 )
    {
      v63 = &v72[4 * v14];
      do
      {
        sub_2334C0(v13 + 2);
        v15 = (__int64 *)v13[1];
        if ( v15 )
        {
          v16 = &v15[*((unsigned int *)v15 - 1)];
          if ( v15 >= v16 )
            goto LABEL_16;
          do
          {
            while ( 1 )
            {
              v17 = *v15;
              if ( *v15 )
              {
                v18 = *v13;
                v19 = (*(_DWORD *)(v17 + 8))-- == 1;
                if ( v19 )
                  break;
              }
              if ( ++v15 >= v16 )
                goto LABEL_15;
            }
            sub_15D7BC0(v18, v17);
            ++v15;
          }
          while ( v15 < v16 );
LABEL_15:
          v15 = (__int64 *)v13[1];
          if ( v15 )
LABEL_16:
            sub_186B220(v15 - 1);
        }
        v13 += 4;
      }
      while ( v13 != v63 );
      v13 = v72;
    }
    sub_186B220(v13 - 1);
  }
  sub_2334C0(&v70);
  sub_2B4F40(v69);
  return v61;
}

