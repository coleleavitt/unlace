unsigned __int64 __fastcall sub_31DFC0(
        __int64 a1,
        const char *a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v10; // r12
  __int64 snippet_api; // rax
  __int64 v13; // rdx
  __int64 v14; // r13
  __int64 i; // rbx
  __int64 *v16; // rax
  __int64 v17; // rdi
  double v18; // xmm0_8
  __m128 v19; // xmm4
  __m128 v20; // xmm5
  const char *v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rdx
  char **v24; // rcx
  __int64 Child_helper; // rax
  __int64 v26; // rdi
  __int64 v27; // rdi
  __int64 v29; // rdi
  struct _Unwind_Exception *v30; // rbx
  __int64 v31; // [rsp+0h] [rbp-90h]
  _QWORD v32[2]; // [rsp+10h] [rbp-80h] BYREF
  __int64 v33; // [rsp+20h] [rbp-70h] BYREF
  __int128 v34; // [rsp+28h] [rbp-68h]
  __int64 v35; // [rsp+40h] [rbp-50h] BYREF
  __int64 v36; // [rsp+48h] [rbp-48h]
  __int128 v37; // [rsp+50h] [rbp-40h]
  int v38; // [rsp+60h] [rbp-30h]
  unsigned __int64 v39; // [rsp+68h] [rbp-28h]

  v10 = a1 + 48;
  v39 = __readfsqword(0x28u);
  snippet_api = get_snippet_api();
  v13 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)a1 = snippet_api;
  if ( v13 )
  {
    v14 = *(_QWORD *)(a1 + 56);
    if ( v14 )
    {
      for ( i = 0; i != v14; ++i )
      {
        v16 = (__int64 *)(v13 + 24 * i);
        v17 = *v16;
        if ( *v16 )
        {
          v16[1] = 0;
          qfree(v17, a2);
          v13 = *(_QWORD *)(a1 + 48);
        }
      }
    }
    *(_QWORD *)(a1 + 56) = 0;
    qfree(v13, a2);
    *(_QWORD *)(a1 + 48) = 0;
    *(_QWORD *)(a1 + 64) = 0;
  }
  v32[1] = v10;
  v32[0] = &snippet_dlg_t::show;
  for_all_extlangs(v32, 0);
  v18 = 0.0;
  v35 = 40;
  v36 = 0;
  v38 = 99;
  v33 = 0;
  HIDWORD(v31) = 0;
  v37 = 0;
  v34 = 0;
  v21 = (const char *)sub_2EF360(
                        (int)"BUTTON NO NONE\n"
                             "BUTTON YES NONE\n"
                             "BUTTON CANCEL NONE\n"
                             "STARTITEM 1\n"
                             "Execute script\n"
                             "%/<~S~nippet list:E45::25:::><|><Please enter script ~b~ody:t40::60:::>\n"
                             "<S~c~ripting language:b30:0:::> <~T~ab size:D31:5:5::><#Execute script#~R~un:B51:51:10::><#"
                             "Save to file#Ex~p~ort:B52:52:10::><#Load from file#~I~mport:B53:53:10::>",
                        68,
                        (__int64)sub_31DCD0,
                        (__int64)&qword_8CD920,
                        (__int64)&v33,
                        (__int64)&v35,
                        (__m128)0LL,
                        a4,
                        a5,
                        a6,
                        v19,
                        v20,
                        a9,
                        a10,
                        v10);
  sub_478D00((char *)(a1 + 16), v31);
  if ( *(_BYTE *)(a1 + 40) || !*(_QWORD *)(a1 + 32) )
  {
    v29 = v33;
    *(_QWORD *)a1 = 0;
    if ( v29 )
    {
      *(_QWORD *)&v34 = 0;
      qfree(v29, v21);
    }
    v27 = v36;
    if ( v36 )
      goto LABEL_17;
    return v39 - __readfsqword(0x28u);
  }
  v22 = sub_49EE00(&qword_8CD920);
  if ( v22 )
  {
    v24 = &off_865C80;
    *(_QWORD *)(v22 + 2152) = 1;
    *(_QWORD *)(v22 + 2144) = &off_865C80;
  }
  if ( *(_BYTE *)(a1 + 40) )
  {
    sub_318390(0.0, (__int64)&qword_8CD920, (__int64)v21, v23, (__int64)v24);
LABEL_24:
    v30 = (struct _Unwind_Exception *)sub_318390(0.0, (__int64)&qword_8CD920, (__int64)v21, v23, (__int64)v24);
    if ( v33 )
    {
      *(_QWORD *)&v34 = 0;
      v18 = qfree(v33, v21);
    }
    if ( v36 )
    {
      *(_QWORD *)&v37 = 0;
      qfree(v36, v21, v18);
    }
    _Unwind_Resume(v30);
  }
  v21 = (const char *)sub_3181C0;
  *(_QWORD *)(*(_QWORD *)(a1 + 32) + 168LL) = sub_3181C0;
  if ( *(_BYTE *)(a1 + 40) )
    goto LABEL_24;
  v21 = nullptr;
  Child_helper = QT::qt_qFindChild_helper(*(_QWORD *)(a1 + 32), 0, 0, &off_89E260, 1);
  v26 = v33;
  *(_BYTE *)(Child_helper + 106) = 1;
  if ( v26 )
  {
    *(_QWORD *)&v34 = 0;
    qfree(v26, nullptr);
  }
  v27 = v36;
  if ( v36 )
  {
LABEL_17:
    *(_QWORD *)&v37 = 0;
    qfree(v27, v21);
  }
  return v39 - __readfsqword(0x28u);
}
