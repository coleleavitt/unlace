unsigned __int64 __fastcall sub_6D8A00(__int64 a1, unsigned __int64 a2)
{
  _DWORD *v4; // rdi
  unsigned __int64 v5; // r13
  unsigned __int64 v6; // rax
  __int64 v7; // r12
  __int64 v8; // rdi
  unsigned __int64 v9; // rax
  _QWORD *v10; // rdi
  __int64 v11; // r14
  __int64 v12; // rdx
  __int64 v14; // rax
  int v15; // edx

  while ( 1 )
  {
    v5 = a2;
    v6 = *(_QWORD *)(*(_QWORD *)(sub_AB4240(a1, a2) + 72) + 48LL);
    a2 = v6 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v6 <= 7 || v5 == a2 )
      return v5;
    v7 = *(_QWORD *)(a2 + 104);
    v8 = *(_QWORD *)(v7 + 96);
    v9 = v8 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v8 & 1) != 0 )
    {
      if ( v9 )
        goto LABEL_3;
LABEL_5:
      if ( (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 1LL) & 4) == 0 )
        return v5;
    }
    else
    {
      if ( v9 <= 3 || (v8 & 2) == 0 )
        goto LABEL_5;
      v10 = (_QWORD *)(v8 & 0xFFFFFFFFFFFFFFFCLL);
      v11 = v10[2275];
      if ( v11 )
      {
        v12 = v10[274];
        v10[284] += 24LL;
        v9 = (v12 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v10[275] >= v9 + 24 && v12 )
          v10[274] = v9 + 24;
        else
          v9 = sub_6A76A0((__int64)(v10 + 274), 24, 3);
        *(_QWORD *)v9 = v11;
        *(_DWORD *)(v9 + 8) = 0;
        v8 = v9 | 5;
        *(_QWORD *)(v9 + 16) = v7;
        *(_QWORD *)(v7 + 96) = v9 | 5;
        LOBYTE(v9) = v9 & 0xFA | 4;
LABEL_3:
        if ( (v9 & 4) != 0 )
        {
          v4 = (_DWORD *)(v8 & 0xFFFFFFFFFFFFFFF8LL);
          if ( v4 )
          {
            v14 = *(_QWORD *)v4;
            v15 = *(_DWORD *)(*(_QWORD *)v4 + 12LL);
            if ( v4[2] != v15 )
            {
              v4[2] = v15;
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 144LL))(v14, v7);
            }
          }
        }
        goto LABEL_5;
      }
      *(_QWORD *)(v7 + 96) = v7 & 0xFFFFFFFFFFFFFFFALL | 1;
      if ( (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 1LL) & 4) == 0 )
        return v5;
    }
  }
}

