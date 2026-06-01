__int64 __fastcall sub_720F10(__int64 a1)
{
  bool v2; // zf
  __int64 v3; // rdx
  unsigned int **v4; // rax
  unsigned int *v5; // rcx
  __int64 v6; // rdi
  int v7; // eax
  unsigned int v8; // ecx
  unsigned __int64 v9; // rax
  __int64 v10; // rsi
  __int64 result; // rax
  char v12; // al
  unsigned int *v13; // r12
  int v14; // r13d
  __int64 v15; // rsi

  v15 = 0xFFFFFFFFLL;
  if ( *(_BYTE *)(a1 + 5804) )
  {
    v2 = *(_QWORD *)(a1 + 8) == 0;
    *(_BYTE *)(a1 + 5804) = 0;
    if ( !v2 && *(_DWORD *)(a1 + 24) && *(__int16 *)(a1 + 1634) > 0 )
    {
      v3 = *(_QWORD *)(a1 + 2664);
      v4 = *(unsigned int ***)(v3 + 8);
      if ( !v4 )
      {
        v13 = (unsigned int *)(a1 + 1640);
        v14 = 0;
        do
        {
          v15 = (__int64)v13;
          sub_724B00(a1, v13, *v13);
          ++v14;
          v13 += 8;
        }
        while ( v14 < *(__int16 *)(a1 + 1634) );
        v3 = *(_QWORD *)(a1 + 2664);
        v4 = *(unsigned int ***)(v3 + 8);
      }
      v5 = *v4;
      v6 = **v4;
      if ( (_DWORD)v6 )
      {
        v7 = *(_DWORD *)(v3 + 24);
        if ( v7 )
          v8 = *(unsigned int *)((char *)v5 + 6 * v7);
        else
          v8 = *v5;
        if ( !v8 )
          sub_722BF0(v6, v15, v3);
        v9 = *(__int16 *)(a1 + 1634);
        if ( v9 > 0x1E )
          sub_722BC0(24, 0, v9);
        v10 = a1 + 32 * v9 + 1640;
        *(_WORD *)(a1 + 1634) = v9 + 1;
        *(_QWORD *)(a1 + 2664) = v10;
        sub_724B00(a1, v10, v8);
        sub_720660(a1, 1);
        *(_BYTE *)(a1 + 4220) = 1;
        goto LABEL_12;
      }
      v12 = sub_720900((int **)a1, -1);
      *(_BYTE *)(a1 + 4220) = 1;
      if ( v12 )
      {
LABEL_12:
        result = a1 + 2672;
LABEL_15:
        *(_BYTE *)(a1 + 5804) = 1;
        return result;
      }
    }
    result = 0;
    goto LABEL_15;
  }
  return 0;
}

