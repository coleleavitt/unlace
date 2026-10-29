__int64 __fastcall sub_1E48DE0(__int64 a1)
{
  __int64 *v1; // rbx
  __int64 result; // rax

  v1 = *(__int64 **)a1;
  result = sub_1DBB390(*(_QWORD *)(a1 + 8), **(_QWORD **)(a1 + 16));
  *v1 = result;
  return result;
}
