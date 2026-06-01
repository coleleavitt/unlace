__int64 __fastcall sub_626D40(
        _BYTE *a1,
        unsigned __int8 *a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        double a6,
        double a7)
{
  unsigned int v7; // r13d
  unsigned __int8 *v9; // r12
  int v10; // eax
  int v11; // edx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rdx
  int v15; // ecx
  int v16; // r8d
  int v17; // r9d
  __int64 v19; // r13
  char v20; // r14

  v7 = a4 - a3;
  if ( *(_DWORD *)(*(_QWORD *)a1 + 764LL) == -1 )
    sub_375320((__int64)"You forgot to call set_processor_type()");
  v9 = a2;
  if ( !a1[9] )
    sub_623450((__int64)a1, a3, a4, v7, a5, a6, a7);
  show_auto(a3, 0);
  v10 = nbits(a3);
  v11 = v10 + 14;
  v12 = v10 + 7;
  if ( v12 >= 0 )
    v11 = v12;
  v13 = v7 * (v11 >> 3);
  if ( a1[9] )
  {
    LODWORD(a2) = a3;
    v19 = *(_QWORD *)(*(_QWORD *)a1 + 1480LL);
    v20 = *(_BYTE *)(v19 + 96);
    *(_BYTE *)(v19 + 96) = 0;
    sub_3CE730(*(_QWORD *)a1, a3, v9, v13);
    *(_BYTE *)(v19 + 96) = v20;
  }
  else
  {
    put_bytes(a3, a2, v13);
  }
  sub_626610(a1, (int)a2, v14, v15, v16, v17);
  return 1;
}

