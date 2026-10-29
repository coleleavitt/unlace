const char *__fastcall sub_748030(int a1)
{
  const char *result; // rax

  switch ( a1 )
  {
    case 0:
      result = "omp_null_allocator";
      break;
    case 1:
      result = "omp_default_mem_alloc";
      break;
    case 2:
      result = "omp_large_cap_mem_alloc";
      break;
    case 3:
      result = "omp_const_mem_alloc";
      break;
    case 4:
      result = "omp_high_bw_mem_alloc";
      break;
    case 5:
      result = "omp_low_lat_mem_alloc";
      break;
    case 6:
      result = "omp_cgroup_mem_alloc";
      break;
    case 7:
      result = "omp_pteam_mem_alloc";
      break;
    case 8:
      result = "omp_thread_mem_alloc";
      break;
    case 9:
      result = &byte_3B9466E;
      break;
  }
  return result;
}

