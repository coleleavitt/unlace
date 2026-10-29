__int64 __fastcall ClpQuadraticObjective::operator=(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  void *v5; // rdi
  void *v6; // rdi
  unsigned __int64 v7; // rdi
  bool v8; // zf
  int v9; // eax
  _QWORD *v10; // rax
  _QWORD *v11; // r9
  __int64 *v12; // rcx
  _QWORD *v13; // rdx
  __int64 v14; // xmm0_8
  __int64 v15; // rdx
  _QWORD *v16; // rax
  int v17; // esi
  _QWORD *v18; // r8
  __int64 *v19; // rcx
  _QWORD *v20; // rdx
  __int64 v21; // xmm0_8
  __int64 v22; // rdx
  CoinPackedMatrix *v23; // r12

  if ( a1 == a2 )
    return a1;
  *(_BYTE *)(a1 + 56) = *(_BYTE *)(a2 + 56);
  v4 = *(_QWORD *)(a1 + 24);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  v5 = *(void **)(a1 + 32);
  *(_QWORD *)(a1 + 24) = 0;
  if ( v5 )
    operator delete[](v5);
  v6 = *(void **)(a1 + 40);
  if ( v6 )
    operator delete[](v6);
  ClpObjective::operator=(a1, a2);
  v7 = *(int *)(a2 + 52);
  v8 = *(_QWORD *)(a2 + 32) == 0;
  v9 = *(_DWORD *)(a2 + 48);
  *(_DWORD *)(a1 + 52) = v7;
  *(_DWORD *)(a1 + 48) = v9;
  if ( v8 )
  {
    *(_QWORD *)(a1 + 32) = 0;
  }
  else
  {
    if ( v7 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_47;
    v10 = (_QWORD *)operator new[](8 * v7);
    v7 = *(int *)(a1 + 52);
    *(_QWORD *)(a1 + 32) = v10;
    v11 = *(_QWORD **)(a2 + 32);
    if ( (_DWORD)v7 && v11 != v10 )
    {
      if ( (int)v7 >> 3 > 0 )
      {
        v12 = *(__int64 **)(a2 + 32);
        v13 = v10;
        do
        {
          v14 = *v12;
          v13 += 8;
          v12 += 8;
          *(v13 - 8) = v14;
          *(v13 - 7) = *(v12 - 7);
          *(v13 - 6) = *(v12 - 6);
          *(v13 - 5) = *(v12 - 5);
          *(v13 - 4) = *(v12 - 4);
          *(v13 - 3) = *(v12 - 3);
          *(v13 - 2) = *(v12 - 2);
          *(v13 - 1) = *(v12 - 1);
        }
        while ( v13 != &v10[8 * (unsigned int)(((int)v7 >> 3) - 1) + 8] );
        v15 = (((int)v7 >> 3) - 1 + 1LL) << 6;
        v11 = (_QWORD *)((char *)v11 + v15);
        v10 = (_QWORD *)((char *)v10 + v15);
      }
      switch ( (int)v7 % 8 )
      {
        case 1:
          goto LABEL_46;
        case 2:
          goto LABEL_45;
        case 3:
          goto LABEL_44;
        case 4:
          goto LABEL_43;
        case 5:
          goto LABEL_42;
        case 6:
          goto LABEL_41;
        case 7:
          v10[6] = v11[6];
LABEL_41:
          v10[5] = v11[5];
LABEL_42:
          v10[4] = v11[4];
LABEL_43:
          v10[3] = v11[3];
LABEL_44:
          v10[2] = v11[2];
LABEL_45:
          v10[1] = v11[1];
LABEL_46:
          *v10 = *v11;
          break;
        default:
          break;
      }
    }
  }
  if ( !*(_QWORD *)(a2 + 40) )
  {
    *(_QWORD *)(a1 + 40) = 0;
    goto LABEL_28;
  }
  if ( v7 > 0xFFFFFFFFFFFFFFFLL )
LABEL_47:
    __cxa_throw_bad_array_new_length();
  v16 = (_QWORD *)operator new[](8 * v7);
  v17 = *(_DWORD *)(a1 + 52);
  *(_QWORD *)(a1 + 40) = v16;
  v18 = *(_QWORD **)(a2 + 40);
  if ( v17 && v18 != v16 )
  {
    if ( v17 >> 3 > 0 )
    {
      v19 = *(__int64 **)(a2 + 40);
      v20 = v16;
      do
      {
        v21 = *v19;
        v20 += 8;
        v19 += 8;
        *(v20 - 8) = v21;
        *(v20 - 7) = *(v19 - 7);
        *(v20 - 6) = *(v19 - 6);
        *(v20 - 5) = *(v19 - 5);
        *(v20 - 4) = *(v19 - 4);
        *(v20 - 3) = *(v19 - 3);
        *(v20 - 2) = *(v19 - 2);
        *(v20 - 1) = *(v19 - 1);
      }
      while ( v20 != &v16[8 * (unsigned int)((v17 >> 3) - 1) + 8] );
      v22 = ((v17 >> 3) - 1 + 1LL) << 6;
      v18 = (_QWORD *)((char *)v18 + v22);
      v16 = (_QWORD *)((char *)v16 + v22);
    }
    switch ( v17 % 8 )
    {
      case 1:
        goto LABEL_38;
      case 2:
        goto LABEL_37;
      case 3:
        goto LABEL_36;
      case 4:
        goto LABEL_35;
      case 5:
        goto LABEL_34;
      case 6:
        goto LABEL_33;
      case 7:
        v16[6] = v18[6];
LABEL_33:
        v16[5] = v18[5];
LABEL_34:
        v16[4] = v18[4];
LABEL_35:
        v16[3] = v18[3];
LABEL_36:
        v16[2] = v18[2];
LABEL_37:
        v16[1] = v18[1];
LABEL_38:
        v8 = *(_QWORD *)(a2 + 24) == 0;
        *v16 = *v18;
        if ( v8 )
          goto LABEL_31;
        goto LABEL_29;
      default:
        break;
    }
  }
LABEL_28:
  if ( *(_QWORD *)(a2 + 24) )
  {
LABEL_29:
    v23 = (CoinPackedMatrix *)operator new(0x58u);
    CoinPackedMatrix::CoinPackedMatrix(v23, *(const CoinPackedMatrix **)(a2 + 24));
    *(_QWORD *)(a1 + 24) = v23;
    return a1;
  }
LABEL_31:
  *(_QWORD *)(a1 + 24) = 0;
  return a1;
}

