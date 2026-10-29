/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4FE08
// Address: 0x0004FE08

//----- (0004FE08) --------------------------------------------------------
int __fastcall sub_4FE08(int a1, char *s)
{
  size_t v2; // r5
  char *v3; // r7
  char *v4; // r6
  int *v5; // r7
  int v6; // r1
  int v7; // r2
  int v8; // r0
  unsigned int v9; // r5
  char *v10; // r2
  int v11; // r3
  int v12; // r6
  int v13; // r0
  int v14; // r2
  int v15; // r5
  int v16; // r6
  void *v17; // r0
  unsigned __int8 *v18; // r5
  int v20; // [sp+0h] [bp-2Ch]
  int v21; // [sp+4h] [bp-28h]
  int v22; // [sp+8h] [bp-24h]
  int *v23; // [sp+Ch] [bp-20h]
  int v26; // [sp+18h] [bp-14h]
  void *v27; // [sp+1Ch] [bp-10h] BYREF
  size_t v28; // [sp+20h] [bp-Ch]
  void *ptr; // [sp+24h] [bp-8h]

  ptr = nullptr;
  v28 = 0;
  v27 = nullptr;
  v2 = strlen(s);
  if ( v2 >= 0xFFFFFFF0 )
    sub_55F54();
  if ( v2 >= 0xB )
  {
    v3 = (char *)operator new((v2 + 16) & 0xFFFFFFF0);
    ptr = v3;
    v27 = (void *)(((v2 + 16) & 0xFFFFFFF0) + 1);
    v28 = v2;
    v4 = s;
  }
  else
  {
    LOBYTE(v27) = 2 * v2;
    v3 = (char *)&v27 + 1;
    v4 = s;
    if ( !v2 )
      goto LABEL_8;
  }
  qmemcpy(v3, v4, v2);
LABEL_8:
  v3[v2] = 0;
  v5 = sub_56A48((_DWORD *)(a1 + 468), (unsigned __int8 *)&v27);
  if ( (unsigned __int8)v27 << 31 )
    operator delete(ptr);
  if ( !v5 )
    return set_qerrno(1509);
  v23 = (int *)(a1 + 468);
  v6 = v5[5];
  v7 = v5[6] - 1;
  v8 = v6 + 16 * v7;
  v9 = *(_DWORD *)(v8 + 4);
  if ( v9 > 1 )
    goto LABEL_15;
  if ( !*(_BYTE *)(v8 + 12) )
  {
    v4 = s;
    if ( !*(_BYTE *)(v8 + 13) )
    {
      sub_4FF90(a1, s);
      v12 = 0;
      goto LABEL_17;
    }
  }
  if ( v9 )
LABEL_15:
    v10 = *(char **)(v6 + 16 * v7);
  else
    v10 = &byte_B3CBE;
  v12 = sub_4F21C(a1, v4, v10, *(unsigned __int8 *)(v8 + 12), *(_BYTE *)(v8 + 13), nullptr);
LABEL_17:
  v13 = v5[6];
  if ( !v13 )
    goto LABEL_21;
  v26 = v12;
  v14 = v13 - 1;
  v5[6] = v13 - 1;
  v15 = v5[5];
  v16 = 16 * (v13 - 1);
  v17 = *(void **)(v15 + v16);
  if ( v17 )
  {
    *(_DWORD *)(v15 + v16 + 4) = 0;
    qfree(v17);
    *(_DWORD *)(v15 + v16) = 0;
    *(_DWORD *)(v15 + v16 + 8) = 0;
    v14 = v5[6];
  }
  v12 = v26;
  if ( !v14 )
  {
LABEL_21:
    sub_56BCC((int)&v27, v23, v5, v11, v20, v21, v22, (int)v23, (int)&_stack_chk_guard);
    v18 = (unsigned __int8 *)v27;
    v27 = nullptr;
    if ( v18 )
    {
      if ( (_BYTE)ptr )
      {
        sub_55EE0((char **)v18 + 5);
        if ( v18[8] << 31 )
          operator delete(*((void **)v18 + 4));
      }
      operator delete(v18);
    }
  }
  return v12;
}
// 4FF02: variable 'v11' is possibly undefined
// 4FF02: variable 'v20' is possibly undefined
// 4FF02: variable 'v21' is possibly undefined
// 4FF02: variable 'v22' is possibly undefined
// B3CBE: using guessed type char byte_B3CBE;
