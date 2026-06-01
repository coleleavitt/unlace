int sub_56F170()
{
  _QWORD v1[13]; // [rsp+0h] [rbp-68h] BYREF

  v1[0] = "omp_no_openmp";
  v1[2] = "omp_no_openmp_routines";
  v1[4] = "omp_no_parallelism";
  v1[6] = "ompx_spmd_amenable";
  v1[8] = "ompx_no_call_asm";
  v1[1] = 13;
  v1[3] = 22;
  v1[5] = 18;
  v1[7] = 18;
  v1[9] = 16;
  v1[10] = "ompx_aligned_barrier";
  v1[11] = 20;
  ((void (__fastcall *)(__int64 *, _QWORD *, __int64))sub_12A8360)(qword_4AE2440, v1, 6);
  return __cxa_atexit(sub_CF9920, qword_4AE2440, &off_47CFE00);
}

