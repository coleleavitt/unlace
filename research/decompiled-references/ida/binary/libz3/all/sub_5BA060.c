__int64 __fastcall sub_5BA060(__int64 a1, __int64 a2, unsigned int a3, __int64 *a4, char *a5, __int64 a6, double a7)
{
  char **v7; // r15
  char **exception; // r15
  __int64 v11; // r12
  _QWORD *v12; // rax
  _QWORD *v13; // r13
  __int64 *v14; // r12
  unsigned int v15; // edx
  unsigned int v16; // eax
  __int64 *v17; // rbx
  __int64 v18; // rsi
  __int64 v19; // rcx
  unsigned int v20; // ecx
  size_t v21; // rsi
  unsigned int v22; // r14d
  unsigned int *v23; // rax
  __int64 v24; // rax
  _DWORD *v25; // r12
  unsigned int v26; // edx
  char *v27; // rbx
  unsigned int v28; // eax
  char *v29; // rcx
  char v30; // di
  __int64 v31; // rsi
  unsigned int v32; // r14d
  size_t v33; // rsi
  unsigned int *v34; // rax
  unsigned int i; // r14d
  __int64 v36; // rax
  __int64 *v37; // rcx
  unsigned int v38; // edx
  __int64 *v39; // rsi
  __int64 v40; // r11
  int v41; // edi
  __int64 v42; // rdx
  __int64 *v43; // r8
  __int64 *j; // rax
  __int64 v45; // rdx
  int v46; // eax
  __int64 v47; // rax
  __int64 v48; // rax
  _DWORD *v49; // rdi
  __int64 v51; // rax
  char *v53; // [rsp+10h] [rbp-80h]
  __int64 *v56; // [rsp+28h] [rbp-68h]
  __int64 v57[10]; // [rsp+40h] [rbp-50h] BYREF

  v11 = sub_5B9720(a1, a2);
  v12 = (_QWORD *)sub_186B270(0x18u);
  v12[1] = v11;
  v13 = v12 + 1;
  *v12 = 0x100000002LL;
  if ( a3 )
  {
    v56 = a4;
    v14 = a4;
    v15 = 2;
    v16 = 1;
    v17 = &a4[a3];
    while ( 1 )
    {
      v18 = *v14;
      v19 = v16;
      ++v14;
      ++v16;
      v13[v19] = v18;
      *((_DWORD *)v13 - 1) = v16;
      if ( v17 == v14 )
        break;
      if ( v15 == v16 )
      {
        v20 = (3 * v15 + 1) >> 1;
        v21 = 8 * v20 + 8;
        v22 = v20;
        if ( 8 * v15 + 8 >= (unsigned int)v21 || v15 >= v20 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v57, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v57);
          sub_233E40((__int64)v57);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v23 = (unsigned int *)sub_186B300(v13 - 1, v21);
        *v23 = v22;
        v13 = v23 + 2;
        v15 = v22;
        v16 = v23[1];
      }
    }
    v24 = sub_186B270(0xAu);
    *(_BYTE *)(v24 + 8) = 0;
    v25 = (_DWORD *)(v24 + 8);
    v26 = 2;
    *(_QWORD *)v24 = 0x100000002LL;
    v27 = a5;
    v28 = 1;
    v29 = &a5[a3];
    while ( 1 )
    {
      v30 = *v27;
      v31 = v28;
      ++v27;
      ++v28;
      *((_BYTE *)v25 + v31) = v30;
      *(v25 - 1) = v28;
      if ( v29 == v27 )
        break;
      if ( v26 == v28 )
      {
        v32 = (3 * v26 + 1) >> 1;
        v33 = v32 + 8;
        if ( v26 + 8 >= (unsigned int)v33 || v26 >= v32 )
        {
          v7 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v57, "Overflow encountered when expanding vector");
          *v7 = (char *)off_1C63128;
          sub_2333C0(v7 + 1, v57);
          sub_233E40((__int64)v57);
          __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v53 = v29;
        v34 = (unsigned int *)sub_186B300(v25 - 2, v33);
        *v34 = v32;
        v25 = v34 + 2;
        v29 = v53;
        v26 = v32;
        v28 = v34[1];
      }
    }
    for ( i = 1; ; ++i )
    {
      v36 = *(unsigned int *)(a1 + 72);
      v37 = *(__int64 **)(a1 + 64);
      v38 = v36 - 1;
      v36 *= 8;
      v39 = (__int64 *)((char *)v37 + v36);
      v40 = *(_QWORD *)(*v56 + 16);
      v41 = *(_DWORD *)(v40 + 12);
      v42 = 8LL * (v41 & v38);
      v43 = &v37[(unsigned __int64)v42 / 8];
      if ( v42 != v36 )
      {
        for ( j = &v37[(unsigned __int64)v42 / 8]; v39 != j; ++j )
        {
          v45 = *j;
          if ( (unsigned __int64)*j > 1 )
          {
            if ( *(_DWORD *)(v45 + 12) == v41 && v40 == v45 )
              goto LABEL_23;
          }
          else if ( !v45 )
          {
            goto LABEL_22;
          }
        }
      }
      for ( ; v43 != v37; ++v37 )
      {
        v48 = *v37;
        if ( (unsigned __int64)*v37 > 1 )
        {
          if ( *(_DWORD *)(v48 + 12) == v41 && v40 == v48 )
            goto LABEL_23;
        }
        else if ( !v48 )
        {
          break;
        }
      }
LABEL_22:
      v46 = sub_5B9720(a1, *v56);
      v47 = sub_62C680(*(_DWORD *)(a1 + 24) + 656, v46, i, (_DWORD)v13, (_DWORD)v25, (unsigned int)&qword_18D6CD0, 1);
      sub_63DAD0(a6, v47, a7);
LABEL_23:
      ++v56;
      if ( i >= a3 )
        break;
    }
    v49 = v25 - 2;
  }
  else
  {
    v51 = sub_186B270(0xAu);
    *(_BYTE *)(v51 + 8) = 0;
    v49 = (_DWORD *)v51;
    *(_QWORD *)v51 = 0x100000002LL;
  }
  sub_186B220(v49);
  return sub_186B220(v13 - 1);
}

