__int64 __fastcall sub_B7CEC0(__int64 a1)
{
  unsigned __int64 v2; // rbp
  __int64 *v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  _QWORD *v6; // rbx
  _QWORD *v7; // rax
  _QWORD *v9; // rax
  unsigned __int64 v10; // rax
  _QWORD *v11; // rax
  __int64 v12; // rax
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rax
  __int64 v15; // rax
  unsigned __int64 v16; // rax

  v2 = a1;
  v3 = (__int64 *)sub_B73ED0(a1);
  if ( v3 && ((*v3 >> 1) & 3) != 1 )
  {
    v9 = (_QWORD *)sub_B73ED0(a1);
    v2 = (unsigned __int64)v9;
    if ( v9 )
      v2 = *v9 & 0xFFFFFFFFFFFFFFF8LL;
    while ( 1 )
    {
      v11 = (_QWORD *)sub_B73ED0(v2);
      if ( !v11 )
        break;
      v10 = *v11 & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v10 )
        break;
      v2 = v10;
    }
  }
  if ( (*(_BYTE *)(v2 + 28) & 0x7Fu) - 41 <= 1 && (*(_BYTE *)(v2 + 140) & 5) != 0 )
  {
    v12 = *(_QWORD *)(v2 + 112);
    if ( v12 )
    {
      v6 = (_QWORD *)(v12 & 0xFFFFFFFFFFFFFFF8LL);
      if ( (v12 & 4) != 0 )
      {
        if ( v6 )
        {
          v13 = *v6 & 0xFFFFFFFFFFFFFFF8LL;
          if ( v13 )
          {
            while ( 1 )
            {
              v15 = *(_QWORD *)(*(_QWORD *)(v13 + 80) + 152LL);
              if ( (v15 & 4) != 0 )
                break;
              v14 = v15 & 0xFFFFFFFFFFFFFFF8LL;
              if ( !v14 )
                break;
              v13 = v14;
            }
            return sub_B7CD20(v13);
          }
        }
      }
      else if ( v6 )
      {
        while ( (*(_BYTE *)sub_BC3640(v6) & 4) == 0 )
        {
          v16 = *(_QWORD *)sub_BC3640(v6) & 0xFFFFFFFFFFFFFFF8LL;
          if ( !v16 )
            break;
          v6 = (_QWORD *)v16;
        }
        return sub_B7CD20(v6[6]);
      }
    }
  }
  v4 = sub_B8C330(v2);
  v5 = sub_A852C0(v4, v2);
  if ( v5 )
  {
    if ( (v5 & 4) == 0 )
    {
      v6 = (_QWORD *)(v5 & 0xFFFFFFFFFFFFFFF8LL);
      if ( (v5 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
      {
        while ( (*(_BYTE *)sub_BC3640(v6) & 4) == 0 )
        {
          v7 = (_QWORD *)sub_BC3640(v6);
          if ( (*v7 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
            break;
          v6 = (_QWORD *)(*v7 & 0xFFFFFFFFFFFFFFF8LL);
        }
        return sub_B7CD20(v6[6]);
      }
    }
  }
  if ( v2 != a1 )
  {
    v13 = v2;
    return sub_B7CD20(v13);
  }
  return 0;
}
