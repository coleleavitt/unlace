void __fastcall sub_F19310(__int64 *a1, __int64 a2)
{
  __int64 v3; // r12
  int v4; // r13d
  __int64 v5; // rax
  _BOOL4 v6; // r13d
  __int64 v7; // r12
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  _DWORD *v11; // rax
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  __int16 v14; // cx
  __int64 v15; // rdx
  _DWORD *v16; // rsi
  int v17; // r12d
  unsigned __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // r13
  __int64 v21; // rax
  __int64 v22; // r12
  __int64 v23; // rsi
  __int64 v24; // r12
  _BOOL4 v25; // r13d
  __int64 v26; // rax

  v3 = a1[1];
  v4 = (unsigned __int8)sub_C95850(a2);
  v5 = *(unsigned int *)(v3 + 8);
  if ( v5 + 1 > (unsigned __int64)*(unsigned int *)(v3 + 12) )
  {
    sub_2237220(v3, v3 + 16, v5 + 1, 4);
    v5 = *(unsigned int *)(v3 + 8);
  }
  *(_DWORD *)(*(_QWORD *)v3 + 4 * v5) = v4;
  ++*(_DWORD *)(v3 + 8);
  if ( !(unsigned __int8)sub_C95850(a2) )
  {
    sub_F15AA0(a1, (_WORD *)a2);
    v24 = a1[1];
    v25 = (*(_DWORD *)a2 & 0x100000) != 0;
    v26 = *(unsigned int *)(v24 + 8);
    if ( v26 + 1 > (unsigned __int64)*(unsigned int *)(v24 + 12) )
    {
      sub_2237220(a1[1], v24 + 16, v26 + 1, 4);
      v26 = *(unsigned int *)(v24 + 8);
    }
    *(_DWORD *)(*(_QWORD *)v24 + 4 * v26) = v25;
    ++*(_DWORD *)(v24 + 8);
  }
  v6 = 0;
  (*(void (__fastcall **)(__int64 *, _QWORD))(*a1 + 56))(a1, *(_QWORD *)(a2 + 40));
  (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*a1 + 40))(a1, *(_QWORD *)(a2 + 16), 0);
  v7 = a1[1];
  if ( (*(_QWORD *)a2 & 0x80000LL) != 0 )
  {
    v8 = 8LL * *(unsigned int *)(a2 + 4);
    v9 = a2 + v8 + 64;
    v10 = a2 + v8 + 80;
    v11 = (_DWORD *)v9;
    if ( (*(_WORD *)a2 & 0x1FF) != 0x18 )
      v11 = (_DWORD *)v10;
    v6 = *v11 != 0;
  }
  v12 = *(unsigned int *)(v7 + 8);
  if ( v12 + 1 > (unsigned __int64)*(unsigned int *)(v7 + 12) )
  {
    sub_2237220(a1[1], v7 + 16, v12 + 1, 4);
    v12 = *(unsigned int *)(v7 + 8);
  }
  *(_DWORD *)(*(_QWORD *)v7 + 4 * v12) = v6;
  ++*(_DWORD *)(v7 + 8);
  v13 = *(_QWORD *)a2;
  if ( (*(_QWORD *)a2 & 0x80000) != 0 )
  {
    v14 = *(_WORD *)a2 & 0x1FF;
    v15 = 8LL * *(unsigned int *)(a2 + 4);
    v16 = (_DWORD *)(a2 + v15 + 80);
    if ( v14 == 24 )
      v16 = (_DWORD *)(a2 + v15 + 64);
    if ( *v16 )
    {
      v17 = 0;
      if ( (v13 & 0x80000) != 0 )
      {
        v18 = v13 >> 16;
        v17 = v16[3];
        if ( (v18 & 8) == 0 )
          goto LABEL_30;
      }
      else
      {
        v18 = v13 >> 16;
        if ( (v18 & 8) == 0 )
          goto LABEL_30;
      }
      if ( v14 == 24 )
      {
        if ( *(_DWORD *)(a2 + v15 + 64) )
        {
          v19 = v15 + 16LL * ((v18 & 8) != 0) + 64 + a2;
LABEL_20:
          v20 = a1[1];
          v21 = *(unsigned int *)(v20 + 8);
          if ( v21 + 1 > (unsigned __int64)*(unsigned int *)(v20 + 12) )
          {
            sub_2237220(a1[1], v20 + 16, v21 + 1, 4);
            v21 = *(unsigned int *)(v20 + 8);
          }
          *(_DWORD *)(*(_QWORD *)v20 + 4 * v21) = v17;
          ++*(_DWORD *)(v20 + 8);
          if ( v17 )
          {
            v22 = v19 + 32 * ((unsigned int)(v17 - 1) + 1LL);
            do
            {
              v23 = v19;
              v19 += 32;
              sub_F18B10(a1, v23);
            }
            while ( v22 != v19 );
          }
          return;
        }
      }
      else if ( *(_DWORD *)(a2 + v15 + 80) )
      {
        v19 = v15 + 16LL * ((v18 & 8) != 0) + 80 + a2;
        goto LABEL_20;
      }
LABEL_30:
      v19 = 0;
      goto LABEL_20;
    }
  }
}
