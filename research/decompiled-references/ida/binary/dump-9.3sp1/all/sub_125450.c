_BYTE *__fastcall sub_125450(char *a1, __int64 a2, _BYTE *a3, __int64 a4)
{
  _BYTE *v4; // rbx
  int v6; // r13d
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rbp
  __int64 v10; // r14
  __int64 v11; // r15
  char v12; // al
  char v13; // dl
  char v14; // al
  __int16 v15; // dx
  __int16 v16; // ax
  int v17; // edx
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // [rsp+8h] [rbp-40h]

  v4 = a3;
  if ( *a3 == 4 )
  {
    v6 = a2;
    v7 = j__qalloc_or_throw(80, a2, (__int64)a3, a4);
    v8 = *((_QWORD *)v4 + 1);
    v9 = v7;
    v21 = v7 + 32;
    v10 = v7 + 48;
    v11 = v7 + 64;
    *(_QWORD *)(v7 + 40) = 0;
    *(_QWORD *)(v7 + 32) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v7 + 48) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v7 + 56) = 0;
    *(_QWORD *)(v7 + 64) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v7 + 72) = 0;
    *(_OWORD *)(v7 + 8) = 0;
    sub_1253A0(v7, v8);
    if ( (int)sub_15BC70(v9, v6, 0, 0, 0, 0, 1) <= 0 )
    {
      v4 = nullptr;
    }
    else
    {
      if ( *(_DWORD *)v9 != 4 )
      {
        *a1 = 4;
        v4 = a1;
        *((_QWORD *)a1 + 1) = v9;
        *((_DWORD *)a1 + 1) = *(_DWORD *)(v9 + 68);
        return v4;
      }
      v12 = *a1;
      v4 = a1;
      *a1 = *(_BYTE *)(v9 + 32);
      v13 = *(_BYTE *)(v9 + 33);
      *(_BYTE *)(v9 + 32) = v12;
      v14 = a1[1];
      a1[1] = v13;
      v15 = *(_WORD *)(v9 + 34);
      *(_BYTE *)(v9 + 33) = v14;
      v16 = *((_WORD *)a1 + 1);
      *((_WORD *)a1 + 1) = v15;
      v17 = *(_DWORD *)(v9 + 36);
      *(_WORD *)(v9 + 34) = v16;
      v18 = *((_DWORD *)a1 + 1);
      *((_DWORD *)a1 + 1) = v17;
      v19 = *(_QWORD *)(v9 + 40);
      *(_DWORD *)(v9 + 36) = v18;
      v20 = *((_QWORD *)a1 + 1);
      *((_QWORD *)a1 + 1) = v19;
      *(_QWORD *)(v9 + 40) = v20;
    }
    if ( v9 )
    {
      sub_11CDA0(v11);
      sub_11CDA0(v10);
      sub_11CDA0(v21);
      j__qfree(v9);
    }
  }
  return v4;
}
