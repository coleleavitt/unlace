/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4D384
// Address: 0x0004D384

//----- (0004D384) --------------------------------------------------------
char *__fastcall sub_4D384(void **a1, int a2, unsigned __int8 *a3)
{
  void *v5; // r6
  void *v6; // r0
  _BYTE *v7; // r7
  int v8; // r6
  unsigned __int8 v10[8]; // [sp+10h] [bp-1Ch] BYREF
  void *v11; // [sp+18h] [bp-14h]
  int v12; // [sp+1Ch] [bp-10h]
  int v13; // [sp+20h] [bp-Ch]
  int v14; // [sp+24h] [bp-8h]

  v10[0] = 2;
  v14 = 0;
  v13 = 0;
  v12 = 0;
  v11 = nullptr;
  copy_idcv(v10, a3);
  v5 = *a1;
  v6 = a1[1];
  v7 = *a1;
  if ( a1[2] < (char *)v6 + 1 )
  {
    v7 = qvector_reserve((int)a1, v5, (unsigned int)v6 + 1, 0x18u);
    *a1 = v7;
    v6 = a1[1];
  }
  v8 = a2 - (_DWORD)v5;
  memmove(&v7[v8 + 24], &v7[v8], 24 * (_DWORD)v6 - v8);
  v7[v8] = 2;
  memset(&v7[v8 + 8], 0, 0x10u);
  copy_idcv(&v7[v8], v10);
  a1[1] = (char *)a1[1] + 1;
  if ( v10[0] == 5 )
  {
    sub_448A0((int)v11, v10);
  }
  else if ( v10[0] == 7 && v11 )
  {
    v12 = 0;
    qfree(v11);
    v13 = 0;
    v11 = nullptr;
  }
  return &v7[v8];
}
