__int64 __fastcall sub_5180(__int16 *a1, __int64 a2, char a3)
{
  __int64 result; // rax
  __int16 v5; // dx

  result = a2;
  v5 = *a1;
  if ( a3 )
  {
    *(_WORD *)result = __ROL2__(v5, 8);
    *(_WORD *)(result + 2) = __ROL2__(a1[1], 8);
    *(_QWORD *)(result + 4) = _byteswap_ulong(*((_DWORD *)a1 + 1));
    *(_QWORD *)(result + 12) = _byteswap_ulong(*((_DWORD *)a1 + 2));
    *(_QWORD *)(result + 20) = _byteswap_ulong(*((_DWORD *)a1 + 3));
    *(_QWORD *)(result + 28) = _byteswap_ulong(*((_DWORD *)a1 + 4));
    *(_QWORD *)(result + 36) = _byteswap_ulong(*((_DWORD *)a1 + 5));
    *(_QWORD *)(result + 44) = _byteswap_ulong(*((_DWORD *)a1 + 6));
  }
  else
  {
    *(_WORD *)result = v5;
    *(_WORD *)(result + 2) = a1[1];
    *(_QWORD *)(result + 4) = *((unsigned int *)a1 + 1);
    *(_QWORD *)(result + 12) = *((unsigned int *)a1 + 2);
    *(_QWORD *)(result + 20) = *((unsigned int *)a1 + 3);
    *(_QWORD *)(result + 28) = *((unsigned int *)a1 + 4);
    *(_QWORD *)(result + 36) = *((unsigned int *)a1 + 5);
    *(_QWORD *)(result + 44) = *((unsigned int *)a1 + 6);
  }
  return result;
}

