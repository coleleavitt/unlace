void __fastcall sub_16B8DF0(__int64 a1, __int64 a2, unsigned int a3, unsigned __int8 a4)
{
  unsigned int v5; // r13d
  unsigned int v6; // r15d
  bool v7; // cf
  unsigned int v8; // edx
  void *v9; // rdx
  void *v10; // rdx
  unsigned int v11; // edx
  char v12; // al
  char v14; // [rsp+1Fh] [rbp-59h] BYREF
  void *v15; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v16; // [rsp+28h] [rbp-50h]
  char v17; // [rsp+2Ch] [rbp-4Ch]
  void *v18; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v19; // [rsp+38h] [rbp-40h]
  char v20; // [rsp+3Ch] [rbp-3Ch]

  v5 = *(_DWORD *)(a1 + 8);
  v6 = *(_DWORD *)(a2 + 8);
  if ( !*(_BYTE *)(a2 + 12) )
  {
    v7 = v6 < v5;
    if ( v6 <= v5 )
      goto LABEL_3;
LABEL_34:
    sub_2206B70(&v18, a1, v6);
    if ( *(_DWORD *)(a1 + 8) > 0x40u && *(_QWORD *)a1 )
      operator delete[](*(void **)a1);
    v5 = v6;
    v14 = 0;
    *(_QWORD *)a1 = v18;
    v11 = v19;
    *(_DWORD *)(a1 + 8) = v19;
    v16 = v11;
    if ( v11 <= 0x40 )
      goto LABEL_5;
    goto LABEL_38;
  }
  sub_2206CD0(&v18, a2, ++v6);
  if ( *(_DWORD *)(a2 + 8) > 0x40u && *(_QWORD *)a2 )
    operator delete[](*(void **)a2);
  v10 = v18;
  *(_BYTE *)(a2 + 12) = 0;
  *(_QWORD *)a2 = v10;
  *(_DWORD *)(a2 + 8) = v19;
  v7 = v6 < v5;
  if ( v6 > v5 )
    goto LABEL_34;
LABEL_3:
  if ( v7 )
  {
    sub_2206B70(&v18, a2, v5);
    if ( *(_DWORD *)(a2 + 8) > 0x40u && *(_QWORD *)a2 )
      operator delete[](*(void **)a2);
    *(_QWORD *)a2 = v18;
    *(_DWORD *)(a2 + 8) = v19;
  }
  v8 = *(_DWORD *)(a1 + 8);
  v14 = 0;
  v16 = v8;
  if ( v8 <= 0x40 )
  {
LABEL_5:
    v15 = *(void **)a1;
    goto LABEL_6;
  }
LABEL_38:
  sub_2205510(&v15);
LABEL_6:
  v17 = *(_BYTE *)(a1 + 12);
  if ( a3 == 5 )
  {
    sub_2208E80(&v18, a1, a2, &v14);
    if ( v16 <= 0x40 )
      goto LABEL_10;
  }
  else
  {
    sub_2209010(&v18, a1, a2, &v14);
    if ( v16 <= 0x40 )
      goto LABEL_10;
  }
  if ( v15 )
    operator delete[](v15);
LABEL_10:
  v9 = v18;
  v15 = v18;
  v16 = v19;
  if ( v14 )
  {
    sub_2206B70(&v18, a1, 2 * v5);
    if ( *(_DWORD *)(a1 + 8) > 0x40u && *(_QWORD *)a1 )
      operator delete[](*(void **)a1);
    *(_QWORD *)a1 = v18;
    *(_DWORD *)(a1 + 8) = v19;
    v19 = *(_DWORD *)(a2 + 8);
    if ( v19 > 0x40 )
      sub_2205510(&v18);
    else
      v18 = *(void **)a2;
    v20 = *(_BYTE *)(a2 + 12);
    sub_16B8DF0(a1, &v18, a3, a4);
    if ( v19 > 0x40 && v18 )
      operator delete[](v18);
  }
  else
  {
    if ( *(_DWORD *)(a1 + 8) <= 0x40u && v19 <= 0x40 )
    {
      *(_DWORD *)(a1 + 8) = v19;
      v12 = v17;
      *(_QWORD *)a1 = v9;
      *(_BYTE *)(a1 + 12) = v12;
      return;
    }
    sub_22056A0(a1, &v15);
    *(_BYTE *)(a1 + 12) = v17;
  }
  if ( v16 > 0x40 )
  {
    if ( v15 )
      operator delete[](v15);
  }
}
