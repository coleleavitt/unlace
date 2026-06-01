unsigned __int64 __fastcall sub_6A07E0(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rbx
  unsigned __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 1840);
  result = sub_6A0580(
             *(_QWORD *)(a2 + 8),
             *(_QWORD *)(a2 + 8) + *(unsigned int *)(a2 + 4),
             (__int64 *)(v3 + 40),
             a3 == 0);
  *(_OWORD *)(v3 + 64) = -1;
  return result;
}
