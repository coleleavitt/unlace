/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_21300
// Address: 0x00021300

//----- (00021300) --------------------------------------------------------
int __cdecl sub_21300(int a1, int a2, int a3, unsigned int *a4, unsigned int a5, char a6)
{
  int v6; // esi
  int result; // eax
  int v8; // edi
  unsigned int v9; // edx
  int v11; // ecx
  int v12; // edi
  char v13; // bl
  unsigned int *v14; // esi
  int v15; // eax
  int v16; // eax
  int v17; // ebx
  int v18; // edi
  unsigned int v19; // eax
  signed int v20; // edx
  unsigned int v21; // eax
  int i; // ecx
  int v23; // esi
  int v24; // [esp-10h] [ebp-3Ch]
  int v25; // [esp+0h] [ebp-2Ch]
  unsigned int v26; // [esp+8h] [ebp-24h]
  int v27; // [esp+Ch] [ebp-20h]
  _DWORD *v28; // [esp+10h] [ebp-1Ch]
  int v29; // [esp+14h] [ebp-18h]

  v6 = a1;
  result = 0;
  if ( !*(_BYTE *)(a1 + 633) && *(_DWORD *)(a1 + 624) != -1 )
  {
    v8 = a2;
    if ( a6 )
      sub_1E2C0(a1, 0, 1);
    v9 = a5;
    if ( a2 == -1 )
      v8 = *(_DWORD *)(a1 + 624);
    v29 = v8;
    v11 = 0;
    v12 = a5;
    v13 = 0;
    v26 = 0;
    if ( a5 < 0xD )
      goto LABEL_9;
    while ( 1 )
    {
      LOBYTE(v9) = 1;
      v26 = v9;
LABEL_9:
      v25 = a3;
      if ( v11 != v12 && (v13 & 1) == 0 )
      {
        v13 = 1;
        if ( v12 <= 0 )
        {
          v11 = 0;
        }
        else
        {
          v14 = a4;
          v15 = __errno(v11);
          v11 = 0;
          v12 = a5;
          v28 = (_DWORD *)v15;
          v16 = v25;
          while ( 1 )
          {
            v17 = v16 & 3;
            v27 = v11;
            v18 = v12 - v11;
            if ( 4 - v17 <= v18 )
              v18 = 4 - v17;
            *v28 = 0;
            v25 = v16;
            v19 = ptrace(PTRACE_PEEKTEXT, v29, v16 - v17, 0);
            if ( *v28 )
              break;
            if ( v18 == 4 )
            {
              *v14 = v19;
              v20 = a5;
            }
            else
            {
              v20 = a5;
              if ( v18 > 0 )
              {
                v21 = v19 >> (8 * v17);
                for ( i = 0; i < v18; ++i )
                {
                  *((_BYTE *)v14 + i) = v21;
                  v21 >>= 8;
                }
              }
            }
            v14 = (unsigned int *)((char *)v14 + v18);
            v16 = v18 + v25;
            v11 = v18 + v27;
            v12 = v20;
            if ( v11 >= v20 )
            {
              v25 = v16;
              v6 = a1;
              goto LABEL_25;
            }
          }
          v6 = a1;
          v12 = a5;
          v11 = v27;
LABEL_25:
          v13 = 1;
        }
      }
      v9 = v26;
      if ( ((v11 < v12) & (unsigned __int8)~(_BYTE)v26) == 0 )
        break;
      a3 = v25;
    }
    if ( a6 )
    {
      v24 = v6;
      v23 = v11;
      sub_23D70(v24, 0, 1);
      v11 = v23;
    }
    result = 0;
    if ( v11 >= 0 )
      return v11;
  }
  return result;
}
// 17A90: using guessed type int __fastcall __errno(_DWORD);
