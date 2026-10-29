unsigned __int64 __fastcall sub_78AA30(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rbx
  __int64 v4; // rdx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // rdx
  int v11; // eax
  __int64 v12; // rdi
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rbx
  __int64 v16; // rdi
  int v17; // eax
  _QWORD *v19; // rdx
  unsigned __int64 v20; // rdx
  _QWORD *v21; // rdi
  unsigned __int64 v22; // rax
  __int64 v23; // rdi
  int v24; // eax
  unsigned __int64 v25; // [rsp+8h] [rbp-20h]

  v1 = sub_798D40(a1);
  if ( (unsigned int)sub_77B6A0(a1, v1, v2) == 1 )
  {
    v3 = *(_QWORD *)(a1 + 80);
    v4 = *(_QWORD *)(v3 + 72);
    v5 = v4 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v4 & 1) == 0 )
    {
      if ( v5 <= 3 )
        return 0;
      v19 = (_QWORD *)(v4 & 0xFFFFFFFFFFFFFFFCLL);
      v7 = (unsigned __int64)v19;
      if ( (v5 & 2) == 0 )
        goto LABEL_6;
      v20 = sub_6D4E90(v19, v3);
      v5 = v20 & 0xFFFFFFFFFFFFFFFELL;
      v4 = v20 | 1;
      *(_QWORD *)(v3 + 72) = v4;
    }
    if ( !v5 )
      return 0;
    v6 = v4 & 0xFFFFFFFFFFFFFFF8LL;
    v7 = v6;
    if ( (v5 & 4) != 0 )
    {
      if ( !v6 )
        return 0;
      v23 = *(_QWORD *)v6;
      v24 = *(_DWORD *)(*(_QWORD *)v6 + 12LL);
      if ( *(_DWORD *)(v6 + 8) != v24 )
      {
        *(_DWORD *)(v6 + 8) = v24;
        v25 = v6;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v23 + 144LL))(v23, v3);
        v6 = v25;
      }
      v7 = *(_QWORD *)(v6 + 16);
    }
    if ( v7 )
    {
LABEL_6:
      v8 = 0;
      while ( 1 )
      {
        v9 = sub_798D40(v7);
        v11 = sub_77B6A0(v7, v9, v10);
        if ( v11 == 2 )
          return 0;
        if ( !v8 && (v11 & 1) != 0 )
          v8 = v7;
        v12 = *(_QWORD *)(v7 + 72);
        if ( (v12 & 1) != 0 )
          return v8;
        v13 = v12 >> 1;
        if ( (v12 & 2) != 0 )
          return v8;
        if ( (v12 & 1) != 0 )
          break;
        if ( (v12 & 0xFFFFFFFFFFFFFFFELL) <= 3 )
          return v8;
        v21 = (_QWORD *)(v12 & 0xFFFFFFFFFFFFFFFCLL);
        if ( (v13 & 1) != 0 )
        {
          v22 = sub_6D4E90(v21, v7);
          v12 = v22 | 1;
          *(_QWORD *)(v7 + 72) = v22 | 1;
          v14 = v22 & 0xFFFFFFFFFFFFFFFELL;
          if ( !v14 )
            return v8;
LABEL_15:
          v15 = v12 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v14 & 4) != 0 )
          {
            if ( !v15 )
              return v8;
            v16 = *(_QWORD *)v15;
            v17 = *(_DWORD *)(*(_QWORD *)v15 + 12LL);
            if ( *(_DWORD *)(v15 + 8) != v17 )
            {
              *(_DWORD *)(v15 + 8) = v17;
              (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v16 + 144LL))(v16, v7);
            }
            v7 = *(_QWORD *)(v15 + 16);
          }
          else
          {
            v7 = v12 & 0xFFFFFFFFFFFFFFF8LL;
          }
          if ( !v7 )
            return v8;
        }
        else
        {
          v7 = (unsigned __int64)v21;
        }
      }
      LOBYTE(v14) = v12 & 0xFE;
      goto LABEL_15;
    }
  }
  return 0;
}

