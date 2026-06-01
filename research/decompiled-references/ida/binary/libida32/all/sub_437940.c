__int64 __fastcall sub_437940(__int64 a1, unsigned int *a2, unsigned int a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v7; // ebx
  _QWORD *v9; // rax
  _QWORD *v10; // rdx
  int v11; // ebx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rsi
  int i; // r14d
  int v16; // eax
  bool v17; // zf
  unsigned int v18; // edx
  __int64 v20; // [rsp+0h] [rbp-108h] BYREF
  __int64 v21; // [rsp+8h] [rbp-100h]
  __int64 v22; // [rsp+10h] [rbp-F8h]
  _BYTE v23[12]; // [rsp+18h] [rbp-F0h] BYREF
  int v24; // [rsp+24h] [rbp-E4h]
  _QWORD v25[6]; // [rsp+D8h] [rbp-30h] BYREF

  v7 = *a2;
  v25[0] = __readfsqword(0x28u);
  v21 = 0xFFFFFFFFLL;
  v9 = v23;
  v10 = v25;
  v20 = -1;
  v22 = 0;
  v11 = (v7 >> 7) & 3;
  do
  {
    v12 = 0;
    v13 = 0;
    *(_WORD *)v9 = 0;
    v9 += 3;
    *((_WORD *)v9 - 11) = 0;
    *((_WORD *)v9 - 10) = 0;
    *((_DWORD *)v9 - 1) = 0;
    *((_WORD *)v9 - 9) = 0;
    *(v9 - 2) = 0;
    *((_DWORD *)v9 - 2) = 0;
  }
  while ( v25 != v9 );
  v14 = a3;
  for ( i = 0; i <= v11; ++i )
  {
    if ( !(unsigned int)decode_insn(&v20, v14, v10, v12, v13, a6) )
      return (unsigned int)-1;
    v14 = (unsigned int)v21 + HIWORD(v21);
  }
  v16 = *a2 & 0x404;
  if ( v16 )
  {
    if ( v16 != 4 )
    {
      v17 = v16 == 1024;
      v16 = 1;
      if ( !v17 )
        v16 = 8;
    }
  }
  else
  {
    v16 = 2;
  }
  v18 = -1;
  if ( a3 + v16 >= (unsigned int)v14 )
  {
    v18 = a3;
    if ( !v11 && v23[1] == 7 )
      return (unsigned int)(v24 + 16 * v20);
  }
  return v18;
}

