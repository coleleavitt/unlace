void __fastcall sub_82D880(__int64 a1, unsigned int a2, __int64 a3)
{
  char **exception; // rbp
  unsigned int v6; // r12d
  int v7; // r14d
  char v8; // r13
  void *v9; // r15
  __int64 *v10; // rcx
  char v11; // al
  char v12; // si
  bool v13; // al
  bool v14; // dl
  __int64 *v15; // r15
  __int64 v16; // r13
  __int64 v17; // r14
  __int64 *v18; // r15
  void *v19; // r15
  __int64 *v20; // r14
  __int64 v21; // r15
  __int64 v22; // r13
  __int64 v23; // r13
  int *v24; // rdx
  unsigned int v25; // ebp
  _QWORD *v26; // rdx
  __int64 v27; // rax
  unsigned int *v28; // rax
  __int64 v29; // rdi
  __m128 *v30; // r8
  unsigned int v31; // r13d
  size_t v32; // rsi
  unsigned int *v33; // rax
  __int64 v34; // rax
  __int64 *v35; // r15
  __int64 v36; // r14
  _QWORD *v37; // rax
  __int64 *v38; // [rsp+10h] [rbp-C8h]
  __int64 *v39; // [rsp+10h] [rbp-C8h]
  int *v40; // [rsp+18h] [rbp-C0h]
  int *v41; // [rsp+18h] [rbp-C0h]
  int *v42; // [rsp+18h] [rbp-C0h]
  int *v43; // [rsp+18h] [rbp-C0h]
  unsigned int v45; // [rsp+24h] [rbp-B4h]
  __int64 v46; // [rsp+40h] [rbp-98h] BYREF
  __int64 v47; // [rsp+48h] [rbp-90h]
  __int64 v48; // [rsp+50h] [rbp-88h] BYREF
  __int64 v49; // [rsp+58h] [rbp-80h]
  __int64 v50; // [rsp+60h] [rbp-78h] BYREF
  __int64 v51; // [rsp+68h] [rbp-70h]
  __int64 v52; // [rsp+70h] [rbp-68h]
  __int64 v53; // [rsp+78h] [rbp-60h]
  __int64 v54; // [rsp+80h] [rbp-58h] BYREF
  __int64 v55; // [rsp+88h] [rbp-50h]
  __int64 v56; // [rsp+90h] [rbp-48h] BYREF
  __int64 v57; // [rsp+98h] [rbp-40h]

  v6 = *(_DWORD *)(a1 + 392);
  if ( v6 >= *(_DWORD *)(sub_7E4EB0(a1) + 344) || !*(_DWORD *)(sub_7E4EB0(a1) + 268) )
    return;
  v7 = *(_DWORD *)(a3 + 56);
  v45 = *(_DWORD *)(a3 + 12);
  v8 = a2 & 1;
  if ( !(a2 & 1) == (*(_BYTE *)(a3 + 8) & 1) )
  {
    if ( *(_BYTE *)(a3 + 20) )
    {
      if ( v7 )
        v18 = (__int64 *)&qword_1C7F280;
      else
        v18 = &qword_1C7F260;
      v50 = 0;
      v51 = 0;
      v52 = 1;
      v53 = 0;
      sub_27B950((__int64)qword_1C7F2C0, (__int64)&v50, (int *)(a3 + 24));
      sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)&v50, (__int64)v18, (__int64)&v50);
      BYTE4(v46) &= 0xFCu;
      BYTE4(v48) &= 0xFCu;
      LODWORD(v46) = 0;
      v47 = 0;
      LODWORD(v48) = 1;
      v49 = 0;
      sub_27B950((__int64)qword_1C7F2C0, (__int64)&v46, (int *)&v50);
      sub_25A130((char *)&v50);
      v50 = 0;
      v51 = 0;
      v52 = 1;
      v53 = 0;
      sub_27B950((__int64)qword_1C7F2C0, (__int64)&v50, (int *)&v46);
      v19 = qword_1C7F2C0;
      v54 = 0;
      v55 = 0;
      v56 = 1;
      v57 = 0;
      sub_182CEF0(qword_1C7F2C0, &v54);
      sub_182CBA0(v19, &v56);
      BYTE4(v56) &= ~1u;
      LODWORD(v56) = 1;
      sub_25A130((char *)&v46);
    }
    else
    {
      v50 = 0;
      v51 = 0;
      v52 = 1;
      v53 = 0;
      sub_27B950((__int64)qword_1C7F2C0, (__int64)&v50, (int *)(a3 + 24));
      if ( v7 )
        v24 = &qword_1C7F280;
      else
        v24 = (int *)&qword_1C7F260;
      v54 = 0;
      v55 = 0;
      v56 = 1;
      v57 = 0;
      sub_27B950((__int64)qword_1C7F2C0, (__int64)&v54, v24);
    }
  }
  else
  {
    v50 = 0;
    v51 = 0;
    v52 = 1;
    v53 = 0;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)&v50, (int *)(a3 + 24));
    v9 = qword_1C7F2C0;
    v54 = 0;
    v55 = 0;
    v56 = 1;
    v57 = 0;
    sub_182CEF0(qword_1C7F2C0, &v54);
    sub_182CBA0(v9, &v56);
    BYTE4(v56) &= ~1u;
    LODWORD(v56) = 1;
  }
  v10 = *(__int64 **)(*(_QWORD *)(a1 + 320) + 8LL * v45);
  if ( v10 && *((_DWORD *)v10 - 1) == 1 || !*(_DWORD *)(*(_QWORD *)(a1 + 328) + 4LL * v45) )
  {
LABEL_27:
    sub_25A130((char *)&v54);
    sub_25A130((char *)&v50);
    return;
  }
  v11 = *(_BYTE *)(a3 + 8);
  v12 = *(_BYTE *)(a3 + 20);
  v46 = 0;
  v47 = 0;
  v48 = 1;
  v49 = 0;
  v13 = (v11 & 1) == v8;
  v14 = v7 == 0;
  if ( (v7 == 0) == v13 )
  {
    if ( v10 )
    {
      v39 = &v10[*((unsigned int *)v10 - 1)];
      if ( v10 != v39 )
      {
        v20 = v10;
        v21 = 0;
        if ( v14 || v12 )
        {
          do
          {
            v22 = *v20;
            if ( a3 != *v20 )
            {
              v41 = (int *)(v22 + 24);
              if ( (!v21 || sub_3ED700((__int64)qword_1C7F2C0, (__int64)&v46, v22 + 24))
                && (sub_3ED700((__int64)qword_1C7F2C0, (__int64)v41, (__int64)&v50)
                 || sub_3ED680((__int64)qword_1C7F2C0, (__int64)v41, (__int64)&v50) && (int)v54 > 0) )
              {
                sub_27B950((__int64)qword_1C7F2C0, (__int64)&v46, v41);
                v21 = v22;
              }
            }
            ++v20;
          }
          while ( v39 != v20 );
        }
        else
        {
          do
          {
            v23 = *v20;
            if ( a3 != *v20 )
            {
              v42 = (int *)(v23 + 24);
              if ( (!v21 || sub_3ED700((__int64)qword_1C7F2C0, (__int64)&v46, v23 + 24))
                && !sub_3ED700((__int64)qword_1C7F2C0, (__int64)&v50, (__int64)v42)
                && (!sub_3ED680((__int64)qword_1C7F2C0, (__int64)&v50, (__int64)v42) || (int)v54 >= 0) )
              {
                sub_27B950((__int64)qword_1C7F2C0, (__int64)&v46, v42);
                v21 = v23;
              }
            }
            ++v20;
          }
          while ( v39 != v20 );
        }
        if ( v21 )
        {
          v25 = *(_DWORD *)(v21 + 8);
          if ( !*(_DWORD *)(v21 + 56) )
            goto LABEL_57;
          goto LABEL_56;
        }
      }
    }
    goto LABEL_26;
  }
  if ( !v10 )
    goto LABEL_26;
  v38 = &v10[*((unsigned int *)v10 - 1)];
  if ( v10 == v38 )
    goto LABEL_26;
  if ( v13 || v12 )
  {
    v35 = v10;
    v16 = 0;
    do
    {
      v36 = *v35;
      if ( a3 != *v35 )
      {
        v43 = (int *)(v36 + 24);
        if ( (!v16 || sub_3ED700((__int64)qword_1C7F2C0, v36 + 24, (__int64)&v46))
          && (sub_3ED700((__int64)qword_1C7F2C0, (__int64)&v50, (__int64)v43)
           || sub_3ED680((__int64)qword_1C7F2C0, (__int64)&v50, (__int64)v43) && (int)v54 < 0) )
        {
          sub_27B950((__int64)qword_1C7F2C0, (__int64)&v46, v43);
          v16 = v36;
        }
      }
      ++v35;
    }
    while ( v38 != v35 );
  }
  else
  {
    v15 = v10;
    v16 = 0;
    do
    {
      v17 = *v15;
      if ( a3 != *v15 )
      {
        v40 = (int *)(v17 + 24);
        if ( (!v16 || sub_3ED700((__int64)qword_1C7F2C0, v17 + 24, (__int64)&v46))
          && !sub_3ED700((__int64)qword_1C7F2C0, (__int64)v40, (__int64)&v50)
          && (!sub_3ED680((__int64)qword_1C7F2C0, (__int64)v40, (__int64)&v50) || (int)v54 <= 0) )
        {
          sub_27B950((__int64)qword_1C7F2C0, (__int64)&v46, v40);
          v16 = v17;
        }
      }
      ++v15;
    }
    while ( v38 != v15 );
  }
  if ( !v16 )
  {
LABEL_26:
    sub_25A130((char *)&v46);
    goto LABEL_27;
  }
  v25 = *(_DWORD *)(v16 + 8);
  if ( *(_DWORD *)(v16 + 56) != 1 )
LABEL_56:
    v25 ^= 1u;
LABEL_57:
  sub_25A130((char *)&v46);
  sub_82C220(a1, v45, -1);
  ++*(_DWORD *)(a1 + 432);
  sub_829BD0((_QWORD *)a1);
  v26 = *(_QWORD **)(a1 + 752);
  if ( v26 )
  {
    v27 = *((unsigned int *)v26 - 1);
    if ( (_DWORD)v27 == *((_DWORD *)v26 - 2) )
    {
      v31 = (unsigned int)(3 * v27 + 1) >> 1;
      v32 = 4 * v31 + 8;
      if ( 4 * (int)v27 + 8 >= (unsigned int)v32 || (unsigned int)v27 >= v31 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(&v46, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, &v46);
        sub_233E40((__int64)&v46);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v33 = (unsigned int *)sub_186B300(v26 - 1, v32);
      v26 = v33 + 2;
      *v33 = v31;
      v34 = v33[1];
      *(_QWORD *)(a1 + 752) = v26;
      v28 = (unsigned int *)v26 + v34;
    }
    else
    {
      v28 = (unsigned int *)v26 + v27;
    }
  }
  else
  {
    v37 = (_QWORD *)sub_186B270(0x10u);
    v26 = v37 + 1;
    *v37 = 2;
    *(_QWORD *)(a1 + 752) = v37 + 1;
    v28 = (unsigned int *)(v37 + 1);
  }
  v29 = *(_QWORD *)(a1 + 80);
  v30 = *(__m128 **)(v29 + 24);
  *v28 = a2;
  ++*((_DWORD *)v26 - 1);
  if ( v30 )
  {
    if ( v30[22].m128_i8[0] )
    {
      sub_7A4170(v29);
      sub_87F730(a1 + 960, *(_QWORD *)(a1 + 80), 0);
      v46 = 1;
      v47 = 0;
      v48 = 1;
      v49 = 0;
      sub_182CBA0(qword_1C7F2C0, &v48);
      LODWORD(v48) = 1;
      BYTE4(v48) &= ~1u;
      sub_83BB30(a1 + 960, &v46, a2);
      sub_25A130((char *)&v46);
      v46 = 1;
      v47 = 0;
      v48 = 1;
      v49 = 0;
      sub_182CBA0(qword_1C7F2C0, &v48);
      BYTE4(v48) &= ~1u;
      LODWORD(v48) = 1;
      sub_83BB30(a1 + 960, &v46, v25 ^ 1);
      sub_25A130((char *)&v46);
      v30 = (__m128 *)sub_87EAC0(a1 + 960, *(_QWORD *)(a1 + 80));
    }
    else
    {
      v30 = nullptr;
    }
  }
  sub_82D690(a1, v25, (const void **)(a1 + 752), (__int64 *)(a1 + 776), v30);
  ++*(_DWORD *)(a1 + 404);
  sub_25A130((char *)&v54);
  sub_25A130((char *)&v50);
}

