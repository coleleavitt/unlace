bool __fastcall sub_7B4800(_QWORD *a1, unsigned int **a2)
{
  unsigned int *v2; // rbx
  __int64 v3; // r13
  unsigned int *v4; // r14
  __int64 (__fastcall *v5)(_QWORD); // rax
  __int64 v6; // rsi
  __int64 v7; // rax
  unsigned int v8; // ecx
  __int64 v9; // rsi
  __int64 v10; // r12
  __int64 (__fastcall *v11)(); // rcx
  int v13; // eax

  v2 = *a2;
  v3 = -(__int64)a2[1];
  if ( *a2 )
  {
    v4 = &v2[2 * *(v2 - 1)];
    while ( v4 != v2 )
    {
      while ( 1 )
      {
        v9 = *(_QWORD *)v2;
        v10 = *v2;
        v11 = *(__int64 (__fastcall **)())(*a1 + 544LL);
        if ( v11 != sub_7C5AC0 )
          break;
        v5 = *(__int64 (__fastcall **)(_QWORD))(*a1 + 536LL);
        v6 = v9 >> 32;
        if ( v5 != sub_7C55E0 )
        {
          v13 = ((__int64 (__fastcall *)(_QWORD *, __int64, __int64 (__fastcall *)(_QWORD), _QWORD))v5)(
                  a1,
                  v6,
                  sub_7C55E0,
                  (unsigned int)v6);
LABEL_15:
          if ( v13 == -1 )
            goto LABEL_9;
          goto LABEL_8;
        }
        v7 = a1[20];
        if ( !v7 )
        {
          v13 = *(_DWORD *)(*(_QWORD *)(a1[3] + 3288LL) + 4LL * (unsigned int)v6);
          goto LABEL_15;
        }
        v8 = *(_DWORD *)(*(_QWORD *)(v7 + 880) + 4LL * ((unsigned int)v6 >> 1));
        if ( v8 >= *(_DWORD *)(v7 + 888) && (((unsigned __int8)v6 ^ (unsigned __int8)v8) & 1) != 0 )
          goto LABEL_9;
LABEL_8:
        v3 += v10;
LABEL_9:
        v2 += 2;
        if ( v4 == v2 )
          return v3 <= 0;
      }
      if ( !((unsigned __int8 (__fastcall *)(_QWORD *, unsigned __int64, __int64 (__fastcall *)(_QWORD)))v11)(
              a1,
              HIDWORD(v9),
              sub_7C55E0) )
        goto LABEL_8;
      v2 += 2;
    }
  }
  return v3 <= 0;
}

