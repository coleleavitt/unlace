__int64 sub_23D100()
{
  __int64 v0; // rbx

  v0 = sub_186B270(8u);
  sub_1857380(v0);
  sub_185D2A0(v0, "som", 1, "put polynomials in sum-of-monomials form", "false", "rewriter");
  sub_185D2A0(
    v0,
    "som_blowup",
    0,
    "maximum increase of monomials generated when putting a polynomial in sum-of-monomials normal form",
    "10",
    "rewriter");
  sub_185D2A0(
    v0,
    "hoist_mul",
    1,
    "hoist multiplication over summation to minimize number of multiplications",
    "false",
    "rewriter");
  sub_185D2A0(v0, "hoist_ite", 1, "hoist shared summands under ite expressions", "false", "rewriter");
  sub_185D2A0(v0, "flat", 1, "create nary applications for and,or,+,*,bvadd,bvmul,bvand,bvor,bvxor", "true", "rewriter");
  return v0;
}

