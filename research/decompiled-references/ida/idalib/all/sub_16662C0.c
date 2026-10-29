void __fastcall sub_16662C0(__int64 a1, void (__fastcall *a2)(__int64, _QWORD, void **), __int64 a3)
{
  unsigned int v4; // eax
  __m128i si128; // xmm0
  void **v6; // rbp
  _QWORD *v7; // rax
  void **v8; // r12
  void **v9; // rbx
  void **v10; // rdi
  void **v11; // rdi
  void **v12; // rbx
  void **v13; // r12
  void **v14; // rbp
  _QWORD *v15; // rax
  void **v16; // r12
  void **v17; // rbx
  void **v18; // rdi
  void **v19; // rdi
  void **v20; // rbx
  void **v21; // r12
  __int64 v22; // rdx
  __int64 v23; // rdx
  void *v24[2]; // [rsp+0h] [rbp-58h] BYREF
  int v25; // [rsp+10h] [rbp-48h]
  void *v26[2]; // [rsp+20h] [rbp-38h] BYREF
  int v27; // [rsp+30h] [rbp-28h]

  sub_168B9B0(v24, a1 + 8, 6269);
  v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 2320) + 16LL))(*(_QWORD *)(a1 + 2320));
  si128 = _mm_load_si128((const __m128i *)v24);
  v24[0] = nullptr;
  v27 = v25;
  *(__m128i *)v26 = si128;
  a2(a3, v4, v26);
  v6 = (void **)v26[0];
  if ( v26[0] )
  {
    v7 = v26[1];
    if ( v26[1] )
    {
      if ( v26[0] < v26[1] || v26[0] > (char *)v26[1] + 14848 )
      {
        v8 = *((void ***)v26[0] + 66);
        v9 = &v8[8 * (unsigned __int64)*((unsigned int *)v26[0] + 134)];
        if ( v8 != v9 )
        {
          do
          {
            while ( 1 )
            {
              v9 -= 8;
              v10 = (void **)v9[3];
              if ( v10 == v9 + 5 )
                break;
              operator delete(v10);
              if ( v8 == v9 )
                goto LABEL_7;
            }
          }
          while ( v8 != v9 );
LABEL_7:
          v9 = (void **)v6[66];
        }
        if ( v9 != v6 + 68 )
          free(v9);
        v11 = (void **)v6[52];
        if ( v11 != v6 + 54 )
          free(v11);
        v12 = v6 + 48;
        v13 = v6 + 8;
        do
        {
          while ( *v12 != v12 + 2 )
          {
            operator delete(*v12);
            v12 -= 4;
            if ( v12 == v13 )
              goto LABEL_15;
          }
          v12 -= 4;
        }
        while ( v12 != v13 );
LABEL_15:
        operator delete(v6, 0x3A0u);
      }
      else
      {
        v23 = *((unsigned int *)v26[1] + 3744);
        *((_DWORD *)v26[1] + 3744) = v23 + 1;
        v7[v23 + 1856] = v6;
      }
    }
  }
  v14 = (void **)v24[0];
  if ( v24[0] )
  {
    v15 = v24[1];
    if ( v24[1] )
    {
      if ( v24[0] < v24[1] || v24[0] > (char *)v24[1] + 14848 )
      {
        v16 = *((void ***)v24[0] + 66);
        v17 = &v16[8 * (unsigned __int64)*((unsigned int *)v24[0] + 134)];
        if ( v16 != v17 )
        {
          do
          {
            while ( 1 )
            {
              v17 -= 8;
              v18 = (void **)v17[3];
              if ( v18 == v17 + 5 )
                break;
              operator delete(v18);
              if ( v16 == v17 )
                goto LABEL_22;
            }
          }
          while ( v16 != v17 );
LABEL_22:
          v17 = (void **)v14[66];
        }
        if ( v17 != v14 + 68 )
          free(v17);
        v19 = (void **)v14[52];
        v20 = v14 + 52;
        if ( v19 != v14 + 54 )
          free(v19);
        v21 = v14 + 12;
        do
        {
          while ( 1 )
          {
            v20 -= 4;
            if ( *v20 == v20 + 2 )
              break;
            operator delete(*v20);
            if ( v20 == v21 )
            {
              operator delete(v14, 0x3A0u);
              return;
            }
          }
        }
        while ( v20 != v21 );
        operator delete(v14, 0x3A0u);
      }
      else
      {
        v22 = *((unsigned int *)v24[1] + 3744);
        *((_DWORD *)v24[1] + 3744) = v22 + 1;
        v15[v22 + 1856] = v14;
      }
    }
  }
}
