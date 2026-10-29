void __fastcall sub_F190C0(__int64 *a1, __int64 *a2)
{
  __int64 v3; // rax
  __int64 v4; // r12
  _BOOL4 v5; // r13d
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  _DWORD *v9; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  __int16 v12; // cx
  __int64 v13; // rdx
  __int64 *v14; // rsi
  int v15; // r12d
  unsigned __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // r13
  __int64 v19; // rax
  __int64 v20; // r12
  __int64 v21; // rsi
  __int64 *v22; // rax
  __int64 v23; // rsi

  sub_F15AA0(a1, a2);
  if ( *((_DWORD *)a2 + 1) != 1 )
  {
    v3 = *a1;
LABEL_3:
    (*(void (__fastcall **)(__int64 *, __int64))(v3 + 56))(a1, a2[5]);
    (*(void (__fastcall **)(__int64 *, __int64, __int64))(*a1 + 40))(a1, a2[2], 1);
    goto LABEL_4;
  }
  v22 = a2 + 10;
  if ( (*(_WORD *)a2 & 0x1FF) == 0x18 )
    v22 = a2 + 8;
  v23 = *v22;
  v3 = *a1;
  if ( (*(_BYTE *)((v23 & 0xFFFFFFFFFFFFFFF8LL) + 28) & 0x7F) != 0x45 )
    goto LABEL_3;
  (*(void (__fastcall **)(__int64 *))(v3 + 24))(a1);
LABEL_4:
  v4 = a1[1];
  v5 = 0;
  if ( (*a2 & 0x80000) != 0 )
  {
    v6 = *((unsigned int *)a2 + 1);
    v7 = (__int64)&a2[v6 + 8];
    v8 = (__int64)&a2[v6 + 10];
    v9 = (_DWORD *)v7;
    if ( (*(_WORD *)a2 & 0x1FF) != 0x18 )
      v9 = (_DWORD *)v8;
    v5 = *v9 != 0;
  }
  v10 = *(unsigned int *)(v4 + 8);
  if ( v10 + 1 > (unsigned __int64)*(unsigned int *)(v4 + 12) )
  {
    sub_2237220(a1[1], v4 + 16, v10 + 1, 4);
    v10 = *(unsigned int *)(v4 + 8);
  }
  *(_DWORD *)(*(_QWORD *)v4 + 4 * v10) = v5;
  ++*(_DWORD *)(v4 + 8);
  v11 = *a2;
  if ( (*a2 & 0x80000) != 0 )
  {
    v12 = *(_WORD *)a2 & 0x1FF;
    v13 = *((unsigned int *)a2 + 1);
    v14 = &a2[v13 + 10];
    if ( v12 == 24 )
      v14 = &a2[v13 + 8];
    if ( *(_DWORD *)v14 )
    {
      v15 = 0;
      if ( (v11 & 0x80000) != 0 )
      {
        v16 = v11 >> 16;
        v15 = *((_DWORD *)v14 + 3);
        if ( (v16 & 8) == 0 )
          goto LABEL_31;
      }
      else
      {
        v16 = v11 >> 16;
        if ( (v16 & 8) == 0 )
          goto LABEL_31;
      }
      if ( v12 == 24 )
      {
        if ( LODWORD(a2[v13 + 8]) )
        {
          v17 = (__int64)&a2[2 * ((v16 & 8) != 0) + 8 + v13];
LABEL_20:
          v18 = a1[1];
          v19 = *(unsigned int *)(v18 + 8);
          if ( v19 + 1 > (unsigned __int64)*(unsigned int *)(v18 + 12) )
          {
            sub_2237220(a1[1], v18 + 16, v19 + 1, 4);
            v19 = *(unsigned int *)(v18 + 8);
          }
          *(_DWORD *)(*(_QWORD *)v18 + 4 * v19) = v15;
          ++*(_DWORD *)(v18 + 8);
          if ( v15 )
          {
            v20 = v17 + 32 * ((unsigned int)(v15 - 1) + 1LL);
            do
            {
              v21 = v17;
              v17 += 32;
              sub_F18B10(a1, v21);
            }
            while ( v20 != v17 );
          }
          return;
        }
      }
      else if ( LODWORD(a2[v13 + 10]) )
      {
        v17 = (__int64)&a2[2 * ((v16 & 8) != 0) + 10 + v13];
        goto LABEL_20;
      }
LABEL_31:
      v17 = 0;
      goto LABEL_20;
    }
  }
}
