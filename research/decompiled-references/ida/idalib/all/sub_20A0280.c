__int64 __fastcall sub_20A0280(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // al
  __int64 result; // rax
  _QWORD *v4; // rcx
  __int64 v5; // rax

  v2 = *(_BYTE *)(a2 - 16);
  if ( (v2 & 2) != 0 )
  {
    *(_QWORD *)a1 = **(_QWORD **)(a2 - 32);
    *(_QWORD *)(a1 + 8) = *(_QWORD *)(*(_QWORD *)(a2 - 32) + 8LL);
    *(_QWORD *)(a1 + 16) = *(_QWORD *)(*(_QWORD *)(a2 - 32) + 16LL);
    *(_QWORD *)(a1 + 24) = *(_QWORD *)(*(_QWORD *)(a2 - 32) + 24LL);
  }
  else
  {
    v4 = (_QWORD *)(a2 - 8LL * ((v2 >> 2) & 0xF));
    *(_QWORD *)a1 = *(v4 - 2);
    *(_QWORD *)(a1 + 8) = *(v4 - 1);
    v5 = v4[1];
    *(_QWORD *)(a1 + 16) = *v4;
    *(_QWORD *)(a1 + 24) = v5;
  }
  result = *(unsigned int *)(a2 + 4);
  *(_DWORD *)(a1 + 32) = result;
  return result;
}
