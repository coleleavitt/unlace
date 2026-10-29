__int64 __fastcall sub_149FA40(__int64 a1)
{
  __int64 v1; // rax
  __int16 v2; // dx
  unsigned int v3; // edx
  __int64 (__fastcall *v4)(_QWORD); // rdx
  _QWORD *v5; // rax

  v1 = *(_QWORD *)(a1 + 16);
  v2 = *(_WORD *)(a1 + 24);
  if ( v2 != *(_WORD *)(v1 + 32) )
    return 1;
  if ( v2 == 22 )
  {
    v3 = *(unsigned __int16 *)(v1 + 88);
  }
  else
  {
    if ( v2 != 24 )
    {
      if ( (unsigned int)*(unsigned __int16 *)(v1 + 90) < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 8) + 56LL) + 144LL) )
        goto LABEL_6;
      return sub_1568800(a1);
    }
    v3 = *(unsigned __int16 *)(v1 + 92);
  }
  if ( v3 >= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 8) + 56LL) + 144LL) )
    return sub_1568800(a1);
LABEL_6:
  v4 = *(__int64 (__fastcall **)(_QWORD))(a1 + 32);
  v5 = (_QWORD *)(*(_QWORD *)(a1 + 40) + v1);
  if ( ((unsigned __int8)v4 & 1) != 0 )
    v4 = *(__int64 (__fastcall **)(_QWORD))((char *)v4 + *v5 - 1);
  *(_DWORD *)(a1 + 48) = v4(v5);
  return 0;
}
