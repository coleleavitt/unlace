unsigned __int64 __fastcall sub_1B2760(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // rdx
  unsigned __int64 v4; // rbp
  unsigned __int64 v6; // rax
  int v7; // r9d
  __int64 first_fcref_from; // r13
  _QWORD *v9; // rsi
  _QWORD *v10; // rax
  __int64 v11; // rdx
  _QWORD *v12; // rcx
  unsigned __int64 v14; // rcx
  _QWORD *v15; // rdx
  __int64 v16; // rcx
  unsigned __int64 v17; // rdi
  _QWORD *v18; // rax
  __int64 v19; // rdx
  _QWORD *v20; // rcx
  _QWORD *i; // rax
  _QWORD *v22; // rdx
  __int64 v23; // rcx
  unsigned __int64 v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  int v28; // ecx
  __int64 v29; // rax
  _QWORD *v30; // rdi
  _QWORD *v31; // rdx
  __int64 v32; // rcx
  _QWORD *v33; // rsi
  _QWORD *v34; // rcx
  __int64 v35; // rsi
  unsigned __int64 v36; // r8
  __int64 v37; // rdx
  __int64 v38; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v39; // [rsp+18h] [rbp-30h]

  v3 = *(_QWORD **)a1;
  v4 = a2[50];
  v39 = __readfsqword(0x28u);
  if ( v3 )
  {
    v6 = *v3 & 0xFFFFFFFFFFFFFFFCLL;
    if ( !v6 )
      return v39 - __readfsqword(0x28u);
    while ( (*(_BYTE *)v6 & 2) == 0 )
    {
      v14 = *(_QWORD *)(v6 + 24);
      if ( v4 < v14 )
      {
        v6 = *(_QWORD *)(v6 + 8);
      }
      else
      {
        if ( v14 >= v4 )
        {
          if ( (_QWORD *)v6 == v3 )
            break;
          return v39 - __readfsqword(0x28u);
        }
        v6 = *(_QWORD *)(v6 + 16);
      }
    }
  }
  first_fcref_from = get_first_fcref_from(a2[5]);
  if ( first_fcref_from != -1 )
  {
    v9 = *(_QWORD **)a1;
    if ( *(_QWORD *)a1 )
    {
      v10 = *(_QWORD **)a1;
      if ( *(_QWORD *)(a1 + 8) )
        v10 = (_QWORD *)v9[1];
LABEL_8:
      while ( v9 != v10 )
      {
        v11 = v10[11];
        if ( first_fcref_from == v11 && v11 != -1 )
          return v39 - __readfsqword(0x28u);
        if ( (*v10 & 2) != 0 )
        {
          v25 = v10[11];
          do
          {
            while ( v25 == -1 )
              ;
          }
          while ( first_fcref_from != v25 );
          return v39 - __readfsqword(0x28u);
        }
        v12 = (_QWORD *)v10[2];
        if ( (*(_BYTE *)v12 & 2) != 0 )
        {
          v15 = (_QWORD *)(*v10 & 0xFFFFFFFFFFFFFFFCLL);
          v16 = *v15;
          if ( (*v15 & 2) == 0 )
          {
            while ( v10 == (_QWORD *)v15[2] )
            {
              v10 = v15;
              v17 = v16 & 0xFFFFFFFFFFFFFFFCLL;
              v16 = *(_QWORD *)(v16 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v16 & 2) != 0 )
              {
                v10 = (_QWORD *)v17;
                goto LABEL_8;
              }
              v15 = (_QWORD *)v17;
            }
          }
          v10 = v15;
        }
        else
        {
          do
          {
            v10 = v12;
            v12 = (_QWORD *)v12[1];
          }
          while ( (*(_BYTE *)v12 & 2) == 0 );
        }
      }
    }
    if ( v9 )
    {
      v18 = *(_QWORD **)a1;
      if ( *(_QWORD *)(a1 + 8) )
        v18 = (_QWORD *)v9[1];
LABEL_30:
      while ( v9 != v18 )
      {
        v19 = v18[11];
        if ( v19 != -1 && v4 == v19 )
          goto LABEL_51;
        if ( (*v18 & 2) != 0 )
        {
          v26 = v18[11];
          do
          {
            while ( v26 == -1 )
              ;
          }
          while ( v4 != v26 );
LABEL_51:
          v27 = a2[100];
          v38 = -4294967290LL;
          v28 = 8 * *(_DWORD *)(*(_QWORD *)(v27 + 112) + 84LL);
          if ( (unsigned __int64)v28 <= 0x3F )
            first_fcref_from &= ~(-1LL << v28);
          sub_1CF350((_DWORD)a2, 55, (unsigned int)&v38, 0, 0, v7, v38, first_fcref_from);
          sub_1166E0((__int64)&v38);
          return v39 - __readfsqword(0x28u);
        }
        v20 = (_QWORD *)v18[2];
        if ( (*(_BYTE *)v20 & 2) != 0 )
        {
          v22 = (_QWORD *)(*v18 & 0xFFFFFFFFFFFFFFFCLL);
          v23 = *v22;
          if ( (*v22 & 2) == 0 )
          {
            while ( v18 == (_QWORD *)v22[2] )
            {
              v18 = v22;
              v24 = v23 & 0xFFFFFFFFFFFFFFFCLL;
              v23 = *(_QWORD *)(v23 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v23 & 2) != 0 )
              {
                v18 = (_QWORD *)v24;
                goto LABEL_30;
              }
              v22 = (_QWORD *)v24;
            }
          }
          v18 = v22;
        }
        else
        {
          for ( i = (_QWORD *)v20[1]; (*(_BYTE *)i & 2) == 0; i = (_QWORD *)i[1] )
            v20 = i;
          v18 = v20;
        }
      }
    }
    v29 = get_first_fcref_from(v4);
    v30 = *(_QWORD **)a1;
    v31 = nullptr;
    if ( *(_QWORD *)a1 )
    {
      v31 = *(_QWORD **)a1;
      if ( *(_QWORD *)(a1 + 8) )
        v31 = (_QWORD *)v30[1];
    }
LABEL_57:
    while ( v31 != v30 )
    {
      v32 = v31[11];
      if ( v29 == v32 && v32 != -1 )
        goto LABEL_51;
      if ( (*v31 & 2) != 0 )
      {
        v37 = v31[11];
        do
        {
          while ( v37 == -1 )
            ;
        }
        while ( v29 != v37 );
        goto LABEL_51;
      }
      v33 = (_QWORD *)v31[2];
      if ( (*(_BYTE *)v33 & 2) != 0 )
      {
        v34 = (_QWORD *)(*v31 & 0xFFFFFFFFFFFFFFFCLL);
        v35 = *v34;
        if ( (*v34 & 2) == 0 )
        {
          while ( (_QWORD *)v34[2] == v31 )
          {
            v31 = v34;
            v36 = v35 & 0xFFFFFFFFFFFFFFFCLL;
            v35 = *(_QWORD *)(v35 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v35 & 2) != 0 )
            {
              v31 = (_QWORD *)v36;
              goto LABEL_57;
            }
            v34 = (_QWORD *)v36;
          }
        }
        v31 = v34;
      }
      else
      {
        do
        {
          v31 = v33;
          v33 = (_QWORD *)v33[1];
        }
        while ( (*(_BYTE *)v33 & 2) == 0 );
      }
    }
  }
  return v39 - __readfsqword(0x28u);
}
