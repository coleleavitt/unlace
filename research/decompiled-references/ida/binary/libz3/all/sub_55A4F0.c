__int64 *__fastcall sub_55A4F0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *exception; // r13
  _QWORD *v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbp
  _QWORD *v12; // rax
  _QWORD *v13; // rbx
  __int64 v14; // r12
  bool v15; // zf
  __int64 v16; // rbp
  __int64 v17; // r15
  __int64 v18; // rax
  __int64 v19; // rdx
  unsigned int v20; // eax
  unsigned int v21; // ecx
  size_t v22; // rsi
  unsigned int *v23; // rax
  __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rbp
  __int64 v27; // rsi
  __int64 v28; // rdi
  __int64 *v29; // rbp
  unsigned __int64 v30; // r12
  __int64 v31; // rsi
  __int64 v34; // [rsp+10h] [rbp-A8h]
  unsigned int v35; // [rsp+1Ch] [rbp-9Ch]
  __int64 v37[2]; // [rsp+50h] [rbp-68h] BYREF
  _QWORD *v38; // [rsp+60h] [rbp-58h] BYREF
  __int64 v39; // [rsp+68h] [rbp-50h]
  _QWORD v40[9]; // [rsp+70h] [rbp-48h] BYREF

  a1[1] = a3;
  v10 = *(_QWORD *)a4;
  *a1 = 0;
  sub_55A110((__int64 *)&v38, a2, a3, v10);
  v11 = (__int64)v38;
  v12 = (_QWORD *)sub_186B270(0x18u);
  v12[1] = v11;
  v13 = v12 + 1;
  *v12 = 0x100000002LL;
  if ( *(_DWORD *)(a4 + 16) )
  {
    v14 = 0;
    sub_55A110(v37, a2, a3, **(_QWORD **)(a4 + 8));
    while ( 1 )
    {
      v16 = v37[0];
      v17 = v37[1];
      v18 = sub_15E1A70(a3);
      v19 = v18;
      if ( v18 )
        ++*(_DWORD *)(v18 + 8);
      v20 = *((_DWORD *)v13 - 1);
      if ( v20 == *((_DWORD *)v13 - 2) )
      {
        v21 = (3 * v20 + 1) >> 1;
        v22 = 8 * v21 + 8;
        if ( 8 * v20 + 8 >= (unsigned int)v22 || v20 >= v21 )
        {
          exception = __cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)&v38, "Overflow encountered when expanding vector");
          v5 = v38;
          exception[1] = exception + 3;
          v6 = v39;
          *exception = off_1C63128;
          if ( v5 == v40 )
          {
            qmemcpy(exception + 3, v40, (unsigned int)(v6 + 1));
          }
          else
          {
            v7 = v40[0];
            exception[1] = v5;
            exception[3] = v7;
          }
          exception[2] = v6;
          v38 = v40;
          v39 = 0;
          LOBYTE(v40[0]) = 0;
          sub_233E40((__int64)&v38);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v35 = (3 * v20 + 1) >> 1;
        v34 = v19;
        v23 = (unsigned int *)sub_186B300(v13 - 1, v22);
        v13 = v23 + 2;
        v19 = v34;
        *v23 = v35;
        v20 = v23[1];
      }
      v13[v20] = v19;
      *((_DWORD *)v13 - 1) = v20 + 1;
      if ( v16 && (v15 = *(_DWORD *)(v16 + 8) == 1, --*(_DWORD *)(v16 + 8), v15) )
      {
        ++v14;
        sub_15D7BC0(v17, v16);
        if ( (unsigned int)v14 >= *(_DWORD *)(a4 + 16) )
        {
LABEL_14:
          v24 = *((unsigned int *)v13 - 1);
          goto LABEL_15;
        }
      }
      else if ( (unsigned int)++v14 >= *(_DWORD *)(a4 + 16) )
      {
        goto LABEL_14;
      }
      sub_55A110(v37, a2, a3, *(_QWORD *)(*(_QWORD *)(a4 + 8) + 8 * v14));
    }
  }
  v24 = 1;
LABEL_15:
  v25 = sub_15EC1C0(a3, v24);
  v26 = v25;
  if ( v25 )
    ++*(_DWORD *)(v25 + 8);
  v27 = *a1;
  if ( *a1 )
  {
    v28 = a1[1];
    v15 = (*(_DWORD *)(v27 + 8))-- == 1;
    if ( v15 )
      sub_15D7BC0(v28, v27);
  }
  *a1 = v26;
  v29 = v13;
  v30 = (unsigned __int64)&v13[*((unsigned int *)v13 - 1)];
  if ( (unsigned __int64)v13 < v30 )
  {
    do
    {
      while ( 1 )
      {
        v31 = *v29;
        if ( *v29 )
        {
          v15 = (*(_DWORD *)(v31 + 8))-- == 1;
          if ( v15 )
            break;
        }
        if ( (unsigned __int64)++v29 >= v30 )
          goto LABEL_26;
      }
      ++v29;
      sub_15D7BC0(a3, v31);
    }
    while ( (unsigned __int64)v29 < v30 );
  }
LABEL_26:
  sub_186B220(v13 - 1);
  return a1;
}

