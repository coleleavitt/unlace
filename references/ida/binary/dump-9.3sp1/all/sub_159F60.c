__int64 __fastcall sub_159F60(__int64 a1, __int64 a2)
{
  __int64 (*v2)(); // rax
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx

  v2 = *(__int64 (**)())(*(_QWORD *)a2 + 328LL);
  if ( v2 == sub_14DA60 )
    return 0;
  v4 = ((__int64 (__fastcall *)(__int64, _QWORD))v2)(a2, *(unsigned int *)(a1 + 36));
  if ( !v4 )
    return 0;
  if ( *(_BYTE *)(a1 + 48) != 2 )
    return 0;
  v5 = *(_QWORD *)(a1 + 56);
  v6 = *(_QWORD *)(v5 + 16);
  if ( (unsigned __int8)v6 <= v4 )
    return 0;
  *(_QWORD *)(v5 + 16) = v6 & v4;
  return 1;
}
