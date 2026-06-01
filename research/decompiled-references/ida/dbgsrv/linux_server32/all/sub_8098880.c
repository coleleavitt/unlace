/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8098880
// Address: 0x08098880

//----- (08098880) --------------------------------------------------------
int __cdecl sub_8098880(int a1, int a2)
{
  int v2; // eax
  int (__cdecl *v3)(int, _DWORD, int, int *); // edx
  int v4; // eax
  int result; // eax
  char v6; // dl
  int v7; // eax
  int (__cdecl *v8)(int, int, int); // edx
  __int64 v9; // xmm0_8
  int v10; // eax
  int v11; // [esp+0h] [ebp-14h] BYREF
  unsigned int v12; // [esp+4h] [ebp-10h]

  v12 = __readgsdword(0x14u);
  v2 = *(_DWORD *)(a1 + 352);
  switch ( *(_WORD *)(v2 + 12) )
  {
    case 2:
      v3 = *(int (__cdecl **)(int, _DWORD, int, int *))(a1 + 80);
      if ( v3 )
        goto LABEL_3;
      v8 = *(int (__cdecl **)(int, int, int))(a1 + 84);
      if ( v8 )
        goto LABEL_18;
      *(_BYTE *)a2 = 1;
      *(_DWORD *)(a2 + 4) = 0;
      *(_DWORD *)(a2 + 8) = 0;
      goto LABEL_8;
    case 3:
    case 5:
      v6 = *(_BYTE *)(v2 + 20);
      v7 = *(_DWORD *)(v2 + 16);
      *(_DWORD *)(a2 + 4) = v7;
      *(_BYTE *)a2 = v6;
      *(_DWORD *)(a2 + 8) = v7 >> 31;
      goto LABEL_8;
    case 8:
      v9 = *(_QWORD *)(v2 + 24);
      *(_BYTE *)a2 = *(_BYTE *)(v2 + 20);
      *(_QWORD *)(a2 + 4) = v9;
      goto LABEL_8;
    case 0x28:
      if ( v12 != __readgsdword(0x14u) )
        goto LABEL_20;
      return sub_8098700(a1, a2);
    default:
      v3 = *(int (__cdecl **)(int, _DWORD, int, int *))(a1 + 80);
      if ( !v3 )
      {
        v8 = *(int (__cdecl **)(int, int, int))(a1 + 84);
        if ( v8 )
        {
LABEL_18:
          *(_BYTE *)(a1 + 360) = 0;
          *(_DWORD *)(a1 + 364) = 0;
          if ( !v8(a1, a1 + 360, v2) )
            goto LABEL_5;
        }
LABEL_19:
        sub_80933C0(a1);
      }
LABEL_3:
      v4 = v3(a1, *(_DWORD *)(a1 + 108), v2, &v11);
      if ( !v4 )
      {
        v10 = v11;
        *(_BYTE *)a2 = 0;
        *(_QWORD *)(a2 + 4) = v10;
LABEL_8:
        if ( v12 == __readgsdword(0x14u) )
          return sub_8098690(a1);
LABEL_20:
        sub_80D7AB0();
      }
      if ( v4 != 34 )
        goto LABEL_19;
LABEL_5:
      *(_BYTE *)(a1 + 356) = 1;
      *(_BYTE *)a2 = 1;
      *(_DWORD *)(a2 + 4) = 0;
      *(_DWORD *)(a2 + 8) = 0;
      result = v12 - __readgsdword(0x14u);
      if ( result )
        goto LABEL_20;
      return result;
  }
}
