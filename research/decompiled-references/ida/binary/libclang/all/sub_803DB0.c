void __fastcall sub_803DB0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r12
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rax
  __int64 v7; // rbp
  __int64 v8; // r9
  _QWORD *v9; // rax
  __int64 v10; // r13
  __int64 v11; // rdx
  unsigned __int64 v12; // rax
  char v13; // dl
  __int64 v14; // rdi
  int v15; // eax
  __int64 v16; // [rsp+8h] [rbp-2D0h] BYREF
  __int64 v17; // [rsp+10h] [rbp-2C8h] BYREF
  void *ptr; // [rsp+18h] [rbp-2C0h]
  __int64 v19; // [rsp+20h] [rbp-2B8h]
  _BYTE v20[688]; // [rsp+28h] [rbp-2B0h] BYREF

  *(_DWORD *)(a1 + 16) = 0;
  *(_QWORD *)a1 = 0;
  v19 = 0x1000000000LL;
  v2 = *(_QWORD *)(a2 + 2112);
  *(_QWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  v3 = *(_QWORD *)(v2 + 80);
  v17 = a1;
  v4 = *(_QWORD *)(v3 + 72);
  ptr = v20;
  v5 = v4 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v4 & 1) == 0 )
  {
    if ( v5 <= 3 )
    {
      v7 = 0;
      goto LABEL_5;
    }
    v9 = (_QWORD *)(v4 & 0xFFFFFFFFFFFFFFFCLL);
    v8 = a1;
    v7 = (__int64)v9;
    if ( (v5 & 2) == 0 )
      goto LABEL_6;
    v10 = v9[2275];
    if ( v10 )
    {
      v11 = v9[274];
      v9[284] += 24LL;
      v12 = (v11 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( *(_QWORD *)(v7 + 2200) >= v12 + 24 && v11 )
        *(_QWORD *)(v7 + 2192) = v12 + 24;
      else
        v12 = sub_7DAE50(v7 + 2192, 24, 3);
      *(_QWORD *)v12 = v10;
      *(_DWORD *)(v12 + 8) = 0;
      *(_QWORD *)(v12 + 16) = v3;
      *(_QWORD *)(v3 + 72) = v12 | 5;
      v13 = v12;
      v6 = v12 & 0xFFFFFFFFFFFFFFF8LL;
      v7 = v6;
      LOBYTE(v5) = v13 & 0xFA | 4;
      goto LABEL_3;
    }
    v5 = v3 & 0xFFFFFFFFFFFFFFFALL;
    v4 = v3 & 0xFFFFFFFFFFFFFFFALL | 1;
    *(_QWORD *)(v3 + 72) = v4;
  }
  v6 = v4 & 0xFFFFFFFFFFFFFFF8LL;
  v7 = v6;
  if ( !v5 )
  {
LABEL_5:
    v8 = v17;
    goto LABEL_6;
  }
LABEL_3:
  if ( (v5 & 4) == 0 || !v6 )
    goto LABEL_5;
  v14 = *(_QWORD *)v7;
  v15 = *(_DWORD *)(*(_QWORD *)v7 + 12LL);
  if ( *(_DWORD *)(v7 + 8) != v15 )
  {
    *(_DWORD *)(v7 + 8) = v15;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 144LL))(v14, v3);
  }
  v7 = *(_QWORD *)(v7 + 16);
  v8 = v17;
LABEL_6:
  v16 = v7;
  sub_7E09C0((__int64)&v17, v7, v7, &v16, &v17, v8);
  if ( ptr != v20 )
    free(ptr);
}

