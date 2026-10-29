unsigned __int64 sub_20A490()
{
  const char *v0; // rsi
  int v1; // r9d
  __int64 v2; // rdx
  __int64 v3; // rbp
  __int64 v4; // rbx
  __int64 *v5; // rax
  __int64 v6; // rdi
  _QWORD *v7; // rbx
  _QWORD *v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // rbp
  __int64 v11; // rbx
  __int64 *v12; // rax
  __int64 v13; // rdi
  __int64 v15; // [rsp+0h] [rbp-158h] BYREF
  __int128 v16; // [rsp+8h] [rbp-150h]
  _QWORD v17[7]; // [rsp+20h] [rbp-138h] BYREF
  __int64 v18; // [rsp+58h] [rbp-100h]
  __int64 v19; // [rsp+60h] [rbp-F8h]
  __int64 v20; // [rsp+70h] [rbp-E8h]
  __int64 v21; // [rsp+78h] [rbp-E0h]
  __int64 v22; // [rsp+88h] [rbp-D0h]
  __int64 v23; // [rsp+98h] [rbp-C0h]
  __int64 v24; // [rsp+A0h] [rbp-B8h]
  __int64 v25; // [rsp+B0h] [rbp-A8h]
  __int64 v26; // [rsp+B8h] [rbp-A0h]
  _QWORD *v27; // [rsp+D0h] [rbp-88h]
  __int64 v28; // [rsp+D8h] [rbp-80h]
  __int64 v29; // [rsp+F0h] [rbp-68h]
  __int64 v30; // [rsp+F8h] [rbp-60h]
  __int64 v31; // [rsp+108h] [rbp-50h]
  __int64 v32; // [rsp+110h] [rbp-48h]
  unsigned int v33; // [rsp+120h] [rbp-38h]
  unsigned __int8 v34; // [rsp+128h] [rbp-30h]
  unsigned __int64 v35; // [rsp+138h] [rbp-20h]

  v35 = __readfsqword(0x28u);
  sub_209380((__int64)v17);
  v0 = nullptr;
  v15 = 0;
  v16 = 0;
  if ( (unsigned int)callui(203, 0, (unsigned int)v17, (unsigned int)&v15, (unsigned int)&callui, v1) == 1 )
  {
    reg_int_op("DerefMaxDepth", 1, v33, "Debugger");
    v0 = (_BYTE *)(&dword_0 + 1);
    reg_int_op("DerefHideDefaultSegments", 1, v34, "Debugger");
    sub_1E40D0();
    sub_2C9580();
  }
  if ( v15 )
  {
    *(_QWORD *)&v16 = 0;
    qfree(v15, v0);
  }
  v2 = v31;
  v17[0] = &forms::dialog_desc_t___vtable;
  if ( v31 )
  {
    v3 = v32;
    if ( v32 )
    {
      v4 = 0;
      do
      {
        v5 = (__int64 *)(v2 + 24 * v4);
        v6 = *v5;
        if ( *v5 )
        {
          v5[1] = 0;
          qfree(v6, v0);
          v2 = v31;
        }
        ++v4;
      }
      while ( v3 != v4 );
    }
    v32 = 0;
    qfree(v2, v0);
  }
  if ( v29 )
  {
    v30 = 0;
    qfree(v29, v0);
  }
  v7 = v27;
  v8 = &v27[v28];
  if ( v27 != v8 )
  {
    do
    {
      if ( *v7 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 8LL))(*v7);
      ++v7;
    }
    while ( v8 != v7 );
    v8 = v27;
  }
  if ( v8 )
  {
    v28 = 0;
    qfree(v8, v0);
  }
  v17[0] = &forms::abstract_form_desc_t___vtable;
  if ( v25 )
  {
    v26 = 0;
    qfree(v25, v0);
  }
  v17[0] = &forms::container_t___vtable;
  if ( v23 )
  {
    v24 = 0;
    qfree(v23, v0);
  }
  v17[0] = &forms::abstract_container_t___vtable;
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 8LL))(v22);
  v9 = v20;
  v22 = 0;
  v17[0] = &forms::element_t___vtable;
  if ( v20 )
  {
    v10 = v21;
    if ( v21 )
    {
      v11 = 0;
      do
      {
        v12 = (__int64 *)(v9 + 24 * v11);
        v13 = *v12;
        if ( *v12 )
        {
          v12[1] = 0;
          qfree(v13, v0);
          v9 = v20;
        }
        ++v11;
      }
      while ( v10 != v11 );
    }
    v21 = 0;
    qfree(v9, v0);
  }
  if ( v18 )
  {
    v19 = 0;
    qfree(v18, v0);
  }
  return v35 - __readfsqword(0x28u);
}
