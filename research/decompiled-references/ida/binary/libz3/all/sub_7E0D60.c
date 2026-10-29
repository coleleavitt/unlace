__int64 __fastcall sub_7E0D60(__int64 a1, __int64 a2, char a3, char a4)
{
  char **v4; // rbp
  char **exception; // rbp
  __int64 v9; // rbx
  __int64 v10; // r14
  unsigned int v11; // eax
  _QWORD *v12; // rcx
  unsigned int v13; // edx
  __int64 v14; // rax
  int v15; // edx
  _QWORD *v16; // rax
  __int64 v17; // rbp
  _QWORD *v18; // rax
  _QWORD *v19; // rdi
  _QWORD *v20; // rbx
  unsigned int v21; // eax
  __int64 v22; // rdx
  int v23; // eax
  _QWORD *v24; // rdx
  unsigned int v26; // r13d
  size_t v27; // rdi
  __int64 v28; // rax
  _BYTE *v29; // r9
  _DWORD *v30; // rsi
  __int64 v31; // r8
  __int64 v32; // rdx
  _BYTE *v33; // rax
  _BYTE *v34; // r8
  char v35; // di
  unsigned int v36; // r12d
  size_t v37; // rsi
  unsigned int *v38; // rax
  __int64 v39; // rdx
  _QWORD *v40; // rax
  _QWORD *v41; // rax
  _QWORD *v42; // [rsp+0h] [rbp-78h]
  __int64 v43[11]; // [rsp+20h] [rbp-58h] BYREF

  v9 = sub_7E4F00(a1);
  if ( !v9 )
    v9 = sub_7E67D0(a1, a2, 0);
  v10 = a1 + 1424;
  v11 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 528LL))(a1, v9);
  sub_13D7950(*(_QWORD *)(a1 + 80) + 1592LL, v9, v11, *(unsigned int *)(a1 + 12));
  v12 = *(_QWORD **)(a1 + 1424);
  if ( v12 )
  {
    v13 = *((_DWORD *)v12 - 1);
    if ( v13 == *((_DWORD *)v12 - 2) )
    {
      v26 = (3 * v13 + 1) >> 1;
      v27 = 16 * v26 + 8;
      if ( 16 * v13 + 8 >= (unsigned int)v27 || v13 >= v26 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v43, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v43);
        sub_233E40((__int64)v43);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v28 = sub_186B270(v27);
      v29 = *(_BYTE **)(a1 + 1424);
      v30 = (_DWORD *)v28;
      v12 = (_QWORD *)(v28 + 8);
      if ( v29 )
      {
        v31 = *((unsigned int *)v29 - 1);
        v32 = v28 + 8;
        *(_DWORD *)(v28 + 4) = v31;
        v33 = v29;
        v34 = &v29[16 * v31];
        if ( v29 != v34 )
        {
          do
          {
            v35 = *v33;
            v33 += 16;
            v32 += 16;
            *(_BYTE *)(v32 - 16) = v35;
            *(_BYTE *)(v32 - 15) = *(v33 - 15);
            *(_QWORD *)(v32 - 8) = *((_QWORD *)v33 - 1);
          }
          while ( v33 != v34 );
        }
        v42 = v12;
        sub_186B220(v29 - 8);
        v12 = v42;
        v16 = &v42[2 * (unsigned int)v30[1]];
        v15 = v30[1] + 1;
      }
      else
      {
        *(_DWORD *)(v28 + 4) = 0;
        v15 = 1;
        v16 = (_QWORD *)(v28 + 8);
      }
      *(_QWORD *)(a1 + 1424) = v12;
      *v30 = v26;
    }
    else
    {
      v14 = v13;
      v15 = v13 + 1;
      v16 = &v12[2 * v14];
    }
  }
  else
  {
    v40 = (_QWORD *)sub_186B270(0x28u);
    v15 = 1;
    v12 = v40 + 1;
    *v40 = 2;
    *(_QWORD *)(a1 + 1424) = v40 + 1;
    v16 = v40 + 1;
  }
  *((_BYTE *)v16 + 1) = a3;
  v17 = *(_QWORD *)(a1 + 80);
  v16[1] = v9;
  *(_BYTE *)v16 = a4;
  *((_DWORD *)v12 - 1) = v15;
  v18 = (_QWORD *)sub_180C100(v17 + 2144, 16);
  v19 = *(_QWORD **)(v17 + 2128);
  v20 = v18;
  *v18 = off_1C54AB8;
  v18[1] = v10;
  if ( v19 )
  {
    v21 = *((_DWORD *)v19 - 1);
    if ( v21 == *((_DWORD *)v19 - 2) )
    {
      v36 = (3 * v21 + 1) >> 1;
      v37 = 8 * v36 + 8;
      if ( 8 * v21 + 8 >= (unsigned int)v37 || v21 >= v36 )
      {
        v4 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v43, "Overflow encountered when expanding vector");
        *v4 = (char *)off_1C63128;
        sub_2333C0(v4 + 1, v43);
        sub_233E40((__int64)v43);
        __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v38 = (unsigned int *)sub_186B300(v19 - 1, v37);
      v39 = v38[1];
      v19 = v38 + 2;
      *(_QWORD *)(v17 + 2128) = v38 + 2;
      *v38 = v36;
      LODWORD(v38) = v39;
      v24 = &v19[v39];
      v23 = (_DWORD)v38 + 1;
    }
    else
    {
      v22 = v21;
      v23 = v21 + 1;
      v24 = &v19[v22];
    }
  }
  else
  {
    v41 = (_QWORD *)sub_186B270(0x18u);
    v19 = v41 + 1;
    *v41 = 2;
    v23 = 1;
    *(_QWORD *)(v17 + 2128) = v19;
    v24 = v19;
  }
  *v24 = v20;
  *((_DWORD *)v19 - 1) = v23;
  return 1;
}

