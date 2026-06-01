__int64 __fastcall CoinWarmStartPrimalDual::clone(CoinWarmStartPrimalDual *this)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // rdi
  _QWORD *v4; // rax
  int v5; // esi
  _QWORD *v6; // r8
  __int64 *v7; // rcx
  _QWORD *v8; // rdx
  __int64 v9; // xmm0_8
  __int64 v10; // rdx
  unsigned __int64 v11; // rdi
  _QWORD *v12; // rax
  int v13; // esi
  _QWORD *v14; // r8
  __int64 *v15; // rcx
  _QWORD *v16; // rdx
  __int64 v17; // xmm0_8
  __int64 v18; // rdx

  v2 = operator new(0x38u);
  v3 = *((int *)this + 4);
  *(_QWORD *)v2 = off_4D27F8;
  *(_DWORD *)(v2 + 16) = v3;
  *(_QWORD *)(v2 + 8) = &off_4D25C8;
  if ( v3 > 0xFFFFFFFFFFFFFFFLL )
    __cxa_throw_bad_array_new_length();
  v4 = (_QWORD *)operator new[](8 * v3);
  v5 = *(_DWORD *)(v2 + 16);
  *(_QWORD *)(v2 + 24) = v4;
  v6 = *((_QWORD **)this + 3);
  if ( v5 && v4 != v6 )
  {
    if ( v5 / 8 > 0 )
    {
      v7 = *((__int64 **)this + 3);
      v8 = v4;
      do
      {
        v9 = *v7;
        v8 += 8;
        v7 += 8;
        *(v8 - 8) = v9;
        *(v8 - 7) = *(v7 - 7);
        *(v8 - 6) = *(v7 - 6);
        *(v8 - 5) = *(v7 - 5);
        *(v8 - 4) = *(v7 - 4);
        *(v8 - 3) = *(v7 - 3);
        *(v8 - 2) = *(v7 - 2);
        *(v8 - 1) = *(v7 - 1);
      }
      while ( v8 != &v4[8 * (unsigned int)(v5 / 8 - 1) + 8] );
      v10 = (v5 / 8 - 1 + 1LL) << 6;
      v6 = (_QWORD *)((char *)v6 + v10);
      v4 = (_QWORD *)((char *)v4 + v10);
    }
    switch ( v5 % 8 )
    {
      case 1:
        goto LABEL_15;
      case 2:
        goto LABEL_14;
      case 3:
        goto LABEL_13;
      case 4:
        goto LABEL_12;
      case 5:
        goto LABEL_11;
      case 6:
        goto LABEL_10;
      case 7:
        v4[6] = v6[6];
LABEL_10:
        v4[5] = v6[5];
LABEL_11:
        v4[4] = v6[4];
LABEL_12:
        v4[3] = v6[3];
LABEL_13:
        v4[2] = v6[2];
LABEL_14:
        v4[1] = v6[1];
LABEL_15:
        *v4 = *v6;
        break;
      default:
        break;
    }
  }
  v11 = *((int *)this + 10);
  *(_QWORD *)(v2 + 32) = &off_4D25C8;
  *(_DWORD *)(v2 + 40) = v11;
  if ( v11 > 0xFFFFFFFFFFFFFFFLL )
    __cxa_throw_bad_array_new_length();
  v12 = (_QWORD *)operator new[](8 * v11);
  v13 = *(_DWORD *)(v2 + 40);
  *(_QWORD *)(v2 + 48) = v12;
  v14 = *((_QWORD **)this + 6);
  if ( v13 && v12 != v14 )
  {
    if ( v13 / 8 > 0 )
    {
      v15 = *((__int64 **)this + 6);
      v16 = v12;
      do
      {
        v17 = *v15;
        v16 += 8;
        v15 += 8;
        *(v16 - 8) = v17;
        *(v16 - 7) = *(v15 - 7);
        *(v16 - 6) = *(v15 - 6);
        *(v16 - 5) = *(v15 - 5);
        *(v16 - 4) = *(v15 - 4);
        *(v16 - 3) = *(v15 - 3);
        *(v16 - 2) = *(v15 - 2);
        *(v16 - 1) = *(v15 - 1);
      }
      while ( v16 != &v12[8 * (unsigned int)(v13 / 8 - 1) + 8] );
      v18 = (v13 / 8 - 1 + 1LL) << 6;
      v14 = (_QWORD *)((char *)v14 + v18);
      v12 = (_QWORD *)((char *)v12 + v18);
    }
    switch ( v13 % 8 )
    {
      case 1:
        goto LABEL_30;
      case 2:
        goto LABEL_29;
      case 3:
        goto LABEL_28;
      case 4:
        goto LABEL_27;
      case 5:
        goto LABEL_26;
      case 6:
        goto LABEL_25;
      case 7:
        v12[6] = v14[6];
LABEL_25:
        v12[5] = v14[5];
LABEL_26:
        v12[4] = v14[4];
LABEL_27:
        v12[3] = v14[3];
LABEL_28:
        v12[2] = v14[2];
LABEL_29:
        v12[1] = v14[1];
LABEL_30:
        *v12 = *v14;
        break;
      default:
        return *(_QWORD *)(*(_QWORD *)v2 - 56LL) + v2;
    }
  }
  return *(_QWORD *)(*(_QWORD *)v2 - 56LL) + v2;
}

