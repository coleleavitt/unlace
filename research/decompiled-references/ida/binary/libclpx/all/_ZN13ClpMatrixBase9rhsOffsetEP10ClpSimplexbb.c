__int64 __fastcall ClpMatrixBase::rhsOffset(ClpMatrixBase *this, ClpSimplex *a2, char a3)
{
  __int64 result; // rax
  unsigned __int64 v5; // rdi
  int v7; // r14d
  int v8; // r13d
  _QWORD *v9; // rax
  _QWORD *v10; // r12
  __int64 v11; // rsi
  _QWORD *v12; // rdi
  _QWORD *v13; // rdx
  __int64 *v14; // rcx
  __int64 v15; // r8
  __int64 v16; // xmm0_8
  __int64 v17; // rax
  int v18; // edx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // rcx

  result = *((_QWORD *)this + 1);
  if ( result )
  {
    if ( a3 || (v18 = *((_DWORD *)this + 15)) != 0 && *((_DWORD *)this + 14) + v18 <= *((_DWORD *)a2 + 77) )
    {
      v5 = *((int *)a2 + 27);
      v7 = *((_DWORD *)a2 + 26);
      v8 = *((_DWORD *)a2 + 27);
      if ( v5 > 0xFFFFFFFFFFFFFFFLL )
        __cxa_throw_bad_array_new_length();
      v9 = (_QWORD *)operator new[](8 * v5);
      v10 = v9;
      v11 = *((_QWORD *)a2 + 151);
      v12 = *((_QWORD **)a2 + 150);
      if ( v8 && v9 != v12 )
      {
        if ( v8 >> 3 > 0 )
        {
          v13 = v9;
          v14 = *((__int64 **)a2 + 150);
          v15 = (unsigned int)((v8 >> 3) - 1);
          do
          {
            v16 = *v14;
            v13 += 8;
            v14 += 8;
            *(v13 - 8) = v16;
            *(v13 - 7) = *(v14 - 7);
            *(v13 - 6) = *(v14 - 6);
            *(v13 - 5) = *(v14 - 5);
            *(v13 - 4) = *(v14 - 4);
            *(v13 - 3) = *(v14 - 3);
            *(v13 - 2) = *(v14 - 2);
            *(v13 - 1) = *(v14 - 1);
          }
          while ( &v9[8 * v15 + 8] != v13 );
          v17 = ((int)v15 + 1LL) << 6;
          v12 = (_QWORD *)((char *)v12 + v17);
          v9 = (_QWORD *)((char *)v10 + v17);
        }
        switch ( v8 % 8 )
        {
          case 1:
            goto LABEL_20;
          case 2:
            goto LABEL_19;
          case 3:
            goto LABEL_18;
          case 4:
            goto LABEL_17;
          case 5:
            goto LABEL_16;
          case 6:
            goto LABEL_15;
          case 7:
            v9[6] = v12[6];
LABEL_15:
            v9[5] = v12[5];
LABEL_16:
            v9[4] = v12[4];
LABEL_17:
            v9[3] = v12[3];
LABEL_18:
            v9[2] = v12[2];
LABEL_19:
            v9[1] = v12[1];
LABEL_20:
            *v9 = *v12;
            break;
          default:
            break;
        }
      }
      v19 = *((_QWORD *)this + 1);
      if ( v7 > 0 )
      {
        v20 = 0;
        v21 = (unsigned int)(v7 - 1) + 1LL;
        do
        {
          while ( (*(_BYTE *)(*((_QWORD *)a2 + 33) + (int)v20 + *((_DWORD *)a2 + 27)) & 7) != 1 )
          {
            *(_QWORD *)(v19 + 8 * v20) = *(_QWORD *)(v11 + 8 * v20);
            if ( v21 == ++v20 )
              goto LABEL_26;
          }
          *(_QWORD *)(v19 + 8 * v20++) = 0;
        }
        while ( v21 != v20 );
      }
LABEL_26:
      if ( v8 > 0 )
      {
        v22 = *((_QWORD *)a2 + 33);
        v23 = 0;
        do
        {
          if ( (*(_BYTE *)(v22 + v23) & 7) == 1 )
            v10[v23] = 0;
          ++v23;
        }
        while ( (unsigned int)(v8 - 1) + 1LL != v23 );
      }
      (*(void (__fastcall **)(ClpMatrixBase *, _QWORD *, __int64, double))(*(_QWORD *)this + 360LL))(
        this,
        v10,
        v19,
        -1.0);
      operator delete[](v10);
      *((_DWORD *)this + 14) = *((_DWORD *)a2 + 77);
      return *((_QWORD *)this + 1);
    }
  }
  return result;
}

