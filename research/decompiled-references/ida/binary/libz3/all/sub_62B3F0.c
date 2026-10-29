__int64 __fastcall sub_62B3F0(__int64 a1, __int64 a2, _QWORD *a3)
{
  char **exception; // r12
  __int64 v4; // r13
  _QWORD *v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 result; // rax
  __int64 v11; // r15
  __int64 v12; // r14
  _QWORD *v13; // rdx
  __int64 v14; // r15
  _QWORD *v15; // rax
  unsigned __int64 v16; // r13
  _QWORD *v17; // rcx
  unsigned int v18; // eax
  __int64 v19; // rcx
  unsigned int v20; // ecx
  size_t v21; // rsi
  unsigned int v22; // r12d
  unsigned int *v23; // rax
  __int64 v24; // rcx
  __int64 v26[4]; // [rsp+20h] [rbp-88h] BYREF
  __int64 *v27; // [rsp+40h] [rbp-68h] BYREF
  void *ptr; // [rsp+48h] [rbp-60h]
  __int64 v29; // [rsp+50h] [rbp-58h]
  int v30; // [rsp+58h] [rbp-50h]
  __int64 v31; // [rsp+60h] [rbp-48h]
  __int64 v32; // [rsp+68h] [rbp-40h]

  v4 = a1;
  if ( *a3 )
    *(_DWORD *)(*a3 - 4LL) = 0;
  v27 = nullptr;
  v6 = (_QWORD *)sub_186B270(0xC0u);
  *v6 = 0;
  v7 = *(_QWORD *)(a1 + 40);
  v6[1] = 0;
  v6[3] = 0;
  v6[4] = 0;
  v6[6] = 0;
  v6[7] = 0;
  v6[9] = 0;
  v6[10] = 0;
  v6[12] = 0;
  v6[13] = 0;
  v6[15] = 0;
  v6[16] = 0;
  v6[18] = 0;
  v6[19] = 0;
  v6[21] = 0;
  v6[22] = 0;
  *((_DWORD *)v6 + 4) = 0;
  *((_DWORD *)v6 + 10) = 0;
  *((_DWORD *)v6 + 16) = 0;
  *((_DWORD *)v6 + 22) = 0;
  *((_DWORD *)v6 + 28) = 0;
  *((_DWORD *)v6 + 34) = 0;
  *((_DWORD *)v6 + 40) = 0;
  *((_DWORD *)v6 + 46) = 0;
  ptr = v6;
  v29 = 8;
  v30 = 0;
  v31 = 0;
  v32 = 0xFFFFFFFFLL;
  sub_1662C60(&v27, v7, 0);
  v8 = *(unsigned int *)(a1 + 56);
  v9 = a1 + 8 * v8;
  if ( (_DWORD)v8 )
  {
    do
    {
      sub_1662C60(&v27, *(_QWORD *)(v4 + 80) & 0xFFFFFFFFFFFFFFF8LL, 0);
      v4 += 8;
    }
    while ( v4 != v9 );
  }
  result = (__int64)v27;
  if ( v27 )
  {
    v11 = *((unsigned int *)v27 - 1);
    if ( (_DWORD)v11 )
    {
      v12 = *v27;
      v13 = (_QWORD *)*a3;
      v14 = 8 * v11;
      if ( !*v27 )
        v12 = *(_QWORD *)(a2 + 840);
      if ( v13 )
      {
        v16 = 0;
        goto LABEL_14;
      }
      v15 = (_QWORD *)sub_186B270(0x18u);
      v13 = v15 + 1;
      *v15 = 2;
      v16 = 0;
      result = 1;
      *a3 = v13;
      v17 = v13;
      while ( 1 )
      {
        v16 += 8LL;
        *v17 = v12;
        *((_DWORD *)v13 - 1) = result;
        if ( v14 == v16 )
          break;
        while ( 1 )
        {
          v12 = v27[v16 / 8];
          if ( !v12 )
            v12 = *(_QWORD *)(a2 + 840);
LABEL_14:
          v18 = *((_DWORD *)v13 - 1);
          if ( v18 == *((_DWORD *)v13 - 2) )
            break;
          v19 = v18;
          v16 += 8LL;
          result = v18 + 1;
          v13[v19] = v12;
          *((_DWORD *)v13 - 1) = result;
          if ( v14 == v16 )
            goto LABEL_16;
        }
        v20 = (3 * v18 + 1) >> 1;
        v21 = 8 * v20 + 8;
        v22 = v20;
        if ( 8 * v18 + 8 >= (unsigned int)v21 || v18 >= v20 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v26, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v26);
          sub_233E40((__int64)v26);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v23 = (unsigned int *)sub_186B300(v13 - 1, v21);
        v24 = v23[1];
        v13 = v23 + 2;
        *v23 = v22;
        *a3 = v23 + 2;
        LODWORD(v23) = v24;
        v17 = &v13[v24];
        result = (unsigned int)((_DWORD)v23 + 1);
      }
    }
  }
LABEL_16:
  if ( v31 )
    result = sub_186B220((void *)(v31 - 8));
  if ( ptr )
    result = sub_186B220(ptr);
  if ( v27 )
    return sub_186B220(v27 - 1);
  return result;
}

