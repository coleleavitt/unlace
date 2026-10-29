__int64 __fastcall sub_B58FE0(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // r12
  __int64 v5; // r13
  char v6; // r15
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  unsigned __int64 v10; // rax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r14
  __int64 v14; // rdi
  int v15; // eax
  _QWORD *v16; // rax
  __int64 v17; // r14
  __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rdx

  v2 = sub_B685F0(a1);
  v3 = *(_QWORD *)(a1 + 80);
  if ( v3 )
  {
    v4 = v2;
    v5 = *(_QWORD *)(a1 + 80);
    v6 = 0;
    while ( 1 )
    {
      if ( (unsigned int)sub_B503C0(v5, v4) == 2 )
        return v5;
      v9 = *(_QWORD *)(v5 + 72);
      if ( (v9 & 1) != 0 )
      {
        if ( v6 )
          return a1;
        v12 = v9 & 0xFFFFFFFFFFFFFFFELL;
        goto LABEL_13;
      }
      if ( (v9 & 2) != 0 )
      {
        if ( v6 )
          return a1;
        v16 = (_QWORD *)(v9 & 0xFFFFFFFFFFFFFFFCLL);
        v6 = 1;
        if ( v16 )
        {
          v17 = v16[2295];
          if ( v17 )
          {
            v18 = v16[294];
            v16[304] += 24LL;
            v19 = (v18 + 7) & 0xFFFFFFFFFFFFFFF8LL;
            if ( v16[295] >= v19 + 24 && v18 )
            {
              v16[294] = v19 + 24;
              v20 = (v18 + 7) & 0xFFFFFFFFFFFFFFF8LL;
            }
            else
            {
              v20 = sub_962430((__int64)(v16 + 294), 24, 24, 3, v7, v8);
              v19 = v20 & 0xFFFFFFFFFFFFFFFBLL;
            }
            *(_QWORD *)v20 = v17;
            v21 = v19 | 4;
            *(_DWORD *)(v20 + 8) = 0;
            *(_QWORD *)(v20 + 16) = v5;
          }
          else
          {
            v21 = v5 & 0xFFFFFFFFFFFFFFFBLL;
          }
          v12 = v21 & 0xFFFFFFFFFFFFFFFELL;
          v9 = v12 | 1;
          *(_QWORD *)(v5 + 72) = v12 | 1;
LABEL_13:
          v10 = v9 & 0xFFFFFFFFFFFFFFF8LL;
          v6 = 1;
          v13 = v10;
          if ( v12 && (v12 & 4) != 0 && v10 )
          {
            v14 = *(_QWORD *)v10;
            v15 = *(_DWORD *)(*(_QWORD *)v10 + 12LL);
            if ( *(_DWORD *)(v13 + 8) != v15 )
            {
              *(_DWORD *)(v13 + 8) = v15;
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 152LL))(v14, v5);
            }
            v10 = *(_QWORD *)(v13 + 16);
            v6 = 1;
          }
          goto LABEL_7;
        }
      }
      else
      {
        v10 = v9 & 0xFFFFFFFFFFFFFFFCLL;
        if ( v10 )
          goto LABEL_7;
      }
      v10 = 0;
LABEL_7:
      if ( v3 != v10 )
      {
        v5 = v10;
        if ( v10 )
          continue;
      }
      return a1;
    }
  }
  return a1;
}

