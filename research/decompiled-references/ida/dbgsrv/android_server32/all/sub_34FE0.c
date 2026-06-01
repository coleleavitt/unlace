/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_34FE0
// Address: 0x00034FE0

//----- (00034FE0) --------------------------------------------------------
char *__fastcall sub_34FE0(void **a1, int a2, int a3)
{
  void *v5; // r6
  void *v6; // r1
  char *v7; // r0
  char *v8; // r4
  void *v10[3]; // [sp+8h] [bp-48h] BYREF
  void *v11; // [sp+14h] [bp-3Ch]
  int v12; // [sp+18h] [bp-38h]
  int v13; // [sp+1Ch] [bp-34h]

  sub_366DA(v10, a3);
  v5 = *a1;
  v6 = a1[1];
  v7 = (char *)*a1;
  if ( a1[2] < (char *)v6 + 1 )
  {
    v7 = (char *)qvector_reserve((int)a1, v5, (unsigned int)v6 + 1, 0x44u);
    *a1 = v7;
    v6 = a1[1];
  }
  v8 = &v7[a2 - (_DWORD)v5];
  memmove(v8 + 68, v8, &v7[68 * (_DWORD)v6] - v8);
  sub_366DA((void **)v8, (int)v10);
  a1[1] = (char *)a1[1] + 1;
  if ( v11 )
  {
    v12 = 0;
    qfree(v11);
    v13 = 0;
    v11 = nullptr;
  }
  if ( v10[0] )
  {
    v10[1] = nullptr;
    qfree(v10[0]);
    v10[2] = nullptr;
    v10[0] = nullptr;
  }
  return v8;
}
