_QWORD *__fastcall Z3_algebraic_get_poly(__int64 a1, __int64 a2)
{
  char **exception; // rbp
  char v4; // al
  int v5; // edx
  _DWORD *v6; // rax
  __int64 v7; // r12
  __int64 v8; // rbp
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rbx
  _QWORD *v12; // r12
  __int64 v13; // rbx
  __int64 v14; // rbp
  int v15; // ecx
  int v16; // r8d
  int v17; // r9d
  __int64 v18; // rax
  __int64 v19; // rcx
  _QWORD *v20; // rdx
  unsigned int v21; // eax
  __int64 v22; // rsi
  int v23; // eax
  __int64 *v24; // rsi
  void *v25; // rdi
  void *v26; // rdi
  unsigned int v28; // r8d
  size_t v29; // rsi
  unsigned int *v30; // rax
  __int64 v31; // rsi
  __int64 v32; // rbp
  __int64 v33; // r13
  __int64 v34; // rsi
  _QWORD *v35; // rax
  __int64 v36; // [rsp+0h] [rbp-B8h]
  __int64 v37; // [rsp+0h] [rbp-B8h]
  __int64 v38; // [rsp+8h] [rbp-B0h]
  __int64 v39; // [rsp+10h] [rbp-A8h]
  unsigned int v40; // [rsp+18h] [rbp-A0h]
  char v41; // [rsp+1Fh] [rbp-99h]
  __int64 v42; // [rsp+30h] [rbp-88h] BYREF
  __int64 v43; // [rsp+38h] [rbp-80h]
  _QWORD v44[2]; // [rsp+40h] [rbp-78h] BYREF
  _QWORD v45[2]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v46[11]; // [rsp+60h] [rbp-58h] BYREF

  v4 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  v41 = v4;
  if ( v4 )
    sub_29F240();
  *(_DWORD *)(a1 + 1520) = 0;
  v5 = *(unsigned __int16 *)(a2 + 4);
  if ( (unsigned int)(v5 - 3) <= 1
    || ((_WORD)v5 || (v6 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL)) == nullptr || *v6 != 5 || (v7 = a1 + 296, v6[1]))
    && (v7 = a1 + 296, !(unsigned __int8)sub_1666670(a1 + 296, a2)) )
  {
    sub_24EA30(a1, 3u, nullptr);
    v12 = nullptr;
    goto LABEL_23;
  }
  if ( !*(_QWORD *)(a1 + 304) )
    sub_16669E0(v7);
  v8 = sub_1666310();
  v9 = sub_1666D30(v7, a2);
  v43 = sub_17B1E50(v8);
  v42 = 0;
  sub_17B5AD0(v8, v9, &v42);
  v38 = sub_15D2CD0(*(_QWORD *)(a1 + 232), 5, 0, 0, 0);
  v10 = sub_186B270(0x28u);
  v11 = *(_QWORD *)(a1 + 232);
  v12 = (_QWORD *)v10;
  sub_2518F0(v10, a1);
  v12[3] = v11;
  *v12 = &off_1C4CA20;
  v12[4] = 0;
  sub_24FBE0(a1, (__int64)v12);
  v13 = v42;
  if ( !v42 )
  {
    if ( !v41 )
      return v12;
    goto LABEL_39;
  }
  v14 = *(unsigned int *)(v42 - 4);
  v39 = v42 + 16 * v14;
  if ( v39 != v42 )
  {
    do
    {
      v44[0] = 0;
      v26 = qword_1C7F2C0;
      v44[1] = 0;
      v45[0] = 1;
      v45[1] = 0;
      if ( (*(_BYTE *)(v13 + 4) & 1) != 0 )
        sub_182C690(qword_1C7F2C0, v44, v13);
      else
        LODWORD(v44[0]) = *(_DWORD *)v13;
      sub_182CBA0(v26, v45);
      BYTE4(v45[0]) &= ~1u;
      LODWORD(v45[0]) = 1;
      v18 = sub_252180(a1, (__int64)v44, v38, v15, v16, v17);
      v19 = v18;
      if ( v18 )
        ++*(_DWORD *)(v18 + 8);
      v20 = (_QWORD *)v12[4];
      if ( v20 )
      {
        v21 = *((_DWORD *)v20 - 1);
        if ( v21 == *((_DWORD *)v20 - 2) )
        {
          v28 = (3 * v21 + 1) >> 1;
          v29 = 8 * v28 + 8;
          if ( 8 * v21 + 8 >= (unsigned int)v29 || v21 >= v28 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v46, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v46);
            sub_233E40((__int64)v46);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v40 = (3 * v21 + 1) >> 1;
          v36 = v19;
          v30 = (unsigned int *)sub_186B300(v20 - 1, v29);
          v31 = v30[1];
          v20 = v30 + 2;
          v12[4] = v30 + 2;
          v19 = v36;
          *v30 = v40;
          LODWORD(v30) = v31;
          v24 = &v20[v31];
          v23 = (_DWORD)v30 + 1;
        }
        else
        {
          v22 = v21;
          v23 = v21 + 1;
          v24 = &v20[v22];
        }
      }
      else
      {
        v37 = v18;
        v35 = (_QWORD *)sub_186B270(0x18u);
        v20 = v35 + 1;
        *v35 = 2;
        v19 = v37;
        v23 = 1;
        v12[4] = v20;
        v24 = v20;
      }
      *v24 = v19;
      v25 = qword_1C7F2C0;
      v13 += 16;
      *((_DWORD *)v20 - 1) = v23;
      sub_182CBA0(v25, v44);
      sub_182CBA0(v25, v45);
    }
    while ( v39 != v13 );
    if ( !v41 )
    {
      v13 = v42;
      if ( !v42 )
        return v12;
      v14 = *(unsigned int *)(v42 - 4);
      if ( !(_DWORD)v14 )
      {
        sub_186B220((void *)(v42 - 8));
        return v12;
      }
      goto LABEL_31;
    }
LABEL_39:
    sub_2BB620(v12);
    v13 = v42;
    if ( !v42 )
      goto LABEL_42;
    v14 = *(unsigned int *)(v42 - 4);
    if ( !(_DWORD)v14 )
    {
      sub_186B220((void *)(v42 - 8));
      goto LABEL_42;
    }
    goto LABEL_31;
  }
  if ( v41 )
    goto LABEL_39;
  if ( !(_DWORD)v14 )
  {
    sub_186B220((void *)(v39 - 8));
    return v12;
  }
LABEL_31:
  v32 = 16 * v14;
  v33 = 0;
  do
  {
    v34 = v13 + v33;
    v33 += 16;
    sub_182EF00(v43, v34);
    v13 = v42;
  }
  while ( v33 != v32 );
  if ( v42 )
  {
    *(_DWORD *)(v42 - 4) = 0;
    sub_186B220((void *)(v13 - 8));
  }
LABEL_23:
  if ( v41 )
LABEL_42:
    byte_1C7EBA0 = 1;
  return v12;
}

