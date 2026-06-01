__int64 __fastcall sub_183E600(__int64 a1, __int64 a2)
{
  __int64 *v2; // rax
  __int64 v3; // rbx
  unsigned int v4; // ebp
  char v6; // cl
  unsigned __int8 v7; // al
  __int64 v8; // rsi
  char v9; // dl
  _BOOL8 v10; // rax
  unsigned __int64 v11; // rdx
  __int64 *v12; // rax
  __int64 v13; // r8
  char v14; // di
  _BOOL8 v15; // rdx
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rdi
  __int64 *v18; // rbx
  __int64 *v19; // r12
  _BOOL8 v20; // rdx
  _BOOL8 v21; // rcx
  __int64 (__fastcall **v22)(); // [rsp+0h] [rbp-48h] BYREF
  int v23; // [rsp+8h] [rbp-40h]
  __int64 v24; // [rsp+10h] [rbp-38h]

  v2 = (__int64 *)(*(_QWORD *)(a2 + 56) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a2 + 56) & 4) != 0 )
    v2 = (__int64 *)v2[4];
  if ( !v2 )
    return 0;
  v3 = *v2;
  v4 = 0;
  if ( *v2 & 7 | (*v2 >> 3) & 1 )
    return v4;
  LOBYTE(v4) = v3 == 0 || *(_BYTE *)(*(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 26;
  if ( (_BYTE)v4 )
    return 0;
  v24 = a1;
  v6 = *(_BYTE *)(v3 + 19);
  v22 = off_2C54F08;
  v23 = 16777472;
  v7 = ((unsigned __int8)v6 >> 1) & 0xF;
  if ( v7 == 2 )
    goto LABEL_15;
  if ( v7 < 2u || ((v7 + 10) & 0xFu) > 2 )
    return v4;
  v8 = 8LL * *(unsigned __int16 *)(v3 + 22) + 48;
  v9 = BYTE3(*(_QWORD *)(v3 + 16));
  v10 = (v9 & 0x40) != 0;
  v11 = (v3 + v8 + ((v9 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v6 & 0x40) != 0 )
    v12 = (__int64 *)(v11
                    + 8 * (((*(_BYTE *)(((v3 + v8 + ((v6 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0) + v10));
  else
    v12 = (__int64 *)(v11 + 8 * v10);
  if ( (unsigned __int8)sub_BC97E0((__int64 *)&v22, *v12) )
  {
    v6 = *(_BYTE *)(v3 + 19);
    v7 = ((unsigned __int8)v6 >> 1) & 0xF;
LABEL_15:
    v13 = 8LL * *(unsigned __int16 *)(v3 + 22) + 48;
    v14 = BYTE3(*(_QWORD *)(v3 + 16));
    v15 = (v14 & 0x40) != 0;
    v16 = (v3 + v13 + ((v6 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL;
    v17 = (v3 + v13 + ((v14 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v6 & 0x40) != 0 )
    {
      v21 = (*(_BYTE *)(v16 + 1) & 4) != 0;
      v18 = (__int64 *)(v17 + 8 * (v21 + v15));
      v20 = v21 + 1;
      v19 = (__int64 *)(v16 + 8 * (v21 + 1));
    }
    else
    {
      v18 = (__int64 *)(v17 + 8 * v15);
      v19 = (__int64 *)v16;
      v20 = 0;
    }
    if ( v7 == 2 )
      v19 = (__int64 *)(v16 + 8 * ((*(_WORD *)v16 & 0x3FF) + v20));
    if ( v18 == v19 )
      return v4;
    while ( (unsigned __int8)sub_BC7D30((__int64)&v22, *v18) )
    {
      if ( v19 == ++v18 )
        return v4;
    }
  }
  return 1;
}
