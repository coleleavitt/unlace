__int64 __fastcall sub_EE8460(__int64 a1, char *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, double a7)
{
  unsigned int v7; // ebx
  __int16 v8; // ax
  __int64 result; // rax

  v7 = (unsigned int)(a3 + 1) >> 1;
  v8 = *(_WORD *)a2;
  *(_DWORD *)(a1 + 8) += v7;
  if ( (v8 & 0x1FF) == 0xF5 )
    sub_EDFEC0(a1, (__int64)a2);
  else
    sub_EE16F0((_QWORD *)a1, a2, a3, a4, a5, a6, a7);
  result = sub_971800(*(_QWORD *)a1, "; ");
  *(_DWORD *)(a1 + 8) -= v7;
  return result;
}

