__int64 __fastcall sub_781410(__int64 a1)
{
  char v1; // si
  _QWORD *v2; // rax
  __int64 result; // rax

  v1 = *(_BYTE *)(a1 + 85);
  if ( (v1 & 4) != 0 )
    return *(unsigned int *)(a1 + 136);
  v2 = (_QWORD *)sub_780C90(a1);
  if ( !v2 || (*v2 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
    return sub_7792D0(a1);
  *(_BYTE *)(a1 + 85) = v1 | 4;
  result = sub_781410();
  *(_DWORD *)(a1 + 136) = result;
  return result;
}

