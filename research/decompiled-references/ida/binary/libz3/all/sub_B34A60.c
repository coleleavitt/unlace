__int64 __fastcall sub_B34A60(__int64 a1, _DWORD *a2, char *a3)
{
  unsigned int *v4; // rsi
  __int64 v7; // rax
  unsigned int **v8; // r13
  __int64 v9; // rsi
  __int64 v10; // rdi
  unsigned int v12; // r14d
  __int64 v13; // rdi
  _DWORD v14[18]; // [rsp+0h] [rbp-48h] BYREF

  v4 = *(unsigned int **)(a1 + 504);
  if ( !v4 )
    return 0;
  sub_966570(a1, v4);
  v7 = *(_QWORD *)(a1 + 16);
  v8 = *(unsigned int ***)(*(_QWORD *)(v7 + 8656) + 8LL * **(unsigned int **)(a1 + 504));
  if ( (*((_BYTE *)v8 + 44) & 0x40) == 0 )
  {
    v12 = *(_DWORD *)(a1 + 512);
    sub_16744A0(v14, *(_QWORD *)(a1 + 24));
    if ( v14[0] != -1 )
    {
      v13 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8672LL);
      if ( !v13 )
      {
LABEL_12:
        v9 = (unsigned int)sub_AB5A20(v13, v12, (__int64)v8);
        goto LABEL_4;
      }
      if ( v14[0] < *(_DWORD *)(v13 - 4) )
      {
        v13 = *(_QWORD *)(v13 + 8LL * v14[0]);
        goto LABEL_12;
      }
    }
    v13 = 0;
    goto LABEL_12;
  }
  v9 = *(unsigned int *)(*(_QWORD *)(v7 + 8832) + 4LL * **v8);
LABEL_4:
  if ( (_DWORD)v9 != 0x7FFFFFFF )
  {
    v10 = *(_QWORD *)(a1 + 16);
    if ( !*(_BYTE *)(*(_QWORD *)(v10 + 8848) + (unsigned int)(2 * v9)) )
    {
      *a2 = v9;
      *a3 = sub_8E87A0(v10, v9, *(_DWORD *)(a1 + 516));
      *(_QWORD *)(a1 + 504) = 0;
      *(_QWORD *)(a1 + 512) = 0;
      return 1;
    }
  }
  return 0;
}

