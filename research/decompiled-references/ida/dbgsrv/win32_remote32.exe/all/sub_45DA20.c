/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45DA20
// Address: 0x0045DA20

//----- (0045DA20) --------------------------------------------------------
int __cdecl sub_45DA20(_WORD *a1, int a2)
{
  _WORD *v2; // ecx
  int v3; // edx
  int v5; // ebx
  unsigned __int16 v6; // cx
  unsigned __int16 v7; // ax
  __int16 v8; // si
  unsigned __int16 *v9; // eax
  int v10; // ecx
  int v11; // esi
  __int16 v12; // si
  _WORD *v13; // ebx
  int v14; // ecx
  int result; // eax
  int v17; // ecx
  unsigned __int16 v18; // [esp+8h] [ebp-28h]
  int v19; // [esp+Ch] [ebp-24h]
  _BYTE v20[20]; // [esp+14h] [ebp-1Ch] BYREF
  __int16 v21; // [esp+28h] [ebp-8h]

  *(_OWORD *)&v20[4] = 0;
  v21 = 0;
  *(_DWORD *)v20 = *(_DWORD *)a2;
  v2 = a1 + 5;
  if ( !a1[4] )
  {
    v3 = 5;
    while ( *v2++ )
    {
      if ( ++v3 >= 11 )
      {
        if ( (a1[3] & 1) != 0 )
          break;
        sub_45E090((_WORD *)a2);
        sub_45E090(a1);
        v5 = 114;
        do
        {
          v6 = a1[3];
          v7 = *(_WORD *)(a2 + 6);
          if ( v6 > v7 )
          {
            v8 = 0;
          }
          else
          {
            v8 = 1;
            *(_WORD *)(a2 + 6) = v7 - v6;
          }
          sub_45E2E0(v20);
          *(_WORD *)&v20[18] |= v8;
          sub_45E2E0((_WORD *)a2);
          --v5;
        }
        while ( v5 );
        goto LABEL_20;
      }
    }
  }
  v19 = 114;
  v9 = a1 + 2;
  v10 = a2 - (_DWORD)a1;
  do
  {
    v11 = 2;
    while ( 1 )
    {
      v18 = *(unsigned __int16 *)((char *)v9 + v10);
      if ( *v9 != v18 )
        break;
      v10 = a2 - (_DWORD)a1;
      ++v11;
      ++v9;
      if ( v11 >= 11 )
        goto LABEL_16;
    }
    if ( *v9 <= v18 )
    {
LABEL_16:
      sub_45DEE0(a1, (_WORD *)a2);
      v12 = 1;
      goto LABEL_19;
    }
    v12 = 0;
LABEL_19:
    sub_45E2E0(v20);
    *(_WORD *)&v20[18] |= v12;
    sub_45E2E0((_WORD *)a2);
    v10 = a2 - (_DWORD)a1;
    v9 = a1 + 2;
    --v19;
  }
  while ( v19 );
LABEL_20:
  v13 = (_WORD *)(a2 + 4);
  sub_45E090(v20);
  sub_45E090(v20);
  v14 = 2;
  while ( !*v13++ )
  {
    if ( ++v14 >= 11 )
    {
      result = 0;
      goto LABEL_25;
    }
  }
  result = 1;
LABEL_25:
  v17 = *(_DWORD *)&v20[16];
  *(_OWORD *)a2 = *(_OWORD *)v20;
  *(_DWORD *)(a2 + 16) = v17;
  *(_WORD *)(a2 + 20) = v21;
  return result;
}
