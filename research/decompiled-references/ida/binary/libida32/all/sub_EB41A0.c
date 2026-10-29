__int64 __fastcall sub_EB41A0(int a1, __int64 a2, char *a3)
{
  __int64 (__fastcall *v3)(__int64); // rax
  __int64 v4; // rbx
  _QWORD *v5; // rsi
  __int64 v6; // r12
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rcx

  v3 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 32LL);
  if ( v3 == sub_9B91D0 )
  {
    v4 = (__int64)a3;
    if ( a3[29] < 0 )
      v4 = sub_B4E9E0((__int64)a3);
  }
  else
  {
    v4 = v3((__int64)a3);
  }
  v5 = sub_B84E90(v4);
  v6 = sub_A3F380(a1);
  v11 = sub_B889F0((__int64)v5, (__int64)v5, v7, v8, v9, v10);
  if ( v11 == v4 || !v11 )
    return **(_QWORD **)(v6 + 48);
  LODWORD(v12) = 0;
  do
  {
    v11 = *(_QWORD *)(v11 + 80);
    v12 = (unsigned int)(v12 + 1);
  }
  while ( v11 != v4 && v11 != 0 );
  return *(_QWORD *)(*(_QWORD *)(v6 + 48) + 8 * v12);
}

