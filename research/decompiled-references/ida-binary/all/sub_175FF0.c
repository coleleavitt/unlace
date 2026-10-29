__int64 __fastcall sub_175FF0(__int64 *a1)
{
  __int64 v1; // rax
  __int64 result; // rax

  v1 = *a1;
  ++*((_DWORD *)a1 + 6);
  result = (*(__int64 (**)(void))(v1 + 488))();
  --*((_DWORD *)a1 + 6);
  return result;
}
