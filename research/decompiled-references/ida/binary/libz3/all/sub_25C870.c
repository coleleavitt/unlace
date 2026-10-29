_QWORD *__fastcall sub_25C870(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _QWORD *a4,
        __int64 *a5,
        unsigned int a6,
        _QWORD *a7,
        __int64 *a8)
{
  __int64 v8; // r14
  __int64 v9; // rbp
  __int64 v10; // r15
  __int64 v11; // rbx
  __int64 *v12; // r12
  __int64 *v14; // rbp
  __int64 v15; // rdx
  __int64 *v16; // rbp
  _QWORD *v17; // r12
  __int64 *v18; // r15
  __int64 v19; // r14
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rcx
  __int64 v24; // rax
  _QWORD *v25; // rax
  void *v26; // rbx
  _QWORD *v27; // rbp
  __int64 v29; // [rsp+8h] [rbp-70h]
  __int64 v33; // [rsp+28h] [rbp-50h]
  void *ptr; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v35[8]; // [rsp+38h] [rbp-40h] BYREF

  v8 = a3;
  v9 = a6;
  v10 = *(_QWORD *)(a1 + 232);
  *(_DWORD *)(a1 + 1520) = 0;
  v29 = v10;
  v11 = sub_186B270(0x3A0u);
  sub_E059D0(v11, 0, v10, &qword_18D6CD0);
  sub_393520(v11);
  sub_2CFBE0(v11);
  sub_304ED0(v11, 0);
  sub_981E90(v11);
  sub_DFB140(v11);
  *(_BYTE *)(v11 + 273) = 1;
  if ( (_DWORD)v9 )
  {
    v12 = a8;
    v14 = &a8[v9];
    do
    {
      v15 = *v12;
      v35[0] = *a7;
      sub_E06850(v11, v35, v15);
      ++v12;
      ++a7;
    }
    while ( v12 != v14 );
  }
  if ( (_DWORD)v8 )
  {
    v16 = a5;
    v17 = a4;
    v18 = &a5[v8];
    do
    {
      while ( 1 )
      {
        v19 = *v16;
        v35[0] = *v17;
        if ( !sub_DF89E0(v11, v35) )
          break;
        ++v16;
        ++v17;
        if ( v16 == v18 )
          goto LABEL_13;
      }
      v20 = *(_QWORD *)(v11 + 312);
      if ( !v20 )
      {
        sub_DFBCB0(v11);
        v20 = *(_QWORD *)(v11 + 312);
      }
      v21 = sub_DE1240(v20, v19);
      v22 = *(_QWORD *)(v11 + 312);
      v23 = v21;
      if ( !v22 )
      {
        v33 = v21;
        sub_DFBCB0(v11);
        v22 = *(_QWORD *)(v11 + 312);
        v23 = v33;
      }
      v24 = sub_DE1720(v22, 0, v35, v23);
      sub_DFAB80(v11, v24 + 24, v24);
      ptr = (void *)v11;
      sub_25A770(v29, &ptr, v19);
      ++v16;
      ++v17;
    }
    while ( v16 != v18 );
  }
LABEL_13:
  ptr = (void *)v11;
  v25 = sub_25BB00(a1, &ptr, 1u, a2);
  v26 = ptr;
  v27 = v25;
  if ( ptr )
  {
    (**(void (__fastcall ***)(void *))ptr)(ptr);
    sub_186B220(v26);
  }
  return v27;
}

