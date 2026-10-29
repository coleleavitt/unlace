/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_448980
// Address: 0x00448980

//----- (00448980) --------------------------------------------------------
int __userpurge sub_448980@<eax>(char a1@<bl>, int a2, unsigned int a3, int a4)
{
  int v4; // edi
  const char *v5; // eax
  const char *v6; // ecx
  int v7; // ecx
  const char *v8; // ecx
  int v9; // ecx
  int v10; // ebx
  signed int v11; // esi
  int v12; // eax
  char v13; // bl
  int v14; // esi
  int v15; // edi
  int v16; // eax
  char *v18; // [esp+10h] [ebp-18h] BYREF
  int v19; // [esp+14h] [ebp-14h]
  int v20; // [esp+18h] [ebp-10h]
  int v21; // [esp+24h] [ebp-4h]

  v18 = nullptr;
  v19 = 0;
  v20 = 0;
  v4 = a2;
  v21 = 0;
  sub_445F40(a1, (int)&v18, a3, *(_DWORD **)(a2 + 8));
  v5 = MultiByteStr;
  v6 = MultiByteStr;
  if ( v19 )
    v6 = v18;
  v7 = strcmp(v6, ".debug_info");
  if ( v7 )
    v7 = v7 < 0 ? -1 : 1;
  if ( v7 )
  {
    v8 = MultiByteStr;
    if ( v19 )
      v8 = v18;
    v9 = strcmp(v8, ".note.gnu.build-id");
    if ( v9 )
      v9 = v9 < 0 ? -1 : 1;
    v10 = a3;
    if ( v9 || *(_DWORD *)(a3 + 16) >= 0x10000u )
    {
      if ( v19 )
        v5 = v18;
      v12 = strcmp(v5, ".gnu_debuglink");
      if ( v12 )
        v12 = v12 < 0 ? -1 : 1;
      if ( !v12 )
      {
        sub_45C810(a3, a2, *(_DWORD *)(a2 + 4), *(int *)(a3 + 20), 0);
        if ( sub_45C7E0(*(_DWORD *)(a2 + 4), (__m128i *)((char *)&a3 + 3), 1) == 1 )
        {
          while ( 1 )
          {
            v13 = HIBYTE(a3);
            if ( !HIBYTE(a3) )
              break;
            v14 = v4 + 28;
            v15 = *(_DWORD *)(v4 + 32) != 0 ? *(_DWORD *)(v4 + 32) - 1 : 0;
            v16 = v15 + 2;
            if ( (unsigned int)(v15 + 2) > *(_DWORD *)(v14 + 8) )
            {
              *(_DWORD *)v14 = sub_453B00(v14, *(void **)v14, v15 + 2, 1u);
              v16 = v15 + 2;
            }
            *(_DWORD *)(v14 + 4) = v16;
            *(_BYTE *)(v15 + *(_DWORD *)v14) = v13;
            *(_BYTE *)(*(_DWORD *)v14 + v15 + 1) = 0;
            v4 = a2;
            if ( sub_45C7E0(*(_DWORD *)(a2 + 4), (__m128i *)((char *)&a3 + 3), 1) != 1 )
              goto LABEL_27;
          }
        }
        else
        {
          v14 = a2 + 28;
LABEL_27:
          sub_40D190((void **)v14);
        }
      }
    }
    else
    {
      sub_4028B0(a2 + 16, *(_DWORD *)(a3 + 16));
      sub_45C810(v10, a2, *(_DWORD *)(a2 + 4), *(int *)(v10 + 20), 0);
      v11 = *(_DWORD *)(v10 + 16);
      if ( sub_45C7E0(*(_DWORD *)(a2 + 4), *(__m128i **)(a2 + 16), v11) != v11 )
        sub_40D190((void **)(a2 + 16));
    }
  }
  else
  {
    *(_BYTE *)(a2 + 12) = 1;
  }
  v21 = 1;
  if ( v18 )
    sub_453A20(v18);
  return 0;
}
