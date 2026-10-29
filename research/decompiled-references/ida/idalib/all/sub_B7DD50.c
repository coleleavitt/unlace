__int64 __fastcall sub_B7DD50(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // r15
  char v4; // r14
  unsigned int v5; // ebp
  __int64 result; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rbx
  __int64 v13; // rdi
  int v14; // eax
  _QWORD *v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rdx

  v2 = *(_QWORD *)(a1 + 80);
  if ( v2 )
  {
    v3 = *(_QWORD *)(a1 + 80);
    v4 = 0;
    v5 = 0;
    while ( 1 )
    {
      result = sub_B74100(v3, a2);
      if ( (int)v5 < (int)result )
      {
        if ( (_DWORD)result == 2 )
          return result;
        v5 = result;
        v9 = *(_QWORD *)(v3 + 72);
        if ( (v9 & 1) != 0 )
        {
LABEL_13:
          if ( v4 )
            return v5;
          v11 = v9 & 0xFFFFFFFFFFFFFFFELL;
          goto LABEL_15;
        }
      }
      else
      {
        v9 = *(_QWORD *)(v3 + 72);
        if ( (v9 & 1) != 0 )
          goto LABEL_13;
      }
      if ( (v9 & 2) != 0 )
      {
        if ( v4 )
          return v5;
        v15 = (_QWORD *)(v9 & 0xFFFFFFFFFFFFFFFCLL);
        v4 = 1;
        if ( v15 )
        {
          v16 = v15[2295];
          if ( v16 )
          {
            v17 = v15[294];
            v15[304] += 24LL;
            v18 = (v17 + 7) & 0xFFFFFFFFFFFFFFF8LL;
            if ( v15[295] >= v18 + 24 && v17 )
            {
              v15[294] = v18 + 24;
              v19 = (v17 + 7) & 0xFFFFFFFFFFFFFFF8LL;
            }
            else
            {
              v19 = sub_986170((__int64)(v15 + 294), 24, 24, 3, v7, v8);
              v18 = v19 & 0xFFFFFFFFFFFFFFFBLL;
            }
            *(_QWORD *)v19 = v16;
            v20 = v18 | 4;
            *(_DWORD *)(v19 + 8) = 0;
            *(_QWORD *)(v19 + 16) = v3;
          }
          else
          {
            v20 = v3 & 0xFFFFFFFFFFFFFFFBLL;
          }
          v11 = v20 & 0xFFFFFFFFFFFFFFFELL;
          v9 = v11 | 1;
          *(_QWORD *)(v3 + 72) = v11 | 1;
LABEL_15:
          v10 = v9 & 0xFFFFFFFFFFFFFFF8LL;
          v4 = 1;
          v12 = v10;
          if ( v11 && (v11 & 4) != 0 && v10 )
          {
            v13 = *(_QWORD *)v10;
            v14 = *(_DWORD *)(*(_QWORD *)v10 + 12LL);
            if ( *(_DWORD *)(v12 + 8) != v14 )
            {
              *(_DWORD *)(v12 + 8) = v14;
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 152LL))(v13, v3);
            }
            v10 = *(_QWORD *)(v12 + 16);
            v4 = 1;
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
      if ( v2 != v10 )
      {
        v3 = v10;
        if ( v10 )
          continue;
      }
      return v5;
    }
  }
  return 0;
}
