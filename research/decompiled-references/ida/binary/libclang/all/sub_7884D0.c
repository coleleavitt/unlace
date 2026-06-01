__int64 __fastcall sub_7884D0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  _QWORD *v3; // r14
  __int64 v4; // rbx
  char v5; // r13
  unsigned int v6; // ebp
  signed int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rdi
  unsigned __int64 v10; // rax
  _QWORD *v11; // rdi
  _DWORD **v12; // rdi
  _DWORD **v13; // r15
  unsigned __int64 v15; // rdi
  _DWORD *v16; // rdi
  int v17; // eax

  v3 = *(_QWORD **)(a1 + 80);
  if ( !v3 )
    return 0;
  v4 = *(_QWORD *)(a1 + 80);
  v5 = 0;
  v6 = 0;
LABEL_3:
  v7 = sub_77B6A0(v4, a2, a3);
  if ( (int)v6 >= v7 )
  {
LABEL_4:
    v9 = *(_QWORD *)(v4 + 72);
    if ( (v9 & 1) == 0 )
      goto LABEL_5;
LABEL_13:
    if ( v5 )
      return v6;
    v10 = v9 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v9 & 1) != 0 )
    {
      v5 = 1;
      goto LABEL_16;
    }
    goto LABEL_22;
  }
  while ( v7 != 2 )
  {
    v9 = *(_QWORD *)(v4 + 72);
    v6 = 1;
    if ( (v9 & 1) != 0 )
      goto LABEL_13;
LABEL_5:
    if ( (v9 & 2) != 0 )
    {
      if ( v5 )
        return v6;
      v5 = 1;
      v10 = v9 & 0xFFFFFFFFFFFFFFFELL;
      if ( (v9 & 1) != 0 )
        goto LABEL_17;
LABEL_22:
      v5 = 1;
      a3 = v9 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v10 <= 3 )
        goto LABEL_31;
      v11 = (_QWORD *)(v9 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (v10 & 2) != 0 )
      {
        v5 = 1;
LABEL_27:
        v15 = sub_6D4E90(v11, v4);
        v10 = v15 & 0xFFFFFFFFFFFFFFFELL;
        v9 = v15 | 1;
        *(_QWORD *)(v4 + 72) = v9;
LABEL_16:
        if ( !v10 )
          return v6;
LABEL_17:
        v12 = (_DWORD **)(v9 & 0xFFFFFFFFFFFFFFF8LL);
        v13 = v12;
        a3 = (unsigned __int64)v12;
        if ( (v10 & 4) != 0 )
        {
          if ( !v12 )
            return v6;
          v16 = *v12;
          v17 = v16[3];
          if ( *((_DWORD *)v13 + 2) != v17 )
          {
            *((_DWORD *)v13 + 2) = v17;
            (*(void (__fastcall **)(_DWORD *, __int64, unsigned __int64))(*(_QWORD *)v16 + 144LL))(v16, v4, a3);
          }
          a3 = (unsigned __int64)v13[2];
        }
LABEL_31:
        if ( v3 == (_QWORD *)a3 || !a3 )
          return v6;
        v4 = a3;
      }
      else
      {
        if ( v3 == v11 )
          return v6;
        v4 = (__int64)v11;
        v5 = 1;
      }
      goto LABEL_3;
    }
    v10 = v9 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v9 & 1) != 0 )
      goto LABEL_16;
    if ( v10 <= 3 )
      return v6;
    v11 = (_QWORD *)(v9 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v10 & 2) != 0 )
      goto LABEL_27;
    if ( v3 == v11 )
      return v6;
    v4 = (__int64)v11;
    v7 = sub_77B6A0((__int64)v11, a2, v8);
    if ( (int)v6 >= v7 )
      goto LABEL_4;
  }
  return 2;
}

