/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_DDE00
// Address: 0x00000000000DDE00

//----- (00000000000DDE00) ----------------------------------------------------
char *__fastcall sub_DDE00(__int64 a1)
{
  char *v1; // rax
  int v2; // ecx
  char *v3; // rax
  char *v4; // r14
  _QWORD *v5; // rax
  _QWORD *v6; // r15
  _QWORD *v7; // r12
  __int64 v8; // rcx
  _QWORD *v9; // rax
  _QWORD *v10; // rdx
  char *result; // rax
  char *v12; // rax
  char *v13; // r14
  char *v14; // rax
  char *v15; // r15
  _QWORD *v16; // rax
  _QWORD *v17; // r12
  _QWORD *v18; // r13
  __int64 v19; // rcx
  _QWORD *v20; // rax
  _QWORD *v21; // rdx
  char *v22; // rax
  char *v23; // r14
  _QWORD *v24; // rax
  _QWORD *v25; // r15
  _QWORD *v26; // r12
  __int64 v27; // rcx
  _QWORD *v28; // rax
  _QWORD *v29; // rdx

  v1 = *(char **)a1;
  if ( *(_QWORD *)(a1 + 8) - *(_QWORD *)a1 < 2u || *v1 != 100 )
    return sub_D97A0(a1);
  v2 = v1[1];
  switch ( v2 )
  {
    case 'X':
      *(_QWORD *)a1 = v1 + 2;
      v12 = sub_D97A0(a1);
      if ( !v12 )
        return nullptr;
      v13 = v12;
      v14 = sub_D97A0(a1);
      if ( !v14 )
        return nullptr;
      v15 = v14;
      v16 = sub_DDE00(a1);
      if ( !v16 )
        return nullptr;
      v17 = v16;
      v18 = *(_QWORD **)(a1 + 4832);
      v19 = v18[1];
      if ( (unsigned __int64)(v19 + 48) < 0xFF0 )
      {
        v21 = v18 + 1;
      }
      else
      {
        v20 = (_QWORD *)operator new[](0x1000u);
        *v20 = v18;
        v20[1] = 0;
        *(_QWORD *)(a1 + 4832) = v20;
        v19 = 0;
        v21 = v20 + 1;
        v18 = v20;
      }
      *v21 = v19 + 48;
      result = (char *)v18 + v19 + 16;
      *(_DWORD *)((char *)v18 + v19 + 24) = 16843052;
      *(_QWORD *)result = off_152538;
      *(_QWORD *)((char *)v18 + v19 + 32) = v13;
      *(_QWORD *)((char *)v18 + v19 + 40) = v15;
      *(_QWORD *)((char *)v18 + v19 + 48) = v17;
      break;
    case 'x':
      *(_QWORD *)a1 = v1 + 2;
      v22 = sub_D97A0(a1);
      if ( !v22 )
        return nullptr;
      v23 = v22;
      v24 = sub_DDE00(a1);
      if ( !v24 )
        return nullptr;
      v25 = v24;
      v26 = *(_QWORD **)(a1 + 4832);
      v27 = v26[1];
      if ( (unsigned __int64)(v27 + 48) < 0xFF0 )
      {
        v29 = v26 + 1;
      }
      else
      {
        v28 = (_QWORD *)operator new[](0x1000u);
        *v28 = v26;
        v28[1] = 0;
        *(_QWORD *)(a1 + 4832) = v28;
        v27 = 0;
        v29 = v28 + 1;
        v26 = v28;
      }
      *v29 = v27 + 48;
      result = (char *)v26 + v27 + 16;
      *(_DWORD *)((char *)v26 + v27 + 24) = 16843051;
      *(_QWORD *)result = off_1524C8;
      *(_QWORD *)((char *)v26 + v27 + 32) = v23;
      *(_QWORD *)((char *)v26 + v27 + 40) = v25;
      *((_BYTE *)v26 + v27 + 48) = 1;
      break;
    case 'i':
      *(_QWORD *)a1 = v1 + 2;
      v3 = sub_E0570((char **)a1);
      if ( v3 )
      {
        v4 = v3;
        v5 = sub_DDE00(a1);
        if ( v5 )
        {
          v6 = v5;
          v7 = *(_QWORD **)(a1 + 4832);
          v8 = v7[1];
          if ( (unsigned __int64)(v8 + 48) < 0xFF0 )
          {
            v10 = v7 + 1;
          }
          else
          {
            v9 = (_QWORD *)operator new[](0x1000u);
            *v9 = v7;
            v9[1] = 0;
            *(_QWORD *)(a1 + 4832) = v9;
            v8 = 0;
            v10 = v9 + 1;
            v7 = v9;
          }
          *v10 = v8 + 48;
          result = (char *)v7 + v8 + 16;
          *(_DWORD *)((char *)v7 + v8 + 24) = 16843051;
          *(_QWORD *)result = off_1524C8;
          *(_QWORD *)((char *)v7 + v8 + 32) = v4;
          *(_QWORD *)((char *)v7 + v8 + 40) = v6;
          *((_BYTE *)v7 + v8 + 48) = 0;
          return result;
        }
      }
      return nullptr;
    default:
      return sub_D97A0(a1);
  }
  return result;
}
// 1524C8: using guessed type __int64 (__fastcall *off_1524C8[7])();
// 152538: using guessed type __int64 (__fastcall *off_152538[7])();
