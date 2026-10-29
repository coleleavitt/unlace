ClpLinearObjective *__fastcall ClpLinearObjective::subsetClone(ClpLinearObjective *this, int a2, const int *a3)
{
  ClpLinearObjective *v4; // rbx

  v4 = (ClpLinearObjective *)operator new(0x28u);
  ClpLinearObjective::ClpLinearObjective(v4, this, a2, a3);
  return v4;
}

