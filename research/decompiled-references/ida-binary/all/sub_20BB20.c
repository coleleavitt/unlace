__int64 __fastcall sub_20BB20(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 8) = (int)(16 * ((qword_8CBB18 == 0) + (unsigned int)((qword_8CBB18 - qword_8CBAF8) >> 3) - 1)
                            + ((qword_8CBAF0 - qword_8CBAE0) >> 5)
                            + ((qword_8CBB00 - qword_8CBB08) >> 5));
  return 0;
}
