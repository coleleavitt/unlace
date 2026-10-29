__int64 __fastcall sub_B7D8D0(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // r13
  char v4; // r14
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  __int64 v12; // rdi
  int v13; // eax
  _QWORD *v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rdx

  v2 = *(_QWORD *)(a1 + 80);
  if ( v2 )
  {
    v3 = *(_QWORD *)(a1 + 80);
    v4 = 0;
    while ( 1 )
    {
      if ( (unsigned int)sub_B74100(v3, a2) == 2 )
        return v3;
      v7 = *(_QWORD *)(v3 + 72);
      if ( (v7 & 1) != 0 )
      {
        if ( v4 )
          return 0;
        v10 = v7 & 0xFFFFFFFFFFFFFFFELL;
        goto LABEL_13;
      }
      if ( (v7 & 2) != 0 )
      {
        if ( v4 )
          return 0;
        v14 = (_QWORD *)(v7 & 0xFFFFFFFFFFFFFFFCLL);
        v4 = 1;
        if ( v14 )
        {
          v15 = v14[2295];
          if ( v15 )
          {
            v16 = v14[294];
            v14[304] += 24LL;
            v17 = (v16 + 7) & 0xFFFFFFFFFFFFFFF8LL;
            if ( v14[295] >= v17 + 24 && v16 )
            {
              v14[294] = v17 + 24;
              v18 = (v16 + 7) & 0xFFFFFFFFFFFFFFF8LL;
            }
            else
            {
              v18 = sub_986170((__int64)(v14 + 294), 24, 24, 3, v5, v6);
              v17 = v18 & 0xFFFFFFFFFFFFFFFBLL;
            }
            *(_QWORD *)v18 = v15;
            v19 = v17 | 4;
            *(_DWORD *)(v18 + 8) = 0;
            *(_QWORD *)(v18 + 16) = v3;
          }
          else
          {
            v19 = v3 & 0xFFFFFFFFFFFFFFFBLL;
          }
          v10 = v19 & 0xFFFFFFFFFFFFFFFELL;
          v7 = v10 | 1;
          *(_QWORD *)(v3 + 72) = v10 | 1;
LABEL_13:
          v8 = v7 & 0xFFFFFFFFFFFFFFF8LL;
          v4 = 1;
          v11 = v8;
          if ( v10 && (v10 & 4) != 0 && v8 )
          {
            v12 = *(_QWORD *)v8;
            v13 = *(_DWORD *)(*(_QWORD *)v8 + 12LL);
            if ( *(_DWORD *)(v11 + 8) != v13 )
            {
              *(_DWORD *)(v11 + 8) = v13;
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 152LL))(v12, v3);
            }
            v8 = *(_QWORD *)(v11 + 16);
            v4 = 1;
          }
          goto LABEL_7;
        }
      }
      else
      {
        v8 = v7 & 0xFFFFFFFFFFFFFFFCLL;
        if ( v8 )
          goto LABEL_7;
      }
      v8 = 0;
LABEL_7:
      if ( v2 != v8 )
      {
        v3 = v8;
        if ( v8 )
          continue;
      }
      return 0;
    }
  }
  return 0;
}
