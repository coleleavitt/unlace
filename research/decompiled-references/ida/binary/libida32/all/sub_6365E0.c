__int64 __fastcall sub_6365E0(__int64 a1, __int64 *a2, _BYTE *a3)
{
  __int64 v5; // rdi
  unsigned int tinfo; // r12d
  __int64 v9; // rsi
  unsigned __int64 v10; // rax
  void *v11; // rdx
  __m128 v12; // xmm0
  const char *v13; // r13
  __int64 v14; // rsi
  __int64 idati; // rsi
  __int64 v16; // rsi
  int v17; // ecx
  int v18; // r8d
  int v19; // r9d
  unsigned int v20; // eax
  unsigned int v21; // [rsp+Ch] [rbp-84h] BYREF
  void *v22; // [rsp+10h] [rbp-80h] BYREF
  __int128 v23; // [rsp+18h] [rbp-78h] BYREF
  void *ptr; // [rsp+30h] [rbp-60h] BYREF
  __m128 v25; // [rsp+38h] [rbp-58h]
  _QWORD v26[2]; // [rsp+50h] [rbp-40h] BYREF
  __int16 v27; // [rsp+60h] [rbp-30h]
  unsigned __int64 v28; // [rsp+68h] [rbp-28h]

  v5 = *a2;
  v28 = __readfsqword(0x28u);
  if ( (get_tinfo_property(v5, 2) & 0xF) != 0xD )
    return 0;
  v9 = *a2;
  if ( (*a2 & 0x100) != 0 && get_tinfo_pdata(0, v9, 0) )
  {
    return 0;
  }
  else
  {
    v22 = nullptr;
    v23 = 0;
    tinfo = tinfo_t__build_anon_type_name(&v22, a2);
    if ( (_BYTE)tinfo )
    {
      ptr = nullptr;
      v10 = v23;
      v25 = 0;
      if ( a3 && *a3 )
      {
        sub_3573A0((char **)&ptr);
        v10 = v25.m128_u64[0];
      }
      else
      {
        v11 = v22;
        v22 = nullptr;
        v12 = _mm_loadh_ps((const double *)&v23 + 1);
        ptr = v11;
        v25 = v12;
        v23 = 0;
      }
      v13 = haystack;
      if ( v10 )
        v13 = (const char *)ptr;
      v14 = *(_QWORD *)(a1 + 8);
      v21 = 0;
      sub_632230(a1, v14, v13, 3, nullptr, 0, 0, 0, 0, &v21);
      idati = *(_QWORD *)(a1 + 8);
      if ( v21 )
      {
        if ( v13 )
        {
          v26[1] = v13;
          v27 = 256;
          if ( !idati )
            idati = get_idati(v21, 0);
          v26[0] = idati;
          tinfo = create_tinfo(a2, 61, 61, v26);
        }
        else
        {
          tinfo = 0;
        }
      }
      else
      {
        if ( (unsigned int)save_tinfo(a2, idati, 0, v13, 5) )
        {
          if ( !under_debugger )
            interr(2895);
          BUG();
        }
        v16 = *(_QWORD *)(a1 + 8);
        LODWORD(v26[0]) = 0;
        sub_632230(a1, v16, v13, 3, nullptr, 0, 0, 0, 0, (unsigned int *)v26);
        v20 = sub_69AA70(a1, *(_QWORD *)(a1 + 8), v26[0], v17, v18, v19);
        sub_69BF00(a1, v20, 0);
      }
      if ( ptr )
      {
        v25.m128_u64[0] = 0;
        qfree(ptr);
      }
    }
    if ( v22 )
    {
      *(_QWORD *)&v23 = 0;
      qfree(v22);
    }
  }
  return tinfo;
}

