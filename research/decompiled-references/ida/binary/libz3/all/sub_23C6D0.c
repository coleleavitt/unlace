__int64 sub_23C6D0()
{
  __int64 v0; // rbx

  v0 = sub_186B270(8u);
  sub_1857380(v0);
  sub_185D2A0(v0, "enable", 1, "enable parallel solver by default on selected tactics (for QF_BV)", "false", "parallel");
  sub_185D2A0(
    v0,
    "threads.max",
    0,
    "caps maximal number of threads below the number of processors",
    "10000",
    "parallel");
  sub_185D2A0(v0, "conquer.batch_size", 0, "number of cubes to batch together for fast conquer", "100", "parallel");
  sub_185D2A0(v0, "conquer.restart.max", 0, "maximal number of restarts during conquer phase", "5", "parallel");
  sub_185D2A0(v0, "conquer.delay", 0, "delay of cubes until applying conquer", "10", "parallel");
  sub_185D2A0(
    v0,
    "conquer.backtrack_frequency",
    0,
    "frequency to apply core minimization during conquer",
    "10",
    "parallel");
  sub_185D2A0(v0, "simplify.exp", 2, "restart and inprocess max is multiplied by simplify.exp ^ depth", "1", "parallel");
  sub_185D2A0(
    v0,
    "simplify.max_conflicts",
    0,
    "maximal number of conflicts during simplification phase",
    "4294967295",
    "parallel");
  sub_185D2A0(
    v0,
    "simplify.restart.max",
    0,
    "maximal number of restarts during simplification phase",
    "5000",
    "parallel");
  sub_185D2A0(
    v0,
    "simplify.inprocess.max",
    0,
    "maximal number of inprocessing steps during simplification",
    "2",
    "parallel");
  return v0;
}

