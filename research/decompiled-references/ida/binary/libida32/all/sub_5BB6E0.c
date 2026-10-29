__int64 __fastcall sub_5BB6E0(__int64 a1, int a2, __int64 a3, unsigned int *a4, double a5, double a6, __m128i a7)
{
  unsigned int v9; // edx
  unsigned int *v10; // r13
  __int64 v11; // r15
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  unsigned int *v15; // rax
  __int64 v16; // rdx
  unsigned int *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // [rsp+0h] [rbp-E0h]
  void *ptr; // [rsp+10h] [rbp-D0h] BYREF
  __int128 v22; // [rsp+18h] [rbp-C8h]
  __int64 v23; // [rsp+28h] [rbp-B8h]
  int v24; // [rsp+30h] [rbp-B0h]
  _QWORD v25[6]; // [rsp+40h] [rbp-A0h] BYREF
  void *v26; // [rsp+70h] [rbp-70h] BYREF
  __int128 v27; // [rsp+78h] [rbp-68h]
  void *v28; // [rsp+88h] [rbp-58h]
  __int128 v29; // [rsp+90h] [rbp-50h]
  unsigned __int64 v30; // [rsp+A8h] [rbp-38h]

  v30 = __readfsqword(0x28u);
  v22 = 0;
  ptr = nullptr;
  v23 = 0;
  v24 = -1;
  sub_5AE890(a3, &ptr, a4);
  if ( (unsigned __int8)rangeset_t_has_common2(&ptr, a1 + 24) )
  {
    v9 = *a4;
    v27 = 0;
    v26 = nullptr;
    v28 = nullptr;
    v29 = 0;
    v10 = sub_5AD4A0(&v26, a2, v9, 0);
    v11 = *(int *)(*(_QWORD *)(a1 + 8) + 4LL * *(int *)(a1 + 16) + 16);
    v12 = *(_QWORD *)(switch_dbctx(v11) + 1480);
    v13 = *(_QWORD *)(a1 + 8);
    v25[2] = v10;
    v19 = v12;
    v14 = *(_QWORD *)(a1 + 16);
    v25[1] = v13;
    v25[0] = off_2B05BF8;
    v25[3] = &v26;
    v25[4] = v14;
    if ( !(unsigned int)sub_5AE960((unsigned int)v11, &ptr, v25)
      && !(unsigned __int8)sub_5BA8B0(
                             *(_QWORD *)(a1 + 8),
                             v10,
                             (__int64)&v26,
                             1,
                             *(_DWORD *)(a1 + 16),
                             *(_DWORD *)(a1 + 20),
                             (__m128i)0LL,
                             a6,
                             a7,
                             0) )
    {
      if ( !under_debugger )
        interr(1863);
      BUG();
    }
    v15 = sub_4EE820(v19 + 1624, *v10);
    if ( v15 )
    {
      v16 = *((_QWORD *)v15 + 1);
      if ( (v16 & 0x8000) != 0 )
      {
        v15 = sub_4EE820(v19 + 1624, v15[4]);
        v16 = *((_QWORD *)v15 + 1);
      }
    }
    else
    {
      v16 = 0;
    }
    *((_QWORD *)v15 + 1) = v16 | 0x8000000000000000LL;
    v17 = sub_4EE820(a3 + 1624, *v10);
    if ( v17 )
    {
      v18 = *((_QWORD *)v17 + 1);
      if ( (v18 & 0x8000) != 0 )
      {
        v17 = sub_4EE820(a3 + 1624, v17[4]);
        v18 = *((_QWORD *)v17 + 1);
      }
    }
    else
    {
      v18 = 0;
    }
    *((_QWORD *)v17 + 1) = v18 | 0x8000000000000000LL;
    if ( v28 )
    {
      *(_QWORD *)&v29 = 0;
      qfree(v28);
    }
    if ( v26 )
    {
      *(_QWORD *)&v27 = 0;
      qfree(v26);
    }
  }
  if ( ptr )
  {
    *(_QWORD *)&v22 = 0;
    qfree(ptr);
  }
  return 0;
}

