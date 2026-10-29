void __fastcall ClpModel::generateCpp(ClpModel *this, _IO_FILE *a2)
{
  int v2; // r12d
  int v3; // r14d
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // r12d
  int v11; // r14d
  int v12; // edx
  int v13; // edx
  int v14; // edx
  int v15; // edx
  int v16; // edx
  int v17; // edx
  int v18; // edx
  int v19; // edx
  int v20; // edx
  int v21; // edx
  int v22; // edx
  int v23; // edx
  int v24; // r12d
  int v25; // r14d
  int v26; // edx
  int v27; // edx
  int v28; // edx
  int v29; // ebp
  int v30; // r12d
  double v31; // [rsp+0h] [rbp-2F8h]
  double v32; // [rsp+0h] [rbp-2F8h]
  double v33; // [rsp+0h] [rbp-2F8h]
  double v34; // [rsp+0h] [rbp-2F8h]
  double v35; // [rsp+0h] [rbp-2F8h]
  double v36; // [rsp+0h] [rbp-2F8h]
  double v37; // [rsp+0h] [rbp-2F8h]
  double v38; // [rsp+8h] [rbp-2F0h]
  double v39; // [rsp+8h] [rbp-2F0h]
  double v40; // [rsp+8h] [rbp-2F0h]
  double v41; // [rsp+8h] [rbp-2F0h]
  double v42; // [rsp+8h] [rbp-2F0h]
  double v43; // [rsp+8h] [rbp-2F0h]
  double v44; // [rsp+8h] [rbp-2F0h]
  double v45[3]; // [rsp+10h] [rbp-2E8h] BYREF
  double v46; // [rsp+28h] [rbp-2D0h]
  double v47; // [rsp+30h] [rbp-2C8h]
  double v48; // [rsp+40h] [rbp-2B8h]
  double v49; // [rsp+60h] [rbp-298h]
  double v50; // [rsp+68h] [rbp-290h]
  double v51; // [rsp+70h] [rbp-288h]
  int v52; // [rsp+110h] [rbp-1E8h]
  int v53; // [rsp+138h] [rbp-1C0h]
  int v54; // [rsp+144h] [rbp-1B4h]
  __int64 v55; // [rsp+168h] [rbp-190h]

  if ( !*((_DWORD *)this + 82) )
    fwrite("  clpModel->dropNames();\n", 1u, 0x19u, a2);
  ClpModel::ClpModel((ClpModel *)v45, 0);
  v2 = *((_DWORD *)this + 74);
  v3 = v53;
  fprintf(a2, "%d  int save_maximumIterations = clpModel->maximumIterations();\n", (v2 == v53) + 1);
  fprintf(a2, "%d  clpModel->setMaximumIterations(%d);\n", (v2 == v3) + 3, v2);
  fprintf(a2, "%d  clpModel->setMaximumIterations(save_maximumIterations);\n", (v2 == v3) + 6);
  v31 = *((double *)this + 4);
  v38 = v47;
  v4 = 2;
  if ( v31 != v47 )
    v4 = 1;
  fprintf(a2, "%d  double save_primalTolerance = clpModel->primalTolerance();\n", v4);
  v5 = 4;
  if ( v31 != v38 )
    v5 = 3;
  fprintf(a2, "%d  clpModel->setPrimalTolerance(%g);\n", v5, v31);
  v6 = 7;
  if ( v31 != v38 )
    v6 = 6;
  fprintf(a2, "%d  clpModel->setPrimalTolerance(save_primalTolerance);\n", v6);
  v32 = *((double *)this + 3);
  v39 = v46;
  v7 = 2;
  if ( v32 != v46 )
    v7 = 1;
  fprintf(a2, "%d  double save_dualTolerance = clpModel->dualTolerance();\n", v7);
  v8 = 4;
  if ( v32 != v39 )
    v8 = 3;
  fprintf(a2, "%d  clpModel->setDualTolerance(%g);\n", v8, v32);
  v9 = 7;
  if ( v32 != v39 )
    v9 = 6;
  fprintf(a2, "%d  clpModel->setDualTolerance(save_dualTolerance);\n", v9);
  v10 = *((_DWORD *)this + 77);
  v11 = v54;
  fprintf(a2, "%d  int save_numberIterations = clpModel->numberIterations();\n", (v10 == v54) + 1);
  fprintf(a2, "%d  clpModel->setNumberIterations(%d);\n", (v10 == v11) + 3, v10);
  fprintf(a2, "%d  clpModel->setNumberIterations(save_numberIterations);\n", (v10 == v11) + 6);
  v33 = *((double *)this + 6);
  v40 = v48;
  v12 = 2;
  if ( v33 != v48 )
    v12 = 1;
  fprintf(a2, "%d  double save_maximumSeconds = clpModel->maximumSeconds();\n", v12);
  v13 = 4;
  if ( v33 != v40 )
    v13 = 3;
  fprintf(a2, "%d  clpModel->setMaximumSeconds(%g);\n", v13, v33);
  v14 = 7;
  if ( v33 != v40 )
    v14 = 6;
  fprintf(a2, "%d  clpModel->setMaximumSeconds(save_maximumSeconds);\n", v14);
  v34 = *(double *)this;
  v41 = v45[0];
  v15 = 2;
  if ( *(double *)this != v45[0] )
    v15 = 1;
  fprintf(a2, "%d  double save_optimizationDirection = clpModel->optimizationDirection();\n", v15);
  v16 = 4;
  if ( v34 != v41 )
    v16 = 3;
  fprintf(a2, "%d  clpModel->setOptimizationDirection(%g);\n", v16, v34);
  v17 = 7;
  if ( v34 != v41 )
    v17 = 6;
  fprintf(a2, "%d  clpModel->setOptimizationDirection(save_optimizationDirection);\n", v17);
  v35 = *((double *)this + 11);
  v42 = v50;
  v18 = 2;
  if ( v35 != v50 )
    v18 = 1;
  fprintf(a2, "%d  double save_objectiveScale = clpModel->objectiveScale();\n", v18);
  v19 = 4;
  if ( v35 != v42 )
    v19 = 3;
  fprintf(a2, "%d  clpModel->setObjectiveScale(%g);\n", v19, v35);
  v20 = 7;
  if ( v35 != v42 )
    v20 = 6;
  fprintf(a2, "%d  clpModel->setObjectiveScale(save_objectiveScale);\n", v20);
  v36 = *((double *)this + 12);
  v43 = v51;
  v21 = 2;
  if ( v36 != v51 )
    v21 = 1;
  fprintf(a2, "%d  double save_rhsScale = clpModel->rhsScale();\n", v21);
  v22 = 4;
  if ( v36 != v43 )
    v22 = 3;
  fprintf(a2, "%d  clpModel->setRhsScale(%g);\n", v22, v36);
  v23 = 7;
  if ( v36 != v43 )
    v23 = 6;
  fprintf(a2, "%d  clpModel->setRhsScale(save_rhsScale);\n", v23);
  v24 = *((_DWORD *)this + 64);
  v25 = v52;
  fprintf(a2, "%d  int save_scalingFlag = clpModel->scalingFlag();\n", (v24 == v52) + 1);
  fprintf(a2, "%d  clpModel->scaling(%d);\n", (v24 == v25) + 3, v24);
  fprintf(a2, "%d  clpModel->scaling(save_scalingFlag);\n", (v24 == v25) + 6);
  v37 = *((double *)this + 10);
  v44 = v49;
  v26 = 2;
  if ( v37 != v49 )
    v26 = 1;
  fprintf(a2, "%d  double save_getSmallElementValue = clpModel->getSmallElementValue();\n", v26);
  v27 = 4;
  if ( v37 != v44 )
    v27 = 3;
  fprintf(a2, "%d  clpModel->setSmallElementValue(%g);\n", v27, v37);
  v28 = 7;
  if ( v37 != v44 )
    v28 = 6;
  fprintf(a2, "%d  clpModel->setSmallElementValue(save_getSmallElementValue);\n", v28);
  v29 = *(_DWORD *)(*((_QWORD *)this + 43) + 104LL);
  v30 = *(_DWORD *)(v55 + 104);
  fprintf(a2, "%d  int save_logLevel = clpModel->logLevel();\n", (v30 == v29) + 1);
  fprintf(a2, "%d  clpModel->setLogLevel(%d);\n", (v30 == v29) + 3, v29);
  fprintf(a2, "%d  clpModel->setLogLevel(save_logLevel);\n", (v30 == v29) + 6);
  ClpModel::~ClpModel((ClpModel *)v45);
}

