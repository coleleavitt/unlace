__int64 unlock_dbgmem_config()
{
  __int64 v0; // rdx
  __int64 result; // rax

  v0 = *(_QWORD *)(qword_2CA1698 + 1480);
  result = *(unsigned int *)(v0 + 792);
  if ( (int)result > 0 )
  {
    result = (unsigned int)(result - 1);
    *(_DWORD *)(v0 + 792) = result;
  }
  return result;
}

