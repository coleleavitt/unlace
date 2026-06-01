__int64 *__fastcall sub_505630(__int64 a1, __int64 a2)
{
  void *v3; // rax
  unsigned int v4; // ebp
  __int64 i; // rbx
  void *v6; // rax
  void *v7; // rdi
  _QWORD *(__fastcall *v8)(__int64, __int64); // rax
  void *v9; // rbx
  _QWORD *v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rdi
  _QWORD *v14; // rbp
  _QWORD *v15; // rbx
  __int64 v16; // r12
  _QWORD *v17; // r12
  __int64 v18; // rdi
  void *v19; // rdi
  __int64 *result; // rax
  __int64 v21; // [rsp+8h] [rbp-D0h] BYREF
  _QWORD v22[2]; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v23; // [rsp+20h] [rbp-B8h]
  __int64 v24; // [rsp+30h] [rbp-A8h]
  __int64 v25; // [rsp+38h] [rbp-A0h]
  void *v26; // [rsp+40h] [rbp-98h]
  __int64 v27; // [rsp+50h] [rbp-88h]
  __int64 v28; // [rsp+58h] [rbp-80h]
  _BYTE v29[40]; // [rsp+60h] [rbp-78h] BYREF
  void *ptr; // [rsp+88h] [rbp-50h]
  __int64 v31; // [rsp+90h] [rbp-48h]

  v3 = __dynamic_cast(
         *(const void **)(a1 + 8),
         (const struct __class_type_info *)&`typeinfo for'datalog::relation_plugin,
         (const struct __class_type_info *)&`typeinfo for'datalog::bound_relation_plugin,
         0);
  if ( !v3 )
    __cxa_bad_cast();
  v4 = 0;
  sub_504C90((__int64)v22, (__int64)v3, (_QWORD *)(a1 + 16), 0);
  for ( i = *(_QWORD *)(a2 + 8); i; i = *(_QWORD *)(a2 + 8) )
  {
    if ( v4 >= *(_DWORD *)(i - 4) )
      break;
    v6 = __dynamic_cast(
           *(const void **)(a1 + 8),
           (const struct __class_type_info *)&`typeinfo for'datalog::relation_plugin,
           (const struct __class_type_info *)&`typeinfo for'datalog::bound_relation_plugin,
           0);
    v7 = v6;
    if ( !v6 )
      __cxa_bad_cast();
    v8 = *(_QWORD *(__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 144LL);
    v21 = *(_QWORD *)(i + 8LL * v4);
    if ( v8 == sub_4FF530 )
    {
      if ( v7 == (void *)v22[1] )
      {
        v9 = (void *)sub_186B270(8u);
        *(_QWORD *)v9 = off_1C50398;
        ((void (__fastcall *)(void *, _QWORD *))nullsub_256)(v9, v22);
      }
      else
      {
        v9 = nullptr;
        MEMORY[0x3010102464C458F](0, v22);
      }
    }
    else
    {
      v9 = (void *)((__int64 (__fastcall *)(void *, _QWORD *, __int64 *, _QWORD))v8)(v7, v22, &v21, v4);
      (*(void (__fastcall **)(void *, _QWORD *))(*(_QWORD *)v9 + 16LL))(v9, v22);
    }
    ++v4;
    (**(void (__fastcall ***)(void *))v9)(v9);
    sub_186B220(v9);
  }
  sub_509C00(a1, v22, 0, 0);
  v22[0] = &off_1C66CA0;
  if ( v31 )
    sub_186B220((void *)(v31 - 8));
  v10 = ptr;
  v22[0] = qword_1C66BA8;
  if ( ptr )
  {
    v11 = *((_QWORD *)ptr + 4);
    if ( v11 )
      sub_186B220((void *)(v11 - 8));
    v12 = v10[3];
    if ( v12 )
      sub_186B220((void *)(v12 - 8));
    v13 = v10[2];
    if ( v13 )
      sub_186B220((void *)(v13 - 8));
    sub_186B220(v10);
  }
  v14 = v26;
  if ( v26 )
  {
    v15 = *(_QWORD **)v26;
    if ( *(_QWORD *)v26 )
    {
      v16 = *((unsigned int *)v15 - 1);
      if ( (_DWORD)v16 )
      {
        v17 = &v15[2 * v16];
        do
        {
          while ( 1 )
          {
            v18 = v15[1];
            if ( v18 )
              sub_186B220((void *)(v18 - 8));
            if ( !*v15 )
              break;
            v19 = (void *)(*v15 - 8LL);
            v15 += 2;
            sub_186B220(v19);
            if ( v17 == v15 )
              goto LABEL_27;
          }
          v15 += 2;
        }
        while ( v17 != v15 );
LABEL_27:
        v15 = (_QWORD *)*v14;
      }
      sub_186B220(v15 - 1);
    }
    sub_186B220(v14);
  }
  sub_180C0E0(v29);
  if ( v28 )
    sub_186B220((void *)(v28 - 8));
  if ( v27 )
    sub_186B220((void *)(v27 - 8));
  if ( v25 )
    sub_186B220((void *)(v25 - 8));
  if ( v24 )
    sub_186B220((void *)(v24 - 8));
  result = qword_1C665B0;
  v22[0] = qword_1C665B0;
  if ( v23 )
    return (__int64 *)sub_186B220((void *)(v23 - 8));
  return result;
}

