__int64 __fastcall sub_35C3D0(__int64 a1, char *a2, unsigned __int64 a3)
{
  char *v3; // r12
  int v5; // eax
  int v6; // ebx
  int v7; // eax
  int v8; // ebx
  unsigned __int64 v9; // r13
  __int64 v10; // r14
  char *v11; // rbp
  void *v12; // rdi
  _BYTE v14[24]; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v15; // [rsp+18h] [rbp-40h]

  v3 = a2;
  v15 = __readfsqword(0x28u);
  v5 = nbits(a1);
  v6 = v5 + 14;
  v7 = v5 + 7;
  if ( v7 >= 0 )
    v6 = v7;
  v8 = v6 >> 3;
  if ( v8 == 1 )
    return memrev(a2, a3);
  v9 = a3 >> 1;
  if ( a3 >> 1 )
  {
    v10 = 0;
    v11 = &a2[v8 * (a3 - 1)];
    do
    {
      __memcpy_chk(v14, v3, v8, 16);
      memcpy(v3, v11, v8);
      ++v10;
      v12 = v11;
      v3 += v8;
      v11 -= v8;
      memcpy(v12, v14, v8);
    }
    while ( v9 != v10 );
  }
  return v15 - __readfsqword(0x28u);
}
