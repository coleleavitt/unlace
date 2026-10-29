__int64 __fastcall sub_20A0690(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // al
  __int64 result; // rax
  _QWORD *v4; // rcx
  int v5; // edx

  v2 = *(_BYTE *)(a2 - 16);
  if ( (v2 & 2) != 0 )
  {
    *(_QWORD *)a1 = **(_QWORD **)(a2 - 32);
    *(_QWORD *)(a1 + 8) = *(_QWORD *)(*(_QWORD *)(a2 - 32) + 8LL);
    *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 16);
    *(_QWORD *)(a1 + 24) = *(_QWORD *)(*(_QWORD *)(a2 - 32) + 16LL);
    *(_QWORD *)(a1 + 32) = *(_QWORD *)(*(_QWORD *)(a2 - 32) + 24LL);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 20);
    result = *(_QWORD *)(*(_QWORD *)(a2 - 32) + 32LL);
    *(_QWORD *)(a1 + 48) = result;
  }
  else
  {
    v4 = (_QWORD *)(a2 - 8LL * ((v2 >> 2) & 0xF));
    *(_QWORD *)a1 = *(v4 - 2);
    *(_QWORD *)(a1 + 8) = *(v4 - 1);
    result = v4[2];
    *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 16);
    *(_QWORD *)(a1 + 24) = *v4;
    *(_QWORD *)(a1 + 32) = v4[1];
    v5 = *(_DWORD *)(a2 + 20);
    *(_QWORD *)(a1 + 48) = result;
    *(_DWORD *)(a1 + 40) = v5;
  }
  return result;
}
