__int64 __fastcall sub_253CA0(
        __int64 a1,
        int a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        _QWORD *a7,
        unsigned int a8,
        __int64 a9,
        unsigned int a10,
        __int64 a11,
        __int64 *a12,
        __int64 a13)
{
  char **exception; // rbx
  __int64 v14; // r15
  _QWORD *v17; // rbx
  __int64 v18; // r13
  __int64 v20; // rbx
  _QWORD *v21; // rax
  __int64 *v22; // r13
  __int64 v23; // rdx
  __int64 v24; // rax
  unsigned int v25; // ecx
  size_t v26; // rsi
  unsigned int *v27; // rax
  _DWORD *v28; // rdi
  __int64 v29; // rax
  int v30; // edx
  __int64 v31; // rbx
  __int64 v32; // rax
  __int64 v34; // rbx
  __int64 v35; // [rsp+0h] [rbp-90h]
  int v36; // [rsp+8h] [rbp-88h]
  unsigned int v37; // [rsp+Ch] [rbp-84h]
  __int64 v38; // [rsp+10h] [rbp-80h]
  unsigned int v39; // [rsp+14h] [rbp-7Ch]
  int ptr; // [rsp+18h] [rbp-78h]
  _DWORD *ptra; // [rsp+18h] [rbp-78h]
  int ptrb; // [rsp+18h] [rbp-78h]
  int v43; // [rsp+20h] [rbp-70h]
  void *v44; // [rsp+28h] [rbp-68h]
  __int64 v45; // [rsp+30h] [rbp-60h] BYREF
  int v46[2]; // [rsp+38h] [rbp-58h] BYREF
  __int64 v47[10]; // [rsp+40h] [rbp-50h] BYREF

  v14 = a6;
  LODWORD(v38) = a2;
  *(_DWORD *)(a1 + 1520) = 0;
  v37 = a3;
  v35 = a5;
  if ( !(unsigned __int8)sub_15D2CB0(*(_QWORD *)(a1 + 232), a13) )
  {
    sub_24EA30(a1, 1u, nullptr);
    return 0;
  }
  if ( (_DWORD)v14 && a8 )
  {
    sub_24EA30(a1, 0xAu, nullptr);
    return 0;
  }
  v45 = a4;
  *(_QWORD *)v46 = 0x100000000LL;
  if ( (_DWORD)v14 )
  {
    v17 = a7;
    while ( (unsigned __int8)sub_15A7C10((int)v46, -1, a10, *v17, 0, 0, v35, v36, v38, ptr, v43, v44) )
    {
      if ( &a7[(unsigned int)v14] == ++v17 )
        goto LABEL_11;
    }
    sub_24EA30(a1, 6u, nullptr);
    return 0;
  }
LABEL_11:
  if ( a10 )
  {
    v20 = *a12;
    v21 = (_QWORD *)(sub_186B270(0x18u) + 8);
    v22 = a12;
    v23 = 1;
    *(v21 - 1) = 2;
    ptra = v21;
    while ( 1 )
    {
      *v21 = v20;
      ++v22;
      *(ptra - 1) = v23;
      if ( &a12[a10] == v22 )
        break;
      v20 = *v22;
      if ( *(ptra - 2) == (_DWORD)v23 )
      {
        v25 = (unsigned int)(3 * v23 + 1) >> 1;
        v26 = 8 * v25 + 8;
        if ( 8 * (int)v23 + 8 >= (unsigned int)v26 || (unsigned int)v23 >= v25 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v47, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v47);
          sub_233E40((__int64)v47);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v39 = (unsigned int)(3 * v23 + 1) >> 1;
        v27 = (unsigned int *)sub_186B300(ptra - 2, v26);
        v28 = v27 + 2;
        ptra = v27 + 2;
        *v27 = v39;
        v29 = v27[1];
        v30 = v29;
        v21 = &v28[2 * v29];
        v23 = (unsigned int)(v30 + 1);
      }
      else
      {
        v24 = (unsigned int)v23;
        v23 = (unsigned int)(v23 + 1);
        v21 = &ptra[2 * v24];
      }
    }
    v31 = *(_QWORD *)(a1 + 232);
    v47[0] = v35;
    v32 = sub_15DB6A0(v31, (unsigned __int8)v38 ^ 1u, v23, a11, ptra, a13, v37, &v45, v47, v14, a7, a8, a9);
    v18 = v32;
    if ( v32 )
    {
      ++*(_DWORD *)(v32 + 8);
      sub_251FD0(a1, v32);
      if ( (*(_DWORD *)(v18 + 8))-- == 1 )
        sub_15D7BC0(v31, v18);
    }
    else
    {
      sub_251FD0(a1, 0);
    }
    sub_186B220(ptra - 2);
  }
  else
  {
    v34 = *(_QWORD *)(a1 + 232);
    if ( a13 )
    {
      ++*(_DWORD *)(a13 + 8);
      sub_251FD0(a1, a13);
      ptrb = *(_DWORD *)(a13 + 8);
      *(_DWORD *)(a13 + 8) = ptrb - 1;
      if ( ptrb == 1 )
        sub_15D7BC0(v34, a13);
      return a13;
    }
    else
    {
      sub_251FD0(a1, 0);
      return 0;
    }
  }
  return v18;
}

