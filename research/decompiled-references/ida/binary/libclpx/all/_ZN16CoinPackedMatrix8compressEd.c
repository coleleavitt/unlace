__int64 __fastcall CoinPackedMatrix::compress(CoinPackedMatrix *this, double a2)
{
  unsigned __int64 v3; // rdi
  __int64 v4; // rax
  unsigned __int64 v5; // rdi
  int v6; // eax
  __int64 v7; // r15
  int v8; // r10d
  int v9; // edx
  int *v10; // r9
  __int64 v11; // rbx
  __int64 v12; // r13
  __int64 v13; // r12
  __int64 v14; // rax
  int v15; // ecx
  __int64 v16; // rdi
  __int64 v17; // r8
  double v18; // xmm1_8
  int v19; // esi
  int v20; // esi
  int v21; // ebx
  __int64 v22; // r11
  __int64 v23; // rbp
  _DWORD *src; // [rsp+0h] [rbp-78h]
  double *v26; // [rsp+8h] [rbp-70h]
  __int64 v27; // [rsp+18h] [rbp-60h]
  unsigned int v28; // [rsp+24h] [rbp-54h]

  v3 = *((int *)this + 17);
  if ( v3 > 0x1FFFFFFFFFFFFFFELL
    || (v4 = operator new[](4 * v3), v5 = *((int *)this + 17), src = (_DWORD *)v4, v5 > 0xFFFFFFFFFFFFFFFLL) )
  {
    __cxa_throw_bad_array_new_length();
  }
  v26 = (double *)operator new[](8 * v5);
  v6 = *((_DWORD *)this + 16);
  if ( v6 <= 0 )
  {
    v28 = 0;
  }
  else
  {
    v7 = 0;
    v28 = 0;
    do
    {
      v8 = *(_DWORD *)(*((_QWORD *)this + 7) + 4 * v7);
      v27 = *((_QWORD *)this + 7);
      v9 = *(_DWORD *)(*((_QWORD *)this + 6) + 4 * v7);
      v10 = (int *)(*((_QWORD *)this + 6) + 4 * v7);
      if ( v9 < v8 + v9 )
      {
        v11 = v9;
        v12 = *((_QWORD *)this + 4);
        v13 = *((_QWORD *)this + 5);
        v14 = v9 + 1;
        v15 = 0;
        v16 = v13 + -4 * v14 + 4LL * v9;
        v17 = v12 + -8 * v14 + 8LL * v9;
        while ( 1 )
        {
          while ( 1 )
          {
            v18 = *(double *)(v17 + 8 * v14);
            v19 = *(_DWORD *)(v16 + 4 * v14);
            if ( fabs(v18) >= a2 )
              break;
            v22 = v15++;
            v26[v22] = v18;
            src[v22] = v19;
            v20 = *v10;
            LODWORD(v22) = v14++;
            if ( *v10 + v8 <= (int)v22 )
              goto LABEL_11;
          }
          *(double *)(v12 + 8 * v11) = v18;
          *(_DWORD *)(v13 + 4 * v11) = v19;
          v20 = *v10;
          v21 = v14;
          ++v9;
          ++v14;
          if ( v21 >= v8 + *v10 )
            break;
          v11 = v9;
        }
        if ( v15 )
        {
          v11 = v9;
LABEL_11:
          v23 = v15;
          *(_DWORD *)(v27 + 4 * v7) = v9 - v20;
          v28 += v15;
          memcpy((void *)(v13 + 4 * v11), src, 4LL * v15);
          memcpy((void *)(*((_QWORD *)this + 4) + 8 * v11), v26, 8 * v23);
          v6 = *((_DWORD *)this + 16);
          goto LABEL_12;
        }
        v6 = *((_DWORD *)this + 16);
      }
LABEL_12:
      ++v7;
    }
    while ( (int)v7 < v6 );
  }
  *((_DWORD *)this + 18) -= v28;
  operator delete[](src);
  operator delete[](v26);
  return v28;
}

