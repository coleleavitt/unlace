__int64 invalidate_dbgmem_config()
{
  __int64 v0; // rax
  __int64 result; // rax

  v0 = qword_2CA1698;
  *(_BYTE *)(*(_QWORD *)(qword_2CA1698 + 1480) + 797LL) = 0;
  result = *(_QWORD *)(v0 + 1480);
  *(_DWORD *)(result + 1016) = -1;
  return result;
}

