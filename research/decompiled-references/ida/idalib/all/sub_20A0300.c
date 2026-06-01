__int64 __fastcall sub_20A0300(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  unsigned __int8 v4; // al
  _QWORD *v5; // rax
  __int64 result; // rax
  _QWORD *v7; // rdi

  v2 = a1;
  v3 = a2;
  if ( *(_BYTE *)a2 != 16 )
    v3 = sub_209E6C0(a2);
  *(_QWORD *)v2 = v3;
  v4 = *(_BYTE *)(a2 - 16);
  if ( (v4 & 2) != 0 )
  {
    *(_QWORD *)(v2 + 8) = *(_QWORD *)(*(_QWORD *)(a2 - 32) + 8LL);
    *(_QWORD *)(v2 + 16) = *(_QWORD *)(*(_QWORD *)(a2 - 32) + 16LL);
    *(_QWORD *)(v2 + 24) = *(_QWORD *)(*(_QWORD *)(a2 - 32) + 24LL);
    *(_QWORD *)(v2 + 32) = *(_QWORD *)(*(_QWORD *)(a2 - 32) + 32LL);
    v5 = *(_QWORD **)(a2 - 32);
  }
  else
  {
    v7 = (_QWORD *)(a2 - 8LL * ((v4 >> 2) & 0xF));
    v5 = v7 - 2;
    *(_QWORD *)(v2 + 8) = *(v7 - 1);
    *(_QWORD *)(v2 + 16) = *v7;
    *(_QWORD *)(v2 + 24) = v7[1];
    *(_QWORD *)(v2 + 32) = v7[2];
  }
  *(_QWORD *)(v2 + 40) = v5[5];
  *(_DWORD *)(v2 + 48) = *(_DWORD *)(a2 + 4);
  result = (unsigned __int8)BYTE1(*(_QWORD *)a2) >> 7;
  *(_BYTE *)(v2 + 52) = result;
  return result;
}
