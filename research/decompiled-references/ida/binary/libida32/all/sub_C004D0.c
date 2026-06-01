void __fastcall sub_C004D0(__int64 a1, __int64 a2, __int64 *a3, char a4)
{
  char v4; // al
  char v6; // cl
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 *v9; // rsi
  unsigned int v10; // ecx
  bool v11; // dl
  bool v12; // di
  bool v13; // r8
  char v14; // r9
  __int64 v15; // rax
  __int64 v16; // rbp
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // [rsp+0h] [rbp-88h] BYREF
  __int64 *v22; // [rsp+8h] [rbp-80h]
  __int64 v23; // [rsp+10h] [rbp-78h]
  void *ptr[2]; // [rsp+18h] [rbp-70h] BYREF
  _BYTE v25[96]; // [rsp+28h] [rbp-60h] BYREF

  v4 = 2 * (a4 & 1);
  v6 = *(_BYTE *)(a1 + 128);
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a3;
  *(_QWORD *)(a1 + 16) = 0;
  v21 = a2;
  *(_BYTE *)(a1 + 128) = v4 | v6 & 0xFD;
  v22 = a3;
  v7 = sub_A2B5D0(&v21);
  LODWORD(v21) = 0;
  v22 = nullptr;
  v9 = (__int64 *)(v7 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (v7 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
  {
    v23 = 0;
    v10 = 0;
    v11 = 0;
    v12 = 0;
    v13 = 0;
    v14 = 0;
    goto LABEL_3;
  }
  v16 = v7;
  v17 = *v9;
  if ( (unsigned int)*(unsigned __int8 *)(*v9 + 16) - 43 <= 1 )
    goto LABEL_18;
  v20 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v17 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43;
  if ( (unsigned int)v20 > 1 )
  {
    v9 = nullptr;
    v10 = 0;
    v11 = 0;
    v12 = 0;
    v13 = 0;
    v14 = 0;
    goto LABEL_11;
  }
  v17 = sub_F3F310(*v9, v9, v20, v8);
  if ( v17 )
  {
LABEL_18:
    while ( 1 )
    {
      v16 = *(_QWORD *)(v17 + 32);
      if ( (*(_BYTE *)(v17 + 18) & 0x10) == 0 )
        break;
      while ( 1 )
      {
        v17 = *(_QWORD *)(v16 & 0xFFFFFFFFFFFFFFF0LL);
        v18 = (unsigned int)*(unsigned __int8 *)(v17 + 16) - 43;
        if ( (unsigned int)v18 <= 1 )
          break;
        v19 = sub_F3F310(v17, v9, v18, v8);
        v16 = *(_QWORD *)(v19 + 32);
        if ( (*(_BYTE *)(v19 + 18) & 0x10) == 0 )
          goto LABEL_10;
      }
    }
  }
LABEL_10:
  v9 = v22;
  v14 = v21 & 1;
  v11 = (v21 & 8) != 0;
  v13 = (v21 & 2) != 0;
  v12 = (v21 & 4) != 0;
  v10 = (unsigned int)v21 >> 4;
LABEL_11:
  v23 = v16;
LABEL_3:
  *(_QWORD *)(a1 + 32) = v9;
  ptr[0] = v25;
  ptr[1] = (void *)0x800000000LL;
  *(_BYTE *)(a1 + 24) = (8 * v11) | (4 * v12) | (2 * v13) & 0xF3 | v14 & 0xF3 | *(_BYTE *)(a1 + 24) & 0xF0;
  v15 = v23;
  *(_DWORD *)(a1 + 24) = *(_DWORD *)(a1 + 24) & 0xF | (16 * v10);
  *(_QWORD *)(a1 + 40) = v15;
  sub_C00390((char ***)(a1 + 48), (char ***)ptr);
  if ( ptr[0] != v25 )
    free(ptr[0]);
  *(_WORD *)(a1 + 128) &= 0xFEu;
}

