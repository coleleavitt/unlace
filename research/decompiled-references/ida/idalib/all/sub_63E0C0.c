unsigned __int64 __fastcall sub_63E0C0(__int64 a1, __int64 *a2, unsigned __int64 a3)
{
  __int64 v4; // rax
  __int64 (*v6)(void); // rax
  unsigned __int64 *v7; // rax
  _QWORD *v9; // rbx
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
  _QWORD *v20; // r13
  __int64 v21; // r13
  __int64 v22; // r12
  __int64 v23; // rax
  void *v24; // rdi
  void *v25; // rax
  size_t v26; // rbx
  __int64 v27; // rax
  __int64 v28; // [rsp+8h] [rbp-60h]
  _QWORD *v29; // [rsp+10h] [rbp-58h] BYREF
  __int128 v30; // [rsp+18h] [rbp-50h]
  unsigned __int64 v31; // [rsp+28h] [rbp-40h]

  v4 = *(_QWORD *)a1;
  v31 = __readfsqword(0x28u);
  v6 = *(__int64 (**)(void))(v4 + 32);
  if ( (char *)v6 == (char *)sub_3DB7B0 )
    v7 = (unsigned __int64 *)(a1 + 16);
  else
    v7 = (unsigned __int64 *)v6();
  if ( a3 >= *v7
    && a3 < v7[1]
    && a3 == (*(__int64 (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)a1 + 40LL))(a1, a3, 0) )
  {
    v29 = nullptr;
    v30 = 0;
    sub_63DA90(a1, (__int64 *)&v29, a3);
    v9 = v29;
    v10 = (__int64)&v29[3 * v30];
    if ( v29 != (_QWORD *)v10 )
    {
      do
      {
        if ( v9[1] > 1u )
          tag_remove(v9, *v9, 0);
        v9 += 3;
      }
      while ( (_QWORD *)v10 != v9 );
      v10 = (__int64)v29;
      v9 = v29;
      v11 = 24 * v30;
      v12 = 0xAAAAAAAAAAAAAAABLL * ((24 * (__int64)v30) >> 3);
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
          v28 = 24 * v30;
          v27 = qvector_reserve(a2, v14, v17, 24);
          *a2 = v27;
          v14 = v27;
          v11 = v28;
          v15 = 24 * a2[1] - v18;
        }
        v19 = (_QWORD *)(v14 + v18);
        v20 = (_QWORD *)((char *)v9 + v11);
        memmove((char *)v19 + v11, v19, v15);
        if ( v9 != v20 )
        {
          do
          {
            *v19 = 0;
            *(_OWORD *)(v19 + 1) = 0;
            v26 = *(_QWORD *)(v10 + 8);
            if ( v26 )
            {
              v25 = (void *)qalloc_or_throw(*(_QWORD *)(v10 + 8));
              *v19 = v25;
              v19[2] = v26;
              memcpy(v25, *(const void **)v10, v26);
              v19[1] = v26;
            }
            v10 += 24;
            v19 += 3;
          }
          while ( (_QWORD *)v10 != v20 );
        }
        a2[1] += v12;
        v9 = v29;
        v10 = (__int64)v29;
      }
    }
    if ( v10 )
    {
      v21 = v30;
      if ( (_QWORD)v30 )
      {
        v22 = 0;
        do
        {
          v23 = v10 + 24 * v22;
          v24 = *(void **)v23;
          if ( *(_QWORD *)v23 )
          {
            *(_QWORD *)(v23 + 8) = 0;
            qfree(v24);
            v9 = v29;
          }
          ++v22;
          v10 = (__int64)v9;
        }
        while ( v21 != v22 );
      }
      *(_QWORD *)&v30 = 0;
      qfree((void *)v10);
    }
  }
  return v31 - __readfsqword(0x28u);
}
