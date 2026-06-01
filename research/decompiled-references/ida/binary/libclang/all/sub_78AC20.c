__int64 __fastcall sub_78AC20(__int64 a1)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rdx
  unsigned __int64 v7; // rax
  _QWORD *v8; // rdx
  __int64 v9; // rbp
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  signed __int64 v12; // rdi
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  _QWORD *v15; // rdi
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rdx
  __int64 v19; // rdi
  int v20; // eax
  __int64 v21; // rdi
  int v22; // eax
  unsigned __int64 v23; // [rsp+8h] [rbp-20h]

  if ( *(_DWORD *)(*(_QWORD *)(sub_798D40(a1) + 17288) + 340LL) == 10 )
    goto LABEL_44;
  if ( (*(_BYTE *)(a1 + 29) & 1) != 0 )
  {
    v2 = sub_79A2B0(a1);
    v3 = *(_QWORD *)v2;
    v4 = *(_QWORD *)v2 + 8LL * *(unsigned int *)(v2 + 8);
    if ( v3 < v4 )
    {
      while ( *(_WORD *)(*(_QWORD *)v3 + 32LL) != 189 )
      {
        v3 += 8LL;
        if ( v4 == v3 )
          return 0;
      }
    }
    else
    {
      if ( v3 == v4 )
        return 0;
      while ( *(_WORD *)(*(_QWORD *)v4 + 32LL) != 189 )
      {
        v4 += 8LL;
        if ( v3 == v4 )
          return 0;
      }
    }
    if ( v3 != v4 )
    {
LABEL_44:
      v5 = *(_QWORD *)(a1 + 112);
      v6 = *(_QWORD *)(v5 + 104);
      v7 = v6 & 0xFFFFFFFFFFFFFFFELL;
      if ( (v6 & 1) == 0 )
      {
        if ( v7 <= 3 )
          goto LABEL_17;
        v8 = (_QWORD *)(v6 & 0xFFFFFFFFFFFFFFFCLL);
        v9 = (__int64)v8;
        if ( (v7 & 2) == 0 )
          goto LABEL_18;
        v10 = sub_6D4E90(v8, v5);
        v7 = v10 & 0xFFFFFFFFFFFFFFFELL;
        v6 = v10 | 1;
        *(_QWORD *)(v5 + 104) = v6;
      }
      v11 = v6 & 0xFFFFFFFFFFFFFFF8LL;
      v9 = v11;
      if ( !v7 || (v7 & 4) == 0 )
        goto LABEL_18;
      if ( !v11 )
      {
LABEL_17:
        v9 = 0;
        goto LABEL_18;
      }
      v21 = *(_QWORD *)v11;
      v22 = *(_DWORD *)(*(_QWORD *)v11 + 12LL);
      if ( *(_DWORD *)(v11 + 8) != v22 )
      {
        *(_DWORD *)(v11 + 8) = v22;
        v23 = v11;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v21 + 144LL))(v21, v5);
        v11 = v23;
      }
      v9 = *(_QWORD *)(v11 + 16);
LABEL_18:
      if ( v9 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            if ( (*(_BYTE *)(v9 + 29) & 2) == 0 && *(_BYTE *)(v9 + 81) >> 5 == 1 )
              return 1;
            v12 = *(_QWORD *)(v9 + 104);
            if ( (v12 & 1) != 0 )
              return 0;
            v13 = v12 >> 1;
            if ( (v12 & 2) != 0 )
              return 0;
            v14 = v12 & 0xFFFFFFFFFFFFFFFELL;
            if ( (v12 & 1) == 0 )
              break;
LABEL_32:
            v17 = v12 & 0xFFFFFFFFFFFFFFF8LL;
            v18 = v14 & 4;
            v16 = v12 & 0xFFFFFFFFFFFFFFF8LL;
            if ( (_DWORD)v18 && v17 )
            {
              v19 = *(_QWORD *)v17;
              v20 = *(_DWORD *)(*(_QWORD *)v17 + 12LL);
              if ( *(_DWORD *)(v17 + 8) != v20 )
              {
                *(_DWORD *)(v17 + 8) = v20;
                (*(void (__fastcall **)(__int64, __int64, unsigned __int64))(*(_QWORD *)v19 + 144LL))(v19, v9, v18);
              }
              v9 = *(_QWORD *)(v17 + 16);
              goto LABEL_18;
            }
LABEL_27:
            v9 = v16;
            if ( !v16 )
              return 0;
          }
          if ( v14 <= 3 )
            return 0;
          v15 = (_QWORD *)(v12 & 0xFFFFFFFFFFFFFFFCLL);
          if ( (v13 & 1) != 0 )
          {
            v12 = sub_6D4E90(v15, v9);
            *(_QWORD *)(v9 + 104) = v12 | 1;
            v16 = 0;
            LOBYTE(v14) = v12 & 0xFE;
            if ( (v12 & 0xFFFFFFFFFFFFFFFELL) == 0 )
              goto LABEL_27;
            goto LABEL_32;
          }
          v9 = (__int64)v15;
        }
      }
    }
  }
  return 0;
}

