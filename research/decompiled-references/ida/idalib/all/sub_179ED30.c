void __fastcall sub_179ED30(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // r14
  int v5; // r13d
  double v6; // rax
  unsigned __int64 v7; // rax
  __m128i v8; // xmm1
  int v9; // esi
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rax
  _QWORD *v12; // rbp
  _QWORD *v13; // r15
  _QWORD *v14; // rdi
  void *v15; // rdi
  void **v16; // rbp
  void **v17; // r15
  __int64 v18; // rsi
  unsigned __int64 v19; // [rsp+0h] [rbp-80h]
  double v20[2]; // [rsp+8h] [rbp-78h] BYREF
  int v21; // [rsp+18h] [rbp-68h]
  __int64 v22; // [rsp+1Ch] [rbp-64h]

  if ( a1 != a2 )
  {
    v3 = a1 + 40;
    if ( a2 != v3 )
    {
      v19 = a1 + ((a2 - 80 - a1) & 0xFFFFFFFFFFFFFFF8LL) + 80;
      do
      {
        v4 = v3 + 40;
        if ( *(_DWORD *)v3 >= *(_DWORD *)a1 )
        {
          sub_179ECA0((int *)v3);
        }
        else
        {
          v5 = *(_DWORD *)(v3 + 32);
          v21 = *(_DWORD *)v3;
          v22 = *(_QWORD *)(v3 + 4);
          v20[0] = *(double *)(v3 + 24);
          v6 = *(double *)(v3 + 16);
          *(_QWORD *)(v3 + 16) = 0;
          v20[1] = v6;
          v7 = 0xCCCCCCCCCCCCCCCDLL * ((v3 - a1) >> 3);
          if ( v3 - a1 > 0 )
          {
            *(_DWORD *)v3 = *(_DWORD *)(v3 - 40);
            for ( *(_QWORD *)(v3 + 4) = *(_QWORD *)(v3 - 36); ; *(_QWORD *)(v3 + 4) = *(_QWORD *)(v3 - 36) )
            {
              v8 = _mm_loadu_si128((const __m128i *)(v3 - 24));
              v9 = *(_DWORD *)(v3 - 8);
              *(_QWORD *)(v3 - 24) = 0;
              *(_DWORD *)(v3 + 32) = v9;
              *(__m128i *)(v3 + 16) = v8;
              if ( !--v7 )
                break;
              v3 -= 40;
              *(_DWORD *)v3 = *(_DWORD *)(v3 - 40);
            }
          }
          v10 = *(_QWORD *)(a1 + 16);
          *(_DWORD *)a1 = v21;
          *(_QWORD *)(a1 + 4) = v22;
          if ( v10 )
          {
            v11 = *(_QWORD *)(a1 + 24);
            if ( v11 )
            {
              if ( v10 < v11 || v10 > v11 + 14848 )
              {
                v12 = *(_QWORD **)(v10 + 528);
                v13 = &v12[8 * (unsigned __int64)*(unsigned int *)(v10 + 536)];
                if ( v12 != v13 )
                {
                  do
                  {
                    while ( 1 )
                    {
                      v13 -= 8;
                      v14 = (_QWORD *)v13[3];
                      if ( v14 == v13 + 5 )
                        break;
                      operator delete(v14);
                      if ( v12 == v13 )
                        goto LABEL_15;
                    }
                  }
                  while ( v12 != v13 );
LABEL_15:
                  v13 = *(_QWORD **)(v10 + 528);
                }
                if ( v13 != (_QWORD *)(v10 + 544) )
                  free(v13);
                v15 = *(void **)(v10 + 416);
                if ( v15 != (void *)(v10 + 432) )
                  free(v15);
                v16 = (void **)(v10 + 384);
                v17 = (void **)(v10 + 64);
                do
                {
                  while ( *v16 != v16 + 2 )
                  {
                    operator delete(*v16);
                    v16 -= 4;
                    if ( v17 == v16 )
                      goto LABEL_23;
                  }
                  v16 -= 4;
                }
                while ( v17 != v16 );
LABEL_23:
                operator delete((void *)v10, 0x3A0u);
              }
              else
              {
                v18 = *(unsigned int *)(v11 + 14976);
                *(_DWORD *)(v11 + 14976) = v18 + 1;
                *(_QWORD *)(v11 + 8 * v18 + 14848) = v10;
              }
            }
          }
          *(_DWORD *)(a1 + 32) = v5;
          *(__m128 *)(a1 + 16) = _mm_loadh_ps(v20);
        }
        v3 = v4;
      }
      while ( v4 != v19 );
    }
  }
}
