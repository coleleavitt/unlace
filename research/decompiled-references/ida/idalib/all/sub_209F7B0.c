__int64 __fastcall sub_209F7B0(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // al
  _QWORD *v3; // rdx
  unsigned __int8 v4; // al
  __int64 result; // rax
  _QWORD *v6; // rcx
  __int64 v7; // rax

  *(_DWORD *)a1 = (unsigned __int16)sub_206CE80(a2);
  v2 = *(_BYTE *)(a2 - 16);
  if ( (v2 & 2) != 0 )
  {
    *(_QWORD *)(a1 + 8) = *(_QWORD *)(*(_QWORD *)(a2 - 32) + 16LL);
    if ( *(_BYTE *)a2 == 16 )
      *(_QWORD *)(a1 + 16) = a2;
    else
      *(_QWORD *)(a1 + 16) = sub_209E6C0(a2);
    *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 16);
    *(_QWORD *)(a1 + 32) = *(_QWORD *)(*(_QWORD *)(a2 - 32) + 8LL);
    *(_QWORD *)(a1 + 40) = *(_QWORD *)(*(_QWORD *)(a2 - 32) + 40LL);
    *(_QWORD *)(a1 + 48) = *(_QWORD *)(*(_QWORD *)(a2 - 32) + 24LL);
    v3 = *(_QWORD **)(a2 - 32);
  }
  else
  {
    v6 = (_QWORD *)(a2 - 8LL * ((v2 >> 2) & 0xF));
    v3 = v6 - 2;
    *(_QWORD *)(a1 + 8) = *v6;
    if ( *(_BYTE *)a2 == 16 )
      *(_QWORD *)(a1 + 16) = a2;
    else
      *(_QWORD *)(a1 + 16) = sub_209E6C0(a2);
    *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 16);
    *(_QWORD *)(a1 + 32) = v3[1];
    *(_QWORD *)(a1 + 40) = v3[5];
    *(_QWORD *)(a1 + 48) = v3[3];
  }
  *(_QWORD *)(a1 + 56) = v3[4];
  *(_DWORD *)(a1 + 64) = sub_206CE70(a2);
  *(_QWORD *)(a1 + 68) = *(_QWORD *)(a2 + 28);
  *(_QWORD *)(a1 + 76) = sub_206D500(a2);
  *(_DWORD *)(a1 + 84) = *(_DWORD *)(a2 + 20);
  v4 = *(_BYTE *)(a2 - 16);
  if ( (v4 & 2) != 0 )
  {
    *(_QWORD *)(a1 + 88) = *(_QWORD *)(*(_QWORD *)(a2 - 32) + 48LL);
    result = *(_QWORD *)(*(_QWORD *)(a2 - 32) + 56LL);
  }
  else
  {
    v7 = 8LL * ((v4 >> 2) & 0xF);
    *(_QWORD *)(a1 + 88) = *(_QWORD *)(a2 - v7 + 32);
    result = *(_QWORD *)(a2 - v7 - 16 + 56);
  }
  *(_QWORD *)(a1 + 96) = result;
  return result;
}
