__int64 sub_23E860()
{
  __int64 v0; // rbx

  v0 = sub_186B270(8u);
  sub_1857380(v0);
  sub_185D2A0(v0, "max_indent", 0, "max. indentation in pretty printer", "4294967295", "pp");
  sub_185D2A0(v0, "max_num_lines", 0, "max. number of lines to be displayed in pretty printer", "4294967295", "pp");
  sub_185D2A0(v0, "max_width", 0, "max. width in pretty printer", "80", "pp");
  sub_185D2A0(v0, "max_ribbon", 0, "max. ribbon (width - indentation) in pretty printer", "80", "pp");
  sub_185D2A0(v0, "max_depth", 0, "max. term depth (when pretty printing SMT2 terms/formulas)", "5", "pp");
  sub_185D2A0(v0, "no_lets", 1, "dont print lets in low level SMT printer", "false", "pp");
  sub_185D2A0(
    v0,
    "min_alias_size",
    0,
    "min. size for creating an alias for a shared term (when pretty printing SMT2 terms/formulas)",
    "10",
    "pp");
  sub_185D2A0(
    v0,
    "decimal",
    1,
    "pretty print real numbers using decimal notation (the output may be truncated). Z3 adds a ? if the value is not precise",
    "false",
    "pp");
  sub_185D2A0(
    v0,
    "decimal_precision",
    0,
    "maximum number of decimal places to be used when pp.decimal=true",
    "10",
    "pp");
  sub_185D2A0(
    v0,
    "bv_literals",
    1,
    "use Bit-Vector literals (e.g, #x0F and #b0101) during pretty printing",
    "true",
    "pp");
  sub_185D2A0(
    v0,
    "fp_real_literals",
    1,
    "use real-numbered floating point literals (e.g, +1.0p-1) during pretty printing",
    "false",
    "pp");
  sub_185D2A0(
    v0,
    "bv_neg",
    1,
    "use bvneg when displaying Bit-Vector literals where the most significant bit is 1",
    "false",
    "pp");
  sub_185D2A0(
    v0,
    "flat_assoc",
    1,
    "flat associative operators (when pretty printing SMT2 terms/formulas)",
    "true",
    "pp");
  sub_185D2A0(v0, "fixed_indent", 1, "use a fixed indentation for applications", "false", "pp");
  sub_185D2A0(v0, "single_line", 1, "ignore line breaks when true", "false", "pp");
  sub_185D2A0(v0, "bounded", 1, "ignore characters exceeding max width", "false", "pp");
  sub_185D2A0(v0, "pretty_proof", 1, "use slower, but prettier, printer for proofs", "false", "pp");
  sub_185D2A0(v0, "simplify_implies", 1, "simplify nested implications for pretty printing", "true", "pp");
  return v0;
}

