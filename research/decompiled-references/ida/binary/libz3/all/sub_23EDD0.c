__int64 sub_23EDD0()
{
  int v1; // [rsp+0h] [rbp-48h]
  int v2; // [rsp+0h] [rbp-48h]
  int v3; // [rsp+0h] [rbp-48h]
  int v4; // [rsp+0h] [rbp-48h]
  int v5; // [rsp+0h] [rbp-48h]
  int v6; // [rsp+0h] [rbp-48h]
  int v7; // [rsp+0h] [rbp-48h]
  int v8; // [rsp+0h] [rbp-48h]
  int v9; // [rsp+0h] [rbp-48h]
  int v10; // [rsp+0h] [rbp-48h]
  int v11; // [rsp+0h] [rbp-48h]
  int v12; // [rsp+0h] [rbp-48h]
  int v13; // [rsp+0h] [rbp-48h]
  int v14; // [rsp+0h] [rbp-48h]
  int v15; // [rsp+0h] [rbp-48h]
  int v16; // [rsp+0h] [rbp-48h]
  int v17; // [rsp+0h] [rbp-48h]
  int v18; // [rsp+0h] [rbp-48h]
  int v19; // [rsp+0h] [rbp-48h]
  int v20; // [rsp+0h] [rbp-48h]
  int v21; // [rsp+0h] [rbp-48h]
  int v22; // [rsp+0h] [rbp-48h]
  int v23; // [rsp+0h] [rbp-48h]
  int v24; // [rsp+0h] [rbp-48h]
  int v25; // [rsp+0h] [rbp-48h]
  int v26; // [rsp+0h] [rbp-48h]
  int v27; // [rsp+0h] [rbp-48h]
  int v28; // [rsp+0h] [rbp-48h]
  int v29; // [rsp+0h] [rbp-48h]
  int v30; // [rsp+0h] [rbp-48h]
  int v31; // [rsp+0h] [rbp-48h]
  int v32; // [rsp+0h] [rbp-48h]
  int v33; // [rsp+0h] [rbp-48h]
  int v34; // [rsp+0h] [rbp-48h]
  int v35; // [rsp+0h] [rbp-48h]
  __int64 v36[8]; // [rsp+8h] [rbp-40h] BYREF

  sub_1857380(v36);
  sub_15B10D0(v36);
  sub_17F95D0(v36);
  sub_1857540(v36);
  sub_1857380(v36);
  sub_1808570(v36);
  sub_17F95D0(v36);
  sub_1857540(v36);
  sub_17FB710("ackermannization", v1, v36[0]);
  sub_17FB710("rewriter", v2, v36[0]);
  sub_17FB710("nnf", v3, v36[0]);
  sub_17FB710("nnf", v4, v36[0]);
  sub_17FB710("pp", v5, v36[0]);
  sub_17FB710("lp", v6, v36[0]);
  sub_17FB710("algebraic", v7, v36[0]);
  sub_17FB710("rcf", v8, v36[0]);
  sub_17FB710("model_evaluator", v9, v36[0]);
  sub_17FB710("model", v10, v36[0]);
  sub_17FB710("fp", v11, v36[0]);
  sub_17FB710("nlsat", v12, v36[0]);
  sub_17FB710("opt", v13, v36[0]);
  sub_17FB710("rewriter", v14, v36[0]);
  sub_17FB710("rewriter", v15, v36[0]);
  sub_17FB710("rewriter", v16, v36[0]);
  sub_17FB710("rewriter", v17, v36[0]);
  sub_17FB710("rewriter", v18, v36[0]);
  sub_17FB710("rewriter", v19, v36[0]);
  sub_17FB710("pi", v20, v36[0]);
  sub_17FB710("rewriter", v21, v36[0]);
  sub_17FB710("rewriter", v22, v36[0]);
  sub_17FB710("sat", v23, v36[0]);
  sub_17FB710("rewriter", v24, v36[0]);
  sub_17FB710("sls", v25, v36[0]);
  sub_17FB710("smt", v26, v36[0]);
  sub_17FB710("solver", v27, v36[0]);
  sub_17FB710("tactic", v28, v36[0]);
  sub_17FB710("parser", v29, v36[0]);
  sub_17FB710("sat", v30, v36[0]);
  sub_17FB710("sat", v31, v36[0]);
  sub_17FB710("sat", v32, v36[0]);
  sub_17FB710("combined_solver", v33, v36[0]);
  sub_17FB710("parallel", v34, v36[0]);
  sub_17FB710("ackermannization", v35, v36[0]);
  sub_17F95F0("ackermannization", "solving UF via ackermannization");
  sub_17F95F0("nnf", "negation normal form");
  sub_17F95F0("pp", "pretty printer");
  sub_17F95F0("lp", "linear programming parameters");
  sub_17F95F0("algebraic", "real algebraic number package. Non-default parameter settings are not supported");
  sub_17F95F0("rcf", "real closed fields");
  sub_17F95F0("fp", "fixedpoint parameters");
  sub_17F95F0("nlsat", "nonlinear solver");
  sub_17F95F0("opt", "optimization parameters");
  sub_17F95F0("pi", "pattern inference (heuristics) for universal formulas (without annotation)");
  sub_17F95F0("rewriter", "new formula simplification module used in the tactic framework, and new solvers");
  sub_17F95F0("sat", "propositional SAT solver");
  sub_17F95F0(
    "sls",
    "Stochastic Local Search Solver (invoked by sls-qfbv and sls-smt tactics or enabled by smt.sls.enable=true)");
  sub_17F95F0("smt", "smt solver based on lazy smt");
  sub_17F95F0("solver", "solver parameters");
  sub_17F95F0("tactic", "tactic parameters");
  sub_17F95F0("combined_solver", "combines two solvers: non-incremental (solver1) and incremental (solver2)");
  sub_17F95F0("parallel", "parameters for parallel solver");
  return sub_17F95F0(
           "ackermannization",
           "tactics based on solving UF-theories via ackermannization (see also ackr module)");
}

