__int64 __fastcall `virtual thunk to'CoinWarmStartVector<double>::clone(_QWORD *a1)
{
  char *v1; // rbp
  __int64 v2; // rbx
  unsigned __int64 v3; // rdi
  _QWORD *v4; // rax
  int v5; // esi
  _QWORD *v6; // r8
  _QWORD *v7; // rcx
  __int64 *v8; // rdx
  __int64 v9; // xmm0_8
  __int64 v10; // rdx

  v1 = (char *)a1 + *(_QWORD *)(*a1 - 32LL);
  v2 = operator new(0x18u);
  v3 = *((int *)v1 + 2);
  *(_QWORD *)v2 = &off_4D25C8;
  *(_DWORD *)(v2 + 8) = v3;
  if ( v3 > 0xFFFFFFFFFFFFFFFLL )
    __cxa_throw_bad_array_new_length();
  v4 = (_QWORD *)operator new[](8 * v3);
  v5 = *(_DWORD *)(v2 + 8);
  *(_QWORD *)(v2 + 16) = v4;
  v6 = *((_QWORD **)v1 + 2);
  if ( v5 && v4 != v6 )
  {
    if ( v5 / 8 > 0 )
    {
      v7 = v4;
      v8 = *((__int64 **)v1 + 2);
      do
      {
        v9 = *v8;
        v8 += 8;
        v7 += 8;
        *(v7 - 8) = v9;
        *(v7 - 7) = *(v8 - 7);
        *(v7 - 6) = *(v8 - 6);
        *(v7 - 5) = *(v8 - 5);
        *(v7 - 4) = *(v8 - 4);
        *(v7 - 3) = *(v8 - 3);
        *(v7 - 2) = *(v8 - 2);
        *(v7 - 1) = *(v8 - 1);
      }
      while ( v8 != &v6[8 * (unsigned int)(v5 / 8 - 1) + 8] );
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
        return *(_QWORD *)(*(_QWORD *)v2 - 56LL) + v2;
    }
  }
  return *(_QWORD *)(*(_QWORD *)v2 - 56LL) + v2;
}

