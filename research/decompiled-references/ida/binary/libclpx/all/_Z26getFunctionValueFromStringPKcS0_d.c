double __fastcall getFunctionValueFromString(const char *a1, const char *a2, double a3)
{
  double (__fastcall **v3)(double); // r12
  _QWORD *v4; // r15
  _QWORD *v5; // rbx
  size_t v6; // rax
  char *v7; // rax
  __int64 v8; // rax
  double v9; // xmm0_8
  void **v10; // rbx
  void **v11; // r14
  void **v12; // rbx
  void **v13; // rax
  void **v14; // r15
  char *s; // [rsp+8h] [rbp-A8h]
  char *sa; // [rsp+8h] [rbp-A8h]
  int v18; // [rsp+1Ch] [rbp-94h] BYREF
  int v19; // [rsp+20h] [rbp-90h] BYREF
  int v20; // [rsp+24h] [rbp-8Ch] BYREF
  char *v21; // [rsp+28h] [rbp-88h] BYREF
  _QWORD v22[2]; // [rsp+30h] [rbp-80h] BYREF
  void *ptr[2]; // [rsp+40h] [rbp-70h] BYREF
  int v24; // [rsp+50h] [rbp-60h] BYREF
  double v25; // [rsp+58h] [rbp-58h]
  _BYTE v26[16]; // [rsp+60h] [rbp-50h] BYREF
  int v27; // [rsp+70h] [rbp-40h]

  v3 = &off_4D1828;
  v4 = nullptr;
  v24 = 0;
  v25 = 0.0;
  s = "sin";
  *(_OWORD *)ptr = 0;
  do
  {
    v3 += 2;
    v5 = malloc(0x20u);
    v6 = strlen(s);
    v7 = (char *)malloc(v6 + 1);
    *v5 = v7;
    strcpy(v7, s);
    v8 = (__int64)*(v3 - 2);
    v5[3] = v4;
    v4 = v5;
    *((_DWORD *)v5 + 2) = 260;
    ptr[0] = v5;
    v5[2] = v8;
    s = (char *)*(v3 - 1);
  }
  while ( s );
  v18 = 0;
  v25 = -1.23456787654321e-97;
  *(double *)v22 = a3;
  v22[1] = 0xABD0E07EC39EA8F1LL;
  CoinModelHash::CoinModelHash((CoinModelHash *)v26);
  if ( (int)CoinModelHash::hash((CoinModelHash *)v26, a2) < 0 )
    CoinModelHash::addHash((CoinModelHash *)v26, v27, a2);
  if ( (int)CoinModelHash::hash((CoinModelHash *)v26, a1) < 0 )
    CoinModelHash::addHash((CoinModelHash *)v26, v27, a1);
  v9 = sub_1F8760(
         (char **)ptr,
         (__int64)a1,
         (char **)&ptr[1],
         &v24,
         (__int64)v22,
         (CoinModelHash *)v26,
         v25,
         &v18,
         &v19,
         &v21,
         &v20);
  *(double *)&sa = v9;
  if ( v18 )
  {
    printf("string %s returns value %g and error-code %d\n", a1, v9, v18);
    *(double *)&sa = -1.23456787654321e-97;
  }
  else
  {
    printf("%s computes as %g\n", a1, v9);
  }
  v10 = (void **)ptr[0];
  if ( ptr[0] )
  {
    do
    {
      free(*v10);
      v11 = (void **)v10[3];
      free(v10);
      v10 = v11;
    }
    while ( v11 );
  }
  CoinModelHash::~CoinModelHash((CoinModelHash *)v26);
  if ( v24 )
  {
    free(ptr[1]);
    ptr[1] = nullptr;
  }
  v12 = (void **)ptr[0];
  if ( ptr[0] )
  {
    do
    {
      free(*v12);
      v13 = (void **)v12[3];
      ptr[0] = v12;
      v14 = v13;
      free(v12);
      v12 = v14;
    }
    while ( v14 );
  }
  return *(double *)&sa;
}

