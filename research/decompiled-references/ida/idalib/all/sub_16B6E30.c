bool __fastcall sub_16B6E30(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  _QWORD *v3; // rdx

  v2 = sub_A72040(a2, a1);
  if ( !v2 || (unsigned int)*(unsigned __int8 *)(v2 + 16) - 2 > 1 )
    return *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                    + 16LL) == 6;
  v3 = *(_QWORD **)(v2 + 40);
  if ( (*(_BYTE *)(v2 + 19) & 2) != 0 )
  {
    if ( *((_DWORD *)v3 + 2) <= 0x40u )
      v3 = (_QWORD *)*v3;
    else
      v3 = *(_QWORD **)*v3;
  }
  return (unsigned __int64)v3 > 1;
}
