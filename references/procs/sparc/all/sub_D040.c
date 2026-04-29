__int64 __fastcall sub_D040(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int128 *v4; // rbx
  unsigned __int8 *v5; // rax
  __int64 v6; // rdx
  int v7; // r13d
  int v8; // ecx
  _DWORD *v9; // rbp
  __int64 *v10; // r11
  int v11; // edi
  unsigned __int64 v13; // rdx
  int v14; // r12d
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 *v19; // [rsp+10h] [rbp-1D0h]
  __int64 v20; // [rsp+18h] [rbp-1C8h] BYREF
  __int128 v21; // [rsp+20h] [rbp-1C0h]
  __int128 v22; // [rsp+38h] [rbp-1A8h] BYREF
  __int64 v23; // [rsp+48h] [rbp-198h]
  __int64 v24; // [rsp+50h] [rbp-190h]
  __int64 v25; // [rsp+58h] [rbp-188h]
  unsigned __int8 v26[80]; // [rsp+60h] [rbp-180h] BYREF
  __int64 v27; // [rsp+B0h] [rbp-130h] BYREF
  unsigned __int64 v28; // [rsp+1A0h] [rbp-40h] BYREF

  v4 = &v22;
  v28 = __readfsqword(0x28u);
  v5 = v26;
  v22 = -1;
  v23 = -1;
  v24 = 0;
  v25 = 0;
  do
  {
    *(_WORD *)v5 = 0;
    v5 += 40;
    *((_WORD *)v5 - 19) = 0;
    *((_WORD *)v5 - 18) = 0;
    *((_DWORD *)v5 - 2) = 0;
    *((_WORD *)v5 - 17) = 0;
    *((_OWORD *)v5 - 2) = 0;
    *((_QWORD *)v5 - 2) = 0;
  }
  while ( v5 != (unsigned __int8 *)&v28 );
  if ( (int)decode_insn(&v22, a2) <= 0 )
  {
    return (unsigned int)-1;
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 16);
    v7 = 0;
    v8 = *(_DWORD *)(v6 + 104);
    if ( v8 <= (unsigned __int16)v24 && *(_DWORD *)(v6 + 108) > (int)(unsigned __int16)v24 )
      v7 = *(_DWORD *)(*(_QWORD *)(v6 + 112) + 16LL * ((unsigned __int16)v24 - v8) + 8);
    v9 = dword_13CA0;
    v10 = &v27;
    v11 = -1;
    do
    {
      if ( (*v9 & v7) != 0 && *((_BYTE *)v4 + 41) == 1 )
      {
        v13 = a3[1];
        if ( v13 )
        {
          v14 = 0;
          v15 = 0;
          while ( 1 )
          {
            v16 = *a3 + 80 * v15;
            if ( *((unsigned __int16 *)v4 + 23) == *(unsigned __int16 *)(v16 + 8) )
              break;
            v15 = ++v14;
            if ( v14 >= v13 )
              goto LABEL_20;
          }
          if ( (_WORD)v24 == 163 || (_WORD)v24 == 186 || (_WORD)v24 == 77 )
          {
            v21 = 0;
            v17 = *(_QWORD *)(v16 + 16);
            v19 = v10;
            v20 = 0;
            sub_CCB0(a1, (__int64)&v22, v26, v16 + 64, v17, (__int64)&v20);
            v10 = v19;
            if ( v20 )
            {
              *(_QWORD *)&v21 = 0;
              qfree();
              v10 = v19;
            }
          }
          v11 = v14;
        }
LABEL_20:
        if ( v11 >= 0 )
          break;
      }
      v4 = (__int128 *)((char *)v4 + 40);
      ++v9;
    }
    while ( v10 != (__int64 *)v4 );
  }
  return (unsigned int)v11;
}
