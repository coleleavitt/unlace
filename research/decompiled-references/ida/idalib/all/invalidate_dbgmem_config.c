__int64 invalidate_dbgmem_config()
{
  __int64 v0; // rax
  __int64 result; // rax

  v0 = qword_2CCB598;
  *(_BYTE *)(*(_QWORD *)(qword_2CCB598 + 1672) + 805LL) = 0;
  result = *(_QWORD *)(v0 + 1672);
  *(_QWORD *)(result + 1024) = -1;
  return result;
}
