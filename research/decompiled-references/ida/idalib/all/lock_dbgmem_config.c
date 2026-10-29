__int64 lock_dbgmem_config()
{
  __int64 result; // rax

  result = *(_QWORD *)(qword_2CCB598 + 1672);
  ++*(_DWORD *)(result + 800);
  return result;
}
