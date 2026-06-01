__int64 __fastcall sub_3FF5C0(__int64 a1)
{
  __int64 result; // rax
  bool v2; // zf

  *(_DWORD *)(a1 + 256) = sub_1859980(**(_QWORD **)(a1 + 144), "spacer.random_seed", *(_QWORD *)(a1 + 144) + 8LL, 0);
  *(_DWORD *)(a1 + 260) = sub_1859980(**(_QWORD **)(a1 + 144), "spacer.order_children", *(_QWORD *)(a1 + 144) + 8LL, 0);
  *(_BYTE *)(a1 + 645) = sub_1859630(**(_QWORD **)(a1 + 144), "spacer.simplify_pob", *(_QWORD *)(a1 + 144) + 8LL, 0);
  *(_BYTE *)(a1 + 646) = sub_1859630(**(_QWORD **)(a1 + 144), "spacer.use_euf_gen", *(_QWORD *)(a1 + 144) + 8LL, 0);
  *(_BYTE *)(a1 + 647) = sub_1859630(**(_QWORD **)(a1 + 144), "spacer.use_lim_num_gen", *(_QWORD *)(a1 + 144) + 8LL, 0);
  *(_BYTE *)(a1 + 648) = sub_1859630(**(_QWORD **)(a1 + 144), "spacer.ctp", *(_QWORD *)(a1 + 144) + 8LL, 1);
  *(_BYTE *)(a1 + 649) = sub_1859630(**(_QWORD **)(a1 + 144), "spacer.use_inc_clause", *(_QWORD *)(a1 + 144) + 8LL, 1);
  *(_DWORD *)(a1 + 688) = sub_1859980(
                            **(_QWORD **)(a1 + 144),
                            "spacer.blast_term_ite_inflation",
                            *(_QWORD *)(a1 + 144) + 8LL,
                            3);
  *(_BYTE *)(a1 + 650) = sub_1859630(
                           **(_QWORD **)(a1 + 144),
                           "spacer.use_inductive_generalizer",
                           *(_QWORD *)(a1 + 144) + 8LL,
                           1);
  *(_BYTE *)(a1 + 651) = sub_1859630(
                           **(_QWORD **)(a1 + 144),
                           "spacer.use_array_eq_generalizer",
                           *(_QWORD *)(a1 + 144) + 8LL,
                           1);
  *(_BYTE *)(a1 + 652) = sub_1859630(**(_QWORD **)(a1 + 144), "spacer.validate_lemmas", *(_QWORD *)(a1 + 144) + 8LL, 0);
  *(_DWORD *)(a1 + 680) = sub_1859980(
                            **(_QWORD **)(a1 + 144),
                            "spacer.max_level",
                            *(_QWORD *)(a1 + 144) + 8LL,
                            0xFFFFFFFFLL);
  *(_BYTE *)(a1 + 653) = sub_1859630(**(_QWORD **)(a1 + 144), "spacer.propagate", *(_QWORD *)(a1 + 144) + 8LL, 1);
  *(_BYTE *)(a1 + 654) = sub_1859630(**(_QWORD **)(a1 + 144), "spacer.reset_pob_queue", *(_QWORD *)(a1 + 144) + 8LL, 1);
  *(_BYTE *)(a1 + 655) = sub_1859630(**(_QWORD **)(a1 + 144), "spacer.push_pob", *(_QWORD *)(a1 + 144) + 8LL, 0);
  *(_DWORD *)(a1 + 676) = sub_1859980(
                            **(_QWORD **)(a1 + 144),
                            "spacer.push_pob_max_depth",
                            *(_QWORD *)(a1 + 144) + 8LL,
                            0xFFFFFFFFLL);
  *(_BYTE *)(a1 + 656) = sub_1859630(**(_QWORD **)(a1 + 144), "spacer.use_lemma_as_cti", *(_QWORD *)(a1 + 144) + 8LL, 0);
  *(_BYTE *)(a1 + 657) = sub_1859630(**(_QWORD **)(a1 + 144), "spacer.elim_aux", *(_QWORD *)(a1 + 144) + 8LL, 1);
  *(_BYTE *)(a1 + 658) = sub_1859630(**(_QWORD **)(a1 + 144), "spacer.reach_dnf", *(_QWORD *)(a1 + 144) + 8LL, 1);
  *(_BYTE *)(a1 + 659) = sub_1859630(**(_QWORD **)(a1 + 144), "spacer.use_derivations", *(_QWORD *)(a1 + 144) + 8LL, 1);
  *(_BYTE *)(a1 + 660) = sub_1859630(**(_QWORD **)(a1 + 144), "validate", *(_QWORD *)(a1 + 144) + 8LL, 0);
  *(_BYTE *)(a1 + 661) = sub_1859630(**(_QWORD **)(a1 + 144), "spacer.eq_prop", *(_QWORD *)(a1 + 144) + 8LL, 1);
  *(_BYTE *)(a1 + 662) = sub_1859630(**(_QWORD **)(a1 + 144), "spacer.ground_pobs", *(_QWORD *)(a1 + 144) + 8LL, 1);
  *(_BYTE *)(a1 + 663) = sub_1859630(**(_QWORD **)(a1 + 144), "spacer.q3.use_qgen", *(_QWORD *)(a1 + 144) + 8LL, 0);
  *(_BYTE *)(a1 + 664) = sub_1859630(**(_QWORD **)(a1 + 144), "spacer.gpdr", *(_QWORD *)(a1 + 144) + 8LL, 0);
  *(_BYTE *)(a1 + 665) = sub_1859630(
                           **(_QWORD **)(a1 + 144),
                           "spacer.simplify_lemmas_pre",
                           *(_QWORD *)(a1 + 144) + 8LL,
                           0);
  *(_BYTE *)(a1 + 666) = sub_1859630(
                           **(_QWORD **)(a1 + 144),
                           "spacer.simplify_lemmas_post",
                           *(_QWORD *)(a1 + 144) + 8LL,
                           0);
  *(_BYTE *)(a1 + 640) = sub_1859630(**(_QWORD **)(a1 + 144), "spacer.native_mbp", *(_QWORD *)(a1 + 144) + 8LL, 1);
  *(_BYTE *)(a1 + 641) = sub_1859630(**(_QWORD **)(a1 + 144), "spacer.q3.instantiate", *(_QWORD *)(a1 + 144) + 8LL, 1);
  *(_BYTE *)(a1 + 642) = sub_1859630(**(_QWORD **)(a1 + 144), "spacer.q3", *(_QWORD *)(a1 + 144) + 8LL, 1);
  *(_BYTE *)(a1 + 643) = sub_1859630(**(_QWORD **)(a1 + 144), "spacer.weak_abs", *(_QWORD *)(a1 + 144) + 8LL, 1);
  *(_BYTE *)(a1 + 644) = sub_1859630(**(_QWORD **)(a1 + 144), "spacer.restarts", *(_QWORD *)(a1 + 144) + 8LL, 0);
  *(_DWORD *)(a1 + 684) = sub_1859980(
                            **(_QWORD **)(a1 + 144),
                            "spacer.restart_initial_threshold",
                            *(_QWORD *)(a1 + 144) + 8LL,
                            10);
  *(_BYTE *)(a1 + 667) = sub_1859630(**(_QWORD **)(a1 + 144), "spacer.gpdr.bfs", *(_QWORD *)(a1 + 144) + 8LL, 1);
  *(_BYTE *)(a1 + 668) = sub_1859630(**(_QWORD **)(a1 + 144), "spacer.use_bg_invs", *(_QWORD *)(a1 + 144) + 8LL, 0);
  *(_BYTE *)(a1 + 669) = sub_1859630(**(_QWORD **)(a1 + 144), "spacer.global", *(_QWORD *)(a1 + 144) + 8LL, 0);
  *(_BYTE *)(a1 + 670) = sub_1859630(**(_QWORD **)(a1 + 144), "spacer.expand_bnd", *(_QWORD *)(a1 + 144) + 8LL, 0);
  *(_BYTE *)(a1 + 671) = sub_1859630(**(_QWORD **)(a1 + 144), "spacer.gg.conjecture", *(_QWORD *)(a1 + 144) + 8LL, 1);
  *(_BYTE *)(a1 + 672) = sub_1859630(**(_QWORD **)(a1 + 144), "spacer.gg.subsume", *(_QWORD *)(a1 + 144) + 8LL, 1);
  *(_BYTE *)(a1 + 673) = sub_1859630(**(_QWORD **)(a1 + 144), "spacer.gg.concretize", *(_QWORD *)(a1 + 144) + 8LL, 1);
  result = sub_1859630(**(_QWORD **)(a1 + 144), "spacer.use_iuc", *(_QWORD *)(a1 + 144) + 8LL, 1);
  v2 = *(_BYTE *)(a1 + 664) == 0;
  *(_BYTE *)(a1 + 674) = result;
  if ( !v2 )
  {
    *(_BYTE *)(a1 + 662) = 1;
    *(_WORD *)(a1 + 642) = 0;
    *(_WORD *)(a1 + 654) = 0;
    *(_BYTE *)(a1 + 659) = 0;
    *(_BYTE *)(a1 + 656) = 0;
    return 0;
  }
  return result;
}

