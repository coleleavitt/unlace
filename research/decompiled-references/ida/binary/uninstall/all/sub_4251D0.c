void *__fastcall sub_4251D0(_DWORD *src)
{
  unsigned int v1; // ebp
  void *v2; // r12

  v1 = 4 * (*src - 1) + 8;
  v2 = (void *)sub_40FB00(v1);
  memcpy(v2, src, v1);
  return v2;
}

