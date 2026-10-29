ClpQuadraticObjective *__fastcall ClpQuadraticObjective::clone(ClpQuadraticObjective *this)
{
  ClpQuadraticObjective *v1; // rbx

  v1 = (ClpQuadraticObjective *)operator new(0x40u);
  ClpQuadraticObjective::ClpQuadraticObjective(v1, this, 0);
  return v1;
}

