ClpQuadraticObjective *__fastcall ClpQuadraticObjective::subsetClone(
        ClpQuadraticObjective *this,
        int a2,
        const int *a3)
{
  ClpQuadraticObjective *v4; // rbx

  v4 = (ClpQuadraticObjective *)operator new(0x40u);
  ClpQuadraticObjective::ClpQuadraticObjective(v4, this, a2, a3);
  return v4;
}

