__int64 __fastcall sub_386450(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v6; // r13
  __int64 v7; // r14
  char v8; // al
  __int64 v9; // rsi
  __int64 (__fastcall *v10)(__int64, __int64); // rdx
  char v11; // al
  __int64 v12; // rsi
  unsigned int v13; // ebp
  bool v14; // zf
  unsigned __int8 v15; // bl
  __int64 (__fastcall *v16)(__int64, __int64); // rdx
  __int64 *v17; // rdi
  int v18; // eax
  __int64 v19; // rdi
  int v20; // ebp
  __int64 v21; // rax
  __int64 v23; // rdi
  void (__fastcall ***v24)(_QWORD); // rdi
  __int64 v25; // [rsp+28h] [rbp-70h] BYREF
  _DWORD *v26; // [rsp+30h] [rbp-68h] BYREF
  __int64 v27; // [rsp+38h] [rbp-60h] BYREF
  __int64 *v28; // [rsp+40h] [rbp-58h] BYREF
  int v29; // [rsp+48h] [rbp-50h]
  __int64 v30; // [rsp+50h] [rbp-48h]
  unsigned __int64 v31; // [rsp+58h] [rbp-40h]

  v4 = *(_QWORD *)(a2 + 40);
  v31 = __readfsqword(0x28u);
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 128LL))(v4);
  if ( dword_8BCA58 != (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v4 + 112LL))(v4) )
  {
    v7 = *(_QWORD *)(a3 + 728);
    (*(void (__fastcall **)(__int64 *, _QWORD, __int64, __int64, __int64, _QWORD))(**(_QWORD **)(v7 + 40) + 48LL))(
      &v25,
      *(_QWORD *)(v7 + 40),
      v6,
      1,
      3,
      0);
    if ( v25 )
    {
      v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 8LL))(v25);
      v9 = v25;
      if ( v8 )
      {
        v10 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v25 + 32LL);
        if ( v10 == sub_1992A0 )
          (*(void (__fastcall **)(_DWORD **, __int64))(*(_QWORD *)v25 + 24LL))(&v26, v25);
        else
          v10((__int64)&v26, v25);
        (*(void (__fastcall **)(__int64 *))(*(_QWORD *)v26 + 8LL))(&v27);
        if ( v27 )
        {
          v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v27 + 8LL))(v27);
          v12 = v27;
          v13 = 0;
          while ( 1 )
          {
            v15 = v11 & (v13 ^ 1);
            if ( !v15 )
              break;
            v16 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 32LL);
            if ( v16 == sub_226CE0 )
              (*(void (__fastcall **)(__int64 **))(*(_QWORD *)v12 + 24LL))(&v28);
            else
              ((void (__fastcall *)(__int64 **))v16)(&v28);
            v17 = v28;
            v13 = 0;
            if ( v28 == *(__int64 **)(v7 + 48) )
            {
              v18 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v26 + 24LL))(v26);
              v19 = *(_QWORD *)(a1 + 40);
              v20 = v18;
              if ( v19 )
              {
                qfree(v19, (const char *)v12);
                *(_QWORD *)(a1 + 40) = 0;
              }
              v21 = qalloc_or_throw(24);
              *(_DWORD *)(v21 + 12) = v20;
              v13 = v15;
              *(_DWORD *)(v21 + 8) = 0;
              *(_QWORD *)v21 = &srcdbg_place_t___vtable;
              *(_QWORD *)(v21 + 16) = v6;
              v17 = v28;
              *(_QWORD *)(a1 + 40) = v21;
            }
            if ( v17 )
            {
              v14 = (*((_DWORD *)v17 + 2))-- == 1;
              if ( v14 )
                (*(void (__fastcall **)(__int64 *))*v17)(v17);
            }
            v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
            v12 = v27;
          }
          if ( v12 )
          {
            v14 = (*(_DWORD *)(v12 + 8))-- == 1;
            if ( v14 )
              (**(void (__fastcall ***)(__int64))v12)(v12);
          }
        }
        else
        {
          v13 = 0;
        }
        v24 = (void (__fastcall ***)(_QWORD))v26;
        if ( v26 )
        {
          v14 = v26[2]-- == 1;
          if ( v14 )
            (**v24)(v24);
        }
        v9 = v25;
        if ( !v25 )
          return v13;
LABEL_20:
        v14 = (*(_DWORD *)(v9 + 8))-- == 1;
        if ( v14 )
          (**(void (__fastcall ***)(__int64))v9)(v9);
        return v13;
      }
      v13 = 0;
      if ( v25 )
        goto LABEL_20;
    }
    return 0;
  }
  v23 = *(_QWORD *)(a1 + 40);
  v30 = v6;
  v29 = -1;
  v28 = &idaplace_t___vtable;
  if ( v23 )
  {
    qfree(v23, (const char *)a2);
    *(_QWORD *)(a1 + 40) = 0;
  }
  v13 = 1;
  *(_QWORD *)(a1 + 40) = idaplace_t__clone(&v28);
  return v13;
}
