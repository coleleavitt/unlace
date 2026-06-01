bool __fastcall sub_11F00(_QWORD *a1)
{
  pthread_mutex_t *v2; // rdi

  v2 = (pthread_mutex_t *)qword_1D3E8;
  *a1 = qword_1D3E8;
  return sub_11ED0(v2);
}

