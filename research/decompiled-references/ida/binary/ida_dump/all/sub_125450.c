_BYTE *__fastcall sub_125450(char *a1, int a2, _BYTE *a3)
{
  _BYTE *v3; // rbx
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rbp
  __int64 v9; // r14
  __int64 v10; // r15
  char v11; // al
  char v12; // dl
  char v13; // al
  __int16 v14; // dx
  __int16 v15; // ax
  int v16; // edx
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // [rsp+8h] [rbp-40h]

  v3 = a3;
  if ( *a3 == 4 )
  {
    v6 = j__qalloc_or_throw();
    v7 = *((_QWORD *)v3 + 1);
    v8 = v6;
    v20 = v6 + 32;
    v9 = v6 + 48;
    v10 = v6 + 64;
    *(_QWORD *)(v6 + 40) = 0;
    *(_QWORD *)(v6 + 32) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v6 + 48) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v6 + 56) = 0;
    *(_QWORD *)(v6 + 64) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v6 + 72) = 0;
    *(_OWORD *)(v6 + 8) = 0;
    sub_1253A0(v6, v7);
    if ( (int)sub_15BC70(v8, a2, 0, 0, 0, 0, 1) <= 0 )
    {
      v3 = nullptr;
    }
    else
    {
      if ( *(_DWORD *)v8 != 4 )
      {
        *a1 = 4;
        v3 = a1;
        *((_QWORD *)a1 + 1) = v8;
        *((_DWORD *)a1 + 1) = *(_DWORD *)(v8 + 68);
        return v3;
      }
      v11 = *a1;
      v3 = a1;
      *a1 = *(_BYTE *)(v8 + 32);
      v12 = *(_BYTE *)(v8 + 33);
      *(_BYTE *)(v8 + 32) = v11;
      v13 = a1[1];
      a1[1] = v12;
      v14 = *(_WORD *)(v8 + 34);
      *(_BYTE *)(v8 + 33) = v13;
      v15 = *((_WORD *)a1 + 1);
      *((_WORD *)a1 + 1) = v14;
      v16 = *(_DWORD *)(v8 + 36);
      *(_WORD *)(v8 + 34) = v15;
      v17 = *((_DWORD *)a1 + 1);
      *((_DWORD *)a1 + 1) = v16;
      v18 = *(_QWORD *)(v8 + 40);
      *(_DWORD *)(v8 + 36) = v17;
      v19 = *((_QWORD *)a1 + 1);
      *((_QWORD *)a1 + 1) = v18;
      *(_QWORD *)(v8 + 40) = v19;
    }
    if ( v8 )
    {
      sub_11CDA0(v10);
      sub_11CDA0(v9);
      sub_11CDA0(v20);
      j__qfree();
    }
  }
  return v3;
}
