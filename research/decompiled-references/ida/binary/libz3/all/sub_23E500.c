__int64 sub_23E500()
{
  __int64 v0; // rbx

  v0 = sub_186B270(8u);
  sub_1857380(v0);
  sub_185D2A0(
    v0,
    "use_prem",
    1,
    "use pseudo-remainder instead of remainder when computing GCDs and Sturm-Tarski sequences",
    "true",
    "rcf");
  sub_185D2A0(v0, "clean_denominators", 1, "clean denominators before root isolation", "true", "rcf");
  sub_185D2A0(
    v0,
    "initial_precision",
    0,
    "a value k that is the initial interval size (as 1/2^k) when creating transcendentals and approximated division",
    "24",
    "rcf");
  sub_185D2A0(
    v0,
    "inf_precision",
    0,
    "a value k that is the initial interval size (i.e., (0, 1/2^l)) used as an approximation for infinitesimal values",
    "24",
    "rcf");
  sub_185D2A0(
    v0,
    "max_precision",
    0,
    "during sign determination we switch from interval arithmetic to complete methods when the interval size is less than"
    " 1/2^k, where k is the max_precision",
    "128",
    "rcf");
  sub_185D2A0(
    v0,
    "lazy_algebraic_normalization",
    1,
    "during sturm-seq and square-free polynomial computations, only normalize algebraic polynomial expressions when the d"
    "efining polynomial is monic",
    "true",
    "rcf");
  return v0;
}

