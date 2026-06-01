__int64 __fastcall ClpModel::gutsOfScaling(ClpModel *this)
{
  __int64 v1; // rax
  int v2; // esi
  __int64 v3; // rdx
  int v4; // ecx
  double *v5; // rax
  double v6; // xmm0_8
  __int64 v7; // rax
  int v8; // edx
  double v9; // xmm1_8
  double *v10; // rcx
  double v11; // xmm0_8
  double *v12; // rcx
  __int64 v13; // rax
  int v14; // edx
  double v15; // xmm1_8
  double *v16; // rcx
  double v17; // xmm0_8
  double *v18; // rcx

  v1 = *((_QWORD *)this + 21);
  v2 = *((_DWORD *)this + 26);
  if ( v1 )
  {
    if ( v2 <= 0 )
      goto LABEL_12;
    v3 = 0;
    v4 = 0;
    while ( 1 )
    {
      v5 = (double *)(v3 + v1);
      ++v4;
      v6 = *v5 / *(double *)(*((_QWORD *)this + 28) + v3);
      v3 += 8;
      *v5 = v6;
      v2 = *((_DWORD *)this + 26);
      if ( v2 <= v4 )
        break;
      v1 = *((_QWORD *)this + 21);
    }
  }
  if ( v2 > 0 )
  {
    v7 = 0;
    v8 = 0;
    do
    {
      while ( 1 )
      {
        v9 = *(double *)(*((_QWORD *)this + 28) + v7);
        *(double *)(v7 + *((_QWORD *)this + 14)) = *(double *)(v7 + *((_QWORD *)this + 14)) * v9;
        *(double *)(v7 + *((_QWORD *)this + 16)) = 1.0 / v9 * *(double *)(v7 + *((_QWORD *)this + 16));
        v10 = (double *)(v7 + *((_QWORD *)this + 18));
        v11 = *v10 <= -1.0e30 ? -1.797693134862316e308 : *v10 * v9;
        *v10 = v11;
        v12 = (double *)(v7 + *((_QWORD *)this + 19));
        if ( *v12 >= 1.0e30 )
          break;
        ++v8;
        v7 += 8;
        *v12 = v9 * *v12;
        if ( *((_DWORD *)this + 26) <= v8 )
          goto LABEL_12;
      }
      *v12 = 1.797693134862316e308;
      ++v8;
      v7 += 8;
    }
    while ( *((_DWORD *)this + 26) > v8 );
  }
LABEL_12:
  if ( *((int *)this + 27) > 0 )
  {
    v13 = 0;
    v14 = 0;
    do
    {
      while ( 1 )
      {
        v15 = *(double *)(*((_QWORD *)this + 31) + v13);
        *(double *)(v13 + *((_QWORD *)this + 15)) = *(double *)(v13 + *((_QWORD *)this + 15)) * v15;
        *(double *)(v13 + *((_QWORD *)this + 17)) = *(double *)(v13 + *((_QWORD *)this + 17))
                                                  * *(double *)(*((_QWORD *)this + 29) + v13);
        v16 = (double *)(v13 + *((_QWORD *)this + 22));
        v17 = *v16 <= -1.0e30 ? -1.797693134862316e308 : *v16 * v15;
        *v16 = v17;
        v18 = (double *)(v13 + *((_QWORD *)this + 23));
        if ( *v18 >= 1.0e30 )
          break;
        ++v14;
        v13 += 8;
        *v18 = *v18 * v15;
        if ( v14 >= *((_DWORD *)this + 27) )
          goto LABEL_18;
      }
      *v18 = 1.797693134862316e308;
      ++v14;
      v13 += 8;
    }
    while ( *((_DWORD *)this + 27) > v14 );
  }
LABEL_18:
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 24) + 232LL))(
    *((_QWORD *)this + 24),
    *((_QWORD *)this + 28),
    *((_QWORD *)this + 29));
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 20) + 48LL))(
           *((_QWORD *)this + 20),
           *((_QWORD *)this + 29));
}

