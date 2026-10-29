__int64 __fastcall sub_38D500(__int64 a1, __int64 **a2, __int64 a3)
{
  __int64 *v5; // r15
  __int64 v6; // rdx
  char v7; // al
  __int64 v8; // r14
  __int64 v9; // rdi
  __int64 v10; // r15
  __int64 v11; // r13
  _QWORD *v12; // rax
  _QWORD *v13; // rdx
  int v14; // eax
  _QWORD *v15; // rcx
  unsigned int v16; // eax
  __int64 v17; // rdi
  int v18; // r14d
  void *v19; // r13
  void (*v20)(); // rax
  int v21; // r14d
  int v22; // eax
  __int64 *v23; // rcx
  unsigned int v24; // edx
  unsigned int v25; // ebx
  _QWORD *v26; // r14
  unsigned int v28; // ecx
  size_t v29; // rsi
  unsigned int *v30; // rax
  __int64 v31; // rax
  int v32; // ecx
  __int64 *v33; // rax
  __int64 v34; // rax
  void (__fastcall ***v35)(void *); // r15
  bool v36; // zf
  __int64 v37; // rax
  void (__fastcall ***v38)(void *, void *); // r15
  unsigned int v39; // edx
  unsigned int v40; // eax
  _QWORD *v41; // rcx
  __int64 *v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rbx
  void (__fastcall ***v46)(void *); // r12
  __int64 (__fastcall ***v47)(__int64); // r14
  __int64 (__fastcall *v48)(__int64); // rax
  __int64 v49; // r12
  __int64 (__fastcall **v50)(__int64); // rbx
  __int64 (__fastcall **v51)(__int64); // r12
  __int64 (__fastcall *v52)(__int64); // rsi
  __int64 (__fastcall **v53)(__int64); // rdi
  __int64 (__fastcall *v54)(__int64); // rsi
  __int64 (__fastcall **v55)(__int64); // rax
  void (__fastcall ***v56)(_QWORD); // rbx
  __int64 v57; // rbx
  __int64 v58; // rax
  _QWORD *v59; // rdi
  __int64 v60; // rax
  __int64 v61; // rax
  _QWORD *v62; // rdi
  __int64 v63; // rax
  __int64 (__fastcall **v64)(__int64); // rbx
  __int64 (__fastcall **v65)(__int64); // rdi
  __int64 (__fastcall **v66)(__int64); // rdi
  __int64 i; // rax
  __int64 j; // rax
  char **exception; // r14
  __int64 v70; // rdx
  void *v71; // [rsp+0h] [rbp-1B0h]
  _Unwind_Exception *v72; // [rsp+0h] [rbp-1B0h]
  int v73; // [rsp+8h] [rbp-1A8h]
  _QWORD *v74; // [rsp+8h] [rbp-1A8h]
  char *v75; // [rsp+10h] [rbp-1A0h]
  __int64 v76; // [rsp+18h] [rbp-198h]
  int v78; // [rsp+20h] [rbp-190h]
  __int64 *v79; // [rsp+20h] [rbp-190h]
  int v80; // [rsp+20h] [rbp-190h]
  _DWORD *v81; // [rsp+28h] [rbp-188h]
  unsigned int v82; // [rsp+28h] [rbp-188h]
  char v83[8]; // [rsp+30h] [rbp-180h] BYREF
  int v84[2]; // [rsp+38h] [rbp-178h] BYREF
  void *v85; // [rsp+40h] [rbp-170h] BYREF
  void *ptr; // [rsp+48h] [rbp-168h] BYREF
  __int64 v87[13]; // [rsp+50h] [rbp-160h] BYREF
  _DWORD *v88; // [rsp+B8h] [rbp-F8h]
  _DWORD *v89; // [rsp+110h] [rbp-A0h]

  v75 = v83;
  v76 = **a2;
  sub_EE4940(v83, "qfufbv_ackr", *a2);
  sub_EE5110("qfufbv_ackr");
  sub_EE4F60("qfufbv_ackr");
  *(_QWORD *)v84 = 0;
  v5 = *a2;
  v6 = (*a2)[9];
  if ( !v6 )
    goto LABEL_15;
  v7 = *(_BYTE *)(v6 + 3) >> 6;
  if ( v7 )
  {
    if ( v7 != 1 )
    {
LABEL_4:
      if ( v7 == 2 )
        v8 = (unsigned int)(*(_DWORD *)(v6 + 4) - 1);
      else
        v8 = *(unsigned int *)(v6 + 4);
      goto LABEL_6;
    }
  }
  else
  {
    do
    {
      v6 = *(_QWORD *)(v6 + 16);
      v7 = *(_BYTE *)(v6 + 3) >> 6;
    }
    while ( !v7 );
    if ( v7 != 1 )
      goto LABEL_4;
  }
  v8 = (unsigned int)(*(_DWORD *)(v6 + 4) + 1);
LABEL_6:
  if ( !(_DWORD)v8 )
    goto LABEL_15;
  v9 = *v5;
  if ( (*((_BYTE *)v5 + 123) & 0x20) != 0 )
  {
    v10 = *(_QWORD *)(v9 + 864);
    v11 = 0;
    goto LABEL_9;
  }
  v11 = 0;
  v13 = nullptr;
LABEL_38:
  v31 = v5[9];
  v32 = 17;
  while ( 1 )
  {
    if ( *(char *)(v31 + 3) < 0 )
    {
      if ( *(_BYTE *)(v31 + 3) >> 6 != 2 )
      {
        v33 = (__int64 *)(*(_QWORD *)(v31 + 16) + 8 * v11);
        goto LABEL_42;
      }
      goto LABEL_45;
    }
    if ( *(_DWORD *)(v31 + 4) == (_DWORD)v11 )
      break;
LABEL_45:
    v31 = *(_QWORD *)(v31 + 16);
    if ( !--v32 )
    {
      sub_233F80((__int64 *)(v9 + 616), (_DWORD *)v5 + 18);
      v13 = *(_QWORD **)v84;
      v33 = (__int64 *)(*(_QWORD *)(v5[9] + 16) + 8 * v11);
      goto LABEL_42;
    }
  }
  v33 = (__int64 *)(v31 + 8);
LABEL_42:
  v10 = *v33;
  if ( v13 )
  {
    while ( 1 )
    {
      v16 = *((_DWORD *)v13 - 1);
      if ( v16 == *((_DWORD *)v13 - 2) )
        break;
      ++v11;
      v13[v16] = v10;
      *((_DWORD *)v13 - 1) = v16 + 1;
      if ( v11 == v8 )
        goto LABEL_15;
LABEL_11:
      v5 = *a2;
      v9 = **a2;
      if ( (*((_BYTE *)*a2 + 123) & 0x20) == 0 )
        goto LABEL_38;
      v10 = *(_QWORD *)(v9 + 864);
    }
    v28 = (3 * v16 + 1) >> 1;
    v29 = 8 * v28 + 8;
    if ( 8 * v16 + 8 >= (unsigned int)v29 || v16 >= v28 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_C69C6(v87, "Overflow encountered when expanding vector", v70);
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v87);
      sub_233E40((__int64)v87);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v82 = (3 * v16 + 1) >> 1;
    v30 = (unsigned int *)sub_186B300(v13 - 1, v29);
    v13 = v30 + 2;
    *(_QWORD *)v84 = v30 + 2;
    *v30 = v82;
    LODWORD(v30) = v30[1];
    v15 = &v13[(unsigned int)v30];
    v14 = (_DWORD)v30 + 1;
  }
  else
  {
LABEL_9:
    v12 = (_QWORD *)sub_186B270(0x18u);
    v13 = v12 + 1;
    *v12 = 2;
    v14 = 1;
    *(_QWORD *)v84 = v13;
    v15 = v13;
  }
  ++v11;
  *v15 = v10;
  *((_DWORD *)v13 - 1) = v14;
  if ( v11 != v8 )
    goto LABEL_11;
LABEL_15:
  v17 = *(_QWORD *)(a1 + 16);
  v18 = a1 + 24;
  if ( *(_BYTE *)(a1 + 40) )
  {
    if ( *(_BYTE *)(a1 + 41) )
    {
      v19 = (void *)sub_68D490(v17, a1 + 24, 1);
    }
    else
    {
      v34 = sub_38ADB0(v17, a1 + 24);
      v35 = (void (__fastcall ***)(void *))v34;
      if ( v34 )
        ++*(_DWORD *)(v34 + 8);
      v19 = (void *)sub_E47360(*(_QWORD *)(a1 + 16), v34, v18, 0, 1, 0, (__int64)&qword_18D6CD0);
      if ( v35 )
      {
        v36 = (*((_DWORD *)v35 + 2))-- == 1;
        if ( v36 )
        {
          (**v35)(v35);
          sub_186B220(v35);
        }
      }
    }
  }
  else
  {
    v37 = sub_38A740(v17, a1 + 24);
    v38 = (void (__fastcall ***)(void *, void *))v37;
    if ( v37 )
      ++*(_DWORD *)(v37 + 8);
    v19 = (void *)sub_E47360(*(_QWORD *)(a1 + 16), v37, v18, 0, 1, 0, (__int64)&qword_18D6CD0);
    if ( v38 )
    {
      v36 = (*((_DWORD *)v38 + 2))-- == 1;
      if ( v36 )
      {
        (**v38)(v38, v38);
        sub_186B220(v38);
      }
    }
  }
  v20 = *(void (**)())(*(_QWORD *)v19 + 136LL);
  if ( v20 != nullsub_123 )
    ((void (__fastcall *)(void *, __int64))v20)(v19, 1);
  sub_D9C010((int)v87, v76, v18, a1 + 32, (int)v84, (int)v19, v71);
  v21 = sub_D9E210((int)v87);
  if ( *(_QWORD *)v84 )
    *(_DWORD *)(*(_QWORD *)v84 - 4LL) = 0;
  v81 = (_DWORD *)sub_186B270(0x80u);
  sub_ED2CB0(v81, *a2, 1);
  LODWORD(a1) = v81[8];
  v22 = a1 + 1;
  v81[8] = a1 + 1;
  if ( v21 == -1 )
  {
    sub_EDBA20((int)v81, *(_QWORD *)(v76 + 864), 0, v72, v73, (int)v83, v76, a1);
    v22 = v81[8];
  }
  else if ( !v21 )
  {
    *((_DWORD *)*a2 + 30) = (*((_DWORD *)*a2 + 30) + 1) & 0x3FFFFFF | (*a2)[15] & 0xFC000000;
    v23 = *a2;
    if ( *a2 )
      ++*((_DWORD *)v23 + 8);
    v24 = *(_DWORD *)(a3 + 8);
    v25 = *(_DWORD *)(a3 + 12);
    if ( v24 >= v25 )
    {
      v79 = v23;
      v57 = 2 * v25;
      v58 = sub_186B270(8 * v57);
      v24 = *(_DWORD *)(a3 + 8);
      v59 = *(_QWORD **)a3;
      v26 = (_QWORD *)v58;
      v23 = v79;
      if ( v24 )
      {
        if ( v24 - 1 <= 2 || (_QWORD *)v58 == v59 + 1 )
        {
          for ( i = 0; i != v24; ++i )
            v26[i] = v59[i];
        }
        else
        {
          v60 = 0;
          do
          {
            *(__m128i *)&v26[v60] = _mm_loadu_si128((const __m128i *)&v59[v60]);
            v60 += 2;
          }
          while ( 2LL * (v24 >> 1) != v60 );
          if ( (v24 & 1) != 0 )
            v26[v24 & 0xFFFFFFFE] = v59[v24 & 0xFFFFFFFE];
        }
      }
      if ( v59 != (_QWORD *)(a3 + 16) && v59 )
      {
        sub_186B220(v59);
        v24 = *(_DWORD *)(a3 + 8);
        v23 = v79;
      }
      *(_QWORD *)a3 = v26;
      *(_DWORD *)(a3 + 12) = v57;
    }
    else
    {
      v26 = *(_QWORD **)a3;
    }
    v26[v24] = v23;
    *(_DWORD *)(a3 + 8) = v24 + 1;
    goto LABEL_29;
  }
  v39 = *(_DWORD *)(a3 + 8);
  v81[8] = v22 + 1;
  v40 = *(_DWORD *)(a3 + 12);
  if ( v39 >= v40 )
  {
    v80 = 2 * v40;
    v61 = sub_186B270(16LL * v40);
    v39 = *(_DWORD *)(a3 + 8);
    v62 = *(_QWORD **)a3;
    v41 = (_QWORD *)v61;
    if ( v39 )
    {
      if ( v39 - 1 <= 2 || (_QWORD *)v61 == v62 + 1 )
      {
        for ( j = 0; j != v39; ++j )
          v41[j] = v62[j];
      }
      else
      {
        v63 = 0;
        do
        {
          *(__m128i *)&v41[v63] = _mm_loadu_si128((const __m128i *)&v62[v63]);
          v63 += 2;
        }
        while ( v63 != 2LL * (v39 >> 1) );
        if ( (v39 & 1) != 0 )
          v41[v39 & 0xFFFFFFFE] = v62[v39 & 0xFFFFFFFE];
      }
    }
    if ( v62 != (_QWORD *)(a3 + 16) && v62 )
    {
      v74 = v41;
      sub_186B220(v62);
      v39 = *(_DWORD *)(a3 + 8);
      v41 = v74;
    }
    *(_QWORD *)a3 = v41;
    *(_DWORD *)(a3 + 12) = v80;
  }
  else
  {
    v41 = *(_QWORD **)a3;
  }
  v41[v39] = v81;
  v42 = *a2;
  *(_DWORD *)(a3 + 8) = v39 + 1;
  if ( (*((_BYTE *)v42 + 123) & 4) != 0 && v21 == 1 )
  {
    v85 = v89;
    if ( v89 )
      ++v89[4];
    ptr = v88;
    if ( v88 )
      ++v88[32];
    v43 = sub_38EDE0(v76, &ptr, &v85);
    v44 = sub_1336AB0(*((_QWORD *)v81 + 1), v43);
    v45 = v44;
    if ( v44 )
      ++*(_DWORD *)(v44 + 8);
    v46 = *((void (__fastcall ****)(void *))v81 + 1);
    if ( v46 )
    {
      v36 = (*((_DWORD *)v46 + 2))-- == 1;
      if ( v36 )
      {
        (**v46)(v46);
        sub_186B220(v46);
      }
    }
    v47 = (__int64 (__fastcall ***)(__int64))ptr;
    *((_QWORD *)v81 + 1) = v45;
    if ( v47 )
    {
      v36 = (*((_DWORD *)v47 + 32))-- == 1;
      if ( v36 )
      {
        v48 = **v47;
        if ( v48 == sub_38D2C0 )
        {
          v49 = *((unsigned int *)v47 + 6);
          v50 = v47[2];
          *v47 = (__int64 (__fastcall **)(__int64))&off_1C4DD50;
          v51 = &v50[2 * v49];
          if ( v50 != v51 )
          {
            while ( (unsigned __int64)*v50 <= 1 )
            {
              v50 += 2;
              if ( v51 == v50 )
                goto LABEL_123;
            }
            if ( v51 != v50 )
            {
              v52 = *v50;
              v53 = v47[1];
              if ( *v50 )
                goto LABEL_92;
              while ( 1 )
              {
                v54 = v50[1];
                if ( v54 )
                {
                  v36 = (*((_DWORD *)v54 + 2))-- == 1;
                  if ( v36 )
                    sub_15D7BC0(v53, v54);
                }
                v55 = v50 + 2;
                if ( v51 == v50 + 2 )
                  break;
                while ( 1 )
                {
                  v52 = *v55;
                  v50 = v55;
                  if ( (unsigned __int64)*v55 > 1 )
                    break;
                  v55 += 2;
                  if ( v51 == v55 )
                    goto LABEL_123;
                }
                if ( v51 == v55 )
                  break;
                v53 = v47[1];
LABEL_92:
                v36 = (*((_DWORD *)v52 + 2))-- == 1;
                if ( v36 )
                {
                  sub_15D7BC0(v53, v52);
                  v53 = v47[1];
                }
              }
            }
          }
LABEL_123:
          sub_1695230(v47 + 9);
          v64 = v47[8];
          if ( v64 )
          {
            (*(void (__fastcall **)(__int64 (__fastcall **)(__int64)))*v64)(v47[8]);
            sub_186B220(v64);
          }
          v65 = v47[5];
          if ( v65 )
            sub_186B220(v65);
          v66 = v47[2];
          if ( v66 )
            sub_186B220(v66);
        }
        else
        {
          v48((__int64)v47);
        }
        sub_186B220(v47);
      }
    }
    v56 = (void (__fastcall ***)(_QWORD))v85;
    if ( v85 )
    {
      v36 = (*((_DWORD *)v85 + 4))-- == 1;
      if ( v36 )
      {
        (**v56)(v56);
        sub_186B220(v56);
      }
    }
  }
LABEL_29:
  v78 = v81[8];
  v81[8] = v78 - 1;
  if ( v78 == 1 )
  {
    sub_ED44E0(v81);
    sub_186B220(v81);
  }
  sub_D9B6E0(v87);
  (**(void (__fastcall ***)(void *))v19)(v19);
  sub_186B220(v19);
  if ( *(_QWORD *)v84 )
    sub_186B220((void *)(*(_QWORD *)v84 - 8LL));
  return sub_EE4A00(v75);
}

