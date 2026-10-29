void __fastcall sub_7BC120(__int64 a1, unsigned int a2)
{
  __int64 v2; // r13
  __int64 v4; // rdi
  __int64 v5; // rax
  unsigned int v6; // r15d
  char v7; // cl
  unsigned int *v8; // rbp
  __int64 v9; // rax
  unsigned int *v10; // r15
  unsigned int v11; // r10d
  __int64 v12; // r14
  __int64 v13; // r12
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 (__fastcall *v16)(); // rcx
  __int64 (__fastcall *v17)(_QWORD); // rcx
  __int64 v18; // rcx
  unsigned int v19; // esi
  int v20; // eax
  char v21; // al
  unsigned int v22; // [rsp+8h] [rbp-40h]

  v4 = *(_QWORD *)(a1 + 792);
  if ( v4 && a2 < *(_DWORD *)(v4 - 4) )
  {
    v5 = -*(_QWORD *)(v4 + 8LL * a2);
    if ( *(__int64 *)(v4 + 8LL * a2) > 0 )
      v5 = *(_QWORD *)(v4 + 8LL * a2);
    v6 = v5;
    v7 = *(_BYTE *)(a1 + 996) | (v5 > 0xFFFFFFFFLL);
    *(_BYTE *)(a1 + 996) = v7;
    if ( (unsigned int)v5 > 1 )
    {
      v8 = *(unsigned int **)(a1 + 800);
      if ( !v8 )
        goto LABEL_22;
      v9 = *(v8 - 1);
      if ( &v8[v9] == v8 )
        goto LABEL_22;
      v22 = v6;
      v10 = &v8[v9];
LABEL_9:
      v11 = *v8;
      if ( *v8 >= *(_DWORD *)(v4 - 4) )
      {
        while ( 1 )
        {
          ++v8;
          *(_BYTE *)(a1 + 996) = v7;
          if ( v10 == v8 )
            goto LABEL_21;
LABEL_19:
          v4 = *(_QWORD *)(a1 + 792);
          v7 = *(_BYTE *)(a1 + 996);
          if ( v4 )
            goto LABEL_9;
        }
      }
      v12 = v11;
      v13 = -*(_QWORD *)(v4 + 8LL * v11);
      if ( *(__int64 *)(v4 + 8LL * v11) > 0 )
        v13 = *(_QWORD *)(v4 + 8LL * v11);
      v14 = (unsigned int)(*(_QWORD *)(v4 + 8LL * v11) >> 63) + 2 * v11;
      v15 = (unsigned int)v13 % v22;
      *(_BYTE *)(a1 + 996) = (v13 > 0xFFFFFFFFLL) | v7;
      v2 = (v14 << 32) | (unsigned int)v2;
      if ( !((unsigned int)v13 % v22) )
      {
LABEL_18:
        if ( v10 != ++v8 )
          goto LABEL_19;
LABEL_21:
        v6 = v22;
LABEL_22:
        sub_7BBD10(a1, v6);
        return;
      }
      v16 = *(__int64 (__fastcall **)())(*(_QWORD *)a1 + 544LL);
      if ( v16 == sub_7C5AC0 )
      {
        v17 = *(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)a1 + 536LL);
        if ( v17 == sub_7C55E0 )
        {
          v18 = *(_QWORD *)(a1 + 160);
          if ( v18 )
          {
            v19 = *(_DWORD *)(*(_QWORD *)(v18 + 880) + 4LL * ((unsigned int)v14 >> 1));
            if ( v19 >= *(_DWORD *)(v18 + 888) && (((unsigned __int8)v19 ^ (unsigned __int8)v14) & 1) != 0 )
              goto LABEL_18;
LABEL_26:
            *(_QWORD *)(v4 + 8 * v12) = (unsigned int)(v13 - v15);
            *(_DWORD *)(a1 + 808) -= v15;
            goto LABEL_18;
          }
          v20 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 3288LL) + 4 * v14);
        }
        else
        {
          v20 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, __int64 (__fastcall *)(_QWORD), __int64, __int64))v17)(
                  a1,
                  HIDWORD(v2),
                  (unsigned int)v15,
                  v17,
                  v14,
                  0xFFFFFFFFLL);
          LODWORD(v15) = (unsigned int)v13 % v22;
        }
        if ( v20 == -1 )
          goto LABEL_18;
        v4 = *(_QWORD *)(a1 + 792);
        goto LABEL_26;
      }
      v21 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, __int64 (__fastcall *)(), __int64, __int64))v16)(
              a1,
              HIDWORD(v2),
              (unsigned int)v15,
              v16,
              v14,
              0xFFFFFFFFLL);
      LODWORD(v15) = (unsigned int)v13 % v22;
      if ( v21 )
        goto LABEL_18;
      v4 = *(_QWORD *)(a1 + 792);
      goto LABEL_26;
    }
  }
}

