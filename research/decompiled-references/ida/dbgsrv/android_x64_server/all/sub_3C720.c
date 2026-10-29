/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3C720
// Address: 0x000000000003C720

//----- (000000000003C720) ----------------------------------------------------
char *__fastcall sub_3C720(__int64 a1, int a2)
{
  __int64 v3; // rbp
  void **v4; // rbx
  bool v5; // cc
  _DWORD *v6; // rax
  char *v7; // r12
  __int64 v8; // rax
  __int64 *v9; // rsi
  unsigned __int16 v11; // [rsp+6h] [rbp-52h]
  __int16 v12; // [rsp+15h] [rbp-43h]
  char v13; // [rsp+17h] [rbp-41h]
  _BYTE v14[9]; // [rsp+1Ch] [rbp-3Ch] BYREF

  memset(v14, 0, sizeof(v14));
  v3 = *(_QWORD *)(a1 + 1040);
  if ( v3 )
  {
    v4 = (void **)(a1 + 1040);
    v5 = *(_DWORD *)(v3 + 32) < a2;
    if ( *(_DWORD *)(v3 + 32) <= a2 )
      goto LABEL_7;
    while ( 1 )
    {
      v6 = *(_DWORD **)v3;
      v4 = (void **)v3;
      if ( !*(_QWORD *)v3 )
        break;
      while ( 1 )
      {
        v3 = (__int64)v6;
        v5 = v6[8] < a2;
        if ( v6[8] > a2 )
          break;
LABEL_7:
        if ( v5 )
        {
          v4 = (void **)(v3 + 8);
          v6 = *(_DWORD **)(v3 + 8);
          if ( v6 )
            continue;
        }
        goto LABEL_12;
      }
    }
  }
  else
  {
    v3 = a1 + 1040;
  }
  v4 = (void **)v3;
LABEL_12:
  v7 = (char *)*v4;
  if ( !*v4 )
  {
    v7 = (char *)operator new(0x60u);
    *((_DWORD *)v7 + 8) = a2;
    *((_DWORD *)v7 + 10) = a2;
    *(_QWORD *)(v7 + 49) = *(_QWORD *)&v14[1];
    *(_QWORD *)(v7 + 44) = 0;
    v7[59] = v13;
    *(_WORD *)(v7 + 57) = v12;
    *((_DWORD *)v7 + 15) = 1;
    *((_WORD *)v7 + 32) = 0;
    *(_DWORD *)(v7 + 66) = v11;
    *((_WORD *)v7 + 35) = 0;
    *(_OWORD *)v7 = 0;
    *(_OWORD *)(v7 + 72) = 0;
    *((_QWORD *)v7 + 11) = 0;
    *((_QWORD *)v7 + 2) = v3;
    *v4 = v7;
    v8 = **(_QWORD **)(a1 + 1032);
    if ( v8 )
    {
      *(_QWORD *)(a1 + 1032) = v8;
      v9 = (__int64 *)*v4;
    }
    else
    {
      v9 = (__int64 *)v7;
    }
    sub_4A450(*(__int64 **)(a1 + 1040), v9);
    ++*(_QWORD *)(a1 + 1048);
  }
  sub_3C9C0(a1, (_QWORD *)v7 + 9, a2);
  return v7 + 40;
}
// 3C804: variable 'v13' is possibly undefined
// 3C80E: variable 'v12' is possibly undefined
// 3C768: variable 'v11' is possibly undefined
