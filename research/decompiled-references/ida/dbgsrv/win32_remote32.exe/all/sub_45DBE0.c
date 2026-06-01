/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45DBE0
// Address: 0x0045DBE0

//----- (0045DBE0) --------------------------------------------------------
__int16 __cdecl sub_45DBE0(_WORD *a1, _WORD *a2)
{
  _WORD *v2; // ebx
  int v3; // edi
  int v4; // edi
  int v5; // edx
  __int16 v6; // si
  unsigned __int16 *v7; // eax
  int v8; // esi
  unsigned __int16 v9; // cx
  __int16 v10; // si
  int v12; // [esp+10h] [ebp-30h]
  int v13; // [esp+18h] [ebp-28h]
  __int128 v14; // [esp+24h] [ebp-1Ch] BYREF
  int v15; // [esp+34h] [ebp-Ch]
  int v16; // [esp+38h] [ebp-8h]

  v2 = a2;
  v3 = (unsigned __int16)a1[1];
  v12 = (unsigned __int16)a2[1];
  v4 = v3 - sub_45DE10(a1);
  v5 = v12 - sub_45DE10(a2);
  v15 = 0;
  LOWORD(v16) = 0;
  v6 = 0;
  v14 = 0;
  if ( v5 >= v4 )
  {
    v7 = a1 + 2;
    v13 = v5 - v4 + 1;
    do
    {
      v8 = 2;
      while ( 1 )
      {
        v9 = *(unsigned __int16 *)((char *)v7 + (char *)a2 - (char *)a1);
        if ( *v7 != v9 )
          break;
        ++v8;
        ++v7;
        if ( v8 >= 11 )
          goto LABEL_8;
      }
      if ( *v7 <= v9 )
      {
LABEL_8:
        v2 = a2;
        sub_45DEE0(a1, a2);
        v10 = 1;
        goto LABEL_10;
      }
      v2 = a2;
      v10 = 0;
LABEL_10:
      sub_45E2E0(&v14);
      v6 = v10 | v16;
      LOWORD(v16) = v6;
      sub_45E2E0(v2);
      v7 = a1 + 2;
      --v13;
    }
    while ( v13 );
    v5 = v4 - 1;
  }
  sub_45F2B0((int)v2, 0, 0, v5, 0);
  return v6;
}
