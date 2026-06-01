__int64 __fastcall sub_15AD410(
        unsigned int *a1,
        int a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned int v8; // eax
  int v9; // r10d
  unsigned int v10; // r8d
  char *v12; // rax
  char **v13; // r8
  _DWORD *v14; // r9
  __int64 v15; // rax

  v8 = *a1;
  v9 = *a1 & 0x7F000;
  if ( v9 == 282624 )
    return 0;
  if ( v9 )
  {
    v12 = sub_15AC9B0((v8 >> 12) & 0x7F, a8);
    *v13 = v12;
    *v14 = 4033;
    return 1;
  }
  else
  {
    a1[48] = a3;
    a1[52] = a4;
    v10 = ((a2 & 0x7F) << 12) | v8 & 0xFFF80FFF;
    *a1 = v10;
    *((_QWORD *)a1 + 1) = a7;
    *((_BYTE *)a1 + 2) = BYTE2(v10) & 0xBF;
    if ( a2 == 55 )
    {
      v15 = *(_QWORD *)(a7 & 0xFFFFFFFFFFFFFFF0LL);
      *((_QWORD *)a1 + 1) = *(_QWORD *)(v15 + 32);
      *((_QWORD *)a1 + 2) = *(_QWORD *)(v15 + 40);
    }
    return 0;
  }
}
