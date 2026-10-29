__int64 __fastcall sub_99E8B0(__int64 a1, __int64 a2, int *a3, bool *a4)
{
  unsigned int v6; // eax
  unsigned int v7; // edx
  __int64 v8; // r13
  void *v9; // r15
  char v10; // al
  int v11; // edi
  char v12; // si
  int v13; // ecx
  char v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rdx
  char v19; // al
  void *v20; // rbx
  void *v21; // rdi
  int v23; // [rsp+0h] [rbp-58h] BYREF
  char v24; // [rsp+4h] [rbp-54h]
  __int64 v25; // [rsp+8h] [rbp-50h]
  int v26; // [rsp+10h] [rbp-48h] BYREF
  char v27; // [rsp+14h] [rbp-44h]
  __int64 v28; // [rsp+18h] [rbp-40h]

  v6 = sub_B39350(a2, *(unsigned int *)(a1 + 8));
  v7 = 0;
  if ( v6 != -1 )
  {
    v8 = *(_QWORD *)(*(_QWORD *)(a1 + 624) + 8LL * v6);
    if ( v8 )
    {
      v24 &= 0xFCu;
      v27 &= 0xFCu;
      v23 = 0;
      v9 = qword_1C7F2C0;
      v25 = 0;
      v26 = 1;
      v28 = 0;
      if ( (*(_BYTE *)(v8 + 20) & 1) != 0 )
      {
        sub_182C690(qword_1C7F2C0, &v23, v8 + 16);
        if ( (*(_BYTE *)(v8 + 36) & 1) == 0 )
          goto LABEL_5;
      }
      else
      {
        v23 = *(_DWORD *)(v8 + 16);
        if ( (*(_BYTE *)(v8 + 36) & 1) == 0 )
        {
LABEL_5:
          v10 = v27;
          v11 = *(_DWORD *)(v8 + 32);
          v12 = 0;
LABEL_6:
          v13 = v23;
          v14 = *((_BYTE *)a3 + 4);
          v23 = *a3;
          v15 = *((_QWORD *)a3 + 1);
          *a3 = v13;
          v16 = v25;
          v25 = v15;
          LOBYTE(v15) = v24;
          *((_QWORD *)a3 + 1) = v16;
          LOBYTE(v16) = v15;
          LOBYTE(v15) = v15 & 0xFD;
          *((_BYTE *)a3 + 4) = v15 & 1 | v14 & 0xFC | v16 & 2;
          v17 = v28;
          v24 = v14 & 1 | v15 & 0xFE | v14 & 2;
          LODWORD(v15) = a3[4];
          a3[4] = v11;
          v26 = v15;
          v18 = *((_QWORD *)a3 + 3);
          *((_QWORD *)a3 + 3) = v17;
          v28 = v18;
          LOBYTE(v17) = v10 & 0xFC;
          v19 = a3[5] & 0xFC | v12 | v10 & 2;
          v27 = v17 | a3[5] & 3;
          *((_BYTE *)a3 + 20) = v19;
          v20 = qword_1C7F2C0;
          v21 = qword_1C7F2C0;
          *a4 = qword_1C7F2A0 < 0;
          sub_182CBA0(v21, &v23);
          sub_182CBA0(v20, &v26);
          return 1;
        }
      }
      sub_182C690(v9, &v26, v8 + 32);
      v10 = v27;
      v11 = v26;
      v12 = v27 & 1;
      goto LABEL_6;
    }
  }
  return v7;
}

