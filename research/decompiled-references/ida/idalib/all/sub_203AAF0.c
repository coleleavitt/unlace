__int64 __fastcall sub_203AAF0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int8 v8; // al
  __int64 *v9; // rax
  __int64 v10; // r13
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  size_t v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int8 v20; // al
  __int64 v21; // rax
  __int64 v22; // r13
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  size_t v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  unsigned __int8 v32; // al
  __int64 v33; // rax
  __int64 v34; // r13
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  size_t v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  unsigned __int8 v44; // al
  __int64 v45; // rax
  __int64 v46; // rbx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  size_t v51; // rax
  __int64 v53; // r13
  size_t v54; // rax
  __int64 v55; // rbx
  size_t v56; // rax
  __int64 v57; // r13
  size_t v58; // rax
  __int64 v59; // r13
  size_t v60; // rax
  __int64 v61; // [rsp+0h] [rbp-48h] BYREF
  int v62; // [rsp+8h] [rbp-40h]
  char *v63; // [rsp+10h] [rbp-38h]
  __int64 v64; // [rsp+18h] [rbp-30h]

  sub_995540(a1, "!DIGenericSubrange(");
  v61 = a1;
  v63 = ", ";
  v8 = *(_BYTE *)(a2 - 16);
  LOBYTE(v62) = 1;
  v64 = a3;
  if ( (v8 & 2) != 0 )
  {
    v9 = *(__int64 **)(a2 - 32);
  }
  else
  {
    v5 = a2 - 8LL * ((v8 >> 2) & 0xF);
    v9 = (__int64 *)(v5 - 16);
  }
  v10 = *v9;
  if ( *v9
    && *(_BYTE *)v10 == 7
    && (unsigned __int8)((unsigned __int64)sub_206DF50(*v9, "!DIGenericSubrange(", v4, v5, v6, v7, v61, v62, v63, v64) >> 32)
    && !(unsigned int)sub_206DF50(v10, "!DIGenericSubrange(", v11, v12, v13, v14, v61, v62, v63, v64) )
  {
    v53 = *(_QWORD *)(*(_QWORD *)(v10 + 16) + 8LL);
    v54 = j__strlen("count");
    sub_2031310((__int64)&v61, "count", v54, v53, 0);
  }
  else
  {
    v15 = j__strlen("count");
    sub_203A140((__int64)&v61, "count", v15, v10);
  }
  v20 = *(_BYTE *)(a2 - 16);
  if ( (v20 & 2) != 0 )
  {
    v21 = *(_QWORD *)(a2 - 32);
  }
  else
  {
    v16 = a2 - 8LL * ((v20 >> 2) & 0xF);
    v21 = v16 - 16;
  }
  v22 = *(_QWORD *)(v21 + 8);
  if ( v22
    && *(_BYTE *)v22 == 7
    && (unsigned __int8)((unsigned __int64)sub_206DF50(
                                             *(_QWORD *)(v21 + 8),
                                             "count",
                                             v16,
                                             v17,
                                             v18,
                                             v19,
                                             v61,
                                             v62,
                                             v63,
                                             v64) >> 32)
    && !(unsigned int)sub_206DF50(v22, "count", v23, v24, v25, v26, v61, v62, v63, v64) )
  {
    v59 = *(_QWORD *)(*(_QWORD *)(v22 + 16) + 8LL);
    v60 = j__strlen("lowerBound");
    sub_2031310((__int64)&v61, "lowerBound", v60, v59, 0);
  }
  else
  {
    v27 = j__strlen("lowerBound");
    sub_203A140((__int64)&v61, "lowerBound", v27, v22);
  }
  v32 = *(_BYTE *)(a2 - 16);
  if ( (v32 & 2) != 0 )
  {
    v33 = *(_QWORD *)(a2 - 32);
  }
  else
  {
    v29 = a2 - 8LL * ((v32 >> 2) & 0xF);
    v33 = v29 - 16;
  }
  v34 = *(_QWORD *)(v33 + 16);
  if ( v34
    && *(_BYTE *)v34 == 7
    && (unsigned __int8)((unsigned __int64)sub_206DF50(
                                             *(_QWORD *)(v33 + 16),
                                             "lowerBound",
                                             v28,
                                             v29,
                                             v30,
                                             v31,
                                             v61,
                                             v62,
                                             v63,
                                             v64) >> 32)
    && !(unsigned int)sub_206DF50(v34, "lowerBound", v35, v36, v37, v38, v61, v62, v63, v64) )
  {
    v57 = *(_QWORD *)(*(_QWORD *)(v34 + 16) + 8LL);
    v58 = j__strlen("upperBound");
    sub_2031310((__int64)&v61, "upperBound", v58, v57, 0);
  }
  else
  {
    v39 = j__strlen("upperBound");
    sub_203A140((__int64)&v61, "upperBound", v39, v34);
  }
  v44 = *(_BYTE *)(a2 - 16);
  if ( (v44 & 2) != 0 )
    v45 = *(_QWORD *)(a2 - 32);
  else
    v45 = a2 - 8LL * ((v44 >> 2) & 0xF) - 16;
  v46 = *(_QWORD *)(v45 + 24);
  if ( v46
    && *(_BYTE *)v46 == 7
    && (unsigned __int8)((unsigned __int64)sub_206DF50(
                                             *(_QWORD *)(v45 + 24),
                                             "upperBound",
                                             v40,
                                             v41,
                                             v42,
                                             v43,
                                             v61,
                                             v62,
                                             v63,
                                             v64) >> 32)
    && !(unsigned int)sub_206DF50(v46, "upperBound", v47, v48, v49, v50, v61, v62, v63, v64) )
  {
    v55 = *(_QWORD *)(*(_QWORD *)(v46 + 16) + 8LL);
    v56 = j__strlen("stride");
    sub_2031310((__int64)&v61, "stride", v56, v55, 0);
  }
  else
  {
    v51 = j__strlen("stride");
    sub_203A140((__int64)&v61, "stride", v51, v46);
  }
  return sub_995540(a1, ")");
}
