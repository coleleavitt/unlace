unsigned __int64 __fastcall sub_1F17E10(__int64 **a1)
{
  __int64 v1; // rbp
  __int64 v2; // rcx
  __int64 v3; // rdx
  int v4; // eax
  __int64 v5; // r14
  __int64 v6; // rbx
  __int64 v7; // rax
  int v8; // r15d
  int v9; // r13d
  __int64 v10; // rax
  unsigned __int64 v11; // rsi
  __int64 v12; // rdx
  _BYTE *v13; // rcx
  __int64 v14; // rax
  unsigned int v15; // edx
  __int64 v16; // rcx
  unsigned __int64 v17; // rax
  __int64 v18; // r13
  unsigned __int64 v19; // r12
  __int64 v20; // rbp
  void *v21; // rdi
  __int64 v23; // [rsp+0h] [rbp-188h]
  __int64 v24; // [rsp+8h] [rbp-180h]
  __int64 v25; // [rsp+18h] [rbp-170h]
  int v26; // [rsp+18h] [rbp-170h]
  _BYTE v27[16]; // [rsp+20h] [rbp-168h] BYREF
  void *v28; // [rsp+30h] [rbp-158h]
  unsigned int v29; // [rsp+38h] [rbp-150h]
  _BYTE *v30; // [rsp+40h] [rbp-148h] BYREF
  __int64 v31; // [rsp+48h] [rbp-140h]
  _BYTE v32[312]; // [rsp+50h] [rbp-138h] BYREF

  v1 = (__int64)*a1;
  v2 = *((unsigned int *)*a1 + 6);
  v3 = (*a1)[4];
  v23 = **a1;
  v4 = *((_DWORD *)*a1 + 6);
  v5 = *(_QWORD *)(v3 + 8 * v2);
  v24 = *(_QWORD *)(v3 + 8LL * (unsigned int)(v2 + 1));
  v6 = *(_QWORD *)(v3 + 8LL * (unsigned int)(v2 + 2));
  v31 = 0x800000000LL;
  v30 = v32;
  v7 = *(_QWORD *)(v3 + 8LL * (unsigned int)(v4 + 3));
  *(_DWORD *)(v1 + 24) = v2 + 4;
  v8 = v7;
  if ( (unsigned int)v7 > 8uLL )
  {
    v26 = v7;
    sub_AEAE50((__int64 *)&v30, (unsigned int)v7);
    LODWORD(v7) = v26;
  }
  v9 = 0;
  if ( (_DWORD)v7 )
  {
    do
    {
      sub_1F17D40((__int64)v27, v1);
      v10 = (unsigned int)v31;
      v11 = (unsigned int)v31 + 1LL;
      if ( v11 > HIDWORD(v31) )
      {
        if ( v30 > v27 || v27 >= &v30[32 * (unsigned int)v31] )
        {
          sub_AEAE50((__int64 *)&v30, v11);
          v12 = (__int64)v30;
          v10 = (unsigned int)v31;
          v13 = v27;
        }
        else
        {
          v25 = (__int64)v30;
          sub_AEAE50((__int64 *)&v30, v11);
          v12 = (__int64)v30;
          v10 = (unsigned int)v31;
          v13 = &v27[(_QWORD)v30 - v25];
        }
      }
      else
      {
        v12 = (__int64)v30;
        v13 = v27;
      }
      v14 = v12 + 32 * v10;
      *(_BYTE *)v14 = 0;
      *(_QWORD *)(v14 + 8) = 0;
      *(_DWORD *)(v14 + 24) = 1;
      *(_QWORD *)(v14 + 16) = 0;
      *(_BYTE *)v14 = *v13;
      *(_QWORD *)(v14 + 8) = *((_QWORD *)v13 + 1);
      v15 = *((_DWORD *)v13 + 6);
      if ( v15 > 0x40 )
      {
        sub_22056A0(v14 + 16, v13 + 16);
      }
      else
      {
        v16 = *((_QWORD *)v13 + 2);
        *(_DWORD *)(v14 + 24) = v15;
        *(_QWORD *)(v14 + 16) = v16;
      }
      LODWORD(v31) = v31 + 1;
      if ( v29 > 0x40 && v28 )
        operator delete[](v28);
      ++v9;
    }
    while ( v8 != v9 );
  }
  v17 = sub_A77930(v23, v5, v24, v6, (__int64)v30, (unsigned int)v31);
  v18 = (__int64)v30;
  v19 = v17;
  v20 = (__int64)&v30[32 * (unsigned int)v31];
  if ( v30 != (_BYTE *)v20 )
  {
    do
    {
      v20 -= 32;
      if ( *(_DWORD *)(v20 + 24) > 0x40u )
      {
        v21 = *(void **)(v20 + 16);
        if ( v21 )
          operator delete[](v21);
      }
    }
    while ( v18 != v20 );
    v20 = (__int64)v30;
  }
  if ( (_BYTE *)v20 != v32 )
    free((void *)v20);
  return v19;
}
