__int64 __fastcall sub_517CB0(__int64 a1, unsigned int a2)
{
  _DWORD **v2; // rax
  __int64 v3; // r9
  _DWORD *v4; // rax

  v2 = sub_516630(*(_QWORD *)(*(_QWORD *)a1 + 1616LL), a2);
  if ( v2 != (_DWORD **)(*(_QWORD *)(v3 + 8) + 8LL * *(_QWORD *)(v3 + 16)) && (v4 = *v2, *v4 == a2) && v4 )
    return (unsigned int)v4[7];
  else
    return sub_517B20(v3 + 32, a2);
}

