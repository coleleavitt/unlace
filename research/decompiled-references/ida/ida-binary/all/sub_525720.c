unsigned __int64 __fastcall stylable_widget_mixin_t__::vfunc_3(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 (__fastcall *v3)(__int64); // rcx
  __int64 v4; // rax
  void (__fastcall *v5)(__int64, __int64 *); // rax
  const void *v6; // r13
  size_t v7; // rax
  size_t v8; // rbx
  const char *v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rbp
  __int64 v15; // rbx
  __int64 *v16; // rax
  __int64 v17; // rdi
  size_t v19; // r14
  __int64 v20; // [rsp+0h] [rbp-68h] BYREF
  __int128 v21; // [rsp+8h] [rbp-60h]
  void *v22; // [rsp+20h] [rbp-48h] BYREF
  __int128 v23; // [rsp+28h] [rbp-40h]
  unsigned __int64 v24; // [rsp+38h] [rbp-30h]

  v2 = *(_QWORD *)a1;
  v24 = __readfsqword(0x28u);
  v21 = 0;
  v3 = *(__int64 (__fastcall **)(__int64))(v2 + 32);
  v20 = 0;
  if ( v3 == stylable_widget_mixin_t__::vfunc_4 )
    (*(void (__fastcall **)(__int64, __int64 *))(v2 + 40))(a1, &v20);
  else
    ((void (__fastcall *)(__int64, __int64 *))v3)(a1, &v20);
  v4 = *(_QWORD *)a1;
  v22 = nullptr;
  v23 = 0;
  v5 = *(void (__fastcall **)(__int64, __int64 *))(v4 + 16);
  if ( v5 == stylable_widget_mixin_t__::vfunc_2 )
  {
    v6 = *(const void **)(a1 + 56);
    if ( !v6 )
      goto LABEL_6;
    v7 = strlen(*(const char **)(a1 + 56));
    v8 = v7;
    if ( !v7 )
      goto LABEL_6;
    v19 = v7 + 1;
    v22 = (void *)qvector_reserve(&v22, 0, v7 + 1, 1);
    *(_QWORD *)&v23 = v19;
    memmove(v22, v6, v8);
    *((_BYTE *)v22 + v8) = 0;
  }
  else
  {
    v5(a1, (__int64 *)&v22);
  }
  if ( !(_QWORD)v23 )
  {
LABEL_6:
    v9 = &s1;
    goto LABEL_7;
  }
  v9 = (const char *)v22;
LABEL_7:
  sub_525060(a2, &v20, v9);
  if ( v22 )
  {
    *(_QWORD *)&v23 = 0;
    qfree(v22, (const char *)&v20);
  }
  v13 = v20;
  if ( v20 )
  {
    v14 = v21;
    if ( (_QWORD)v21 )
    {
      v15 = 0;
      do
      {
        v16 = (__int64 *)(v13 + 24 * v15);
        v17 = *v16;
        if ( *v16 )
        {
          v16[1] = 0;
          qfree(v17, (const char *)&v20);
          v13 = v20;
        }
        ++v15;
      }
      while ( v14 != v15 );
    }
    qfree(v13, (const char *)&v20, v13, v10, v11, v12, v20, 0, *((_QWORD *)&v21 + 1));
  }
  return v24 - __readfsqword(0x28u);
}
