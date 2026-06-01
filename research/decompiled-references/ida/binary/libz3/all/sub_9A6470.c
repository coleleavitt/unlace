__int64 __fastcall sub_9A6470(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned int v5; // eax
  __int64 v6; // rbx
  unsigned int v7; // ebp
  void *v8; // rbx
  __int64 v10; // rax
  __int64 v11; // r12
  void *v12; // rdi
  int v13; // eax
  int v14; // eax
  void *v15; // [rsp+8h] [rbp-60h]
  _QWORD v16[2]; // [rsp+10h] [rbp-58h] BYREF
  _QWORD v17[9]; // [rsp+20h] [rbp-48h] BYREF

  v5 = sub_B39350(a2, *(unsigned int *)(a1 + 8));
  v16[0] = 0;
  v16[1] = 0;
  v6 = v5;
  v17[0] = 1;
  v17[1] = 0;
  if ( v5 == -1 )
    goto LABEL_2;
  v10 = sub_999800(a1, v5);
  v11 = v10;
  v12 = qword_1C7F2C0;
  if ( (*(_BYTE *)(v10 + 4) & 1) != 0 )
  {
    v15 = qword_1C7F2C0;
    sub_182C690(qword_1C7F2C0, v16, v10);
    v12 = v15;
  }
  else
  {
    v13 = *(_DWORD *)v10;
    BYTE4(v16[0]) &= ~1u;
    LODWORD(v16[0]) = v13;
  }
  if ( (*(_BYTE *)(v11 + 20) & 1) != 0 )
  {
    sub_182C690(v12, v17, v11 + 16);
  }
  else
  {
    v14 = *(_DWORD *)(v11 + 16);
    BYTE4(v17[0]) &= ~1u;
    LODWORD(v17[0]) = v14;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 592) + 4 * v6 + 3) & 0x40) != 0
    && ((v17[0] & 0x100000000LL) != 0 || LODWORD(v17[0]) != 1) )
  {
LABEL_2:
    v7 = 0;
  }
  else
  {
    v7 = sub_9A6280(a1, (int *)v16, (*(_BYTE *)(*(_QWORD *)(a1 + 592) + 4 * v6 + 3) & 0x40) != 0, a3);
  }
  v8 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v16);
  sub_182CBA0(v8, v17);
  return v7;
}

