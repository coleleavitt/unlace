_QWORD *__fastcall sub_F2C680(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  _BYTE *v4; // rdx
  _QWORD *result; // rax
  _QWORD *v6; // r12
  _QWORD *i; // rbx

  sub_995540(*(_QWORD *)(a1 + 1096), " (");
  if ( (*(_DWORD *)a2 & 0x100000) == 0 )
    sub_995540(*(_QWORD *)(a1 + 1096), "no ");
  v2 = sub_995540(*(_QWORD *)(a1 + 1096), "ADL) = '");
  v3 = sub_B86360(v2, *(_QWORD *)(a2 + 16));
  v4 = *(_BYTE **)(v3 + 32);
  if ( (unsigned __int64)v4 >= *(_QWORD *)(v3 + 24) )
  {
    sub_227BA10(v3, 39);
  }
  else
  {
    *(_QWORD *)(v3 + 32) = v4 + 1;
    *v4 = 39;
  }
  result = (_QWORD *)(a2 + 80);
  if ( (*(_WORD *)a2 & 0x1FF) == 0x18 )
    result = (_QWORD *)(a2 + 64);
  v6 = &result[*(unsigned int *)(a2 + 4)];
  if ( v6 == result )
    return (_QWORD *)sub_995540(*(_QWORD *)(a1 + 1096), " empty");
  for ( i = result + 1; ; ++i )
  {
    sub_F29AE0(a1, *result & 0xFFFFFFFFFFFFFFF8LL);
    result = i;
    if ( v6 == i )
      break;
  }
  return result;
}
