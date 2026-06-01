void __fastcall ClpModel::copyInIntegerInformation(ClpModel *this, const char *a2)
{
  const char *v3; // rbx
  void *v4; // rdi
  char *v5; // rax
  int v6; // esi
  unsigned int v7; // edi
  __int64 v8; // rdx
  unsigned int v9; // ecx
  __int64 v10; // rdx
  const char *v11; // rcx
  char *v12; // rdx
  __int64 v13; // rdx

  v3 = a2;
  v4 = *((void **)this + 34);
  if ( v4 )
    operator delete[](v4);
  if ( !a2 )
  {
    *((_QWORD *)this + 34) = 0;
    return;
  }
  v5 = (char *)operator new[](*((int *)this + 27));
  v6 = *((_DWORD *)this + 27);
  *((_QWORD *)this + 34) = v5;
  if ( v6 && v3 != v5 )
  {
    v7 = v6 >> 3;
    if ( v6 >> 3 <= 0 )
      goto LABEL_15;
    if ( v7 == 1 )
    {
      v12 = v5;
      v11 = v3;
    }
    else
    {
      v8 = 0;
      v9 = 0;
      do
      {
        ++v9;
        *(__m128i *)&v5[v8] = _mm_loadu_si128((const __m128i *)&v3[v8]);
        v8 += 16;
      }
      while ( v9 < v7 >> 1 );
      v10 = 8LL * (v7 & 0xFFFFFFFE);
      v11 = &v3[v10];
      v12 = &v5[v10];
      if ( v7 == (v7 & 0xFFFFFFFE) )
        goto LABEL_14;
    }
    *v12 = *v11;
    v12[1] = v11[1];
    v12[2] = v11[2];
    v12[3] = v11[3];
    v12[4] = v11[4];
    v12[5] = v11[5];
    v12[6] = v11[6];
    v12[7] = v11[7];
LABEL_14:
    v13 = 8LL * (int)(v7 - 1) + 8;
    v3 += v13;
    v5 += v13;
LABEL_15:
    switch ( v6 % 8 )
    {
      case 1:
        goto LABEL_22;
      case 2:
        goto LABEL_21;
      case 3:
        goto LABEL_20;
      case 4:
        goto LABEL_19;
      case 5:
        goto LABEL_18;
      case 6:
        goto LABEL_17;
      case 7:
        v5[6] = v3[6];
LABEL_17:
        v5[5] = v3[5];
LABEL_18:
        v5[4] = v3[4];
LABEL_19:
        v5[3] = v3[3];
LABEL_20:
        v5[2] = v3[2];
LABEL_21:
        v5[1] = v3[1];
LABEL_22:
        *v5 = *v3;
        break;
      default:
        return;
    }
  }
}

