__int64 __fastcall sub_20A03B0(__int64 a1, _QWORD *a2)
{
  unsigned __int8 v2; // al
  __int64 v3; // rdx
  __int64 result; // rax
  __int64 *v5; // rcx

  *(_DWORD *)a1 = (unsigned __int16)sub_206CE80((__int64)a2);
  v2 = *((_BYTE *)a2 - 16);
  if ( (v2 & 2) != 0 )
  {
    *(_QWORD *)(a1 + 8) = *(_QWORD *)*(a2 - 4);
    *(_QWORD *)(a1 + 16) = *(_QWORD *)(*(a2 - 4) + 8LL);
    v3 = *(a2 - 4);
    *(_BYTE *)(a1 + 24) = (unsigned __int8)BYTE1(*a2) >> 7;
    result = *(_QWORD *)(v3 + 16);
    *(_QWORD *)(a1 + 32) = result;
  }
  else
  {
    v5 = &a2[-((v2 >> 2) & 0xF)];
    *(_QWORD *)(a1 + 8) = *(v5 - 2);
    *(_QWORD *)(a1 + 16) = *(v5 - 1);
    *(_BYTE *)(a1 + 24) = (unsigned __int8)BYTE1(*a2) >> 7;
    result = *v5;
    *(_QWORD *)(a1 + 32) = *v5;
  }
  return result;
}
