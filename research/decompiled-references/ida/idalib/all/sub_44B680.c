__int64 __fastcall sub_44B680(__int64 a1, unsigned int *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v7; // ebx
  _QWORD *v9; // rax
  _QWORD *v10; // rdx
  int v11; // ebx
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned __int64 v14; // rsi
  int i; // r15d
  __int64 v16; // rax
  int v17; // edx
  __int64 v18; // rdx
  __int64 v20; // rax
  __int128 v21; // [rsp+0h] [rbp-1A8h] BYREF
  __int64 v22; // [rsp+10h] [rbp-198h]
  __int64 v23; // [rsp+18h] [rbp-190h]
  __int64 v24; // [rsp+20h] [rbp-188h]
  _BYTE v25[16]; // [rsp+28h] [rbp-180h] BYREF
  __int64 v26; // [rsp+38h] [rbp-170h]
  _QWORD v27[8]; // [rsp+168h] [rbp-40h] BYREF

  v7 = *a2;
  v27[0] = __readfsqword(0x28u);
  v9 = v25;
  v21 = -1;
  v10 = v27;
  v22 = -1;
  v23 = 0;
  v11 = (v7 >> 7) & 3;
  v24 = 0;
  do
  {
    v12 = 0;
    v13 = 0;
    *(_WORD *)v9 = 0;
    v9 += 5;
    *((_WORD *)v9 - 19) = 0;
    *((_WORD *)v9 - 18) = 0;
    *((_DWORD *)v9 - 2) = 0;
    *((_WORD *)v9 - 17) = 0;
    *((_OWORD *)v9 - 2) = 0;
    *(v9 - 2) = 0;
  }
  while ( v27 != v9 );
  v14 = a3;
  for ( i = 0; i <= v11; ++i )
  {
    if ( !(unsigned int)decode_insn(&v21, v14, v10, v12, v13, a6, 0.0) )
      return -1;
    v14 = v22 + WORD1(v23);
  }
  v16 = 2;
  v17 = *a2 & 0x404;
  if ( v17 )
  {
    if ( v17 == 4 )
    {
      v16 = 4;
    }
    else
    {
      v16 = 1;
      if ( v17 != 1024 )
        v16 = 8;
    }
  }
  v18 = -1;
  if ( a3 + v16 >= v14 )
  {
    v18 = a3;
    if ( !v11 && v25[1] == 7 )
    {
      v18 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL);
      v20 = v26 + 16 * v21;
      if ( v20 != v18 )
      {
        v18 &= v20;
        if ( v20 == -1 )
          return -1;
      }
    }
  }
  return v18;
}
