__int64 __fastcall sub_4D60A0(__int64 *a1, __int64 *a2)
{
  unsigned int v3; // ebp
  __int64 v4; // rax
  __int64 v6; // rdx
  unsigned int v7; // r12d
  unsigned int v8; // r12d
  __int64 v9; // r14
  void *v10; // r15
  __int64 (__fastcall *v11)(__int64, __int64); // rdx
  char v12; // al
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rax
  char v17; // dl
  bool v18; // cl
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // rax
  void (__fastcall ***v23)(void *, __int64); // rbx
  bool v24; // zf
  void (__fastcall ***v25)(void *, __int64); // rbx
  unsigned int v26; // ebx
  void (__fastcall ***v27)(_QWORD); // rbx
  void (__fastcall ***v28)(_QWORD); // rbx
  unsigned int v29; // [rsp+14h] [rbp-64h]
  __int64 v30; // [rsp+28h] [rbp-50h] BYREF
  void *ptr; // [rsp+30h] [rbp-48h] BYREF
  void *v32; // [rsp+38h] [rbp-40h] BYREF

  v3 = *((_DWORD *)a1 + 6);
  v4 = *a1;
  if ( !v3 )
    return (*(__int64 (**)(void))(v4 + 56))();
  v6 = a1[2];
  if ( v6 )
  {
    v29 = *(_DWORD *)(v6 - 4);
    v7 = v29;
  }
  else
  {
    v29 = 0;
    v7 = 0;
  }
  v30 = 0;
  v8 = v7 - v3;
  (*(void (__fastcall **)(void **, __int64 *))(v4 + 200))(&ptr, a1);
  (*(void (__fastcall **)(void **, __int64 *))(*a1 + 208))(&v32, a1);
  v9 = 8LL * v8;
  while ( 1 )
  {
    v10 = v32;
    v11 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)ptr + 40LL);
    if ( v11 == sub_4C9890 )
    {
      if ( !(*(unsigned __int8 (**)(void))(*(_QWORD *)ptr + 16LL))() )
        goto LABEL_10;
      v12 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v10 + 16LL))(v10);
    }
    else
    {
      v12 = v11((__int64)ptr, (__int64)v32);
    }
    if ( v12 )
      break;
LABEL_10:
    v13 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)ptr + 24LL))(ptr);
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 24LL))(v13, &v30);
    v14 = v30;
    v15 = *a2;
    if ( !v8 )
      goto LABEL_16;
    v16 = 0;
    v17 = 0;
    do
    {
      v18 = *(_QWORD *)(v30 + v16) != *(_QWORD *)(v15 + v16);
      v16 += 8;
      v17 |= v18;
    }
    while ( v9 != v16 );
    if ( !v17 )
    {
      if ( v8 < v29 )
      {
LABEL_16:
        v19 = v3 - 1;
        v20 = v9 + 8;
        if ( (unsigned int)v19 <= 2 || (v20 = v9 + 8, v15 + v9 == v30 + v9 + 8) )
        {
          while ( 1 )
          {
            *(_QWORD *)(v15 + v9) = *(_QWORD *)(v14 + v9);
            v9 = v20;
            if ( v20 == 8 * (v8 + v19 + 1) )
              break;
            v20 += 8;
          }
        }
        else
        {
          v21 = v30 + v9;
          v22 = 0;
          do
          {
            *(__m128i *)(v15 + v9 + v22) = _mm_loadu_si128((const __m128i *)(v21 + v22));
            v22 += 16;
          }
          while ( 16LL * (v3 >> 1) != v22 );
          if ( (v3 & 1) != 0 )
            *(_QWORD *)(v15 + 8LL * ((v3 & 0xFFFFFFFE) + v8)) = *(_QWORD *)(v14 + 8LL * ((v3 & 0xFFFFFFFE) + v8));
        }
      }
      v23 = (void (__fastcall ***)(void *, __int64))v32;
      if ( v32 )
      {
        v24 = (*((_DWORD *)v32 + 2))-- == 1;
        if ( v24 )
        {
          (**v23)(v23, v14);
          sub_186B220(v23);
        }
      }
      v25 = (void (__fastcall ***)(void *, __int64))ptr;
      if ( ptr )
      {
        v24 = (*((_DWORD *)ptr + 2))-- == 1;
        if ( v24 )
        {
          (**v25)(v25, v14);
          sub_186B220(v25);
        }
      }
      v26 = 1;
      goto LABEL_29;
    }
    (*(void (__fastcall **)(void *, __int64))(*(_QWORD *)ptr + 32LL))(ptr, v30);
  }
  v27 = (void (__fastcall ***)(_QWORD))v32;
  if ( v32 )
  {
    v24 = (*((_DWORD *)v32 + 2))-- == 1;
    if ( v24 )
    {
      (**v27)(v27);
      sub_186B220(v27);
    }
  }
  v28 = (void (__fastcall ***)(_QWORD))ptr;
  if ( ptr )
  {
    v24 = (*((_DWORD *)ptr + 2))-- == 1;
    if ( v24 )
    {
      (**v28)(v28);
      sub_186B220(v28);
    }
  }
  v26 = 0;
LABEL_29:
  if ( v30 )
    sub_186B220((void *)(v30 - 8));
  return v26;
}

