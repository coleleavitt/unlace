/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002B470
// Address: 0x000000010002B470

//----- (000000010002B470) ----------------------------------------------------
__int64 __fastcall sub_10002B470(__int64 a1)
{
  __int64 v1; // rax
  __int16 v2; // r15
  __int64 v3; // rax
  char *v4; // r14
  char **v5; // rax
  char *v6; // rax
  __int64 v7; // r14
  void *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  int v12; // eax
  void *v13; // rax
  __int64 v14; // rcx
  void *v15; // rax
  __int64 v16; // rcx
  void *v17; // rax
  __int64 v18; // rcx
  __int16 v19; // r15
  void *v20; // rax
  __int64 v21; // rcx

  v1 = *(_QWORD *)(a1 + 328);
  v2 = *(_WORD *)(*(_QWORD *)(a1 + 320) + 2 * v1 - 2);
  if ( v1 )
    *(_QWORD *)(a1 + 328) = v1 - 1;
  v3 = *(_QWORD *)(a1 + 160);
  if ( *(_QWORD *)(v3 + 24LL * *(_QWORD *)(a1 + 168) - 16) )
    v4 = *(char **)(v3 + 24LL * *(_QWORD *)(a1 + 168) - 24);
  else
    v4 = (char *)_s1;
  v5 = sub_100033D90(v4);
  if ( v5 )
  {
    v6 = v5[2];
    switch ( v6[v2] )
    {
      case 2:
        if ( sub_100027020(a1) )
          goto LABEL_30;
        *(_BYTE *)(a1 + 212) = -50;
        v7 = *(_QWORD *)(a1 + 200);
        v8 = *(void **)v7;
        v9 = *(_QWORD *)(v7 + 8);
        if ( *(_QWORD *)(v7 + 16) < (unsigned __int64)(v9 + 1) )
        {
          v8 = qvector_reserve(*(_QWORD *)(a1 + 200), v8, v9 + 1, 1u);
          *(_QWORD *)v7 = v8;
          v9 = *(_QWORD *)(v7 + 8);
        }
        *((_BYTE *)v8 + v9) = -50;
        break;
      case 3:
        if ( (*(_BYTE *)(a1 + 212) & 0xFD) == 0xD0 )
          goto LABEL_30;
        *(_BYTE *)(a1 + 212) = -48;
        v7 = *(_QWORD *)(a1 + 200);
        v15 = *(void **)v7;
        v16 = *(_QWORD *)(v7 + 8);
        if ( *(_QWORD *)(v7 + 16) < (unsigned __int64)(v16 + 1) )
        {
          v15 = qvector_reserve(*(_QWORD *)(a1 + 200), v15, v16 + 1, 1u);
          *(_QWORD *)v7 = v15;
          v16 = *(_QWORD *)(v7 + 8);
        }
        *((_BYTE *)v15 + v16) = -48;
        break;
      case 4:
        v2 -= v6[v2 + 1] == 0;
        goto LABEL_30;
      case 5:
      case 6:
      case 8:
      case 10:
        goto LABEL_30;
      case 7:
        v12 = *(unsigned __int8 *)(a1 + 212);
        if ( v12 == 168 || v12 == 191 )
          goto LABEL_30;
        *(_BYTE *)(a1 + 212) = -65;
        v7 = *(_QWORD *)(a1 + 200);
        v13 = *(void **)v7;
        v14 = *(_QWORD *)(v7 + 8);
        if ( *(_QWORD *)(v7 + 16) < (unsigned __int64)(v14 + 1) )
        {
          v13 = qvector_reserve(*(_QWORD *)(a1 + 200), v13, v14 + 1, 1u);
          *(_QWORD *)v7 = v13;
          v14 = *(_QWORD *)(v7 + 8);
        }
        *((_BYTE *)v13 + v14) = -65;
        break;
      case 9:
        if ( *(_BYTE *)(a1 + 212) == 0xD3 )
          goto LABEL_30;
        *(_BYTE *)(a1 + 212) = -47;
        v7 = *(_QWORD *)(a1 + 200);
        v17 = *(void **)v7;
        v18 = *(_QWORD *)(v7 + 8);
        if ( *(_QWORD *)(v7 + 16) < (unsigned __int64)(v18 + 1) )
        {
          v17 = qvector_reserve(*(_QWORD *)(a1 + 200), v17, v18 + 1, 1u);
          *(_QWORD *)v7 = v17;
          v18 = *(_QWORD *)(v7 + 8);
        }
        *((_BYTE *)v17 + v18) = -47;
        break;
      default:
        goto LABEL_14;
    }
    ++*(_QWORD *)(v7 + 8);
    ++*(_DWORD *)(a1 + 208);
  }
  else
  {
    v10 = sub_100033A60(*(_QWORD **)(a1 + 104), v4);
    if ( v10 != -1 && *(_DWORD *)(*(_QWORD *)(**(_QWORD **)(a1 + 104) + 8 * v10) + 24LL) <= v2 )
    {
LABEL_14:
      set_error_string(0, v4);
      return set_qerrno();
    }
  }
LABEL_30:
  v19 = v2 + 1;
  v20 = *(void **)(a1 + 320);
  v21 = *(_QWORD *)(a1 + 328);
  if ( *(_QWORD *)(a1 + 336) < (unsigned __int64)(v21 + 1) )
  {
    v20 = qvector_reserve(a1 + 320, v20, v21 + 1, 2u);
    *(_QWORD *)(a1 + 320) = v20;
    v21 = *(_QWORD *)(a1 + 328);
  }
  *((_WORD *)v20 + v21) = v19;
  ++*(_QWORD *)(a1 + 328);
  return 0;
}
