__int64 __fastcall sub_50F0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // rax
  int v5; // edx
  int v6; // eax
  __int64 result; // rax

  v4 = getseg();
  if ( !v4
    || *(_QWORD *)(v4 + 8) - a3 <= 0xB
    || !(unsigned __int8)sub_4AA0((unsigned __int64 *)a1, a3, a3 + 12, 0)
    || !(unsigned __int8)sub_4D20((_QWORD *)a1, 0, (unsigned int *)(a1 + 48)) )
  {
    goto LABEL_12;
  }
  v5 = *(_DWORD *)(a1 + 48);
  v6 = -v5;
  if ( v5 > 0 )
    LOBYTE(v6) = v5;
  if ( (v6 & 3) != 0
    || !(unsigned __int8)sub_4D20((_QWORD *)a1, 4u, (unsigned int *)(a1 + 52))
    || (result = sub_4D20((_QWORD *)a1, 8u, (unsigned int *)(a1 + 56)), !(_BYTE)result)
    || *(_DWORD *)(a1 + 52) == -1 && *(_DWORD *)(a1 + 56) )
  {
LABEL_12:
    *(_QWORD *)(a1 + 24) = 0;
    *(_OWORD *)a1 = -1;
    return 0;
  }
  return result;
}
