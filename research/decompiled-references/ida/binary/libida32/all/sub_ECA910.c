__int64 __fastcall sub_ECA910(unsigned __int16 *a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  unsigned int v6; // r12d
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // r14
  __int64 v10; // rdx
  char v11; // r15
  __int64 v13; // rax
  _BYTE *v14; // rsi
  void *v15[2]; // [rsp+0h] [rbp-58h] BYREF
  _BYTE v16[72]; // [rsp+10h] [rbp-48h] BYREF

  v6 = *((_DWORD *)a1 + 4);
  if ( v6 )
  {
    v7 = v6 - 1;
    v8 = 0;
    v6 = 0;
    v9 = 8 * v7 + 8;
    while ( 1 )
    {
      v10 = *a1;
      LOWORD(v10) = v10 & 0x1FF;
      if ( (_WORD)v10 == 256 )
        break;
      v13 = *((_QWORD *)a1 + 10) + 2 * v8;
      v14 = *(_BYTE **)v13;
      if ( *(_QWORD *)v13 )
      {
        v15[0] = v16;
        sub_EC5850(v15, v14, (__int64)&v14[*(_QWORD *)(v13 + 8)]);
        goto LABEL_5;
      }
LABEL_8:
      v8 += 8;
      if ( v9 == v8 )
        return v6;
    }
    sub_ECA600((__int64)v15, *(_QWORD *)(*((_QWORD *)a1 + 7) + v8), v10, a4, a5, a6);
LABEL_5:
    v11 = *(_BYTE *)v15[0];
    if ( v15[0] != v16 )
      operator delete(v15[0]);
    v6 += v11 == 43;
    goto LABEL_8;
  }
  return v6;
}

