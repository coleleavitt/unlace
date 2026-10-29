__int64 __fastcall sub_5D6920(__int64 a1, int a2, __int64 a3, unsigned __int64 *a4, double a5, double a6, double a7)
{
  unsigned __int64 v9; // rdx
  unsigned __int64 *v10; // r13
  __int64 v11; // r15
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int64 *v17; // rax
  __int64 v18; // rdx
  unsigned __int64 *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // [rsp+0h] [rbp-E0h]
  __int64 v22; // [rsp+0h] [rbp-E0h]
  __int64 v24; // [rsp+8h] [rbp-D8h]
  void *ptr; // [rsp+10h] [rbp-D0h] BYREF
  __int128 v26; // [rsp+18h] [rbp-C8h]
  __int64 v27; // [rsp+28h] [rbp-B8h]
  int v28; // [rsp+30h] [rbp-B0h]
  _QWORD v29[6]; // [rsp+40h] [rbp-A0h] BYREF
  void *v30; // [rsp+70h] [rbp-70h] BYREF
  __int128 v31; // [rsp+78h] [rbp-68h]
  void *v32; // [rsp+88h] [rbp-58h]
  __int128 v33; // [rsp+90h] [rbp-50h]
  unsigned __int64 v34; // [rsp+A8h] [rbp-38h]

  v34 = __readfsqword(0x28u);
  v26 = 0;
  ptr = nullptr;
  v27 = 0;
  v28 = -1;
  sub_5C94E0(a3, &ptr, a4);
  if ( (unsigned __int8)rangeset_t_has_common2(&ptr, a1 + 24) )
  {
    v9 = *a4;
    v31 = 0;
    v30 = nullptr;
    v32 = nullptr;
    v33 = 0;
    v10 = sub_5C7FE0(&v30, a2, v9, 0);
    v11 = *(int *)(*(_QWORD *)(a1 + 8) + 4LL * *(int *)(a1 + 16) + 16);
    v12 = *(_QWORD *)(switch_dbctx(v11) + 1672);
    v13 = *(_QWORD *)(a1 + 8);
    v29[2] = v10;
    v21 = v12;
    v14 = *(_QWORD *)(a1 + 16);
    v29[1] = v13;
    v29[0] = &off_2B2FBB8;
    v29[3] = &v30;
    v29[4] = v14;
    if ( !(unsigned int)((__int64 (__fastcall *)(_QWORD, void **, _QWORD *, _UNKNOWN **, __int64, __int64, __int64, __int64))sub_5C95D0)(
                          (unsigned int)v11,
                          &ptr,
                          v29,
                          &off_2B2FBB8,
                          v15,
                          v16,
                          v21,
                          a3)
      && !(unsigned __int8)sub_5D5AA0(
                             *(_QWORD *)(a1 + 8),
                             (__int64)v10,
                             (__int64)&v30,
                             1,
                             *(_DWORD *)(a1 + 16),
                             *(_DWORD *)(a1 + 20),
                             0.0,
                             a6,
                             a7,
                             0) )
    {
      if ( !under_debugger )
        interr(1863);
      BUG();
    }
    v17 = sub_505D70(v22 + 1704, *v10);
    if ( v17 )
    {
      v18 = v17[2];
      if ( (v18 & 0x8000) != 0 )
      {
        v17 = sub_505D70(v22 + 1704, v17[3]);
        v18 = v17[2];
      }
    }
    else
    {
      v18 = 0x1003E0003LL;
    }
    v17[2] = v18 | 0x8000000000000000LL;
    v19 = sub_505D70(v24 + 1704, *v10);
    if ( v19 )
    {
      v20 = v19[2];
      if ( (v20 & 0x8000) != 0 )
      {
        v19 = sub_505D70(v24 + 1704, v19[3]);
        v20 = v19[2];
      }
    }
    else
    {
      v20 = 0x1003E0003LL;
    }
    v19[2] = v20 | 0x8000000000000000LL;
    if ( v32 )
    {
      *(_QWORD *)&v33 = 0;
      qfree(v32);
    }
    if ( v30 )
    {
      *(_QWORD *)&v31 = 0;
      qfree(v30);
    }
  }
  if ( ptr )
  {
    *(_QWORD *)&v26 = 0;
    qfree(ptr);
  }
  return 0;
}
