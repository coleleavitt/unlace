__int64 __fastcall sub_C78820(__int64 a1, __int64 a2, __int64 a3, char **a4, char *a5)
{
  char *v7; // rsi
  int v8; // eax
  int v10; // r14d
  int v11; // r15d
  void (*v12)(); // rax
  unsigned int v13; // r8d
  void (*v14)(); // rax
  void (*v15)(); // rax
  unsigned int v16; // [rsp+0h] [rbp-48h]
  char **v17; // [rsp+8h] [rbp-40h]

  v7 = *a4;
  if ( *a4 != a5 )
  {
    v8 = *v7;
    if ( (unsigned __int8)(*v7 - 48) > 9u )
      return 0;
    v10 = 0;
    while ( 1 )
    {
      v11 = v8 + 10 * v10;
      v10 = v11 - 48;
      if ( a5 == v7 + 1 )
        break;
      v8 = v7[1];
      if ( (unsigned __int8)(v7[1] - 48) > 9u )
      {
        if ( (_BYTE)v8 != 36 )
          return 0;
        v12 = *(void (**)())(*(_QWORD *)a1 + 24LL);
        v13 = (_DWORD)v7 + 2 - a3;
        if ( v12 != nullsub_370 )
        {
          v17 = a4;
          v16 = (_DWORD)v7 + 2 - a3;
          ((void (__fastcall *)(__int64, __int64, _QWORD))v12)(a1, a3, v13);
          a4 = v17;
          v13 = v16;
        }
        if ( v11 != 48 )
        {
          *(_BYTE *)(a2 + 96) = 1;
          *(_DWORD *)(a2 + 100) = v11 - 49;
          *a4 = v7 + 2;
          return 0;
        }
        v14 = *(void (**)())(*(_QWORD *)a1 + 40LL);
        if ( v14 != nullsub_372 )
          ((void (__fastcall *)(__int64, __int64, _QWORD))v14)(a1, a3, v13);
        return 1;
      }
      ++v7;
    }
  }
  v15 = *(void (**)())(*(_QWORD *)a1 + 48LL);
  if ( v15 == nullsub_373 )
    return 1;
  ((void (__fastcall *)(__int64, __int64, char *))v15)(a1, a3, &a5[-a3]);
  return 1;
}

