__int64 __fastcall sub_FEAB20(__int64 a1, __int64 a2)
{
  const char *v3; // r13
  size_t v5; // rax
  __int64 (__fastcall **v6)(); // rcx
  __int64 (__fastcall ***v7)(); // r13
  __int64 (__fastcall **v8)(); // rax
  int v9; // esi
  int v10; // ecx
  int v11; // eax
  char v12; // si
  int v14; // esi
  unsigned __int64 v15; // rdi
  char *v16; // rcx
  const char *v17; // r13
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  unsigned int v20; // esi
  __int64 v21; // rdx
  int v22; // [rsp+0h] [rbp-98h] BYREF
  __int64 v23; // [rsp+4h] [rbp-94h]
  int v24; // [rsp+Ch] [rbp-8Ch]
  void *v25[2]; // [rsp+10h] [rbp-88h] BYREF
  __int64 v26; // [rsp+20h] [rbp-78h] BYREF
  __int64 (__fastcall **v27)(); // [rsp+30h] [rbp-68h] BYREF
  int v28; // [rsp+38h] [rbp-60h]
  __int128 v29; // [rsp+40h] [rbp-58h]
  __int64 (__fastcall **v30)(); // [rsp+50h] [rbp-48h]
  char v31; // [rsp+58h] [rbp-40h]
  int v32; // [rsp+5Ch] [rbp-3Ch]
  __int64 v33; // [rsp+60h] [rbp-38h]

  v3 = "C++ for OpenCL";
  *(_QWORD *)a1 = a1 + 16;
  *(_QWORD *)(a1 + 8) = 0;
  *(_BYTE *)(a1 + 16) = 0;
  v33 = a1;
  v29 = 0;
  v27 = &off_2BEBE68;
  v28 = 0;
  v31 = 0;
  v32 = 1;
  v30 = nullptr;
  sub_227B8B0(&v27, 0, 0, 0);
  if ( (*(_BYTE *)(a2 + 52) & 1) == 0 )
    v3 = "OpenCL C";
  v5 = strlen(v3);
  v6 = v30;
  if ( v5 <= *((_QWORD *)&v29 + 1) - (_QWORD)v30 )
  {
    v15 = (unsigned __int64)(v30 + 1) & 0xFFFFFFFFFFFFFFF8LL;
    *v30 = *(__int64 (__fastcall **)())v3;
    *(__int64 (__fastcall **)())((char *)v6 + (unsigned int)v5 - 8) = *(__int64 (__fastcall **)())&v3[(unsigned int)v5 - 8];
    v16 = (char *)v6 - v15;
    v17 = (const char *)(v3 - v16);
    v18 = (v5 + (_DWORD)v16) & 0xFFFFFFF8;
    if ( v18 >= 8 )
    {
      v19 = v18 & 0xFFFFFFF8;
      v20 = 0;
      do
      {
        v21 = v20;
        v20 += 8;
        *(_QWORD *)(v15 + v21) = *(_QWORD *)&v17[v21];
      }
      while ( v20 < v19 );
    }
    v8 = (__int64 (__fastcall **)())((char *)v30 + v5);
    v7 = &v27;
    v30 = v8;
  }
  else
  {
    v7 = (__int64 (__fastcall ***)())sub_227BF10(&v27, v3, v5);
    v8 = v7[4];
  }
  if ( (unsigned __int64)((char *)v7[3] - (char *)v8) > 8 )
  {
    *((_BYTE *)v8 + 8) = 32;
    *v8 = (__int64 (__fastcall *)())0x6E6F697372657620LL;
    v7[4] = (__int64 (__fastcall **)())((char *)v7[4] + 9);
    if ( (*(_BYTE *)(a2 + 52) & 1) == 0 )
      goto LABEL_7;
  }
  else
  {
    v7 = (__int64 (__fastcall ***)())sub_227BF10(v7, " version ", 9);
    if ( (*(_BYTE *)(a2 + 52) & 1) == 0 )
    {
LABEL_7:
      v9 = *(_DWORD *)(a2 + 48);
      v10 = v9 / 100;
      v11 = (v9 % 100 / 10) & 0x7FFFFFFF;
LABEL_8:
      v12 = 1;
      goto LABEL_9;
    }
  }
  v14 = *(_DWORD *)(a2 + 56);
  v11 = 0;
  v10 = 1;
  if ( v14 == 100 )
    goto LABEL_8;
  v11 = 0;
  v10 = v14 / 100;
  v12 = 0;
LABEL_9:
  v22 = v10;
  v24 = 0;
  v23 = v11 & 0x7FFFFFFF | (unsigned int)v23 & 0x80000000;
  *(_DWORD *)((char *)&v23 + 3) = (unsigned __int8)((v12 << 7) | BYTE3(v23) & 0x7F);
  sub_2257830(v25, &v22);
  sub_227BF10(v7, v25[0], v25[1]);
  if ( v25[0] != &v26 )
    operator delete(v25[0]);
  v27 = &off_2BEBE68;
  sub_227B7A0(&v27);
  return a1;
}
