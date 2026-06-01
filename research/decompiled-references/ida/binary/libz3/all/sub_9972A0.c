__int64 __fastcall sub_9972A0(__int64 a1, __int64 a2, int *a3, bool *a4)
{
  unsigned int v6; // eax
  unsigned int v7; // edx
  __int64 v8; // r14
  void *v9; // rdi
  int v10; // edi
  char v11; // al
  char v12; // si
  int v13; // ecx
  __int64 v14; // rdx
  __int64 v15; // rcx
  char v16; // r9
  char v17; // r8
  __int64 v18; // rcx
  __int64 v19; // rdx
  char v20; // al
  void *v21; // rbx
  void *v23; // [rsp+8h] [rbp-60h]
  int v24; // [rsp+10h] [rbp-58h] BYREF
  char v25; // [rsp+14h] [rbp-54h]
  __int64 v26; // [rsp+18h] [rbp-50h]
  int v27; // [rsp+20h] [rbp-48h] BYREF
  char v28; // [rsp+24h] [rbp-44h]
  __int64 v29; // [rsp+28h] [rbp-40h]

  v6 = sub_B39350(a2, *(unsigned int *)(a1 + 8));
  v7 = 0;
  if ( v6 != -1 )
  {
    v8 = *(_QWORD *)(*(_QWORD *)(a1 + 680) + 8LL * v6);
    if ( v8 )
    {
      v25 &= 0xFCu;
      v28 &= 0xFCu;
      v24 = 0;
      v9 = qword_1C7F2C0;
      v26 = 0;
      v27 = 1;
      v29 = 0;
      if ( (*(_BYTE *)(v8 + 20) & 1) != 0 )
      {
        v23 = qword_1C7F2C0;
        sub_182C690(qword_1C7F2C0, &v24, v8 + 16);
        v9 = v23;
        if ( (*(_BYTE *)(v8 + 36) & 1) == 0 )
          goto LABEL_5;
      }
      else
      {
        v24 = *(_DWORD *)(v8 + 16);
        if ( (*(_BYTE *)(v8 + 36) & 1) == 0 )
        {
LABEL_5:
          v10 = *(_DWORD *)(v8 + 32);
          v11 = v28;
          v12 = 0;
LABEL_6:
          v13 = v24;
          v24 = *a3;
          v14 = *((_QWORD *)a3 + 1);
          *a3 = v13;
          v15 = v26;
          v26 = v14;
          LOBYTE(v14) = v25;
          *((_QWORD *)a3 + 1) = v15;
          v16 = v14;
          LOBYTE(v14) = v14 & 0xFD;
          v17 = *((_BYTE *)a3 + 4);
          LOBYTE(v15) = v17 & 2;
          v17 &= ~2u;
          *((_BYTE *)a3 + 4) = v17 & 0xFE | v16 & 2 | v14 & 1;
          LOBYTE(v14) = (v14 | v15) & 0xFE;
          v18 = v29;
          v25 = v17 & 1 | v14;
          LODWORD(v14) = a3[4];
          a3[4] = v10;
          v27 = v14;
          v19 = *((_QWORD *)a3 + 3);
          *((_QWORD *)a3 + 3) = v18;
          v29 = v19;
          LOBYTE(v18) = v11 & 0xFC;
          v20 = a3[5] & 0xFC | v12 | v11 & 2;
          v28 = v18 | a3[5] & 3;
          *((_BYTE *)a3 + 20) = v20;
          v21 = qword_1C7F2C0;
          *a4 = *(_DWORD *)(v8 + 48) > 0;
          sub_182CBA0(v21, &v24);
          sub_182CBA0(v21, &v27);
          return 1;
        }
      }
      sub_182C690(v9, &v27, v8 + 32);
      v11 = v28;
      v10 = v27;
      v12 = v28 & 1;
      goto LABEL_6;
    }
  }
  return v7;
}

