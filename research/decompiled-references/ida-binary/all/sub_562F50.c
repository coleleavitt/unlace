__int64 __fastcall sub_562F50(__int64 a1, unsigned int a2, unsigned __int16 a3)
{
  unsigned int v4; // ecx
  unsigned __int16 *v5; // rax
  int v6; // r10d
  unsigned __int16 *v7; // rdx
  int v8; // r9d
  int v9; // esi
  unsigned int v10; // ecx
  unsigned __int16 *v11; // rax
  __int64 v13; // rax
  unsigned int v14; // ecx
  __int64 v15; // [rsp+0h] [rbp-18h] BYREF
  int v16; // [rsp+8h] [rbp-10h]

  if ( a3 > 0xFFFDu )
    return 0;
  if ( (unsigned int)a3 < *(_DWORD *)(a1 + 12) )
  {
    sub_562CE0(a1, a2, a3, (__int64)&v15);
    if ( v16 )
    {
      v13 = v15 + 8LL * (unsigned int)(v16 - 1);
      v14 = *(unsigned __int16 *)(v13 + 2);
      if ( !*(_BYTE *)v13 )
      {
        if ( *(_BYTE *)(v13 + 4) )
          return a2;
        return v14;
      }
    }
    return 0;
  }
  v4 = *(_DWORD *)(a1 + 24);
  if ( (unsigned __int16)a2 < v4 )
    return *(unsigned __int16 *)(*(_QWORD *)(a1 + 40)
                               + 2LL * (*(_DWORD *)(a1 + 4) * (unsigned __int16)a2 + (unsigned int)a3));
  v5 = (unsigned __int16 *)(*(_QWORD *)(a1 + 48)
                          + 2LL * *(unsigned int *)(*(_QWORD *)(a1 + 56) + 4LL * ((unsigned __int16)a2 - v4)));
  v6 = *v5;
  v7 = v5 + 1;
  if ( !(_WORD)v6 )
    return 0;
  v8 = 0;
  while ( 1 )
  {
    v9 = v7[1];
    v10 = *v7;
    v11 = v7 + 2;
    if ( (_WORD)v9 )
      break;
    v7 += 2;
LABEL_17:
    if ( v6 == ++v8 )
      return 0;
  }
  v7 += (unsigned int)(v9 + 2);
  while ( 1 )
  {
    if ( a3 == *v11++ )
      return v10;
    if ( v11 == v7 )
      goto LABEL_17;
  }
}
