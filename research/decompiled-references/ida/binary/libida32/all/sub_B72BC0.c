__int64 __fastcall sub_B72BC0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 result; // rax

  a1[2] = 0;
  *a1 = 0x8007FF8000203380LL;
  v2 = a1[1];
  a1[3] = 0;
  a1[4] = 0;
  result = (unsigned int)v2 & 0xFE000000 | 0x1C054LL;
  a1[5] = 0;
  a1[1] = result;
  a1[6] = 0;
  a1[7] = 0;
  a1[8] = 0;
  a1[9] = 0;
  a1[10] = 0;
  a1[11] = a2;
  a1[12] = 0;
  return result;
}

