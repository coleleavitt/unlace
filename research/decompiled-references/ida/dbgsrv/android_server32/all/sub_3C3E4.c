/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3C3E4
// Address: 0x0003C3E4

//----- (0003C3E4) --------------------------------------------------------
int __fastcall sub_3C3E4(int a1, const char *a2, int a3, int a4)
{
  unsigned int v7; // r2
  int (__fastcall ***v8)(_DWORD, const char *); // r0
  unsigned int v9; // r1
  int result; // r0
  unsigned int v11; // r1
  int v12; // r0
  int v13; // r0
  int v14; // r7
  int v15; // r1
  _BYTE *v16; // r0
  int v17; // r6
  int v18; // r1
  _BYTE *v19; // r0
  char v20; // r0
  int v21; // r7
  int v22; // r1
  _BYTE *v23; // r0
  const char *v24; // r1
  unsigned __int16 v25; // r2
  char v26; // r0
  char v27; // r1
  int v29; // [sp+14h] [bp-Ch] BYREF
  int v30; // [sp+18h] [bp-8h] BYREF

  v7 = sub_3B468((_DWORD *)a1, a2, &v29);
  switch ( v29 )
  {
    case 0:
    case 5:
      v8 = *(int (__fastcall ****)(_DWORD, const char *))(a1 + 228);
      if ( v8 )
      {
        v9 = (**v8)(v8, a2);
        if ( v9 != -1 )
        {
          sub_3936C(a1, v9);
          return 0;
        }
      }
      set_error_string(0, a2);
      return 53;
    case 1:
      v11 = 64;
      v12 = 96;
      if ( !a3 )
        goto LABEL_11;
      goto LABEL_12;
    case 2:
      if ( a3 && !v7 && *(_DWORD *)(a1 + 104) )
        return 1539;
      v11 = 80;
      v12 = 112;
      if ( !a3 )
LABEL_11:
        v11 = v12;
LABEL_12:
      v7 = (unsigned __int16)v7;
      v13 = a1;
      goto LABEL_35;
    case 3:
      v20 = -39;
      if ( !a3 )
        v20 = -43;
      sub_391D4(a1, v20, (unsigned __int16)v7);
      goto LABEL_36;
    case 4:
      if ( a3 )
      {
        result = 1611;
        if ( dword_DD634 < 1 )
          return result;
        *(_BYTE *)(a1 + 120) = -44;
        v14 = *(_DWORD *)(a1 + 112);
        v15 = *(_DWORD *)(v14 + 4);
        if ( *(_DWORD *)(v14 + 8) >= (unsigned int)(v15 + 1) )
        {
          v16 = *(_BYTE **)v14;
        }
        else
        {
          v16 = qvector_reserve(v14, *(void **)v14, v15 + 1, 1u);
          *(_DWORD *)v14 = v16;
          v15 = *(_DWORD *)(v14 + 4);
        }
        v16[v15] = -44;
        ++*(_DWORD *)(v14 + 4);
        ++*(_DWORD *)(a1 + 116);
        sub_39160(a1, a2, 0);
        v7 = (unsigned __int16)dword_DD634;
      }
      else
      {
        result = 1610;
        if ( dword_DD630 < 1 )
          return result;
        *(_BYTE *)(a1 + 120) = -86;
        v21 = *(_DWORD *)(a1 + 112);
        v22 = *(_DWORD *)(v21 + 4);
        if ( *(_DWORD *)(v21 + 8) >= (unsigned int)(v22 + 1) )
        {
          v23 = *(_BYTE **)v21;
        }
        else
        {
          v23 = qvector_reserve(v21, *(void **)v21, v22 + 1, 1u);
          *(_DWORD *)v21 = v23;
          v22 = *(_DWORD *)(v21 + 4);
        }
        v23[v22] = -86;
        ++*(_DWORD *)(v21 + 4);
        ++*(_DWORD *)(a1 + 116);
        sub_39160(a1, a2, 0);
        v7 = (unsigned __int16)dword_DD630;
      }
      v13 = a1;
      v11 = 0;
LABEL_35:
      sub_39282(v13, v11, v7);
LABEL_36:
      result = 0;
      if ( !a4 )
        return result;
      if ( *(_DWORD *)(a1 + 28) )
        v24 = *(const char **)(a1 + 24);
      else
        v24 = &byte_B3CBE;
      v25 = sub_3B468((_DWORD *)a1, v24, &v30);
      switch ( v30 )
      {
        case 3:
          v26 = -37;
          v27 = -35;
          break;
        case 2:
          v26 = -62;
          v27 = -58;
          break;
        case 1:
          v26 = -64;
          v27 = -60;
          break;
        default:
          return set_qerrno(58);
      }
      if ( a4 <= 0 )
        v26 = v27;
      sub_391D4(a1, v26, v25);
      return 0;
    case 6:
      result = 53;
      if ( a3 )
        return result;
      sub_39160(a1, a2, 0);
      *(_BYTE *)(a1 + 120) = -82;
      v17 = *(_DWORD *)(a1 + 112);
      v18 = *(_DWORD *)(v17 + 4);
      if ( *(_DWORD *)(v17 + 8) >= (unsigned int)(v18 + 1) )
      {
        v19 = *(_BYTE **)v17;
      }
      else
      {
        v19 = qvector_reserve(*(_DWORD *)(a1 + 112), *(void **)v17, v18 + 1, 1u);
        *(_DWORD *)v17 = v19;
        v18 = *(_DWORD *)(v17 + 4);
      }
      v19[v18] = -82;
      ++*(_DWORD *)(v17 + 4);
      ++*(_DWORD *)(a1 + 116);
      goto LABEL_36;
    default:
      if ( !under_debugger )
        interr(271);
      __debugbreak();
  }
}
// B3CBE: using guessed type char byte_B3CBE;
// DD630: using guessed type int dword_DD630;
// DD634: using guessed type int dword_DD634;
// E0550: using guessed type char under_debugger;
