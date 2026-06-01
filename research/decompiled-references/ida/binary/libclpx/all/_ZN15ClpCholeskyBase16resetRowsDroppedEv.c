void *__fastcall ClpCholeskyBase::resetRowsDropped(ClpCholeskyBase *this)
{
  size_t v1; // rdx

  v1 = *((int *)this + 11);
  *((_DWORD *)this + 20) = 0;
  return memset(*((void **)this + 7), 0, v1);
}

