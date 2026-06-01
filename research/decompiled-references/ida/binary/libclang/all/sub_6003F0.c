__int64 __fastcall sub_6003F0(__int64 a1)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v3; // rcx
  __int64 v4; // rbp
  __int64 v6; // rdx
  unsigned __int64 v7; // rax
  _DWORD *v8; // rdx
  unsigned __int64 v9; // rax
  _QWORD *v10; // rdx
  __int64 v11; // r12
  __int64 v12; // rdi
  int v13; // eax

  v1 = *(_QWORD *)(a1 + 120);
  if ( !v1 )
  {
    v3 = 0;
    v4 = *(_QWORD *)(a1 + 96);
    v6 = *(_QWORD *)(v4 + 88);
    v7 = v6 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v6 & 1) != 0 )
    {
      if ( v7 )
        goto LABEL_6;
    }
    else if ( v7 <= 3 )
    {
      if ( v7 )
        goto LABEL_9;
    }
    else if ( (v6 & 2) != 0 )
    {
      v10 = (_QWORD *)(v6 & 0xFFFFFFFFFFFFFFFCLL);
      v11 = v10[2275];
      if ( !v11 )
      {
        *(_QWORD *)(v4 + 88) = v4 & 0xFFFFFFFFFFFFFFFALL | 1;
        if ( (v4 & 0xFFFFFFFFFFFFFFFALL) == 0 )
        {
LABEL_23:
          v9 = *(_QWORD *)(a1 + 120);
LABEL_10:
          if ( v9 > 7 )
            return *(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF8LL);
          return 0;
        }
        goto LABEL_8;
      }
      v3 = v10[274];
      v10[284] += 24LL;
      v7 = (v3 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v10[275] >= v7 + 24 && v3 )
        v10[274] = v7 + 24;
      else
        v7 = sub_5F8390((__int64)(v10 + 274), 24, 3);
      *(_QWORD *)v7 = v11;
      *(_DWORD *)(v7 + 8) = 0;
      v6 = v7 | 5;
      *(_QWORD *)(v7 + 16) = v4;
      *(_QWORD *)(v4 + 88) = v7 | 5;
      LOBYTE(v7) = v7 & 0xFA | 4;
LABEL_6:
      if ( (v7 & 4) != 0 )
      {
        v8 = (_DWORD *)(v6 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v8 )
        {
          v12 = *(_QWORD *)v8;
          v13 = *(_DWORD *)(*(_QWORD *)v8 + 12LL);
          if ( v8[2] != v13 )
          {
            v8[2] = v13;
            (*(void (__fastcall **)(__int64, __int64, _DWORD *, unsigned __int64))(*(_QWORD *)v12 + 144LL))(
              v12,
              v4,
              v8,
              v3);
            goto LABEL_23;
          }
        }
      }
LABEL_8:
      v3 = *(_QWORD *)(a1 + 120);
LABEL_9:
      v9 = v3;
      goto LABEL_10;
    }
    return 0;
  }
  if ( v1 <= 7 )
    return 0;
  else
    return *(_QWORD *)(v1 & 0xFFFFFFFFFFFFFFF8LL);
}

