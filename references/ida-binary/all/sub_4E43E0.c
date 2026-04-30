unsigned __int64 __fastcall sub_4E43E0(__int64 a1)
{
  __int64 v2; // rbp
  __int64 v3; // r15
  __int64 v4; // rax
  void (__fastcall **v5)(void *); // rsi
  _QWORD *v6; // r13
  bool v7; // zf
  void (__fastcall ***v8)(void *); // rcx
  void (__fastcall *v9)(void *); // r8
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rbp
  __int64 v14; // rbx
  __int64 v15; // rdi
  void *v17; // [rsp+0h] [rbp-88h]
  __int64 v18; // [rsp+10h] [rbp-78h] BYREF
  __int128 v19; // [rsp+18h] [rbp-70h]
  __int64 v20; // [rsp+28h] [rbp-60h]
  __int128 v21; // [rsp+30h] [rbp-58h]
  char v22; // [rsp+40h] [rbp-48h]
  unsigned __int64 v23; // [rsp+48h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  v22 = 0;
  v18 = 0;
  v20 = 0;
  v19 = 0;
  v21 = 0;
  (*(void (__fastcall **)(__int64, __int64 *, __int64))(*(_QWORD *)a1 + 208LL))(a1, &v18, 7);
  v2 = *(_QWORD *)(a1 + 1856);
  v3 = 0;
  if ( v2 )
  {
    do
    {
      v4 = *(_QWORD *)(a1 + 1848) + 80 * v3;
      v5 = *(void (__fastcall ***)(void *))(v4 + 72);
      v6 = (_QWORD *)v4;
      if ( v5 )
      {
        v7 = (*((_DWORD *)v5 + 2))-- == 1;
        if ( v7 )
        {
          v8 = *(void (__fastcall ****)(void *))(v4 + 72);
          v5 = *v8;
          v9 = **v8;
          if ( v9 == refcnted_regex_t__::vfunc_0 )
          {
            if ( v8 )
            {
              v5 = (void (__fastcall **)(void *))v5[2];
              if ( v5 == (void (__fastcall **)(void *))refcnted_regex_t__::vfunc_2 )
              {
                v17 = *(void **)(v4 + 72);
                *v8 = (void (__fastcall **)(void *))&refcnted_regex_t___vtable;
                qregfree(v8 + 2);
                v5 = (void (__fastcall **)(void *))&dword_30;
                operator delete(v17, 0x30u);
              }
              else
              {
                ((void (__fastcall *)(_QWORD))v5)(*(_QWORD *)(v4 + 72));
              }
            }
          }
          else
          {
            v9(*(void **)(v4 + 72));
          }
        }
      }
      v10 = v6[5];
      if ( v10 )
      {
        v6[6] = 0;
        qfree(v10, (const char *)v5);
      }
      v11 = v6[1];
      if ( v11 )
      {
        v6[2] = 0;
        qfree(v11, (const char *)v5);
      }
      ++v3;
    }
    while ( v2 != v3 );
  }
  v7 = *(_QWORD *)(a1 + 1872) == 0;
  *(_QWORD *)(a1 + 1856) = 0;
  if ( v7 )
    *(_DWORD *)(a1 + 1680) &= ~2u;
  sub_4DF9D0(a1, (__int64)&v18, 1);
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 8LL))(v20);
  v12 = v18;
  if ( v18 )
  {
    v13 = v19;
    if ( (_QWORD)v19 )
    {
      v14 = 0;
      do
      {
        v15 = *(_QWORD *)(v12 + 32 * v14);
        if ( v15 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
          v12 = v18;
        }
        ++v14;
      }
      while ( v13 != v14 );
    }
    *(_QWORD *)&v19 = 0;
    qfree(v12, (const char *)&v18);
  }
  return v23 - __readfsqword(0x28u);
}
