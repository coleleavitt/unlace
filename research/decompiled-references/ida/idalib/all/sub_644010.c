__int64 __fastcall sub_644010(_BYTE *a1, unsigned __int8 *a2, unsigned __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r12
  unsigned __int8 *v7; // rbp
  int v8; // eax
  int v9; // edx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rdx
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  __int64 v17; // r12
  char v18; // r14

  v5 = a4 - a3;
  if ( *(_DWORD *)(*(_QWORD *)a1 + 932LL) == -1 )
    sub_378C70((__int64)"You forgot to call set_processor_type()");
  v7 = a2;
  if ( !a1[9] )
    sub_6406C0(a1, a3, a4, v5, a5);
  show_auto(a3, 0);
  v8 = nbits(a3);
  v9 = v8 + 14;
  v10 = v8 + 7;
  if ( v10 >= 0 )
    v9 = v10;
  v11 = v5 * (v9 >> 3);
  if ( a1[9] )
  {
    LODWORD(a2) = a3;
    v17 = *(_QWORD *)(*(_QWORD *)a1 + 1672LL);
    v18 = *(_BYTE *)(v17 + 104);
    *(_BYTE *)(v17 + 104) = 0;
    sub_3D41B0(*(_QWORD *)a1, a3, v7, v11);
    *(_BYTE *)(v17 + 104) = v18;
  }
  else
  {
    put_bytes(a3, a2, v11);
  }
  sub_6438D0(a1, (int)a2, v12, v13, v14, v15);
  return 1;
}
