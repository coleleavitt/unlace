void __fastcall ClpSimplex::generateCpp(ClpSimplex *this, _IO_FILE *s, char a3)
{
  int v4; // r13d
  int v5; // r13d
  int v6; // r14d
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  int v12; // edx
  int v13; // ebp
  int v14; // r13d
  double v15; // [rsp+0h] [rbp-728h]
  double v16; // [rsp+0h] [rbp-728h]
  double v17; // [rsp+8h] [rbp-720h]
  double v18; // [rsp+8h] [rbp-720h]
  _BYTE v19[784]; // [rsp+10h] [rbp-718h] BYREF
  double v20; // [rsp+320h] [rbp-408h]
  double v21; // [rsp+398h] [rbp-390h]
  int v22; // [rsp+52Ch] [rbp-1FCh]

  ClpModel::generateCpp(this, s);
  ClpSimplex::ClpSimplex((ClpSimplex *)v19, 0);
  v4 = ClpSimplex::factorizationFrequency(this);
  if ( v4 == (unsigned int)ClpSimplex::factorizationFrequency((ClpSimplex *)v19) )
  {
    if ( a3 )
    {
      fwrite("3  // For branchAndBound this may help\n", 1u, 0x27u, s);
      fwrite("3  clpModel->defaultFactorizationFrequency();\n", 1u, 0x2Eu, s);
    }
    else
    {
      fwrite("3  // For initialSolve you don't need below but ...\n", 1u, 0x34u, s);
      fwrite("3  // clpModel->defaultFactorizationFrequency();\n", 1u, 0x31u, s);
    }
  }
  v5 = ClpSimplex::factorizationFrequency(this);
  v6 = ClpSimplex::factorizationFrequency((ClpSimplex *)v19);
  fprintf(s, "%d  int save_factorizationFrequency = clpModel->factorizationFrequency();\n", (v5 == v6) + 1);
  fprintf(s, "%d  clpModel->setFactorizationFrequency(%d);\n", (v5 == v6) + 3, v5);
  fprintf(s, "%d  clpModel->setFactorizationFrequency(save_factorizationFrequency);\n", (v5 == v6) + 6);
  v15 = *((double *)this + 98);
  v17 = v20;
  v7 = 2;
  if ( v15 != v20 )
    v7 = 1;
  fprintf(s, "%d  double save_dualBound = clpModel->dualBound();\n", v7);
  v8 = 4;
  if ( v15 != v17 )
    v8 = 3;
  fprintf(s, "%d  clpModel->setDualBound(%g);\n", v8, v15);
  v9 = 7;
  if ( v15 != v17 )
    v9 = 6;
  fprintf(s, "%d  clpModel->setDualBound(save_dualBound);\n", v9);
  v16 = *((double *)this + 113);
  v18 = v21;
  v10 = 2;
  if ( v16 != v21 )
    v10 = 1;
  fprintf(s, "%d  double save_infeasibilityCost = clpModel->infeasibilityCost();\n", v10);
  v11 = 4;
  if ( v16 != v18 )
    v11 = 3;
  fprintf(s, "%d  clpModel->setInfeasibilityCost(%g);\n", v11, v16);
  v12 = 7;
  if ( v16 != v18 )
    v12 = 6;
  fprintf(s, "%d  clpModel->setInfeasibilityCost(save_infeasibilityCost);\n", v12);
  v13 = *((_DWORD *)this + 327);
  v14 = v22;
  fprintf(s, "%d  int save_perturbation = clpModel->perturbation();\n", (v13 == v22) + 1);
  fprintf(s, "%d  clpModel->setPerturbation(%d);\n", (v13 == v14) + 3, v13);
  fprintf(s, "%d  clpModel->setPerturbation(save_perturbation);\n", (v13 == v14) + 6);
  ClpSimplex::~ClpSimplex((ClpSimplex *)v19);
}

