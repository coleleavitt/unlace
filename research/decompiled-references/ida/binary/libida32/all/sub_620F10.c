unsigned __int64 __fastcall sub_620F10(__int64 a1, __int64 *a2, unsigned __int64 a3)
{
  __int64 v4; // rax
  __int64 (*v6)(void); // rax
  unsigned __int64 *v7; // rax
  __int64 v9; // rbx
  __int64 v10; // rbp
  __int64 v11; // r8
  unsigned __int64 v12; // r15
  __int64 v13; // rdx
  __int64 v14; // rsi
  size_t v15; // rax
  __int64 v16; // r9
  unsigned __int64 v17; // rdx
  __int64 v18; // r14
  _QWORD *v19; // r14
  __int64 v20; // r13
  const char *v21; // rsi
  __int64 v22; // r13
  __int64 v23; // r12
  __int64 v24; // rax
  void *v25; // rdi
  void *v26; // rax
  size_t v27; // rbx
  __int64 v28; // rax
  __int64 v29; // [rsp+8h] [rbp-60h]
  __int64 v30; // [rsp+10h] [rbp-58h] BYREF
  __int128 v31; // [rsp+18h] [rbp-50h]
  unsigned __int64 v32; // [rsp+28h] [rbp-40h]

  v4 = *(_QWORD *)a1;
  v32 = __readfsqword(0x28u);
  v6 = *(__int64 (**)(void))(v4 + 32);
  if ( (char *)v6 == (char *)sub_3D58E0 )
    v7 = (unsigned __int64 *)(a1 + 16);
  else
    v7 = (unsigned __int64 *)v6();
  if ( a3 >= *v7
    && a3 < v7[1]
    && a3 == (*(__int64 (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)a1 + 40LL))(a1, a3, 0) )
  {
    v30 = 0;
    v31 = 0;
    sub_6208E0(a1, &v30, a3);
    v9 = v30;
    v10 = v30 + 24 * v31;
    if ( v30 != v10 )
    {
      do
      {
        if ( *(_QWORD *)(v9 + 8) > 1u )
          tag_remove();
        v9 += 24;
      }
      while ( v10 != v9 );
      v10 = v30;
      v9 = v30;
      v11 = 24 * v31;
      v12 = 0xAAAAAAAAAAAAAAABLL * ((24 * (__int64)v31) >> 3);
      if ( v12 )
      {
        v13 = a2[1];
        v14 = *a2;
        v15 = 0;
        v16 = 3 * v13;
        v17 = v12 + v13;
        v18 = 8 * v16;
        if ( a2[2] < v17 )
        {
          v29 = 24 * v31;
          v28 = qvector_reserve(a2, v14, v17, 24);
          *a2 = v28;
          v14 = v28;
          v11 = v29;
          v15 = 24 * a2[1] - v18;
        }
        v19 = (_QWORD *)(v14 + v18);
        v20 = v9 + v11;
        v21 = (const char *)v19;
        memmove((char *)v19 + v11, v19, v15);
        if ( v9 != v20 )
        {
          do
          {
            *v19 = 0;
            *(_OWORD *)(v19 + 1) = 0;
            v27 = *(_QWORD *)(v10 + 8);
            if ( v27 )
            {
              v26 = (void *)qalloc_or_throw(*(_QWORD *)(v10 + 8), v21);
              *v19 = v26;
              v19[2] = v27;
              v21 = *(const char **)v10;
              memcpy(v26, *(const void **)v10, v27);
              v19[1] = v27;
            }
            v10 += 24;
            v19 += 3;
          }
          while ( v10 != v20 );
        }
        a2[1] += v12;
        v9 = v30;
        v10 = v30;
      }
    }
    if ( v10 )
    {
      v22 = v31;
      if ( (_QWORD)v31 )
      {
        v23 = 0;
        do
        {
          v24 = v10 + 24 * v23;
          v25 = *(void **)v24;
          if ( *(_QWORD *)v24 )
          {
            *(_QWORD *)(v24 + 8) = 0;
            qfree(v25);
            v9 = v30;
          }
          ++v23;
          v10 = v9;
        }
        while ( v22 != v23 );
      }
      *(_QWORD *)&v31 = 0;
      qfree((void *)v10);
    }
  }
  return v32 - __readfsqword(0x28u);
}

