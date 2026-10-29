__int64 sub_23D440()
{
  __int64 v0; // rbx

  v0 = sub_186B270(8u);
  sub_1857380(v0);
  sub_185D2A0(v0, "split_concat_eq", 1, "split equalities of the form (= (concat t1 t2) t3)", "false", "rewriter");
  sub_185D2A0(v0, "bit2bool", 1, "try to convert bit-vector terms of size 1 into Boolean terms", "true", "rewriter");
  sub_185D2A0(v0, "blast_eq_value", 1, "blast (some) Bit-vector equalities into bits", "false", "rewriter");
  sub_185D2A0(v0, "elim_sign_ext", 1, "expand sign-ext operator using concat and extract", "true", "rewriter");
  sub_185D2A0(
    v0,
    "hi_div0",
    1,
    "use the 'hardware interpretation' for division by zero (for bit-vector terms)",
    "true",
    "rewriter");
  sub_185D2A0(v0, "mul2concat", 1, "replace multiplication by a power of two into a concatenation", "false", "rewriter");
  sub_185D2A0(v0, "bv_sort_ac", 1, "sort the arguments of all AC operators", "false", "rewriter");
  sub_185D2A0(v0, "bv_extract_prop", 1, "attempt to partially propagate extraction inwards", "false", "rewriter");
  sub_185D2A0(v0, "bv_not_simpl", 1, "apply simplifications for bvnot", "false", "rewriter");
  sub_185D2A0(v0, "bv_ite2id", 1, "rewrite ite that can be simplified to identity", "false", "rewriter");
  sub_185D2A0(v0, "bv_le_extra", 1, "additional bu_(u/s)le simplifications", "false", "rewriter");
  sub_185D2A0(v0, "bv_le2extract", 1, "disassemble bvule to extract", "true", "rewriter");
  return v0;
}

