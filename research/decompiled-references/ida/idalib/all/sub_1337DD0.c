__int64 __fastcall sub_1337DD0(__int64 *a1, __int64 a2, __int64 *a3)
{
  int v3; // ebp
  int v4; // r14d
  int v5; // ebp
  __int64 v6; // rcx
  int v9; // r9d
  __int64 v10; // r8
  unsigned int v11; // r15d
  const void **v12; // r10
  __int64 v13; // rbx
  int v14; // r11d
  const void *v15; // rdi
  char *v16; // rsi
  size_t v17; // rdx
  int v18; // eax
  bool v19; // al
  char v21; // al
  unsigned int v22; // r15d
  __int64 v23; // [rsp+8h] [rbp-70h]
  const void **v24; // [rsp+8h] [rbp-70h]
  int v25; // [rsp+10h] [rbp-68h]
  __int64 v26; // [rsp+10h] [rbp-68h]
  int v27; // [rsp+1Ch] [rbp-5Ch]
  int v28; // [rsp+1Ch] [rbp-5Ch]
  __int64 v29; // [rsp+20h] [rbp-58h]
  __int64 v30; // [rsp+20h] [rbp-58h]
  const void **v31; // [rsp+28h] [rbp-50h]
  _QWORD v32[9]; // [rsp+30h] [rbp-48h] BYREF

  v3 = *((_DWORD *)a1 + 4);
  if ( !v3 )
  {
    *a3 = 0;
    return 0;
  }
  v4 = *(_DWORD *)(a2 + 12);
  v5 = v3 - 1;
  v6 = *a1;
  v9 = 1;
  v10 = 0;
  v32[0] = -8192;
  v11 = v4 & v5;
  v12 = (const void **)v32;
  v32[1] = 0;
  while ( 1 )
  {
    v13 = v6 + 16LL * v11;
    v14 = *(_DWORD *)(v13 + 12);
    if ( v14 != v4 )
      goto LABEL_12;
    v15 = *(const void **)a2;
    v16 = *(char **)v13;
    if ( *(_QWORD *)a2 == -4096 )
    {
      v19 = v16 + 4096 == nullptr;
    }
    else if ( v15 == (const void *)-8192LL )
    {
      v19 = v16 + 0x2000 == nullptr;
    }
    else
    {
      v17 = *(unsigned int *)(a2 + 8);
      if ( *(_DWORD *)(v13 + 8) != (_DWORD)v17 )
        goto LABEL_12;
      v31 = v12;
      v29 = v6;
      v27 = *(_DWORD *)(v13 + 12);
      v25 = v9;
      v23 = v10;
      if ( !*(_DWORD *)(a2 + 8) )
        goto LABEL_10;
      v18 = memcmp(v15, v16, v17);
      v12 = v31;
      v6 = v29;
      v14 = v27;
      v9 = v25;
      v10 = v23;
      v19 = v18 == 0;
    }
    if ( v19 )
    {
LABEL_10:
      *a3 = v13;
      return 1;
    }
LABEL_12:
    if ( v14 )
      goto LABEL_19;
    if ( *(_QWORD *)v13 == -4096 || *(_QWORD *)v13 != -8192 && !*(_DWORD *)(v13 + 8) )
      break;
    v30 = v6;
    v28 = v9;
    v26 = v10;
    v24 = v12;
    v21 = sub_12F9FC0(v13, v12);
    v10 = v26;
    v12 = v24;
    v9 = v28;
    v6 = v30;
    if ( !v26 )
    {
      if ( v21 )
        v10 = v13;
    }
LABEL_19:
    v22 = v9 + v11;
    ++v9;
    v11 = v5 & v22;
  }
  if ( !v10 )
    v10 = v13;
  *a3 = v10;
  return 0;
}
