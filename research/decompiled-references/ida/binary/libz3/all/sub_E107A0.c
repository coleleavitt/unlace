__m128i *__fastcall sub_E107A0(__int64 a1)
{
  void (***v1)(); // rax
  void (***v2)(); // rbx
  void (***v3)(); // rax
  void (***v4)(); // rbx
  void (***v5)(); // rax
  void (***v6)(); // rbx
  void (***v7)(); // rax
  void (***v8)(); // rbx
  void (***v9)(); // rax
  void (***v10)(); // rbx
  void (***v11)(); // rax
  void (***v12)(); // rbx
  void (***v13)(); // rax
  void (***v14)(); // rbx
  _QWORD *v15; // rax
  _QWORD *v16; // rbx
  void (***v17)(); // rax
  void (***v18)(); // rbx
  void (***v19)(); // rax
  void (***v20)(); // rbx
  void (***v21)(); // rax
  void (***v22)(); // rbx
  _QWORD *v23; // rax
  _QWORD *v24; // rbx
  _QWORD *v25; // rax
  _QWORD *v26; // rbx
  _QWORD *v27; // rax
  _QWORD *v28; // r13
  _QWORD *v29; // rax
  _QWORD *v30; // r13
  _QWORD *v31; // rax
  _QWORD *v32; // r13
  __m128i v33; // xmm0
  _QWORD *v34; // rax
  _QWORD *v35; // r13
  __m128i si128; // xmm2
  _QWORD *v37; // rax
  _QWORD *v38; // r13
  _QWORD *v39; // rax
  _QWORD *v40; // r13
  _QWORD *v41; // rax
  _QWORD *v42; // r13
  _QWORD *v43; // rax
  _QWORD *v44; // r13
  _QWORD *v45; // rax
  _QWORD *v46; // r13
  _QWORD *v47; // rax
  _QWORD *v48; // r13
  _QWORD *v49; // rax
  _QWORD *v50; // r13
  void (***v51)(); // rax
  void (***v52)(); // rbx
  void (***v53)(); // rax
  void (***v54)(); // rbx
  __m128i v56; // [rsp+0h] [rbp-58h] BYREF
  __m128i v57[4]; // [rsp+10h] [rbp-48h] BYREF

  v57[0] = _mm_unpacklo_epi64(
             _mm_loadl_epi64((const __m128i *)off_1C5C988),
             (__m128i)(unsigned __int64)"pop 1 (or <number>) scopes.");
  v56 = _mm_unpacklo_epi64(
          _mm_loadl_epi64((const __m128i *)off_1C5C988),
          (__m128i)(unsigned __int64)"push 1 (or <number>) scopes.");
  v1 = (void (***)())sub_186B270(0x18u);
  *v1 = (void (**)())off_1C4CCD0;
  v2 = v1;
  sub_180C5A0(v1 + 1, "set-logic");
  *v2 = (void (**)())off_1C5BE58;
  v2[2] = nullptr;
  sub_DF7FD0(a1, v2);
  v3 = (void (***)())sub_186B270(0x18u);
  *v3 = (void (**)())off_1C4CCD0;
  v4 = v3;
  sub_180C5A0(v3 + 1, "exit");
  *v4 = (void (**)())off_1C5B4C8;
  v4[2] = nullptr;
  sub_DF7FD0(a1, v4);
  v5 = (void (***)())sub_186B270(0x18u);
  *v5 = (void (**)())off_1C4CCD0;
  v6 = v5;
  sub_180C5A0(v5 + 1, "get-assignment");
  *v6 = (void (**)())off_1C5B6A8;
  v6[2] = nullptr;
  sub_DF7FD0(a1, v6);
  v7 = (void (***)())sub_186B270(0x18u);
  *v7 = (void (**)())off_1C4CCD0;
  v8 = v7;
  sub_180C5A0(v7 + 1, "get-assertions");
  *v8 = (void (**)())off_1C5BC78;
  v8[2] = nullptr;
  sub_DF7FD0(a1, v8);
  v9 = (void (***)())sub_186B270(0x18u);
  *v9 = (void (**)())off_1C4CCD0;
  v10 = v9;
  sub_180C5A0(v9 + 1, "get-proof");
  *v10 = (void (**)())off_1C5B7C8;
  v10[2] = nullptr;
  sub_DF7FD0(a1, v10);
  v11 = (void (***)())sub_186B270(0x18u);
  *v11 = (void (**)())off_1C4CCD0;
  v12 = v11;
  sub_180C5A0(v11 + 1, "get-proof-graph");
  *v12 = (void (**)())off_1C5B8B8;
  v12[2] = nullptr;
  sub_DF7FD0(a1, v12);
  v13 = (void (***)())sub_186B270(0x18u);
  *v13 = (void (**)())off_1C4CCD0;
  v14 = v13;
  sub_180C5A0(v13 + 1, "get-unsat-core");
  *v14 = (void (**)())off_1C5B9A8;
  v14[2] = nullptr;
  sub_DF7FD0(a1, v14);
  v15 = (_QWORD *)sub_186B270(0xD8u);
  *v15 = off_1C4CCD0;
  v16 = v15;
  sub_180C5A0(v15 + 1, "set-option");
  v16[2] = 0;
  *v16 = off_1C5C218;
  sub_180C5A0(v16 + 3, "true");
  sub_180C5A0(v16 + 4, "false");
  sub_180C5A0(v16 + 5, ":print-success");
  sub_180C5A0(v16 + 6, ":print-warning");
  sub_180C5A0(v16 + 7, ":expand-definitions");
  sub_180C5A0(v16 + 8, ":interactive-mode");
  sub_180C5A0(v16 + 9, ":produce-proofs");
  sub_180C5A0(v16 + 10, ":produce-unsat-cores");
  sub_180C5A0(v16 + 11, ":produce-unsat-assumptions");
  sub_180C5A0(v16 + 12, ":produce-models");
  sub_180C5A0(v16 + 13, ":produce-assignments");
  sub_180C5A0(v16 + 14, ":produce-assertions");
  sub_180C5A0(v16 + 15, ":regular-output-channel");
  sub_180C5A0(v16 + 16, ":diagnostic-output-channel");
  sub_180C5A0(v16 + 17, ":random-seed");
  sub_180C5A0(v16 + 18, ":verbosity");
  sub_180C5A0(v16 + 19, ":global-decls");
  sub_180C5A0(v16 + 20, ":global-declarations");
  sub_180C5A0(v16 + 21, ":numeral-as-real");
  sub_180C5A0(v16 + 22, ":error-behavior");
  sub_180C5A0(v16 + 23, ":int-real-coercions");
  sub_180C5A0(v16 + 24, ":reproducible-resource-limit");
  *v16 = off_1C5C308;
  *((_BYTE *)v16 + 200) = 0;
  v16[26] = 0;
  sub_DF7FD0(a1, (void (***)())v16);
  v17 = (void (***)())sub_186B270(0xC8u);
  *v17 = (void (**)())off_1C4CCD0;
  v18 = v17;
  sub_180C5A0(v17 + 1, "get-option");
  v18[2] = nullptr;
  *v18 = (void (**)())off_1C5C218;
  sub_180C5A0(v18 + 3, "true");
  sub_180C5A0(v18 + 4, "false");
  sub_180C5A0(v18 + 5, ":print-success");
  sub_180C5A0(v18 + 6, ":print-warning");
  sub_180C5A0(v18 + 7, ":expand-definitions");
  sub_180C5A0(v18 + 8, ":interactive-mode");
  sub_180C5A0(v18 + 9, ":produce-proofs");
  sub_180C5A0(v18 + 10, ":produce-unsat-cores");
  sub_180C5A0(v18 + 11, ":produce-unsat-assumptions");
  sub_180C5A0(v18 + 12, ":produce-models");
  sub_180C5A0(v18 + 13, ":produce-assignments");
  sub_180C5A0(v18 + 14, ":produce-assertions");
  sub_180C5A0(v18 + 15, ":regular-output-channel");
  sub_180C5A0(v18 + 16, ":diagnostic-output-channel");
  sub_180C5A0(v18 + 17, ":random-seed");
  sub_180C5A0(v18 + 18, ":verbosity");
  sub_180C5A0(v18 + 19, ":global-decls");
  sub_180C5A0(v18 + 20, ":global-declarations");
  sub_180C5A0(v18 + 21, ":numeral-as-real");
  sub_180C5A0(v18 + 22, ":error-behavior");
  sub_180C5A0(v18 + 23, ":int-real-coercions");
  sub_180C5A0(v18 + 24, ":reproducible-resource-limit");
  *v18 = (void (**)())off_1C5C3F8;
  sub_DF7FD0(a1, v18);
  v19 = (void (***)())sub_186B270(0x60u);
  *v19 = (void (**)())off_1C4CCD0;
  v20 = v19;
  sub_180C5A0(v19 + 1, "get-info");
  *v20 = (void (**)())off_1C5C4E8;
  v20[2] = nullptr;
  sub_180C5A0(v20 + 3, ":error-behavior");
  sub_180C5A0(v20 + 4, ":name");
  sub_180C5A0(v20 + 5, ":authors");
  sub_180C5A0(v20 + 6, ":version");
  sub_180C5A0(v20 + 7, ":status");
  sub_180C5A0(v20 + 8, ":reason-unknown");
  sub_180C5A0(v20 + 9, ":all-statistics");
  sub_180C5A0(v20 + 10, ":assertion-stack-levels");
  sub_180C5A0(v20 + 11, ":rlimit");
  sub_DF7FD0(a1, v20);
  v21 = (void (***)())sub_186B270(0x40u);
  *v21 = (void (**)())off_1C4CCD0;
  v22 = v21;
  sub_180C5A0(v21 + 1, "set-info");
  *v22 = (void (**)())off_1C5C5D8;
  v22[2] = nullptr;
  v22[3] = nullptr;
  sub_180C5A0(v22 + 4, ":status");
  sub_180C5A0(v22 + 5, "unsat");
  sub_180C5A0(v22 + 6, "sat");
  sub_180C5A0(v22 + 7, "unknown");
  sub_DF7FD0(a1, v22);
  v23 = (_QWORD *)sub_186B270(0x28u);
  *v23 = off_1C4CCD0;
  v24 = v23;
  sub_180C5A0(v23 + 1, "set-initial-value");
  v24[2] = 0;
  *v24 = off_1C5C128;
  *(_OWORD *)(v24 + 3) = 0;
  sub_DF7FD0(a1, (void (***)())v24);
  v25 = (_QWORD *)sub_186B270(0x30u);
  *v25 = off_1C4CCD0;
  v26 = v25;
  sub_180C5A0(v25 + 1, "get-consequences");
  v26[2] = 0;
  *v26 = &off_1C5C7B8;
  *((_DWORD *)v26 + 10) = 0;
  *(_OWORD *)(v26 + 3) = 0;
  sub_DF7FD0(a1, (void (***)())v26);
  v27 = (_QWORD *)sub_186B270(0x28u);
  *v27 = off_1C4CCD0;
  v28 = v27;
  sub_180C5A0(v27 + 1, "assert");
  *v28 = off_1C5C8A8;
  v28[2] = 0;
  *(__m128i *)(v28 + 3) = _mm_unpacklo_epi64(
                            _mm_loadl_epi64((const __m128i *)off_1C5C990),
                            (__m128i)(unsigned __int64)"assert term.");
  sub_DF7FD0(a1, (void (***)())v28);
  v29 = (_QWORD *)sub_186B270(0x28u);
  *v29 = off_1C4CCD0;
  v30 = v29;
  sub_180C5A0(v29 + 1, "check-sat");
  *v30 = off_1C5C8A8;
  v30[2] = 0;
  *(__m128i *)(v30 + 3) = _mm_unpacklo_epi64(
                            _mm_loadl_epi64((const __m128i *)off_1C5C998),
                            (__m128i)(unsigned __int64)"check if the current context is satisfiable. If a list of boolean"
                                                       " constants B is provided, then check if the current context is co"
                                                       "nsistent with assigning every constant in B to true.");
  sub_DF7FD0(a1, (void (***)())v30);
  v31 = (_QWORD *)sub_186B270(0x28u);
  *v31 = off_1C4CCD0;
  v32 = v31;
  sub_180C5A0(v31 + 1, "push");
  v33 = _mm_load_si128(&v56);
  *v32 = off_1C5C8A8;
  v32[2] = 0;
  *(__m128i *)(v32 + 3) = v33;
  sub_DF7FD0(a1, (void (***)())v32);
  v34 = (_QWORD *)sub_186B270(0x28u);
  *v34 = off_1C4CCD0;
  v35 = v34;
  sub_180C5A0(v34 + 1, "pop");
  *v35 = off_1C5C8A8;
  si128 = _mm_load_si128(v57);
  v35[2] = 0;
  *(__m128i *)(v35 + 3) = si128;
  sub_DF7FD0(a1, (void (***)())v35);
  v37 = (_QWORD *)sub_186B270(0x28u);
  *v37 = off_1C4CCD0;
  v38 = v37;
  sub_180C5A0(v37 + 1, "get-value");
  *v38 = off_1C5C8A8;
  v38[2] = 0;
  *(__m128i *)(v38 + 3) = _mm_unpacklo_epi64(
                            _mm_loadl_epi64((const __m128i *)off_1C5C9A0),
                            (__m128i)(unsigned __int64)"evaluate the given terms in the current model.");
  sub_DF7FD0(a1, (void (***)())v38);
  v39 = (_QWORD *)sub_186B270(0x28u);
  *v39 = off_1C4CCD0;
  v40 = v39;
  sub_180C5A0(v39 + 1, "declare-sort");
  *v40 = off_1C5C8A8;
  v40[2] = 0;
  *(__m128i *)(v40 + 3) = _mm_unpacklo_epi64(
                            _mm_loadl_epi64((const __m128i *)off_1C5C9A8),
                            (__m128i)(unsigned __int64)"declare a new uninterpreted sort of arity <numeral>, if arity is "
                                                       "not provided, then it is assumed to be 0.");
  sub_DF7FD0(a1, (void (***)())v40);
  v41 = (_QWORD *)sub_186B270(0x28u);
  *v41 = off_1C4CCD0;
  v42 = v41;
  sub_180C5A0(v41 + 1, "define-sort");
  *v42 = off_1C5C8A8;
  v42[2] = 0;
  *(__m128i *)(v42 + 3) = _mm_unpacklo_epi64(
                            _mm_loadl_epi64((const __m128i *)off_1C5C9B0),
                            (__m128i)(unsigned __int64)"define a new sort.");
  sub_DF7FD0(a1, (void (***)())v42);
  v43 = (_QWORD *)sub_186B270(0x28u);
  *v43 = off_1C4CCD0;
  v44 = v43;
  sub_180C5A0(v43 + 1, "declare-fun");
  *v44 = off_1C5C8A8;
  v44[2] = 0;
  *(__m128i *)(v44 + 3) = _mm_unpacklo_epi64(
                            _mm_loadl_epi64((const __m128i *)off_1C5C9B8),
                            (__m128i)(unsigned __int64)"declare a new function/constant.");
  sub_DF7FD0(a1, (void (***)())v44);
  v45 = (_QWORD *)sub_186B270(0x28u);
  *v45 = off_1C4CCD0;
  v46 = v45;
  sub_180C5A0(v45 + 1, "declare-const");
  *v46 = off_1C5C8A8;
  v46[2] = 0;
  *(__m128i *)(v46 + 3) = _mm_unpacklo_epi64(
                            _mm_loadl_epi64((const __m128i *)off_1C5C9C0),
                            (__m128i)(unsigned __int64)"declare a new constant.");
  sub_DF7FD0(a1, (void (***)())v46);
  v47 = (_QWORD *)sub_186B270(0x28u);
  *v47 = off_1C4CCD0;
  v48 = v47;
  sub_180C5A0(v47 + 1, "declare-datatypes");
  *v48 = off_1C5C8A8;
  v48[2] = 0;
  *(__m128i *)(v48 + 3) = _mm_unpacklo_epi64(
                            _mm_loadl_epi64((const __m128i *)off_1C5C9C8),
                            (__m128i)(unsigned __int64)"declare mutually recursive datatypes.\n"
                                                       "<datatype-declaration> ::= (<symbol> <constructor-decl>+)\n"
                                                       "<constructor-decl> ::= (<symbol> <accessor-decl>*)\n"
                                                       "<accessor-decl> ::= (<symbol> <sort>)\n"
                                                       "example: (declare-datatypes (T) ((BinTree (leaf (value T)) (node "
                                                       "(left BinTree) (right BinTree)))))");
  sub_DF7FD0(a1, (void (***)())v48);
  v49 = (_QWORD *)sub_186B270(0x28u);
  *v49 = off_1C4CCD0;
  v50 = v49;
  sub_180C5A0(v49 + 1, "check-sat-assuming");
  *v50 = off_1C5C8A8;
  v50[2] = 0;
  *(__m128i *)(v50 + 3) = _mm_unpacklo_epi64(
                            _mm_loadl_epi64((const __m128i *)&off_1C5C9D0),
                            (__m128i)(unsigned __int64)"check sat assuming a collection of literals");
  sub_DF7FD0(a1, (void (***)())v50);
  v51 = (void (***)())sub_186B270(0x18u);
  *v51 = (void (**)())off_1C4CCD0;
  v52 = v51;
  sub_180C5A0(v51 + 1, "get-unsat-assumptions");
  *v52 = (void (**)())off_1C5BA98;
  v52[2] = nullptr;
  sub_DF7FD0(a1, v52);
  v53 = (void (***)())sub_186B270(0x18u);
  *v53 = (void (**)())off_1C4CCD0;
  v54 = v53;
  sub_180C5A0(v53 + 1, "reset-assertions");
  v54[2] = nullptr;
  *v54 = (void (**)())off_1C5BD68;
  return sub_DF7FD0(a1, v54);
}

