ClpLinearObjective *__fastcall ClpLinearObjective::clone(ClpLinearObjective *this)
{
  ClpLinearObjective *v1; // rbx

  v1 = (ClpLinearObjective *)operator new(0x28u);
  ClpLinearObjective::ClpLinearObjective(v1, this);
  return v1;
}

