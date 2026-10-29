__int64 __fastcall sub_41CEA0(_QWORD *a1)
{
  void **v2; // rbx
  __int64 result; // rax
  void **v4; // r13
  _QWORD *v5; // r12
  bool v6; // zf
  void (__fastcall ***v7)(void *); // r14
  _DWORD *v8; // rdi
  void **v9; // rbx
  void **v10; // r13
  _QWORD *v11; // r12
  void (__fastcall ***v12)(void *); // r14
  _DWORD *v13; // rdi
  void **v14; // rbx
  void **v15; // r13
  _QWORD *v16; // r12
  void (__fastcall ***v17)(void *); // r14
  _DWORD *v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rdi

  v2 = (void **)a1[3];
  if ( v2 )
  {
    result = *((unsigned int *)v2 - 1);
    v4 = &v2[result];
    if ( v2 >= v4 )
      goto LABEL_14;
    do
    {
      while ( 1 )
      {
        v5 = *v2;
        if ( *v2 )
        {
          v6 = (*(_DWORD *)v5)-- == 1;
          if ( v6 )
            break;
        }
        if ( ++v2 >= v4 )
          goto LABEL_13;
      }
      v7 = (void (__fastcall ***)(void *))v5[11];
      if ( v7 )
      {
        v6 = (*((_DWORD *)v7 + 4))-- == 1;
        if ( v6 )
        {
          (**v7)(v7);
          sub_186B220(v7);
        }
      }
      v8 = (_DWORD *)v5[10];
      if ( v8 )
        sub_41CD50(v8);
      ++v2;
      sub_2B4F40(v5 + 8);
      sub_2B4F40(v5 + 6);
      sub_2334C0(v5 + 4);
      sub_3FCDF0(v5[2], v5[3]);
      result = sub_186B220(v5);
    }
    while ( v2 < v4 );
LABEL_13:
    v2 = (void **)a1[3];
    if ( v2 )
LABEL_14:
      result = sub_186B220(v2 - 1);
  }
  v9 = (void **)a1[2];
  if ( v9 )
  {
    result = *((unsigned int *)v9 - 1);
    v10 = &v9[result];
    if ( v9 >= v10 )
      goto LABEL_28;
    do
    {
      while ( 1 )
      {
        v11 = *v9;
        if ( *v9 )
        {
          v6 = (*(_DWORD *)v11)-- == 1;
          if ( v6 )
            break;
        }
        if ( ++v9 >= v10 )
          goto LABEL_27;
      }
      v12 = (void (__fastcall ***)(void *))v11[11];
      if ( v12 )
      {
        v6 = (*((_DWORD *)v12 + 4))-- == 1;
        if ( v6 )
        {
          (**v12)(v12);
          sub_186B220(v12);
        }
      }
      v13 = (_DWORD *)v11[10];
      if ( v13 )
        sub_41CD50(v13);
      ++v9;
      sub_2B4F40(v11 + 8);
      sub_2B4F40(v11 + 6);
      sub_2334C0(v11 + 4);
      sub_3FCDF0(v11[2], v11[3]);
      result = sub_186B220(v11);
    }
    while ( v9 < v10 );
LABEL_27:
    v9 = (void **)a1[2];
    if ( v9 )
LABEL_28:
      result = sub_186B220(v9 - 1);
  }
  v14 = (void **)a1[1];
  if ( v14 )
  {
    result = *((unsigned int *)v14 - 1);
    v15 = &v14[result];
    if ( v14 >= v15 )
      return sub_186B220(v14 - 1);
    do
    {
      while ( 1 )
      {
        v16 = *v14;
        if ( *v14 )
        {
          v6 = (*(_DWORD *)v16)-- == 1;
          if ( v6 )
            break;
        }
        if ( ++v14 >= v15 )
          goto LABEL_44;
      }
      v17 = (void (__fastcall ***)(void *))v16[11];
      if ( v17 )
      {
        v6 = (*((_DWORD *)v17 + 4))-- == 1;
        if ( v6 )
        {
          (**v17)(v17);
          sub_186B220(v17);
        }
      }
      v18 = (_DWORD *)v16[10];
      if ( v18 )
        sub_41CD50(v18);
      sub_2B4F40(v16 + 8);
      sub_2B4F40(v16 + 6);
      sub_2334C0(v16 + 4);
      v19 = v16[2];
      if ( v19 )
      {
        v20 = v16[3];
        v6 = (*(_DWORD *)(v19 + 8))-- == 1;
        if ( v6 )
          sub_15D7BC0(v20, v19);
      }
      ++v14;
      result = sub_186B220(v16);
    }
    while ( v14 < v15 );
LABEL_44:
    v14 = (void **)a1[1];
    if ( v14 )
      return sub_186B220(v14 - 1);
  }
  return result;
}

