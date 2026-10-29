__int64 sub_23E410()
{
  __int64 v0; // rbx

  v0 = sub_186B270(8u);
  sub_1857380(v0);
  sub_185D2A0(v0, "max_memory", 0, "maximum amount of memory in megabytes", "4294967295", "model_evaluator");
  sub_185D2A0(v0, "max_steps", 0, "maximum number of steps", "4294967295", "model_evaluator");
  sub_185D2A0(
    v0,
    "completion",
    1,
    "assigns an interptetation to symbols that do not have one in the current model, when evaluating expressions in the current model",
    "false",
    "model_evaluator");
  sub_185D2A0(v0, "array_equalities", 1, "evaluate array equalities", "true", "model_evaluator");
  sub_185D2A0(v0, "array_as_stores", 1, "return array as a set of stores", "true", "model_evaluator");
  return v0;
}

