void __fastcall sub_20FF1F0(void **a1, unsigned __int64 a2)
{
  _BYTE *v2; // rcx
  unsigned __int64 v3; // rdx
  _OWORD *v4; // rax
  __int64 v6; // r12
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  char *v10; // rax
  unsigned __int64 v11; // rdx
  char *v12; // r14
  char *v13; // rax
  char *v14; // r12
  char *v15; // r15
  char *v16; // rbx
  void *v17; // rax
  int v18; // edx
  const void *v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdi
  char *v26; // r12
  __int64 v27; // rsi
  __int64 v28; // rdi
  __int64 v30; // [rsp+8h] [rbp-40h]

  if ( a2 )
  {
    v2 = a1[1];
    if ( a2 > 0xAAAAAAAAAAAAAAABLL * (((_BYTE *)a1[2] - v2) >> 4) )
    {
      v6 = v2 - (_BYTE *)*a1;
      v7 = 0xAAAAAAAAAAAAAAABLL * (v6 >> 4);
      if ( 0x555555555555555LL - v7 < a2 )
        std::__throw_length_error("vector::_M_default_append");
      v8 = a2;
      if ( a2 < v7 )
        v8 = 0xAAAAAAAAAAAAAAABLL * (v6 >> 4);
      v9 = v7 + v8;
      if ( v9 > 0x555555555555555LL )
        v9 = 0x555555555555555LL;
      v30 = 48 * v9;
      v10 = (char *)operator new(48 * v9);
      v11 = a2;
      v12 = v10;
      v13 = &v10[v6];
      do
      {
        v13 += 48;
        *((_OWORD *)v13 - 2) = 0;
        *((_OWORD *)v13 - 1) = 0;
        *((_OWORD *)v13 - 3) = 0;
        *((_DWORD *)v13 - 2) = 0;
        *((_QWORD *)v13 - 3) = 0;
        --v11;
      }
      while ( v11 );
      v14 = (char *)a1[1];
      v15 = (char *)*a1;
      if ( v14 != *a1 )
      {
        v16 = v12;
        do
        {
          while ( 1 )
          {
            *(_DWORD *)v16 = *(_DWORD *)v15;
            *(_QWORD *)(v16 + 4) = *(_QWORD *)(v15 + 4);
            *((_DWORD *)v16 + 3) = *((_DWORD *)v15 + 3);
            v20 = *((_QWORD *)v15 + 2);
            *((_DWORD *)v16 + 10) = 0;
            *((_QWORD *)v16 + 2) = v20;
            *((_QWORD *)v16 + 3) = 0;
            *((_DWORD *)v16 + 8) = 0;
            *((_DWORD *)v16 + 9) = 0;
            operator delete(0, 0, 4);
            v25 = *((unsigned int *)v15 + 10);
            *((_DWORD *)v16 + 10) = v25;
            if ( !(_DWORD)v25 )
              break;
            v15 += 48;
            v16 += 48;
            v17 = (void *)sub_22300B0(16 * v25, 4, v21, v22, v23, v24);
            v18 = *((_DWORD *)v15 - 4);
            *((_QWORD *)v16 - 3) = v17;
            v19 = *((const void **)v15 - 3);
            *((_DWORD *)v16 - 4) = v18;
            *((_DWORD *)v16 - 3) = *((_DWORD *)v15 - 3);
            memcpy(v17, v19, 16LL * *((unsigned int *)v16 - 2));
            if ( v14 == v15 )
              goto LABEL_19;
          }
          v15 += 48;
          *((_QWORD *)v16 + 3) = 0;
          v16 += 48;
          *((_DWORD *)v16 - 4) = 0;
          *((_DWORD *)v16 - 3) = 0;
        }
        while ( v14 != v15 );
LABEL_19:
        v26 = (char *)a1[1];
        v15 = (char *)*a1;
        if ( v26 != *a1 )
        {
          do
          {
            v27 = *((unsigned int *)v15 + 10);
            v28 = *((_QWORD *)v15 + 3);
            v15 += 48;
            operator delete(v28, 16 * v27, 4);
          }
          while ( v26 != v15 );
          v15 = (char *)*a1;
        }
      }
      if ( v15 )
        operator delete(v15);
      *a1 = v12;
      a1[1] = &v12[48 * v7 + 48 * a2];
      a1[2] = &v12[v30];
    }
    else
    {
      v3 = a2;
      v4 = a1[1];
      do
      {
        v4 += 3;
        *(v4 - 2) = 0;
        *(v4 - 1) = 0;
        *(v4 - 3) = 0;
        *((_DWORD *)v4 - 2) = 0;
        *((_QWORD *)v4 - 3) = 0;
        --v3;
      }
      while ( v3 );
      a1[1] = &v2[48 * a2];
    }
  }
}
