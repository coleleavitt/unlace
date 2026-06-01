/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_24470
// Address: 0x00024470

//----- (00024470) --------------------------------------------------------
int __cdecl sub_24470(int a1, int a2, int a3, unsigned __int8 *a4, int a5, char a6)
{
  int v6; // ecx
  int v7; // esi
  signed int v9; // edx
  unsigned __int8 *v10; // ecx
  int v12; // esi
  unsigned int v13; // edi
  int v14; // eax
  int v15; // eax
  int v16; // esi
  int v17; // eax
  _DWORD *v18; // [esp+8h] [ebp-34h]
  int v19; // [esp+Ch] [ebp-30h]
  int v20; // [esp+10h] [ebp-2Ch]
  char v21; // [esp+14h] [ebp-28h]
  int v22; // [esp+18h] [ebp-24h]
  signed int v23; // [esp+1Ch] [ebp-20h]
  unsigned __int8 *v24; // [esp+20h] [ebp-1Ch]
  _DWORD v25[6]; // [esp+24h] [ebp-18h] BYREF

  v6 = a1;
  v25[1] = __readgsdword(0x14u);
  v7 = 0;
  if ( !*(_BYTE *)(a1 + 633) && *(_DWORD *)(a1 + 624) != -1 )
  {
    v7 = a5;
    if ( *(_BYTE *)(a1 + 348) )
      sub_246A0(a4, a5);
    v19 = a2;
    if ( a6 )
      sub_1E2C0(a1, 0, 1);
    if ( a2 == -1 )
      v19 = *(_DWORD *)(a1 + 624);
    v18 = (_DWORD *)__errno(v6);
    *v18 = 0;
    if ( a5 > 0 )
    {
      v9 = a5;
      v10 = a4;
      while ( 1 )
      {
        v20 = a3;
        v12 = a3 & 3;
        v13 = 4 - v12;
        v23 = v9;
        if ( 4 - v12 > v9 )
          v13 = v9;
        v14 = 4;
        if ( v13 < 4 )
          v14 = v13;
        v24 = v10;
        __memcpy_chk(v25, v10, v14, 4);
        v21 = v12;
        v15 = v20 - v12;
        if ( v13 != 4 )
        {
          v16 = v20 - v12;
          v17 = ptrace(PTRACE_PEEKTEXT, v19, v16, 0);
          if ( *v18 )
            break;
          v25[0] = ((v25[0] & (0xFFFFFFFF >> (32 - 8 * v13))) << (8 * v21))
                 | ~(0xFFFFFFFF >> (32 - 8 * v13) << (8 * v21)) & v17;
          v15 = v16;
        }
        v22 = v15;
        *v18 = 0;
        ptrace(PTRACE_POKETEXT, *(_DWORD *)(a1 + 624), v15, v25[0]);
        if ( *v18 )
        {
          *v18 = 0;
          ptrace(PTRACE_POKEDATA, *(_DWORD *)(a1 + 624), v22, v25[0]);
          if ( *v18 )
            break;
        }
        v10 = &v24[v13];
        a3 = v13 + v20;
        v9 = v23 - v13;
        if ( (int)(v23 - v13) <= 0 )
        {
          v7 = a5;
          goto LABEL_24;
        }
      }
      v7 = 0;
    }
LABEL_24:
    if ( a6 )
      sub_23D70(a1, 0, 1);
  }
  return v7;
}
// 24530: variable 'v6' is possibly undefined
// 17A90: using guessed type int __fastcall __errno(_DWORD);
// 17C40: using guessed type int __cdecl __memcpy_chk(_DWORD, _DWORD, _DWORD, _DWORD);
