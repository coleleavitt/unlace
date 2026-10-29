unsigned __int64 __fastcall sub_BC5440(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // r9
  __int64 v5; // rax
  __int64 *v6; // rcx
  __int64 v7; // r8
  unsigned __int64 v8; // rsi
  __int64 v9; // rdx
  char v10; // al
  unsigned __int64 v11; // rdx

  v3 = *(_QWORD *)(sub_B8C330((__int64)a1) + 18360);
  if ( v3 )
    (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v3 + 80LL))(v3, a1[9], 1);
  v5 = a1[10];
  if ( !v5 )
    v5 = sub_BC3500(a1);
  v6 = *(__int64 **)(v5 + 120);
  v7 = (__int64)&v6[*(unsigned int *)(v5 + 128)];
  if ( (__int64 *)v7 == v6 )
    return 0;
  v8 = *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
     | ((unsigned __int8)*(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)a2) & 7;
  while ( 1 )
  {
    v9 = *(_QWORD *)&byte_8[*(_QWORD *)(*(_QWORD *)(*v6 + 48) + 32LL) & 0xFFFFFFFFFFFFFFF0LL];
    v10 = v9 | *(_QWORD *)(*(_QWORD *)(*v6 + 48) + 32LL);
    v11 = v9 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v8 == (v11 | v10 & 7) )
      break;
    if ( (__int64 *)v7 == ++v6 )
      return 0;
  }
  return sub_BC4F90(*v6, v8, v11, (__int64)v6, v7, v4);
}
