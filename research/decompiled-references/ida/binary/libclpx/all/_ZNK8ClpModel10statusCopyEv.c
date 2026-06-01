void *__fastcall ClpModel::statusCopy(ClpModel *this)
{
  const void *v1; // rbp
  int v2; // ebx
  void *v3; // rax

  v1 = *((const void **)this + 33);
  v2 = *((_DWORD *)this + 26) + *((_DWORD *)this + 27);
  if ( !v1 )
    return nullptr;
  v3 = (void *)operator new[](v2);
  return memcpy(v3, v1, v2);
}

