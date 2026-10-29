__int64 __fastcall sub_209F700(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // al
  _QWORD *v3; // rax
  __int64 result; // rax
  _QWORD *v5; // rcx

  *(_DWORD *)a1 = (unsigned __int16)sub_206CE80(a2);
  v2 = *(_BYTE *)(a2 - 16);
  if ( (v2 & 2) != 0 )
  {
    *(_QWORD *)(a1 + 8) = *(_QWORD *)(*(_QWORD *)(a2 - 32) + 16LL);
    *(_QWORD *)(a1 + 16) = *(_QWORD *)(*(_QWORD *)(a2 - 32) + 40LL);
    *(_QWORD *)(a1 + 24) = *(_QWORD *)(*(_QWORD *)(a2 - 32) + 48LL);
    *(_QWORD *)(a1 + 32) = *(_QWORD *)(*(_QWORD *)(a2 - 32) + 56LL);
    v3 = *(_QWORD **)(a2 - 32);
  }
  else
  {
    v5 = (_QWORD *)(a2 - 8LL * ((v2 >> 2) & 0xF));
    v3 = v5 - 2;
    *(_QWORD *)(a1 + 8) = *v5;
    *(_QWORD *)(a1 + 16) = v5[3];
    *(_QWORD *)(a1 + 24) = v5[4];
    *(_QWORD *)(a1 + 32) = v5[5];
  }
  *(_QWORD *)(a1 + 40) = v3[3];
  *(_DWORD *)(a1 + 48) = sub_206CE70(a2);
  result = *(unsigned int *)(a2 + 28);
  *(_DWORD *)(a1 + 52) = result;
  return result;
}
