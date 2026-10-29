/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47050
// Address: 0x00047050

//----- (00047050) --------------------------------------------------------
void __fastcall sub_47050(void **result, unsigned int a2)
{
  unsigned int v2; // r9
  unsigned int v5; // r10
  unsigned int v6; // r8
  unsigned __int8 *v7; // r0
  _BYTE *v8; // r1
  unsigned int v9; // r3
  int v10; // r8
  _DWORD *v11; // r0
  unsigned int v12; // r10
  int v13; // r8
  char *v14; // r0
  _BYTE *v15; // r0
  unsigned __int8 v16[8]; // [sp+0h] [bp-3Ch] BYREF
  int v17; // [sp+8h] [bp-34h]
  int v18; // [sp+Ch] [bp-30h]
  int v19; // [sp+10h] [bp-2Ch]
  int v20; // [sp+14h] [bp-28h]
  unsigned __int8 v21[8]; // [sp+18h] [bp-24h] BYREF
  int v22; // [sp+20h] [bp-1Ch]
  int v23; // [sp+24h] [bp-18h]
  int v24; // [sp+28h] [bp-14h]
  int v25; // [sp+2Ch] [bp-10h]

  v2 = (unsigned int)result[1];
  if ( v2 != a2 )
  {
    v16[0] = 2;
    v17 = 0;
    v18 = 0;
    v19 = 0;
    v20 = 0;
    if ( v2 <= a2 )
    {
      if ( v2 >= a2 )
        goto LABEL_6;
      v8 = *result;
      v9 = (unsigned int)result[2];
      if ( *result <= v16 && v16 < &v8[24 * v9] )
      {
        v22 = 0;
        v21[0] = 2;
        v23 = 0;
        v24 = 0;
        v25 = 0;
        sub_459A0(v21, v16);
        if ( a2 > (unsigned int)result[2] )
          *result = sub_77EB0((int)result, *result, a2, 0x18u);
        v12 = (unsigned int)result[1];
        if ( a2 > v12 )
        {
          v13 = 24 * v12;
          do
          {
            v14 = (char *)*result + v13;
            *v14 = 2;
            *((_DWORD *)v14 + 2) = 0;
            *((_DWORD *)v14 + 3) = 0;
            *((_DWORD *)v14 + 4) = 0;
            *((_DWORD *)v14 + 5) = 0;
            sub_459A0((unsigned __int8 *)v14, v21);
            ++v12;
            v13 += 24;
          }
          while ( a2 != v12 );
        }
        result[1] = (void *)a2;
        sub_455C8(v21);
        goto LABEL_6;
      }
      if ( a2 <= v9
        || (v15 = sub_77EB0((int)result, v8, a2, 0x18u), v2 = (unsigned int)result[1], v8 = v15, *result = v15, a2 > v2) )
      {
        v10 = 24 * v2;
        while ( 1 )
        {
          v11 = &v8[v10];
          v8[v10] = 2;
          v11[2] = 0;
          v11[3] = 0;
          v11[4] = 0;
          v11[5] = 0;
          sub_459A0(&v8[v10], v16);
          ++v2;
          v10 += 24;
          if ( a2 <= v2 )
            break;
          v8 = *result;
        }
      }
    }
    else
    {
      v5 = a2;
      v6 = 24 * a2;
      do
      {
        ++v5;
        v7 = (unsigned __int8 *)*result + v6;
        v6 += 24;
        sub_455C8(v7);
      }
      while ( v2 != v5 );
    }
    result[1] = (void *)a2;
LABEL_6:
    sub_455C8(v16);
  }
}
