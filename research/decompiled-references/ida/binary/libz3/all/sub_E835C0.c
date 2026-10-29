__int64 __fastcall sub_E835C0(__int64 a1, _QWORD *a2, unsigned __int8 a3, __int64 a4, char a5, char **a6)
{
  char *v7; // rbx
  int v9; // edx
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // r15
  _QWORD *v13; // rdx
  unsigned int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  __int64 *v17; // rcx
  void *v18; // r15
  char v19; // al
  void *v20; // rdi
  unsigned int v21; // ecx
  size_t v22; // rsi
  unsigned int *v23; // rax
  char **v24; // rbp
  __int64 *v25; // rbx
  unsigned __int64 v26; // rbp
  __int64 v27; // rsi
  _QWORD *v30; // rax
  _QWORD *v31; // rdx
  char **exception; // rbp
  char *v33; // [rsp+8h] [rbp-C0h]
  unsigned int v34; // [rsp+10h] [rbp-B8h]
  char v35; // [rsp+18h] [rbp-B0h]
  char v38; // [rsp+27h] [rbp-A1h]
  __int64 v40; // [rsp+40h] [rbp-88h] BYREF
  _QWORD *v41; // [rsp+48h] [rbp-80h]
  _QWORD v42[2]; // [rsp+50h] [rbp-78h] BYREF
  _QWORD v43[2]; // [rsp+60h] [rbp-68h] BYREF
  __int64 v44[11]; // [rsp+70h] [rbp-58h] BYREF

  v7 = *a6;
  v40 = a2[1];
  v41 = nullptr;
  if ( v7 )
  {
    v33 = &v7[16 * *((unsigned int *)v7 - 1)];
    while ( v33 != v7 )
    {
      v19 = *v7;
      v12 = *((_QWORD *)v7 + 1);
      v42[0] = 0;
      v42[1] = 0;
      v20 = qword_1C7F2C0;
      v43[0] = 1;
      v43[1] = 0;
      if ( (*(_BYTE *)(a4 + 4) & 1) != 0 )
      {
        v38 = v19;
        sub_182C690(qword_1C7F2C0, v42, a4);
        v19 = v38;
        if ( (*(_BYTE *)(a4 + 20) & 1) == 0 )
        {
LABEL_5:
          v9 = *(_DWORD *)(a4 + 16);
          BYTE4(v43[0]) &= ~1u;
          LODWORD(v43[0]) = v9;
          if ( v19 == a5 )
            goto LABEL_19;
          goto LABEL_6;
        }
      }
      else
      {
        LODWORD(v42[0]) = *(_DWORD *)a4;
        if ( (*(_BYTE *)(a4 + 20) & 1) == 0 )
          goto LABEL_5;
      }
      v35 = v19;
      sub_182C690(v20, v43, a4 + 16);
      if ( v35 == a5 )
LABEL_19:
        sub_1831620(qword_1C7F2C0, v42);
LABEL_6:
      if ( (v42[0] & 0x100000000LL) != 0
        || LODWORD(v42[0]) != 1
        || (v43[0] & 0x100000000LL) != 0
        || LODWORD(v43[0]) != 1 )
      {
        v10 = a2[5];
        if ( !v10 )
        {
          sub_16669E0(a2 + 4);
          v10 = a2[5];
        }
        sub_166A700(v10, (unsigned int)v42, a3, a4, a5, (_DWORD)a6);
        v11 = sub_15E1B70(a2[4]);
        v12 = v11;
        if ( v11 )
          ++*(_DWORD *)(v11 + 8);
        v13 = v41;
        if ( !v41 )
        {
          v30 = (_QWORD *)sub_186B270(0x18u);
          v13 = v30 + 1;
          *v30 = 2;
          v16 = 1;
          v41 = v13;
          v17 = v13;
          goto LABEL_15;
        }
        v14 = *((_DWORD *)v41 - 1);
        if ( v14 == *((_DWORD *)v41 - 2) )
        {
          v21 = (3 * v14 + 1) >> 1;
          v22 = 8 * v21 + 8;
          if ( 8 * v14 + 8 >= (unsigned int)v22 || v14 >= v21 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v44, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v44);
            sub_233E40((__int64)v44);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          goto LABEL_22;
        }
      }
      else
      {
        if ( v12 )
          ++*(_DWORD *)(v12 + 8);
        v13 = v41;
        if ( !v41 )
        {
          v31 = (_QWORD *)sub_186B270(0x18u);
          *v31 = 2;
          v16 = 1;
          v13 = v31 + 1;
          v41 = v13;
          v17 = v13;
          goto LABEL_15;
        }
        v14 = *((_DWORD *)v41 - 1);
        if ( v14 == *((_DWORD *)v41 - 2) )
        {
          v21 = (3 * v14 + 1) >> 1;
          v22 = 8 * v21 + 8;
          if ( 8 * v14 + 8 >= (unsigned int)v22 || v14 >= v21 )
          {
            v24 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v44, "Overflow encountered when expanding vector");
            *v24 = (char *)off_1C63128;
            sub_2333C0(v24 + 1, v44);
            sub_233E40((__int64)v44);
            __cxa_throw(v24, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
LABEL_22:
          v34 = v21;
          v23 = (unsigned int *)sub_186B300(v13 - 1, v22);
          v13 = v23 + 2;
          v41 = v23 + 2;
          *v23 = v34;
          LODWORD(v23) = v23[1];
          v17 = &v13[(unsigned int)v23];
          v16 = (_DWORD)v23 + 1;
          goto LABEL_15;
        }
      }
      v15 = v14;
      v16 = v14 + 1;
      v17 = &v13[v15];
LABEL_15:
      *v17 = v12;
      v18 = qword_1C7F2C0;
      v7 += 16;
      *((_DWORD *)v13 - 1) = v16;
      sub_182CBA0(v18, v42);
      sub_182CBA0(v18, v43);
    }
  }
  sub_166B690(a1, a2 + 4, &v40);
  v25 = v41;
  if ( v41 )
  {
    v26 = (unsigned __int64)&v41[*((unsigned int *)v41 - 1)];
    if ( (unsigned __int64)v41 >= v26 )
      goto LABEL_40;
    do
    {
      while ( 1 )
      {
        v27 = *v25;
        if ( *v25 )
        {
          if ( (*(_DWORD *)(v27 + 8))-- == 1 )
            break;
        }
        if ( (unsigned __int64)++v25 >= v26 )
          goto LABEL_39;
      }
      sub_15D7BC0(v40, v27);
      ++v25;
    }
    while ( (unsigned __int64)v25 < v26 );
LABEL_39:
    v25 = v41;
    if ( v41 )
LABEL_40:
      sub_186B220(v25 - 1);
  }
  return a1;
}

