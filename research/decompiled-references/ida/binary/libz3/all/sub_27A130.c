__int64 __fastcall sub_27A130(__int64 a1, int a2, _QWORD *a3, _QWORD *a4)
{
  char **exception; // rbp
  char **v5; // rbp
  __int64 v6; // r12
  _QWORD *v9; // r13
  __int64 v10; // rsi
  int v11; // eax
  _QWORD *v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rsi
  _DWORD *v15; // rax
  char v16; // al
  __int64 v17; // rax
  _QWORD *v18; // rdx
  __int64 v19; // r15
  unsigned int v20; // eax
  unsigned int v21; // r8d
  size_t v22; // rsi
  unsigned int v23; // r14d
  unsigned int *v24; // rax
  __int64 v25; // rsi
  void *v26; // r14
  _QWORD *v27; // rdx
  unsigned int v28; // eax
  __int64 v29; // rcx
  int v30; // eax
  unsigned int *v31; // rsi
  __int64 v32; // rdi
  _QWORD *v33; // rax
  unsigned int v35; // ecx
  size_t v36; // rsi
  unsigned int v37; // r14d
  unsigned int *v38; // rax
  __int64 v39; // rcx
  _QWORD *v40; // rdx
  __int64 v41; // [rsp+8h] [rbp-90h]
  unsigned __int8 v42; // [rsp+18h] [rbp-80h]
  char v43; // [rsp+2Fh] [rbp-69h] BYREF
  __int64 v44; // [rsp+30h] [rbp-68h]
  __int64 v45; // [rsp+38h] [rbp-60h] BYREF
  __int64 v46[2]; // [rsp+40h] [rbp-58h] BYREF
  int v47; // [rsp+50h] [rbp-48h] BYREF
  char v48; // [rsp+54h] [rbp-44h]
  __int64 v49; // [rsp+58h] [rbp-40h]

  v6 = a1 + 296;
  if ( !*(_QWORD *)(a1 + 304) )
    sub_16669E0(v6);
  v45 = 0;
  v41 = sub_1666310();
  v44 = v41;
  if ( a2 )
  {
    v9 = &a3[a2];
    while ( 1 )
    {
      while ( 1 )
      {
        v14 = *a3;
        if ( *(_WORD *)(*a3 + 4LL) )
          break;
        v15 = *(_DWORD **)(*(_QWORD *)(v14 + 16) + 24LL);
        if ( !v15 || *v15 != 5 || v15[1] )
          break;
        BYTE4(v46[0]) &= 0xFCu;
        v48 &= 0xFCu;
        LODWORD(v46[0]) = 0;
        v46[1] = 0;
        v47 = 1;
        v49 = 0;
        if ( !(unsigned __int8)sub_1666AE0(v6, v14, v46, &v43) )
        {
          sub_1872CE0("");
          sub_1873130(114, 63);
        }
        sub_17B3860(v41, &v45, v46);
        v26 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v46);
        sub_182CBA0(v26, &v47);
        v27 = (_QWORD *)*a4;
        if ( *a4 )
        {
          v28 = *((_DWORD *)v27 - 1);
          if ( v28 == *((_DWORD *)v27 - 2) )
          {
            v35 = (3 * v28 + 1) >> 1;
            v36 = 8 * v35 + 8;
            v37 = v35;
            if ( 8 * v28 + 8 >= (unsigned int)v36 || v28 >= v35 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v46, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v46);
              sub_233E40((__int64)v46);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v38 = (unsigned int *)sub_186B300(v27 - 1, v36);
            v39 = v38[1];
            v27 = v38 + 2;
            *v38 = v37;
            *a4 = v38 + 2;
            v31 = &v38[2 * v39 + 2];
            v30 = v39 + 1;
          }
          else
          {
            v29 = v28;
            v30 = v28 + 1;
            v31 = (unsigned int *)&v27[v29];
          }
        }
        else
        {
          v40 = (_QWORD *)sub_186B270(0x18u);
          *v40 = 2;
          v30 = 1;
          v27 = v40 + 1;
          *a4 = v27;
          v31 = (unsigned int *)v27;
        }
        *(_QWORD *)v31 = 0;
        v32 = a4[1];
        *((_DWORD *)v27 - 1) = v30;
        sub_17B32B0(v32, v31, &v45);
        if ( ++a3 == v9 )
          goto LABEL_22;
      }
      v16 = sub_1666670(v6, v14);
      if ( !v16 )
        break;
      v17 = sub_1666D30(v6, *a3);
      v18 = (_QWORD *)*a4;
      v19 = v17;
      if ( *a4 )
      {
        v20 = *((_DWORD *)v18 - 1);
        if ( v20 == *((_DWORD *)v18 - 2) )
        {
          v21 = (3 * v20 + 1) >> 1;
          v22 = 8 * v21 + 8;
          v23 = v21;
          if ( 8 * v20 + 8 >= (unsigned int)v22 || v20 >= v21 )
          {
            v5 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v46, "Overflow encountered when expanding vector");
            *v5 = (char *)off_1C63128;
            sub_2333C0(v5 + 1, v46);
            sub_233E40((__int64)v46);
            __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v24 = (unsigned int *)sub_186B300(v18 - 1, v22);
          v25 = v24[1];
          v18 = v24 + 2;
          *v24 = v23;
          *a4 = v24 + 2;
          LODWORD(v24) = v25;
          v12 = &v18[v25];
          v11 = (_DWORD)v24 + 1;
        }
        else
        {
          v10 = v20;
          v11 = v20 + 1;
          v12 = &v18[v10];
        }
      }
      else
      {
        v33 = (_QWORD *)sub_186B270(0x18u);
        v18 = v33 + 1;
        *v33 = 2;
        v11 = 1;
        *a4 = v18;
        v12 = v18;
      }
      *v12 = 0;
      v13 = a4[1];
      *((_DWORD *)v18 - 1) = v11;
      sub_17B32B0(v13, v12, v19);
      if ( ++a3 == v9 )
      {
LABEL_22:
        v41 = v44;
        v16 = 1;
        goto LABEL_25;
      }
    }
    v41 = v44;
  }
  else
  {
    v16 = 1;
  }
LABEL_25:
  v42 = v16;
  sub_17B1E70(v41, &v45);
  return v42;
}

