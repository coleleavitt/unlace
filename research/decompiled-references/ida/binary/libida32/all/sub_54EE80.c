__int64 __fastcall sub_54EE80(__int64 *a1, int a2, unsigned int a3)
{
  __int64 *v3; // rax
  unsigned int v4; // ecx
  unsigned int v5; // eax
  int v6; // esi
  char *v7; // rax
  unsigned int v8; // edx
  __int64 v9; // rbp
  __int64 v10; // r12
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rbp
  __int64 v15; // rax
  __int64 v16; // [rsp+0h] [rbp-48h] BYREF
  char v17; // [rsp+8h] [rbp-40h]
  char v18; // [rsp+9h] [rbp-3Fh] BYREF
  unsigned __int64 v19; // [rsp+18h] [rbp-30h]

  v19 = __readfsqword(0x28u);
  if ( !a1 || a2 < 0 )
    return 0;
  v3 = &v16;
  do
  {
    v4 = a3;
    v3 = (__int64 *)((char *)v3 + 1);
    a3 <<= 7;
    *((_BYTE *)v3 - 1) = (v4 >> 25) | 0x80;
  }
  while ( v3 != (__int64 *)((char *)&v16 + 4) );
  v5 = HIBYTE(a2);
  v6 = 16 * a2;
  BYTE4(v16) = (a3 >> 28) | v5 & 0x70 | 0x80;
  v7 = (char *)&v16 + 5;
  do
  {
    v8 = v6;
    ++v7;
    v6 <<= 7;
    *(v7 - 1) = (v8 >> 25) | 0x80;
  }
  while ( v7 != &v18 );
  v9 = a1[1];
  v10 = 9;
  if ( v9 )
  {
    v10 = v9 + 8;
    --v9;
  }
  v11 = *a1;
  if ( a1[2] < (unsigned __int64)(v10 + 1) )
  {
    v15 = qvector_reserve(a1, v11, v10 + 1, 1);
    *a1 = v15;
    v11 = v15;
  }
  v12 = v16;
  a1[1] = v10 + 1;
  *(_BYTE *)(v11 + v10) = 0;
  v13 = *a1 + v9;
  *(_QWORD *)v13 = v12;
  *(_BYTE *)(v13 + 8) = v17;
  return 1;
}

