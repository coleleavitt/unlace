__int64 __fastcall register_timer(_QWORD *a1)
{
  *a1 = &off_86FF78;
  return qsem_free(a1[2]);
}
