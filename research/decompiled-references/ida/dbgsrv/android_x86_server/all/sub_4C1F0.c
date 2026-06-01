/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4C1F0
// Address: 0x0004C1F0

//----- (0004C1F0) --------------------------------------------------------
int __cdecl sub_4C1F0(int a1, char *s, char a3, int a4)
{
  unsigned int v4; // eax
  int (__cdecl ***v5)(_DWORD, char *); // eax
  unsigned int v6; // eax
  int v7; // ecx
  unsigned __int8 v8; // dl
  int v9; // edx
  int v10; // ecx
  _BYTE *v11; // eax
  int v12; // edi
  int v13; // ecx
  _BYTE *v14; // eax
  int v15; // edx
  int v16; // ecx
  _BYTE *v17; // eax
  unsigned __int16 v18; // ax
  char *v19; // eax
  unsigned __int16 v20; // ax
  char v21; // cl
  _DWORD *v23; // [esp+8h] [ebp-24h]
  _DWORD *v24; // [esp+8h] [ebp-24h]
  int v25; // [esp+10h] [ebp-1Ch] BYREF
  int v26[6]; // [esp+14h] [ebp-18h] BYREF

  v26[1] = __readgsdword(0x14u);
  v4 = sub_4A890((_DWORD *)a1, s, &v25);
  switch ( v25 )
  {
    case 0:
    case 5:
      v5 = *(int (__cdecl ****)(_DWORD, char *))(a1 + 224);
      if ( v5 )
      {
        v6 = (**v5)(v5, s);
        if ( v6 != -1 )
        {
          sub_472F0(a1, v6);
          return 0;
        }
      }
      set_error_string(0, s);
      return 53;
    case 1:
      v8 = (32 * (a3 ^ 1)) | 0x40;
      goto LABEL_11;
    case 2:
      if ( a3 )
      {
        if ( !v4 )
        {
          v7 = 1539;
          if ( *(_DWORD *)(a1 + 100) )
            return v7;
        }
      }
      v8 = (32 * (a3 ^ 1)) | 0x50;
LABEL_11:
      sub_471B0(a1, v8, v4);
      goto LABEL_32;
    case 3:
      sub_470B0(a1, 4 * a3 - 43, v4);
      goto LABEL_32;
    case 4:
      if ( a3 )
      {
        if ( dword_13B638[1] <= 0 )
          return 1611;
        *(_BYTE *)(a1 + 116) = -44;
        v9 = *(_DWORD *)(a1 + 108);
        v10 = *(_DWORD *)(v9 + 4);
        if ( *(_DWORD *)(v9 + 8) >= (unsigned int)(v10 + 1) )
        {
          v11 = *(_BYTE **)v9;
        }
        else
        {
          v23 = *(_DWORD **)(a1 + 108);
          v11 = qvector_reserve(v9, *(void **)v9, v10 + 1, 1u);
          v9 = (int)v23;
          *v23 = v11;
          v10 = v23[1];
        }
        v11[v10] = -44;
        ++*(_DWORD *)(v9 + 4);
        ++*(_DWORD *)(a1 + 112);
        sub_47000(a1, s, 0);
        v18 = dword_13B638[1];
      }
      else
      {
        if ( dword_13B638[0] <= 0 )
          return 1610;
        *(_BYTE *)(a1 + 116) = -86;
        v15 = *(_DWORD *)(a1 + 108);
        v16 = *(_DWORD *)(v15 + 4);
        if ( *(_DWORD *)(v15 + 8) >= (unsigned int)(v16 + 1) )
        {
          v17 = *(_BYTE **)v15;
        }
        else
        {
          v24 = *(_DWORD **)(a1 + 108);
          v17 = qvector_reserve(v15, *(void **)v15, v16 + 1, 1u);
          v15 = (int)v24;
          *v24 = v17;
          v16 = v24[1];
        }
        v17[v16] = -86;
        ++*(_DWORD *)(v15 + 4);
        ++*(_DWORD *)(a1 + 112);
        sub_47000(a1, s, 0);
        v18 = dword_13B638[0];
      }
      sub_471B0(a1, 0, v18);
LABEL_32:
      if ( !a4 )
        return 0;
      if ( *(_DWORD *)(a1 + 24) )
        v19 = *(char **)(a1 + 20);
      else
        v19 = byte_EF875;
      v20 = sub_4A890((_DWORD *)a1, v19, v26);
      switch ( v26[0] )
      {
        case 3:
          v21 = 2 * (a4 <= 0) - 37;
          break;
        case 2:
          v21 = (4 * (a4 <= 0)) | 0xC2;
          break;
        case 1:
          v21 = (4 * (a4 <= 0)) | 0xC0;
          break;
        default:
          return set_qerrno(58);
      }
      sub_470B0(a1, v21, v20);
      return 0;
    case 6:
      v7 = 53;
      if ( a3 )
        return v7;
      sub_47000(a1, s, 0);
      *(_BYTE *)(a1 + 116) = -82;
      v12 = *(_DWORD *)(a1 + 108);
      v13 = *(_DWORD *)(v12 + 4);
      if ( *(_DWORD *)(v12 + 8) >= (unsigned int)(v13 + 1) )
      {
        v14 = *(_BYTE **)v12;
      }
      else
      {
        v14 = qvector_reserve(v12, *(void **)v12, v13 + 1, 1u);
        *(_DWORD *)v12 = v14;
        v13 = *(_DWORD *)(v12 + 4);
      }
      v14[v13] = -82;
      ++*(_DWORD *)(v12 + 4);
      ++*(_DWORD *)(a1 + 112);
      goto LABEL_32;
    default:
      if ( !(_BYTE)under_debugger )
        interr(271);
      BUG();
  }
}
// 13B638: using guessed type int dword_13B638[5];
// 13E34C: using guessed type int under_debugger;
