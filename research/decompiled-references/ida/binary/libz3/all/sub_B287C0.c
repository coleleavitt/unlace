__int64 __fastcall sub_B287C0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        __int64 a5,
        __int64 a6,
        void *a7,
        __int64 a8)
{
  __int64 v8; // rax
  void *v13; // rdi
  int v14; // eax
  void *v15; // r13
  int v16; // eax
  void *v18; // [rsp+10h] [rbp-48h]
  __int64 v19; // [rsp+18h] [rbp-40h]

  v8 = a1 + 16;
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = 1;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 1;
  *(_QWORD *)(a1 + 40) = 0;
  v13 = qword_1C7F2C0;
  if ( (*(_BYTE *)(a3 + 4) & 1) != 0 )
  {
    v19 = a3;
    v18 = qword_1C7F2C0;
    sub_182C690(qword_1C7F2C0, v8, a3);
    a3 = v19;
    v13 = v18;
    if ( (*(_BYTE *)(v19 + 20) & 1) == 0 )
      goto LABEL_3;
  }
  else
  {
    *(_DWORD *)(a1 + 16) = *(_DWORD *)a3;
    if ( (*(_BYTE *)(a3 + 20) & 1) == 0 )
    {
LABEL_3:
      v14 = *(_DWORD *)(a3 + 16);
      *(_BYTE *)(a1 + 36) &= ~1u;
      *(_DWORD *)(a1 + 32) = v14;
      goto LABEL_4;
    }
  }
  sub_182C690(v13, a1 + 32, a3 + 16);
LABEL_4:
  *(_QWORD *)(a1 + 48) = 1;
  v15 = qword_1C7F2C0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 72) = 1;
  *(_QWORD *)(a1 + 80) = 0;
  if ( (*(_BYTE *)(a6 + 4) & 1) != 0 )
    sub_182C690(v15, a1 + 56, a6);
  else
    *(_DWORD *)(a1 + 56) = *(_DWORD *)a6;
  if ( (*(_BYTE *)(a6 + 20) & 1) != 0 )
  {
    sub_182C690(v15, a1 + 72, a6 + 16);
  }
  else
  {
    v16 = *(_DWORD *)(a6 + 16);
    *(_BYTE *)(a1 + 76) &= ~1u;
    *(_DWORD *)(a1 + 72) = v16;
  }
  *(_BYTE *)(a1 + 88) = a4;
  *(_BYTE *)(a1 + 89) = (_BYTE)a7;
  *(_QWORD *)(a1 + 96) = a5;
  *(_QWORD *)(a1 + 104) = a8;
  return a8;
}

