__int64 __fastcall sub_3BC9F0(
        __int64 a1,
        __int64 a2,
        double a3,
        double a4,
        double a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 (*v13)(); // rax
  __int64 v15; // rax
  __int64 v16; // rbp
  __int64 (*v17)(); // rax
  __int64 v18; // rdx
  __int64 v19; // r12
  __m128 v20; // xmm1
  int v21; // eax
  unsigned int v22; // ebx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __m128 v27; // xmm4
  __m128 v28; // xmm5
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rdx
  char v32; // [rsp-8h] [rbp-78h]
  __int64 v33; // [rsp+0h] [rbp-70h]
  __m128 v34; // [rsp+8h] [rbp-68h] BYREF
  __int64 v35; // [rsp+18h] [rbp-58h] BYREF
  __int128 v36; // [rsp+20h] [rbp-50h]
  __int64 v37; // [rsp+38h] [rbp-38h] BYREF
  __int128 v38; // [rsp+40h] [rbp-30h]
  unsigned __int64 v39; // [rsp+50h] [rbp-20h]

  v10 = *(_DWORD *)(a1 + 8);
  v39 = __readfsqword(0x28u);
  v36 = 0;
  v35 = 0;
  if ( v10 == 58 || v10 == 25 )
  {
    v12 = *(_QWORD *)a1;
    if ( !*(_QWORD *)a1 || (v13 = *(__int64 (**)())(**(_QWORD **)(v12 + 1000) + 64LL), v13 == sub_3AAC50) )
    {
      a2 = a1;
      sub_3B5700(&v35, a1, v12);
      goto LABEL_8;
    }
    v33 = *(_QWORD *)a1;
    a2 = a1;
    v19 = v13();
    sub_3B5700(&v35, a1, v33);
  }
  else
  {
    if ( v10 != 10 )
      return 0;
    v15 = sub_3C5BB0(a1);
    v16 = v15;
    if ( !v15 )
    {
      v29 = *(_QWORD *)(a1 + 200);
      if ( v29 )
      {
        a2 = (__int64)&v35;
        sub_3C60D0(0, &v35, v29, -1);
      }
      goto LABEL_8;
    }
    v17 = *(__int64 (**)())(**(_QWORD **)(v15 + 2488) + 64LL);
    if ( v17 == sub_3AAC50 )
    {
      v18 = *(_QWORD *)(a1 + 200);
      if ( v18 )
      {
        a2 = (__int64)&v35;
        sub_3C60D0(v16, &v35, v18, -1);
      }
      goto LABEL_8;
    }
    v30 = v17();
    v31 = *(_QWORD *)(a1 + 200);
    v19 = v30;
    if ( v31 )
    {
      a2 = (__int64)&v35;
      sub_3C60D0(v16, &v35, v31, -1);
    }
  }
  v20 = (__m128)_mm_unpacklo_epi64((__m128i)(unsigned __int64)str_sink_t___vtable, (__m128i)(unsigned __int64)&v37);
  if ( v19 )
  {
    v38 = 0;
    v37 = 0;
    v34 = v20;
    v21 = print_decls(&v34, v19, &v35, 1);
    v22 = v21;
    if ( v21 >= 0
      || (a2 = (__int64)"HIDECANCEL\n%i conflicts found.\nDo you want to still copy the type(s)?",
          (int)sub_1698A0(
                 1,
                 (int)"HIDECANCEL\n%i conflicts found.\nDo you want to still copy the type(s)?",
                 (unsigned int)-v21) > 0) )
    {
      sub_47C5A0(QT::QCoreApplication::self + 2, &v37, 0);
      a2 = v22;
      sub_169700(
        (int)"Copied %i types\n",
        v22,
        v23,
        v24,
        v25,
        v26,
        (__m128)0LL,
        v20,
        (__m128)(unsigned __int64)&v37,
        a6,
        v27,
        v28,
        a9,
        a10,
        v32);
      v11 = 1;
    }
    else
    {
      v11 = 0;
    }
    if ( v37 )
    {
      *(_QWORD *)&v38 = 0;
      qfree(v37, (const char *)a2);
    }
    goto LABEL_9;
  }
LABEL_8:
  v11 = 0;
LABEL_9:
  if ( v35 )
  {
    *(_QWORD *)&v36 = 0;
    qfree(v35, (const char *)a2);
  }
  return v11;
}
