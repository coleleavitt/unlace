__int64 __fastcall ClpSimplexOther::setInDual(ClpSimplexOther *this, ClpSimplex *a2)
{
  int v2; // r10d
  int v3; // eax
  __int64 v4; // r12
  __int64 v5; // r11
  __int64 v6; // rbp
  int v7; // r8d
  __int64 v8; // rcx
  _BYTE *v9; // rdx
  char v10; // r9
  _BYTE *v11; // rax
  double v12; // xmm0_8
  double v13; // xmm1_8
  __int64 v14; // rdx
  double v15; // xmm0_8
  double v16; // xmm1_8
  _BYTE *v17; // r8
  char v18; // cl

  v2 = 0;
  v3 = *((_DWORD *)this + 27);
  v4 = *((_QWORD *)a2 + 15);
  v5 = *((_QWORD *)a2 + 22);
  v6 = *((_QWORD *)a2 + 23);
  v7 = *((_DWORD *)this + 26);
  if ( v3 > 0 )
  {
    v8 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v10 = *(_BYTE *)(*((_QWORD *)this + 33) + v8) & 7;
        if ( (unsigned __int8)(v10 - 2) > 1u && v10 != 5 )
          break;
        ++v2;
        v11 = (_BYTE *)(*((_QWORD *)a2 + 33) + (int)v8 + *((_DWORD *)a2 + 27));
        *v11 = *v11 & 0xF8 | 1;
        v12 = *(double *)(*((_QWORD *)this + 23) + 8 * v8);
        if ( v12 >= 1.0e20 )
          goto LABEL_5;
        v13 = *(double *)(*((_QWORD *)this + 22) + 8 * v8);
        if ( v13 <= -1.0e20 )
          goto LABEL_5;
        if ( fabs(v12) > fabs(v13) )
          *(_BYTE *)(*((_QWORD *)a2 + 33) + v7) = *(_BYTE *)(*((_QWORD *)a2 + 33) + v7) & 0xF8 | 2;
        else
          *(_BYTE *)(*((_QWORD *)a2 + 33) + v7) = *(_BYTE *)(*((_QWORD *)a2 + 33) + v7) & 0xF8 | 3;
        v3 = *((_DWORD *)this + 27);
        ++v7;
        if ( (int)++v8 >= v3 )
        {
LABEL_14:
          v7 = *((_DWORD *)this + 26);
          goto LABEL_15;
        }
      }
      if ( !v10 )
      {
        ++v2;
        v9 = (_BYTE *)(*((_QWORD *)a2 + 33) + *((_DWORD *)a2 + 27) + (int)v8);
        *v9 = *v9 & 0xF8 | 1;
LABEL_5:
        v3 = *((_DWORD *)this + 27);
      }
      if ( (int)++v8 >= v3 )
        goto LABEL_14;
    }
  }
LABEL_15:
  if ( v7 > 0 )
  {
    v14 = 0;
    do
    {
      v17 = (_BYTE *)(v14 + *((_QWORD *)a2 + 33));
      v18 = *v17 & 0xF8;
      if ( (*(_BYTE *)(*((_QWORD *)this + 33) + (int)v14 + v3) & 7) == 1 )
      {
        if ( *(double *)(v5 + 8 * v14) == 0.0 )
        {
          *v17 = v18 | 3;
        }
        else if ( *(double *)(v6 + 8 * v14) == 0.0 )
        {
          *v17 = v18 | 2;
        }
        else
        {
          *v17 = v18;
          *(_QWORD *)(v4 + 8 * v14) = 0;
        }
      }
      else
      {
        ++v2;
        *v17 = v18 | 1;
      }
      v15 = *(double *)(*((_QWORD *)this + 18) + 8 * v14);
      if ( v15 < -1.0e20 )
      {
        v16 = *(double *)(*((_QWORD *)this + 19) + 8 * v14);
        if ( v16 > 1.0e20 && v15 != v16 )
        {
          puts("can't handle ranges yet");
          abort();
        }
      }
      ++v14;
      v3 = *((_DWORD *)this + 27);
    }
    while ( *((_DWORD *)this + 26) > (int)v14 );
  }
  if ( v2 != v3 )
  {
    puts("Bad basis - ranges - coding needed ??");
    abort();
  }
  return 0;
}

