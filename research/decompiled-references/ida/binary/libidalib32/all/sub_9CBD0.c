__int64 __fastcall sub_9CBD0(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a2 + 8) = 16 * ((qword_250ED8 == 0) + (unsigned int)((qword_250ED8 - qword_250EB8) >> 3) - 1)
                      + ((qword_250EB0 - qword_250EA0) >> 5)
                      + ((qword_250EC0 - qword_250EC8) >> 5);
  return 0;
}

