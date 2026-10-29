__int64 __fastcall ClpSimplexNonlinear::primal(ClpSimplexNonlinear *this)
{
  __int64 v2; // r14
  const ClpQuadraticObjective *v3; // rbp
  int v4; // eax
  double v5; // xmm0_8
  __int64 v6; // rdi
  unsigned int v7; // ebx
  ClpQuadraticObjective *v9; // r12
  int v10; // r13d
  CoinIndexedVector **v11; // rbp
  int v12; // edx
  int v13; // eax
  int (__fastcall ***v14)(_QWORD, __int64); // rdi
  int (__fastcall *v15)(_QWORD, __int64); // rax
  int v16; // eax
  int v17; // eax
  void *v18; // rbp
  ClpNonLinearCost *v19; // rbp
  __int64 v20; // rax
  int v21; // [rsp+2Ch] [rbp-ECh]
  int v22; // [rsp+34h] [rbp-E4h] BYREF
  __int64 v23; // [rsp+38h] [rbp-E0h] BYREF
  _BYTE v24[80]; // [rsp+40h] [rbp-D8h] BYREF
  int v25[34]; // [rsp+90h] [rbp-88h] BYREF

  *((_DWORD *)this + 325) = 3;
  ClpSimplex::saveData((ClpSimplex *)v24);
  (*(void (__fastcall **)(_QWORD, ClpSimplexNonlinear *))(**((_QWORD **)this + 24) + 224LL))(
    *((_QWORD *)this + 24),
    this);
  v2 = *((_QWORD *)this + 20);
  if ( *(int *)(v2 + 16) <= 1
    || (v3 = (const ClpQuadraticObjective *)__dynamic_cast(
                                              *((const void **)this + 20),
                                              (const struct __class_type_info *)&`typeinfo for'ClpObjective,
                                              (const struct __class_type_info *)&`typeinfo for'ClpQuadraticObjective,
                                              0),
        *((_BYTE *)v3 + 56))
    || *((_QWORD *)this + 28)
    || *((_DWORD *)this + 64)
    || *((double *)this + 11) != 1.0 )
  {
    v2 = 0;
  }
  else
  {
    v9 = (ClpQuadraticObjective *)operator new(0x40u);
    ClpQuadraticObjective::ClpQuadraticObjective(v9, v3, 1);
    *((_QWORD *)this + 20) = v9;
  }
  v22 = 15;
  v23 = 0x7FEFFFFFFFFFFFFFLL;
  if ( (unsigned int)ClpSimplex::startup(this, 1, 0) )
  {
    v4 = *((_DWORD *)this + 80);
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)this + 165) + 40LL) = 0x408F400000000000LL;
    *((_DWORD *)this + 292) = -2;
    v25[0] = 0;
    ClpSimplexProgress::startCheck((ClpSimplexNonlinear *)((char *)this + 1408));
    v10 = 0;
    v21 = 1;
    while ( 1 )
    {
      v4 = *((_DWORD *)this + 80);
      if ( v4 >= 0 )
        break;
      v11 = (CoinIndexedVector **)((char *)this + 1056);
      do
        CoinIndexedVector::clear(*v11++);
      while ( (CoinIndexedVector **)((char *)this + 1088) != v11 );
      CoinIndexedVector::clear(*((CoinIndexedVector **)this + 138));
      CoinIndexedVector::clear(*((CoinIndexedVector **)this + 139));
      (*(void (__fastcall **)(_QWORD, ClpSimplexNonlinear *))(**((_QWORD **)this + 24) + 224LL))(
        *((_QWORD *)this + 24),
        this);
      v12 = *((_DWORD *)this + 77);
      if ( *((_DWORD *)this + 293) == v12 && v10 )
        v10 = 3;
      if ( *(int *)(*((_QWORD *)this + 20) + 16LL) > 1 )
      {
        v13 = *((_DWORD *)this + 333);
        if ( v13 >= 0 && v12 > v13 + 507 )
        {
          ClpSimplexPrimal::unflag(this);
          *((_DWORD *)this + 333) = *((_DWORD *)this + 77);
          if ( v22 > 9 )
          {
            v17 = v22 - 1;
            if ( v22 == 10 )
              v17 = 0;
            v22 = v17;
          }
        }
      }
      ClpSimplexNonlinear::statusOfProblemInPrimal(
        this,
        v25,
        v10,
        (ClpSimplexNonlinear *)((char *)this + 1408),
        1,
        (double *)&v23);
      v4 = *((_DWORD *)this + 80);
      *((_DWORD *)this + 292) = -2;
      if ( v4 >= 0 )
        break;
      if ( (unsigned __int8)ClpModel::hitMaximumIterations(this) )
      {
        *((_DWORD *)this + 80) = 3;
        goto LABEL_7;
      }
      v14 = *((int (__fastcall ****)(_QWORD, __int64))this + 45);
      v15 = **v14;
      if ( *((int *)this + 337) < 0 && v21 )
      {
        if ( v15(v14, 102) >= 0 )
        {
          *((_QWORD *)this + 40) = 0x6600000005LL;
          goto LABEL_7;
        }
        v21 = 0;
        v16 = (***((__int64 (__fastcall ****)(_QWORD, __int64))this + 45))(*((_QWORD *)this + 45), 101);
      }
      else
      {
        v16 = v15(v14, 101);
      }
      if ( v16 >= 0 )
      {
        *((_QWORD *)this + 40) = 0x6500000005LL;
        goto LABEL_7;
      }
      v10 = 1;
      ClpSimplexNonlinear::whileIterating(this, &v22);
    }
  }
  if ( v4 == 1 )
  {
    *((_QWORD *)this + 113) = 0;
    ClpSimplex::createRim(this, 5, 0, 0);
    v18 = *((void **)this + 165);
    if ( v18 )
    {
      ClpNonLinearCost::~ClpNonLinearCost(*((ClpNonLinearCost **)this + 165));
      operator delete(v18);
    }
    v19 = (ClpNonLinearCost *)operator new(0x98u);
    ClpNonLinearCost::ClpNonLinearCost(v19, this, 1);
    *((_QWORD *)this + 165) = v19;
    ClpNonLinearCost::checkInfeasibilities(v19, 0.0);
    v20 = *((_QWORD *)this + 165);
    *((_QWORD *)this + 112) = *(_QWORD *)(v20 + 32);
    *((_DWORD *)this + 308) = *(_DWORD *)(v20 + 112);
    ClpSimplex::computeDuals(this, nullptr);
  }
LABEL_7:
  if ( *((_DWORD *)this + 27) )
    v5 = *(double *)(*((_QWORD *)this + 20) + 8LL) + *(double *)(*((_QWORD *)this + 165) + 8LL);
  else
    v5 = *((double *)this + 9);
  *((double *)this + 9) = v5 / (*((double *)this + 11) * *((double *)this + 12));
  ClpSimplexPrimal::unflag(this);
  ClpSimplex::finish(this, 0);
  ClpDataSave::ClpDataSave((ClpDataSave *)v25, (const ClpDataSave *)v24);
  ClpSimplex::restoreData();
  ClpDataSave::~ClpDataSave((ClpDataSave *)v25);
  if ( v2 )
  {
    v6 = *((_QWORD *)this + 20);
    if ( v6 )
      (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v6 + 80LL))(v6, v25);
    *((_QWORD *)this + 20) = v2;
  }
  v7 = *((_DWORD *)this + 80);
  ClpDataSave::~ClpDataSave((ClpDataSave *)v24);
  return v7;
}

