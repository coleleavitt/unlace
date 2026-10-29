__int64 __fastcall sub_788300(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rbp
  _QWORD *v4; // rax
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  _QWORD *v8; // rbx
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  _QWORD *v19; // rax
  _QWORD *i; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx

  v3 = a1;
  v4 = (_QWORD *)sub_77D020(a1);
  if ( v4 && (*v4 & 6LL) != 2 )
  {
    v3 = 0;
    v19 = (_QWORD *)sub_77D020(a1);
    if ( v19 )
      v3 = *v19 & 0xFFFFFFFFFFFFFFF8LL;
    for ( i = (_QWORD *)sub_77D020(v3); i; i = (_QWORD *)sub_77D020(v21) )
    {
      v21 = *i & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v21 )
        break;
      v3 = v21;
    }
  }
  if ( (*(_BYTE *)(v3 + 28) & 0x7Fu) - 39 <= 1 && (*(_BYTE *)(v3 + 140) & 5) != 0 )
  {
    v7 = *(_QWORD *)(v3 + 112);
    if ( v7 )
    {
      v8 = (_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF8LL);
      if ( (v7 & 4) != 0 )
      {
        if ( v8 )
        {
          v9 = *v8 & 0xFFFFFFFFFFFFFFF8LL;
          if ( v9 )
          {
            while ( 1 )
            {
              v10 = *(_QWORD *)(*(_QWORD *)(v9 + 80) + 152LL);
              if ( (v10 & 4) != 0 || v10 <= 7 )
                break;
              v9 = v10 & 0xFFFFFFFFFFFFFFF8LL;
            }
            return sub_788150(v9);
          }
        }
      }
      else if ( v8 )
      {
        while ( (*(_BYTE *)sub_7D2DE0(v8, a2, v5, v6) & 4) == 0 )
        {
          v22 = *(_QWORD *)sub_7D2DE0(v8, a2, v23, v24);
          v5 = v22 & 0xFFFFFFFFFFFFFFF8LL;
          if ( v22 <= 7 )
            break;
          v8 = (_QWORD *)(v22 & 0xFFFFFFFFFFFFFFF8LL);
        }
        return sub_788150(v8[6]);
      }
    }
  }
  v11 = sub_798D40(v3);
  v12 = sub_6BB950(v11, v3);
  if ( v12 )
  {
    if ( (v12 & 4) == 0 )
    {
      v8 = (_QWORD *)(v12 & 0xFFFFFFFFFFFFFFF8LL);
      if ( (v12 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
      {
        while ( (*(_BYTE *)sub_7D2DE0(v8, v3, v13, v14) & 4) == 0 )
        {
          v15 = *(_QWORD *)sub_7D2DE0(v8, v3, v16, v17);
          v13 = v15 & 0xFFFFFFFFFFFFFFF8LL;
          if ( v15 <= 7 )
            break;
          v8 = (_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF8LL);
        }
        return sub_788150(v8[6]);
      }
    }
  }
  if ( v3 != a1 )
  {
    v9 = v3;
    return sub_788150(v9);
  }
  return 0;
}

