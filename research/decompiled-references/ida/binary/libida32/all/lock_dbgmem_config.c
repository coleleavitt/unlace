__int64 lock_dbgmem_config()
{
  __int64 result; // rax

  result = *(_QWORD *)(qword_2CA1698 + 1480);
  ++*(_DWORD *)(result + 792);
  return result;
}

