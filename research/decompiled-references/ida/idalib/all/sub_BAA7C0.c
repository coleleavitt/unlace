unsigned __int64 __fastcall sub_BAA7C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdx
  unsigned int v7; // ecx
  _QWORD *v8; // rdx

  v6 = *(_QWORD *)(a1 + 104);
  if ( !v6 )
  {
    sub_A79820((__int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96), 0, a4, a5, a6);
    v6 = *(_QWORD *)(a1 + 104);
  }
  v7 = *(_DWORD *)(a1 + 60);
  v8 = (_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF8LL);
  if ( v8 && a1 == *v8 )
    return v7 | ((unsigned __int64)*(unsigned int *)(a1 + 84) << 32);
  else
    return v7 | ((unsigned __int64)*(unsigned int *)(a1 + 24) << 32);
}
