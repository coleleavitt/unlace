__int64 __fastcall sub_3E7D40(__int64 a1, int a2, __int64 a3)
{
  char *v4; // rax
  int v5; // edx
  __int64 result; // rax
  char *v7; // r8
  _DWORD *v8; // r9
  unsigned int v9; // r11d
  char v10; // al
  int v11; // edx
  __int64 v12; // rcx
  int v13; // esi
  int v14; // [rsp+0h] [rbp-18Ch] BYREF
  __int128 v15; // [rsp+4h] [rbp-188h] BYREF
  __int64 v16; // [rsp+14h] [rbp-178h]
  __int64 v17; // [rsp+1Ch] [rbp-170h]
  __int64 v18; // [rsp+24h] [rbp-168h]
  char v19; // [rsp+2Ch] [rbp-160h] BYREF
  char v20; // [rsp+2Dh] [rbp-15Fh] BYREF
  _QWORD v21[4]; // [rsp+16Ch] [rbp-20h] BYREF

  v21[0] = __readfsqword(0x28u);
  v16 = -1;
  v4 = &v19;
  v15 = -1;
  v17 = 0;
  v18 = 0;
  do
  {
    *(_WORD *)v4 = 0;
    v4 += 40;
    *((_WORD *)v4 - 19) = 0;
    *((_WORD *)v4 - 18) = 0;
    *((_DWORD *)v4 - 2) = 0;
    *((_WORD *)v4 - 17) = 0;
    *((_OWORD *)v4 - 2) = 0;
    *((_QWORD *)v4 - 2) = 0;
  }
  while ( v4 != (char *)v21 );
  v5 = decode_insn(&v15, a3, 0, v21, 0, 0, 0.0);
  result = 0;
  if ( v5 )
  {
    if ( a2 != 280 )
      goto LABEL_5;
    if ( (_WORD)v17 == 306 )
      return 2;
    result = 1;
    if ( (_WORD)v17 != 292 )
    {
LABEL_5:
      v7 = &v20;
      v8 = dword_41C140;
      v9 = 0;
      while ( 1 )
      {
        v10 = *v7;
        if ( !*v7 )
          return v9;
        if ( v10 == 4 )
          break;
        if ( v10 != 9 )
        {
          if ( v10 == 1 && *(unsigned __int16 *)(v7 + 5) == a2 )
          {
            v11 = 2;
            v12 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 8LL);
            v13 = *(_DWORD *)(v12 + 104);
            if ( (unsigned __int16)v17 >= v13 && (unsigned __int16)v17 < *(int *)(v12 + 108) )
              v11 = ((*v8 & *(_DWORD *)(*(_QWORD *)(v12 + 112) + 16LL * ((unsigned __int16)v17 - v13) + 8)) == 0) + 1;
            v9 |= v11;
          }
          goto LABEL_8;
        }
        if ( *(unsigned __int16 *)(v7 + 5) == a2 || v7[31] == a2 )
        {
LABEL_14:
          v7 += 40;
          v9 |= 2u;
          ++v8;
          if ( v7 == (char *)v21 + 1 )
            return v9;
        }
        else
        {
LABEL_8:
          v7 += 40;
          ++v8;
          if ( v7 == (char *)v21 + 1 )
            return v9;
        }
      }
      if ( *(unsigned __int16 *)(v7 + 5) == a2 )
      {
        if ( !(unsigned __int8)sub_3E5AC0(&v14, nullptr, (unsigned __int16)v17) || (v14 & 2) == 0 )
          goto LABEL_14;
        v9 = 3;
      }
      goto LABEL_8;
    }
  }
  return result;
}
