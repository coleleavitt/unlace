__int64 unlock_dbgmem_config()
{
  __int64 v0; // rdx
  __int64 result; // rax

  v0 = *(_QWORD *)(qword_2CCB598 + 1672);
  result = *(unsigned int *)(v0 + 800);
  if ( (int)result > 0 )
  {
    result = (unsigned int)(result - 1);
    *(_DWORD *)(v0 + 800) = result;
  }
  return result;
}
