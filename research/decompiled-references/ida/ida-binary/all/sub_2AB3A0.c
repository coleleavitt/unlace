__int64 __fastcall grida_model_data_t__::vfunc_2(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  __int64 v4; // rbx
  __int64 v6; // rbx
  __int64 v7; // rbx
  void *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // r12
  __m128 v11; // xmm0
  int *v12; // rdx
  unsigned int v13; // eax
  __int64 v14; // rbx
  unsigned int i; // r13d
  __int64 v16; // rax
  __int64 v17; // rbx
  void *v18; // rdi
  __int64 func; // rax
  unsigned __int64 *v21; // rbx
  __int64 fchunk; // rax
  __int64 v23; // r12
  int v24; // eax
  __int64 v25; // [rsp+10h] [rbp-98h] BYREF
  int v26; // [rsp+18h] [rbp-90h]
  __int128 v27; // [rsp+20h] [rbp-88h]
  __int64 v28; // [rsp+30h] [rbp-78h] BYREF
  int v29; // [rsp+38h] [rbp-70h] BYREF
  __int64 v30; // [rsp+40h] [rbp-68h]
  int *v31; // [rsp+48h] [rbp-60h] BYREF
  int *v32; // [rsp+50h] [rbp-58h]
  __int64 v33; // [rsp+58h] [rbp-50h]
  unsigned __int64 v34; // [rsp+68h] [rbp-40h]

  v4 = *(_QWORD *)(a1 + 8);
  v34 = __readfsqword(0x28u);
  sub_1C6390();
  v29 = 0;
  v6 = *(_QWORD *)(v4 + 256);
  v30 = 0;
  v31 = &v29;
  v32 = &v29;
  v33 = 0;
  if ( !(unsigned __int8)getinf_flag(45, 64) )
  {
    func = get_func(v6);
    if ( func )
    {
      v25 = 0;
      v27 = 0;
      func_tail_iterator_set(&v25, func, -1);
      v21 = (unsigned __int64 *)v25;
      v26 = -1;
      if ( v25 )
      {
        while ( 1 )
        {
          fchunk = get_fchunk(*v21);
          v23 = fchunk;
          if ( fchunk && (*(_BYTE *)(fchunk + 16) & 0x40) != 0 )
          {
            sub_2AB280(&v28, v21);
            set_visible_func(v23, 1);
          }
          v21 = (unsigned __int64 *)v25;
          if ( !v25 )
            break;
          v24 = v26 + 1;
          if ( *(_DWORD *)(v25 + 128) <= v26 + 1 )
          {
            lock_func_range(v25, 0);
            break;
          }
          ++v26;
          if ( v24 >= 0 )
            v21 = (unsigned __int64 *)(*(_QWORD *)(v25 + 136) + 16LL * v24);
        }
      }
    }
  }
  v7 = *(_QWORD *)(a1 + 152);
  while ( v7 )
  {
    sub_2A8620(*(_QWORD **)(v7 + 24));
    v8 = (void *)v7;
    v7 = *(_QWORD *)(v7 + 16);
    operator delete(v8, 0x28u);
  }
  v9 = v30;
  v10 = a1 + 144;
  *(_QWORD *)(a1 + 152) = 0;
  *(_QWORD *)(a1 + 160) = a1 + 144;
  *(_QWORD *)(a1 + 168) = a1 + 144;
  *(_QWORD *)(a1 + 176) = 0;
  if ( v9 )
  {
    v11 = _mm_loadh_ps((const double *)&v31);
    *(_DWORD *)(a1 + 144) = v29;
    v12 = v32;
    *(__m128 *)(a1 + 152) = v11;
    *(_QWORD *)(a1 + 168) = v12;
    *(_QWORD *)(v9 + 8) = v10;
    *(_QWORD *)(a1 + 176) = v33;
  }
  v13 = gruser_model_data_t__::vfunc_2(a1, a2, a3);
  v14 = *(_QWORD *)(a1 + 160);
  for ( i = v13; v10 != v14; v14 = std::_Rb_tree_increment(v14) )
  {
    v16 = get_fchunk(*(_QWORD *)(v14 + 32));
    if ( v16 )
      set_visible_func(v16, 0);
  }
  sub_1C63A0();
  v17 = *(_QWORD *)(a1 + 152);
  while ( v17 )
  {
    sub_2A8620(*(_QWORD **)(v17 + 24));
    v18 = (void *)v17;
    v17 = *(_QWORD *)(v17 + 16);
    operator delete(v18, 0x28u);
  }
  *(_QWORD *)(a1 + 152) = 0;
  *(_QWORD *)(a1 + 160) = v10;
  *(_QWORD *)(a1 + 168) = v10;
  *(_QWORD *)(a1 + 176) = 0;
  return i;
}
