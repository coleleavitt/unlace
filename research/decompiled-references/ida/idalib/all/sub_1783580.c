__int64 __fastcall sub_1783580(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rbx
  __int16 v7; // ax
  bool v8; // zf
  const void *v9; // rax
  signed __int64 v10; // rbx
  __int64 v11; // r12
  __int64 v12; // rbx
  char *v14; // rdi
  const void *v15; // [rsp+8h] [rbp-D0h]
  void *ptr; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v17; // [rsp+18h] [rbp-C0h]
  _BYTE v18[184]; // [rsp+20h] [rbp-B8h] BYREF

  v6 = *(unsigned int *)(a4 + 4);
  v17 = 0x1000000000LL;
  v7 = *(_WORD *)a4 & 0x1FF;
  ptr = v18;
  v8 = v7 == 24;
  v9 = (const void *)(a4 + 64);
  if ( !v8 )
    v9 = (const void *)(a4 + 80);
  v10 = 8 * v6;
  v11 = v10 >> 3;
  if ( (unsigned __int64)v10 > 0x80 )
  {
    v15 = v9;
    sub_2237220(&ptr, v18, v10 >> 3, 8);
    v9 = v15;
    v14 = (char *)ptr + 8 * (unsigned int)v17;
  }
  else
  {
    if ( !v10 )
      goto LABEL_5;
    v14 = v18;
  }
  memcpy(v14, v9, v10);
  LODWORD(v10) = v17;
LABEL_5:
  LODWORD(v17) = v11 + v10;
  v12 = sub_1C09DA0(a1, a2, 13, &ptr, a3, 1);
  if ( ptr != v18 )
    free(ptr);
  return v12;
}
