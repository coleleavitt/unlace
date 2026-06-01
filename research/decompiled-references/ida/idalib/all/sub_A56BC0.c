__int64 __fastcall sub_A56BC0(__int64 a1)
{
  __int64 v1; // rax
  _QWORD *v2; // rdx

  v1 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
  v2 = (_QWORD *)(*(_QWORD *)(v1 + 56) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(v1 + 56) & 4) != 0 )
    v2 = (_QWORD *)v2[4];
  if ( v2 )
    return *v2;
  else
    return *(_QWORD *)(v1 + 48);
}
