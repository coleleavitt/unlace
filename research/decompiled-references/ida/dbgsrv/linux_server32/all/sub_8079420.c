/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8079420
// Address: 0x08079420

//----- (08079420) --------------------------------------------------------
int __cdecl sub_8079420(int a1)
{
  void **v2; // ebx
  _BYTE *v3; // edx
  void *v4; // eax
  int v5; // ebx
  int v6; // edi
  void **v7; // ebx
  _BYTE *v8; // edx
  void *v9; // eax
  int v10; // eax
  char *v11; // edx
  int v12; // [esp-18h] [ebp-44h]
  int v13; // [esp-14h] [ebp-40h]
  int v14; // [esp-10h] [ebp-3Ch]
  void *ptr; // [esp+4h] [ebp-28h] BYREF
  int v16; // [esp+8h] [ebp-24h]
  int v17; // [esp+Ch] [ebp-20h]
  unsigned int v18; // [esp+10h] [ebp-1Ch]

  v18 = __readgsdword(0x14u);
  switch ( *(_WORD *)(a1 + 32) )
  {
    case 3:
    case 5:
      sub_80792A0(a1, *(_DWORD *)(a1 + 36));
      break;
    case 4:
      ptr = nullptr;
      v16 = 0;
      v17 = 0;
      sub_80754D0(&ptr, (char **)(a1 + 20));
      v10 = v16;
      v11 = (char *)&dword_80DDFD8;
      if ( v16 )
      {
        v11 = (char *)ptr;
        v10 = v16 - 1;
      }
      sub_8078F10(a1, v11, v10);
      if ( ptr )
      {
        v16 = 0;
        sub_80CF780(ptr);
      }
      break;
    case 7:
      v7 = *(void ***)(a1 + 108);
      *(_BYTE *)(a1 + 116) = -46;
      v8 = v7[1];
      v9 = *v7;
      if ( v7[2] < v8 + 1 )
      {
        v9 = sub_80CF920((int)v7, v9, (unsigned int)(v8 + 1), 1u);
        *v7 = v9;
        v8 = v7[1];
      }
      v8[(_DWORD)v9] = -46;
      v7[1] = (char *)v7[1] + 1;
      ++*(_DWORD *)(a1 + 112);
      sub_807FAE0(*(char ***)(a1 + 108), (const void *)(a1 + 44), 0x10u);
      *(_DWORD *)(a1 + 112) += 16;
      break;
    case 8:
      v2 = *(void ***)(a1 + 108);
      *(_BYTE *)(a1 + 116) = -45;
      v3 = v2[1];
      v4 = *v2;
      if ( v2[2] < v3 + 1 )
      {
        v4 = sub_80CF920((int)v2, v4, (unsigned int)(v3 + 1), 1u);
        *v2 = v4;
        v3 = v2[1];
      }
      v3[(_DWORD)v4] = -45;
      v2[1] = (char *)v2[1] + 1;
      v5 = *(_DWORD *)(a1 + 44);
      ++*(_DWORD *)(a1 + 112);
      v6 = *(_DWORD *)(a1 + 48);
      sub_8078190(a1, v5);
      sub_8078190(a1, SHIWORD(v5));
      sub_8078190(a1, v6);
      sub_8078190(a1, SHIWORD(v6));
      break;
    default:
      if ( !byte_811F8A1 )
      {
        if ( v18 == __readgsdword(0x14u) )
          sub_80CFF40(275, v12, v13, v14);
        sub_80D7AB0();
      }
      BUG();
  }
  if ( v18 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return 0;
}
// 8079621: variable 'v12' is possibly undefined
// 8079621: variable 'v13' is possibly undefined
// 8079621: variable 'v14' is possibly undefined
// 80DDFD8: using guessed type int dword_80DDFD8;
// 811F8A1: using guessed type char byte_811F8A1;
