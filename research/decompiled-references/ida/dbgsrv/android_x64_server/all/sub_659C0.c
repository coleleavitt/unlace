/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_659C0
// Address: 0x00000000000659C0

//----- (00000000000659C0) ----------------------------------------------------
__int64 __fastcall sub_659C0(__int64 a1)
{
  __int64 v2; // rax
  __int16 v3; // bp
  __int64 v4; // rax
  char *v5; // r14
  char **v6; // rax
  char *v7; // rax
  __int64 v8; // r14
  __int64 v9; // rcx
  _BYTE *v10; // rax
  __int64 v11; // rax
  __int64 v13; // rcx
  _BYTE *v14; // rax
  char v15; // al
  __int64 v16; // rcx
  _BYTE *v17; // rax
  __int64 v18; // rcx
  _BYTE *v19; // rax
  _QWORD *v20; // rdi
  __int16 v21; // bp
  __int64 v22; // rcx
  _WORD *v23; // rax

  v2 = *(_QWORD *)(a1 + 328);
  v3 = *(_WORD *)(*(_QWORD *)(a1 + 320) + 2 * v2 - 2);
  if ( v2 )
    *(_QWORD *)(a1 + 328) = v2 - 1;
  v4 = *(_QWORD *)(a1 + 160);
  if ( *(_QWORD *)(v4 + 24 * (*(_QWORD *)(a1 + 168) - 1LL) + 8) )
    v5 = *(char **)(v4 + 24 * (*(_QWORD *)(a1 + 168) - 1LL));
  else
    v5 = (char *)s1;
  v6 = sub_6CF60(v5);
  if ( v6 )
  {
    v7 = v6[2];
    switch ( v7[v3] )
    {
      case 2:
        if ( sub_61CE0(a1) )
          goto LABEL_31;
        *(_BYTE *)(a1 + 212) = -50;
        v8 = *(_QWORD *)(a1 + 200);
        v9 = *(_QWORD *)(v8 + 8);
        if ( *(_QWORD *)(v8 + 16) >= (unsigned __int64)(v9 + 1) )
        {
          *(_BYTE *)(*(_QWORD *)v8 + v9) = -50;
        }
        else
        {
          v10 = qvector_reserve(*(_QWORD *)(a1 + 200), *(char **)v8, v9 + 1, 1u);
          *(_QWORD *)v8 = v10;
          v10[*(_QWORD *)(v8 + 8)] = -50;
        }
        break;
      case 3:
        if ( (*(_BYTE *)(a1 + 212) | 2) == 0xD2 )
          goto LABEL_31;
        *(_BYTE *)(a1 + 212) = -48;
        v8 = *(_QWORD *)(a1 + 200);
        v13 = *(_QWORD *)(v8 + 8);
        if ( *(_QWORD *)(v8 + 16) >= (unsigned __int64)(v13 + 1) )
        {
          *(_BYTE *)(*(_QWORD *)v8 + v13) = -48;
        }
        else
        {
          v14 = qvector_reserve(*(_QWORD *)(a1 + 200), *(char **)v8, v13 + 1, 1u);
          *(_QWORD *)v8 = v14;
          v14[*(_QWORD *)(v8 + 8)] = -48;
        }
        break;
      case 4:
        v3 -= v7[v3 + 1] == 0;
        goto LABEL_31;
      case 5:
      case 6:
      case 8:
      case 10:
        goto LABEL_31;
      case 7:
        v15 = *(_BYTE *)(a1 + 212);
        if ( v15 == -88 || v15 == -65 )
          goto LABEL_31;
        *(_BYTE *)(a1 + 212) = -65;
        v8 = *(_QWORD *)(a1 + 200);
        v16 = *(_QWORD *)(v8 + 8);
        if ( *(_QWORD *)(v8 + 16) >= (unsigned __int64)(v16 + 1) )
        {
          v17 = *(_BYTE **)v8;
        }
        else
        {
          v17 = qvector_reserve(*(_QWORD *)(a1 + 200), *(char **)v8, v16 + 1, 1u);
          *(_QWORD *)v8 = v17;
          v16 = *(_QWORD *)(v8 + 8);
        }
        v17[v16] = -65;
        break;
      case 9:
        if ( *(_BYTE *)(a1 + 212) == 0xD3 )
          goto LABEL_31;
        *(_BYTE *)(a1 + 212) = -47;
        v8 = *(_QWORD *)(a1 + 200);
        v18 = *(_QWORD *)(v8 + 8);
        if ( *(_QWORD *)(v8 + 16) >= (unsigned __int64)(v18 + 1) )
        {
          *(_BYTE *)(*(_QWORD *)v8 + v18) = -47;
        }
        else
        {
          v19 = qvector_reserve(*(_QWORD *)(a1 + 200), *(char **)v8, v18 + 1, 1u);
          *(_QWORD *)v8 = v19;
          v19[*(_QWORD *)(v8 + 8)] = -47;
        }
        break;
      default:
        goto LABEL_13;
    }
    ++*(_QWORD *)(v8 + 8);
    ++*(_DWORD *)(a1 + 208);
  }
  else
  {
    v11 = sub_6CBE0(*(_QWORD **)(a1 + 104), v5);
    if ( v11 != -1 && *(_DWORD *)(*(_QWORD *)(**(_QWORD **)(a1 + 104) + 8 * v11) + 24LL) <= v3 )
    {
LABEL_13:
      set_error_string(0, v5);
      return set_qerrno(0x38u);
    }
  }
LABEL_31:
  v20 = (_QWORD *)(a1 + 320);
  v21 = v3 + 1;
  v22 = *(_QWORD *)(a1 + 328);
  if ( *(_QWORD *)(a1 + 336) >= (unsigned __int64)(v22 + 1) )
  {
    v23 = (_WORD *)*v20;
  }
  else
  {
    v23 = qvector_reserve((__int64)v20, *(char **)(a1 + 320), v22 + 1, 2u);
    *(_QWORD *)(a1 + 320) = v23;
    v22 = *(_QWORD *)(a1 + 328);
  }
  v23[v22] = v21;
  ++*(_QWORD *)(a1 + 328);
  return 0;
}
