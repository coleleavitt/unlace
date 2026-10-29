__int64 __fastcall sub_15AD370(
        unsigned int *a1,
        int a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  unsigned int v7; // eax
  int v8; // r10d
  unsigned int v9; // eax
  char *v11; // rax
  char **v12; // rcx
  _DWORD *v13; // r8
  unsigned __int64 v14; // r9
  __int64 v15; // rax

  v7 = *a1;
  v8 = *a1 & 0x7F000;
  if ( v8 == 282624 )
    return 0;
  if ( v8 )
  {
    v11 = sub_15AC9B0((v7 >> 12) & 0x7F, a7);
    *v12 = v11;
    *v13 = 4033;
    return 1;
  }
  else
  {
    *((_QWORD *)a1 + 1) = a6;
    a1[48] = a3;
    a1[52] = a3;
    v9 = ((a2 & 0x7F) << 12) | v7 & 0xFFF80FFF;
    *a1 = v9;
    *((_BYTE *)a1 + 2) = BYTE2(v9) & 0xBF;
    if ( a2 != 55 )
      return 0;
    v14 = a6 & 0xFFFFFFFFFFFFFFF0LL;
    v15 = *(_QWORD *)v14;
    *((_QWORD *)a1 + 1) = *(_QWORD *)(*(_QWORD *)v14 + 32LL);
    *((_QWORD *)a1 + 2) = *(_QWORD *)(v15 + 40);
    return 0;
  }
}
