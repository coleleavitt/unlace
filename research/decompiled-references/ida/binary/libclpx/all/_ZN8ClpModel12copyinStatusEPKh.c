void __fastcall ClpModel::copyinStatus(ClpModel *this, const unsigned __int8 *a2)
{
  const unsigned __int8 *v3; // rbp
  void *v4; // rdi
  unsigned __int8 *v5; // rax
  int v6; // esi
  bool v7; // zf
  int v8; // esi
  unsigned int v9; // edi
  __int64 v10; // rdx
  unsigned int v11; // ecx
  __int64 v12; // rdx
  const unsigned __int8 *v13; // rcx
  unsigned __int8 *v14; // rdx
  __int64 v15; // rdx

  v3 = a2;
  v4 = *((void **)this + 33);
  if ( v4 )
    operator delete[](v4);
  if ( !a2 )
  {
    *((_QWORD *)this + 33) = 0;
    return;
  }
  v5 = (unsigned __int8 *)operator new[](*((_DWORD *)this + 26) + *((_DWORD *)this + 27));
  v6 = *((_DWORD *)this + 27);
  v7 = *((_DWORD *)this + 26) + v6 == 0;
  v8 = *((_DWORD *)this + 26) + v6;
  *((_QWORD *)this + 33) = v5;
  if ( !v7 && v3 != v5 )
  {
    v9 = v8 >> 3;
    if ( v8 >> 3 <= 0 )
      goto LABEL_15;
    if ( v9 == 1 )
    {
      v14 = v5;
      v13 = v3;
    }
    else
    {
      v10 = 0;
      v11 = 0;
      do
      {
        ++v11;
        *(__m128i *)&v5[v10] = _mm_loadu_si128((const __m128i *)&v3[v10]);
        v10 += 16;
      }
      while ( v11 < v9 >> 1 );
      v12 = 8LL * (v9 & 0xFFFFFFFE);
      v13 = &v3[v12];
      v14 = &v5[v12];
      if ( v9 == (v9 & 0xFFFFFFFE) )
        goto LABEL_14;
    }
    *v14 = *v13;
    v14[1] = v13[1];
    v14[2] = v13[2];
    v14[3] = v13[3];
    v14[4] = v13[4];
    v14[5] = v13[5];
    v14[6] = v13[6];
    v14[7] = v13[7];
LABEL_14:
    v15 = 8LL * (int)(v9 - 1) + 8;
    v3 += v15;
    v5 += v15;
LABEL_15:
    switch ( v8 % 8 )
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

