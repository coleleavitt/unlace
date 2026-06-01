void __fastcall sub_E32BB0(__int64 a1, int a2, __int64 a3, __m128 a4)
{
  __int64 v6; // rdi
  _BYTE *v7; // rax
  __int64 v8; // rdi
  _BYTE *v9; // rax
  __int64 v10; // rdi
  _BYTE *v11; // rax
  __int64 v12; // rdi
  _BYTE *v13; // rax
  __int64 v14; // rdi
  _BYTE *v15; // rax

  v6 = *(_QWORD *)(a1 + 8);
  v7 = *(_BYTE **)(v6 + 32);
  if ( (unsigned __int64)v7 < *(_QWORD *)(v6 + 24) )
  {
    *(_QWORD *)(v6 + 32) = v7 + 1;
    *v7 = 67;
    if ( a3 )
      goto LABEL_3;
LABEL_16:
    if ( a2 != 1 )
    {
      if ( a2 )
      {
        if ( a2 != 2 )
          return;
        goto LABEL_7;
      }
      goto LABEL_20;
    }
    goto LABEL_11;
  }
  sub_2257CD0(v6, 67);
  if ( !a3 )
    goto LABEL_16;
LABEL_3:
  v8 = *(_QWORD *)(a1 + 8);
  v9 = *(_BYTE **)(v8 + 32);
  if ( (unsigned __int64)v9 >= *(_QWORD *)(v8 + 24) )
  {
    sub_2257CD0(v8, 73);
    if ( a2 != 1 )
    {
LABEL_5:
      if ( a2 )
      {
        if ( a2 != 2 )
          goto LABEL_14;
LABEL_7:
        v10 = *(_QWORD *)(a1 + 8);
        v11 = *(_BYTE **)(v10 + 32);
        if ( (unsigned __int64)v11 < *(_QWORD *)(v10 + 24) )
        {
          *(_QWORD *)(v10 + 32) = v11 + 1;
          *v11 = 53;
          if ( !a3 )
            return;
LABEL_14:
          sub_E2DBE0(a1, a3, 0, a4);
          return;
        }
        sub_2257CD0(v10, 53);
        goto LABEL_13;
      }
LABEL_20:
      v14 = *(_QWORD *)(a1 + 8);
      v15 = *(_BYTE **)(v14 + 32);
      if ( (unsigned __int64)v15 >= *(_QWORD *)(v14 + 24) )
      {
        sub_2257CD0(v14, 49);
      }
      else
      {
        *(_QWORD *)(v14 + 32) = v15 + 1;
        *v15 = 49;
      }
      goto LABEL_13;
    }
  }
  else
  {
    *(_QWORD *)(v8 + 32) = v9 + 1;
    *v9 = 73;
    if ( a2 != 1 )
      goto LABEL_5;
  }
LABEL_11:
  v12 = *(_QWORD *)(a1 + 8);
  v13 = *(_BYTE **)(v12 + 32);
  if ( (unsigned __int64)v13 >= *(_QWORD *)(v12 + 24) )
  {
    sub_2257CD0(v12, 50);
  }
  else
  {
    *(_QWORD *)(v12 + 32) = v13 + 1;
    *v13 = 50;
  }
LABEL_13:
  if ( a3 )
    goto LABEL_14;
}

