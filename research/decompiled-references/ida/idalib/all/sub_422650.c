unsigned __int64 __fastcall sub_422650(int *a1, __int64 *a2, unsigned __int64 a3)
{
  __int64 v4; // rax
  __int64 (*v6)(void); // rax
  unsigned __int64 *v7; // rax
  __int64 (__fastcall *v8)(__int64, __int64, int); // rax
  unsigned int v9; // r13d
  _QWORD *v10; // rbp
  __int64 segm_by_sel; // rax
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // r12
  __int64 v15; // rdx
  _WORD *v16; // rax
  __int64 v18; // rax
  _WORD *v19; // rax
  __int64 v20; // [rsp+10h] [rbp-88h]
  void *ptr; // [rsp+20h] [rbp-78h] BYREF
  __int128 v22; // [rsp+28h] [rbp-70h]
  void *v23; // [rsp+40h] [rbp-58h] BYREF
  __int128 v24; // [rsp+48h] [rbp-50h]
  unsigned __int64 v25; // [rsp+58h] [rbp-40h]

  v4 = *(_QWORD *)a1;
  v25 = __readfsqword(0x28u);
  v6 = *(__int64 (**)(void))(v4 + 32);
  if ( (char *)v6 == (char *)sub_3DB7B0 )
    v7 = (unsigned __int64 *)(a1 + 4);
  else
    v7 = (unsigned __int64 *)v6();
  if ( a3 >= *v7 && a3 < v7[1] )
  {
    v8 = *(__int64 (__fastcall **)(__int64, __int64, int))(*(_QWORD *)a1 + 40LL);
    if ( v8 == sub_4219D0 )
    {
      if ( !*(_DWORD *)(*(_QWORD *)(switch_dbctx(a1[2]) + 1640) + 136LL) || a3 )
        return v25 - __readfsqword(0x28u);
    }
    else if ( a3 != v8((__int64)a1, a3, 0) )
    {
      return v25 - __readfsqword(0x28u);
    }
    v9 = 0;
    switch_dbctx(a1[2]);
    v20 = *(_QWORD *)(switch_dbctx(a1[2]) + 1640);
    v10 = (_QWORD *)(v20 + 8);
    if ( *(_DWORD *)(v20 + 136) )
    {
      do
      {
        v12 = a2[1];
        v13 = *a2;
        if ( a2[2] < (unsigned __int64)(v12 + 1) )
        {
          v18 = qvector_reserve(a2, v13, v12 + 1, 24);
          v12 = a2[1];
          *a2 = v18;
          v13 = v18;
        }
        v14 = v13 + 24 * v12;
        *(_QWORD *)v14 = 0;
        *(_OWORD *)(v14 + 8) = 0;
        ++a2[1];
        v15 = v10[1];
        v23 = nullptr;
        v24 = 0;
        if ( v15 == -1 )
        {
          v19 = (_WORD *)qvector_reserve(&v23, 0, 7, 1);
          v23 = v19;
          *(_QWORD *)&v24 = 7;
          *(_DWORD *)v19 = 1396982082;
          v19[2] = 19525;
          *((_BYTE *)v23 + 6) = 0;
        }
        else
        {
          sub_35A790((char **)&v23);
        }
        if ( *v10 == -1 )
        {
          v22 = 0;
          ptr = nullptr;
          v16 = (_WORD *)qvector_reserve(&ptr, 0, 7, 1);
          ptr = v16;
          *(_QWORD *)&v22 = 7;
          *(_DWORD *)v16 = 1396982082;
          v16[2] = 19525;
          *((_BYTE *)ptr + 6) = 0;
        }
        else
        {
          segm_by_sel = get_segm_by_sel(*v10);
          ptr = nullptr;
          v22 = 0;
          if ( segm_by_sel )
            get_segm_name(&ptr, segm_by_sel, 1);
          else
            sub_35A790((char **)&ptr);
        }
        sub_35A910((__int64 *)v14);
        if ( ptr )
        {
          *(_QWORD *)&v22 = 0;
          qfree(ptr);
        }
        if ( v23 )
        {
          *(_QWORD *)&v24 = 0;
          qfree(v23);
        }
        ++v9;
        v10 += 2;
      }
      while ( v9 < *(_DWORD *)(v20 + 136) );
    }
  }
  return v25 - __readfsqword(0x28u);
}
