__int64 __fastcall sub_3A6BC0(
        _QWORD *a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  __int64 idati; // r13
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int ordinal_limit; // r14d
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __m128 v20; // xmm4
  __m128 v21; // xmm5
  __int64 v22; // rsi
  int v23; // ebp
  __int64 v24; // rcx
  __int64 (__fastcall *v25)(__int64); // rdx
  __int64 (__fastcall *v26)(__int64); // rax
  __int64 v27; // r12
  unsigned int v28; // ebp
  unsigned int v29; // eax
  unsigned int v30; // r15d
  unsigned __int64 v31; // rcx
  const char *v32; // rsi
  __int64 v33; // rdx
  __int64 v34; // rdi
  __int64 v35; // rax
  char v36; // [rsp-8h] [rbp-78h]
  _UNKNOWN **v37; // [rsp+0h] [rbp-70h] BYREF
  __int128 v38; // [rsp+8h] [rbp-68h] BYREF
  __int64 v39; // [rsp+18h] [rbp-58h] BYREF
  __int128 v40; // [rsp+20h] [rbp-50h]
  unsigned __int64 v41; // [rsp+30h] [rbp-40h]

  v41 = __readfsqword(0x28u);
  v37 = &import_std_struct;
  v38 = 0;
  if ( (unsigned __int8)choose_named_type(&v38, 0, "Please choose a structure", 1, &v37) )
  {
    idati = get_idati(&v38);
    ordinal_limit = get_ordinal_limit(idati, 0, v12, v13);
    v15 = copy_named_type(idati, *((_QWORD *)&v38 + 1), v38);
    v22 = v38;
    v23 = v15;
    if ( v15 )
    {
      sub_169700(
        (int)"Successfully imported structure \"%s\"\n",
        v38,
        v16,
        v17,
        v18,
        v19,
        (__m128)0LL,
        a3,
        a4,
        a5,
        v20,
        v21,
        a8,
        a9,
        v36);
      v25 = form_actions_impl_t__::vfunc_9;
      v26 = *(__int64 (__fastcall **)(__int64))(*a1 + 72LL);
      if ( v26 == form_actions_impl_t__::vfunc_9 )
        v27 = a1[4];
      else
        v27 = v26((__int64)a1);
      *(_DWORD *)(v27 + 288) = v23;
      v28 = 1;
      if ( ordinal_limit )
        v28 = ordinal_limit;
      v29 = get_ordinal_limit(idati, v22, v25, v24);
      v30 = v29;
      if ( v28 < v29 )
      {
        v31 = 0;
        v32 = nullptr;
        v33 = v29 - ordinal_limit;
        v40 = 0;
        v39 = 0;
        if ( v29 != ordinal_limit )
        {
          v39 = qvector_reserve(&v39, 0, v33, 4);
          v33 = v40;
          v32 = (const char *)v39;
          v31 = *((_QWORD *)&v40 + 1);
        }
        do
        {
          if ( v31 < v33 + 1 )
          {
            v39 = qvector_reserve(&v39, v32, v33 + 1, 4);
            v33 = v40;
            v32 = (const char *)v39;
          }
          *(_DWORD *)&v32[4 * v33] = v28++;
          v32 = (const char *)v39;
          v31 = *((_QWORD *)&v40 + 1);
          v33 = v40 + 1;
          *(_QWORD *)&v40 = v40 + 1;
        }
        while ( v30 != v28 );
        v34 = *(_QWORD *)(v27 + 264);
        v35 = *(_QWORD *)(v27 + 280);
        *(_QWORD *)(v27 + 264) = v39;
        *(_QWORD *)(v27 + 272) = v33;
        *(_QWORD *)(v27 + 280) = v31;
        v39 = v34;
        *((_QWORD *)&v40 + 1) = v35;
        if ( v34 )
        {
          *(_QWORD *)&v40 = 0;
          qfree(v34, v32);
        }
      }
    }
    else
    {
      sub_169630(
        (int)"ICON ERROR\nFailed to add standard structure '%s'",
        v38,
        v16,
        v17,
        v18,
        v19,
        (__m128)0LL,
        a3,
        a4,
        a5,
        v20,
        v21,
        a8,
        a9,
        v36);
    }
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 64LL))(a1, 1);
  }
  return 0;
}
