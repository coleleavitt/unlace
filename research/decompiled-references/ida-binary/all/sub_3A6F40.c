__int64 __fastcall sub_3A6F40(
        _QWORD *a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  __int64 v11; // rcx
  char v15; // al
  const char *v16; // rsi
  __int128 *v17; // rdi
  __int64 idati; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned int ordinal_limit; // eax
  __int64 v22; // rsi
  unsigned int v23; // r13d
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  int v28; // r15d
  __m128 v29; // xmm4
  __m128 v30; // xmm5
  __int64 v31; // rsi
  __int64 v32; // rcx
  __int64 (__fastcall *v33)(__int64); // rdx
  __int64 (__fastcall *v34)(__int64); // rax
  __int64 v35; // r14
  unsigned int v36; // r15d
  unsigned int v37; // eax
  unsigned int v38; // ebx
  unsigned __int64 v39; // rcx
  const char *v40; // rsi
  __int64 v41; // rdx
  char v43; // al
  __int64 v44; // rdi
  __int64 v45; // rax
  __int64 (__fastcall **v46)(); // [rsp+0h] [rbp-98h] BYREF
  char v47; // [rsp+8h] [rbp-90h]
  __int128 v48; // [rsp+10h] [rbp-88h] BYREF
  __int128 *v49; // [rsp+20h] [rbp-78h] BYREF
  __int128 v50; // [rsp+28h] [rbp-70h]
  __int64 v51; // [rsp+40h] [rbp-58h] BYREF
  __int128 v52; // [rsp+48h] [rbp-50h]
  unsigned __int64 v53; // [rsp+58h] [rbp-40h]

  v11 = (unsigned int)a2 + 32;
  v53 = __readfsqword(0x28u);
  v46 = import_std_enum;
  v15 = a2 ^ 1;
  v16 = nullptr;
  v17 = &v48;
  v47 = v15;
  v48 = 0;
  if ( (unsigned __int8)choose_named_type(&v48, 0, "Please choose an enum", v11, &v46) )
  {
    v49 = nullptr;
    v50 = 0;
    if ( !a2 )
    {
      v16 = (const char *)&v48;
      v43 = sub_3A6E30((__int64)&v49, &v48);
      v17 = v49;
      if ( !v43 )
      {
        if ( !v49 )
          return 0;
        goto LABEL_18;
      }
      *(_QWORD *)&v48 = v49;
    }
    idati = get_idati(v17);
    ordinal_limit = get_ordinal_limit(idati, v16, v19, v20);
    v22 = *((_QWORD *)&v48 + 1);
    v23 = ordinal_limit;
    v28 = copy_named_type(idati, *((_QWORD *)&v48 + 1), v48);
    if ( v28 )
    {
      v31 = v48;
      sub_169700(
        (int)"Successfully imported enum \"%s\"\n",
        v48,
        v24,
        v25,
        v26,
        v27,
        (__m128)0LL,
        a5,
        a6,
        a7,
        v29,
        v30,
        a10,
        a11,
        (char)v46);
      if ( !a3 )
      {
        v33 = form_actions_impl_t__::vfunc_9;
        v34 = *(__int64 (__fastcall **)(__int64))(*a1 + 72LL);
        if ( v34 == form_actions_impl_t__::vfunc_9 )
          v35 = a1[4];
        else
          v35 = v34((__int64)a1);
        *(_DWORD *)(v35 + 288) = v28;
        v36 = 1;
        if ( v23 )
          v36 = v23;
        v37 = get_ordinal_limit(idati, v31, v33, v32);
        v38 = v37;
        if ( v36 < v37 )
        {
          v39 = 0;
          v40 = nullptr;
          v41 = v37 - v23;
          v52 = 0;
          v51 = 0;
          if ( v37 != v23 )
          {
            v51 = qvector_reserve(&v51, 0, v41, 4);
            v41 = v52;
            v40 = (const char *)v51;
            v39 = *((_QWORD *)&v52 + 1);
          }
          do
          {
            if ( v39 < v41 + 1 )
            {
              v51 = qvector_reserve(&v51, v40, v41 + 1, 4);
              v41 = v52;
              v40 = (const char *)v51;
            }
            *(_DWORD *)&v40[4 * v41] = v36++;
            v40 = (const char *)v51;
            v39 = *((_QWORD *)&v52 + 1);
            v41 = v52 + 1;
            *(_QWORD *)&v52 = v52 + 1;
          }
          while ( v38 != v36 );
          v44 = *(_QWORD *)(v35 + 264);
          v45 = *(_QWORD *)(v35 + 280);
          *(_QWORD *)(v35 + 264) = v51;
          *(_QWORD *)(v35 + 272) = v41;
          *(_QWORD *)(v35 + 280) = v39;
          v51 = v44;
          *((_QWORD *)&v52 + 1) = v45;
          if ( v44 )
          {
            *(_QWORD *)&v52 = 0;
            qfree(v44, v40);
          }
        }
      }
    }
    else
    {
      sub_169630(
        (int)"ICON ERROR\nAUTOHIDE NONE\nFailed to add standard enum because its name is already used",
        v22,
        v24,
        v25,
        v26,
        v27,
        (__m128)0LL,
        a5,
        a6,
        a7,
        v29,
        v30,
        a10,
        a11,
        (char)v46);
    }
    v16 = (const char *)(a3 ^ 1u);
    (*(void (__fastcall **)(_QWORD *, const char *))(*a1 + 64LL))(a1, v16);
    v17 = v49;
    if ( v49 )
    {
LABEL_18:
      *(_QWORD *)&v50 = 0;
      qfree(v17, v16);
    }
  }
  return 0;
}
