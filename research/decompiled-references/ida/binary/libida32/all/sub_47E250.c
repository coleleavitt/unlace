__int64 __fastcall sub_47E250(__int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax

  if ( a2 >= *(_QWORD *)(a1 + 48) || !*(_BYTE *)(*(_QWORD *)(a1 + 40) + 160 * a2 + 156) )
    sub_47E110();
  switch_dbctx(*(int *)(a1 + 8));
  result = 160 * a2 + *(_QWORD *)(a1 + 40);
  *(_DWORD *)(result + 152) = *(_DWORD *)(a1 + 12);
  *(_QWORD *)(result + 136) = 0;
  *(_DWORD *)(result + 144) = -1;
  return result;
}

