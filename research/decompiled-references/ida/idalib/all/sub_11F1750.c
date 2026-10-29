void __fastcall sub_11F1750(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        double a8)
{
  __int64 v8; // r15
  __int64 v11; // r13
  int v12; // ecx
  __int64 *v13; // rax
  __int64 v14; // rbp
  void *v15; // r15
  _QWORD *v16; // r12
  void (__fastcall *v17)(_QWORD *); // rax
  __int64 v18; // r13
  __int64 v19; // rbp
  void *v20; // rdi
  _QWORD *v21; // rdi
  _QWORD *v22; // rdi
  void **v23; // r13
  void **v24; // rbp
  void *v25; // rdi
  _QWORD *v26; // rdi
  __int64 *v29; // [rsp+10h] [rbp-138h]
  const __m128i *v30; // [rsp+20h] [rbp-128h]
  __int64 v31; // [rsp+28h] [rbp-120h]
  void *v32[2]; // [rsp+30h] [rbp-118h] BYREF
  __int64 v33; // [rsp+40h] [rbp-108h] BYREF
  void *v34[4]; // [rsp+50h] [rbp-F8h] BYREF
  __int16 v35; // [rsp+70h] [rbp-D8h]
  void *ptr[2]; // [rsp+80h] [rbp-C8h] BYREF
  _BYTE v37[184]; // [rsp+90h] [rbp-B8h] BYREF

  v8 = a3;
  v11 = *(_QWORD *)(a1 + 24);
  v12 = *(_DWORD *)(a3 + 8);
  ptr[0] = v37;
  ptr[1] = (void *)0x1000000000LL;
  v29 = *(__int64 **)a5;
  if ( v12 )
  {
    do
    {
      v13 = *(__int64 **)(v8 + 16);
      v8 = *v13;
    }
    while ( *(_DWORD *)(*v13 + 8) );
  }
  if ( sub_10DCD30(a6, 0x4A5u)
    && ((*(_DWORD *)(v11 + 60) & 0xFFFFFFF7) != 1 || !(unsigned __int8)sub_22B7F30(v11 + 16, 10, 7, 0)) )
  {
    sub_10DC5D0((__int64)ptr, (__int64)"-Q");
  }
  if ( (unsigned int)(*(_DWORD *)(v8 + 12) - 38) <= 1 )
  {
    if ( sub_10DCD30(a6, 0x819u) )
    {
      sub_10DC5D0((__int64)ptr, (__int64)"--gstabs");
    }
    else if ( sub_10DCD30(a6, 0x24u) )
    {
      sub_10DC5D0((__int64)ptr, (__int64)"-g");
    }
  }
  sub_11E88F0(a1, a6, (__int64)ptr);
  if ( (unsigned int)(*(_DWORD *)(v11 + 48) - 37) <= 1 || sub_10DCD30(a6, 0x626u) )
    sub_10DC5D0((__int64)ptr, (__int64)"-force_cpusubtype_ALL");
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 24) + 48LL) != 38
    && ((sub_10DCD30(a6, 0x992u) || sub_10DCD30(a6, 0x1ACu))
     && (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 808LL))(*(_QWORD *)(a1 + 24))
     || sub_10DCD30(a6, 0xCE3u)) )
  {
    sub_10DC5D0((__int64)ptr, (__int64)"-static");
  }
  sub_21B6F20(a6, ptr, 3403, 3487, 0);
  sub_10DC5D0((__int64)ptr, (__int64)"-o");
  sub_10DC5D0((__int64)ptr, *a4);
  sub_10DC5D0((__int64)ptr, *v29);
  sub_112D530(v32, *(_QWORD *)(a1 + 24), "as");
  v34[0] = v32;
  v35 = 260;
  v14 = sub_10DA6C0(a6, (__int64)v34);
  if ( v32[0] != &v33 )
    operator delete(v32[0]);
  v30 = *(const __m128i **)a5;
  v31 = *(unsigned int *)(a5 + 8);
  v15 = (void *)operator new(0x208u);
  sub_1106AE0((__int64)v15, a3, a1, 2, 0, v14, (__int64)ptr, v30, v31, (__int64)a4, 1, 0);
  v34[0] = v15;
  sub_118A0F0(a2, (__int64 *)v34, a7, a8);
  v16 = v34[0];
  if ( v34[0] )
  {
    v17 = *(void (__fastcall **)(_QWORD *))(*(_QWORD *)v34[0] + 8LL);
    if ( v17 == sub_10D4290 )
    {
      v18 = *((_QWORD *)v34[0] + 58);
      v19 = *((_QWORD *)v34[0] + 57);
      *(_QWORD *)v34[0] = &off_2BA8F30;
      if ( v18 != v19 )
      {
        do
        {
          if ( *(_BYTE *)(v19 + 32) && *(_QWORD *)v19 != v19 + 16 )
            operator delete(*(void **)v19);
          v19 += 40;
        }
        while ( v18 != v19 );
        v19 = v16[57];
      }
      if ( v19 )
        operator delete((void *)v19);
      v20 = (void *)v16[54];
      if ( v20 )
        operator delete(v20);
      v21 = (_QWORD *)v16[50];
      if ( v21 != v16 + 52 )
        operator delete(v21);
      v22 = (_QWORD *)v16[32];
      if ( v22 != v16 + 34 )
        free(v22);
      v23 = (void **)v16[29];
      v24 = (void **)v16[28];
      if ( v23 != v24 )
      {
        do
        {
          while ( *v24 != v24 + 2 )
          {
            operator delete(*v24);
            v24 += 4;
            if ( v23 == v24 )
            {
              v24 = (void **)v16[28];
              goto LABEL_33;
            }
          }
          v24 += 4;
        }
        while ( v23 != v24 );
        v24 = (void **)v16[28];
      }
LABEL_33:
      if ( v24 )
        operator delete(v24);
      v25 = (void *)v16[25];
      if ( v25 )
        operator delete(v25);
      v26 = (_QWORD *)v16[7];
      if ( v26 != v16 + 9 )
        free(v26);
      operator delete(v16, 0x208u);
    }
    else
    {
      v17((_QWORD *)v34[0]);
    }
  }
  if ( ptr[0] != v37 )
    free(ptr[0]);
}
