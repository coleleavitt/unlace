int sub_32E630()
{
  _QWORD v1[15]; // [rsp+0h] [rbp-78h] BYREF

  v1[0] = "omp_no_openmp";
  v1[2] = "omp_no_openmp_routines";
  v1[4] = "omp_no_parallelism";
  v1[6] = "omp_no_openmp_constructs";
  v1[8] = "ompx_spmd_amenable";
  v1[10] = "ompx_no_call_asm";
  v1[12] = "ompx_aligned_barrier";
  v1[1] = 13;
  v1[3] = 22;
  v1[5] = 18;
  v1[7] = 24;
  v1[9] = 18;
  v1[11] = 16;
  v1[13] = 20;
  ((void (__fastcall *)(void *, _QWORD *, __int64))sub_1645280)(&unk_2CD29A0, v1, 7);
  return __cxa_atexit(sub_10450A0, &unk_2CD29A0, &off_2AFC540);
}

