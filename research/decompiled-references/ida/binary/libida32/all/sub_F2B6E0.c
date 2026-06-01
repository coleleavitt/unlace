void __fastcall sub_F2B6E0(__int64 a1, const __m128i *a2, unsigned __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v11; // r14
  size_t v12; // rax
  void *v13; // rdi
  __int64 v14; // rax
  size_t v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdi
  const char *v20; // rsi
  __int64 v21; // r12
  size_t v22; // rax
  size_t v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // [rsp+0h] [rbp-68h] BYREF
  size_t v28; // [rsp+8h] [rbp-60h]
  __int128 v29; // [rsp+10h] [rbp-58h]
  __int128 v30; // [rsp+20h] [rbp-48h]

  v11 = *(_QWORD *)(a1 + 1096);
  v27 = a6;
  v12 = j__strlen("TemplateArgument");
  v13 = *(void **)(v11 + 32);
  if ( v12 > *(_QWORD *)(v11 + 24) - (_QWORD)v13 )
  {
    sub_22581D0(v11, "TemplateArgument", v12);
  }
  else if ( v12 )
  {
    v28 = v12;
    memcpy(v13, "TemplateArgument", v12);
    *(_QWORD *)(v11 + 32) += v28;
  }
  if ( (_DWORD)a3 && HIDWORD(a3) )
    sub_F06310(a1, a3);
  if ( a4 )
  {
    v14 = v27;
    v27 = a4;
    *(_QWORD *)&v29 = a5;
    *((_QWORD *)&v29 + 1) = v14;
    v30 = (__int128)_mm_loadh_ps((const double *)&v27);
    v15 = j__strlen(&byte_22CD811);
    sub_F1B570(a1, (__int64)&byte_22CD811, v15, v16, v17, v18, v29, v30);
  }
  switch ( a2->m128i_i32[0] & 0x7FFFFFFF )
  {
    case 0:
      sub_971800(*(_QWORD *)(a1 + 1096), " null");
      return;
    case 1:
      v19 = *(_QWORD *)(a1 + 1096);
      v20 = " type";
      goto LABEL_14;
    case 2:
      v21 = *(_QWORD *)(a1 + 1096);
      v22 = j__strlen(" decl");
      sub_9717A0(v21, " decl", v22);
      sub_F071F0(a1, a2);
      if ( a2[1].m128i_i64[0] )
      {
        v27 = a2[1].m128i_i64[0];
        v29 = 0u;
        v30 = (__int128)_mm_loadh_ps((const double *)&v27);
        v23 = j__strlen(&byte_22CD811);
        sub_F1B570(a1, (__int64)&byte_22CD811, v23, v24, v25, v26, v29, v30);
      }
      return;
    case 3:
      v19 = *(_QWORD *)(a1 + 1096);
      v20 = " nullptr";
      goto LABEL_14;
    case 4:
      v19 = *(_QWORD *)(a1 + 1096);
      v20 = " integral";
      goto LABEL_14;
    case 5:
      v19 = *(_QWORD *)(a1 + 1096);
      v20 = " structural value";
      goto LABEL_14;
    case 6:
      sub_F2B640(a1, a2);
      return;
    case 7:
      sub_F2B5A0(a1, a2);
      return;
    case 8:
      sub_971800(*(_QWORD *)(a1 + 1096), " expr");
      if ( (a2->m128i_i8[4] & 1) == 0 )
        goto LABEL_12;
      v19 = *(_QWORD *)(a1 + 1096);
      v20 = " canonical";
LABEL_14:
      sub_971800(v19, v20);
LABEL_12:
      sub_F071F0(a1, a2);
      return;
    case 9:
      v19 = *(_QWORD *)(a1 + 1096);
      v20 = " pack";
      goto LABEL_14;
  }
}

