__int64 __fastcall sub_492D50(__int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rbx

  if ( a2 >= *(_QWORD *)(a1 + 48) || !*(_BYTE *)(*(_QWORD *)(a1 + 40) + 184 * a2 + 176) )
    sub_492C10();
  switch_dbctx(*(int *)(a1 + 8));
  result = *(unsigned int *)(a1 + 12);
  v3 = *(_QWORD *)(a1 + 40) + 184 * a2;
  *(_QWORD *)(v3 + 152) = 0;
  *(_DWORD *)(v3 + 172) = result;
  *(_QWORD *)(v3 + 160) = -1;
  return result;
}
