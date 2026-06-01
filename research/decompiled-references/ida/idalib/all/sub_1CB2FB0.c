unsigned __int64 __fastcall sub_1CB2FB0(__int64 a1, __int64 a2, double a3)
{
  if ( ((*(_DWORD *)a1 + 2147483642) & 0x7FFFFFFFu) <= 1 )
    return *(unsigned int *)((*(_QWORD *)(a1 + 24) & 0xFFFFFFFFFFFFFFFCLL) + 16);
  else
    return sub_F1E510(a1, a2, a3);
}
