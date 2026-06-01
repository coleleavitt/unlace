__int64 __fastcall sub_B28930(__int64 a1, __int64 a2, _DWORD *a3, char a4, __int64 a5, int *a6, void *a7, __int64 a8)
{
  _DWORD *v8; // rax
  __int64 v11; // rcx
  int v14; // edx
  void *v15; // rdi
  int v16; // eax
  int v17; // eax
  void *v18; // r13
  int v19; // eax
  void *v21; // [rsp+10h] [rbp-48h]
  _DWORD *v22; // [rsp+18h] [rbp-40h]

  v8 = a3;
  v11 = a1 + 16;
  v14 = *a3;
  *(_QWORD *)a1 = a2;
  *(_DWORD *)(a1 + 8) = v14;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 1;
  *(_QWORD *)(a1 + 40) = 0;
  v15 = qword_1C7F2C0;
  if ( (v8[3] & 1) != 0 )
  {
    v22 = v8;
    v21 = qword_1C7F2C0;
    sub_182C690(qword_1C7F2C0, v11, v8 + 2);
    v8 = v22;
    v15 = v21;
    if ( (v22[7] & 1) == 0 )
      goto LABEL_3;
  }
  else
  {
    *(_DWORD *)(a1 + 16) = v8[2];
    if ( (v8[7] & 1) == 0 )
    {
LABEL_3:
      v16 = v8[6];
      *(_BYTE *)(a1 + 36) &= ~1u;
      *(_DWORD *)(a1 + 32) = v16;
      goto LABEL_4;
    }
  }
  sub_182C690(v15, a1 + 32, v8 + 6);
LABEL_4:
  v17 = *a6;
  v18 = qword_1C7F2C0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 48) = v17;
  *(_QWORD *)(a1 + 72) = 1;
  *(_QWORD *)(a1 + 80) = 0;
  if ( (a6[3] & 1) != 0 )
    sub_182C690(v18, a1 + 56, a6 + 2);
  else
    *(_DWORD *)(a1 + 56) = a6[2];
  if ( (a6[7] & 1) != 0 )
  {
    sub_182C690(v18, a1 + 72, a6 + 6);
  }
  else
  {
    v19 = a6[6];
    *(_BYTE *)(a1 + 76) &= ~1u;
    *(_DWORD *)(a1 + 72) = v19;
  }
  *(_BYTE *)(a1 + 88) = a4;
  *(_BYTE *)(a1 + 89) = (_BYTE)a7;
  *(_QWORD *)(a1 + 96) = a5;
  *(_QWORD *)(a1 + 104) = a8;
  return a8;
}

