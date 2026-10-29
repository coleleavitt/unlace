void __fastcall sub_15C260(__int64 *a1, _QWORD *a2)
{
  __int64 v3; // rbx
  __int64 v4; // r12
  const char *v6; // rsi
  const char *v7; // rdi
  __int64 v8; // rax
  _QWORD **v9; // r13
  _QWORD *v10; // rbx
  _QWORD *v11; // rax
  _QWORD *v12; // rdi
  void (*v13)(void); // rax
  void (__fastcall *v14)(_QWORD); // rdx
  _QWORD *v15; // rax

  if ( a2[2] <= 1u )
    return;
  v3 = *a1;
  v4 = *a1 + 72 * a1[1];
  if ( !(72 * a1[1]) )
    return;
  while ( 1 )
  {
    if ( a2 == (_QWORD *)v3 || (*(_BYTE *)(v3 + 64) & 4) == 0 )
      goto LABEL_6;
    v8 = *(_QWORD *)(v3 + 40);
    if ( a2[5] )
    {
      v6 = (const char *)a2[4];
      v7 = s1;
      if ( !v8 )
        goto LABEL_5;
      goto LABEL_12;
    }
    if ( !v8 )
      break;
    v6 = s1;
LABEL_12:
    v7 = *(const char **)(v3 + 32);
LABEL_5:
    if ( !strcmp(v7, v6) )
      break;
LABEL_6:
    v3 += 72;
    if ( v3 == v4 )
      return;
  }
  if ( v3 )
  {
    if ( *(_QWORD *)(v3 + 16) > 1u )
    {
      v9 = (_QWORD **)(a1 + 5);
      sub_15B720(v3, "", 0);
      v10 = *v9;
      while ( v9 != v10 )
      {
        v11 = v10;
        v10 = (_QWORD *)*v10;
        v12 = (_QWORD *)v11[2];
        v13 = *(void (**)(void))(*v12 + 24LL);
        if ( (char *)v13 == (char *)sub_157D60 )
        {
          v14 = (void (__fastcall *)(_QWORD))v12[2];
          v15 = (_QWORD *)(v12[1] + v12[3]);
          if ( ((unsigned __int8)v14 & 1) != 0 )
            v14 = *(void (__fastcall **)(_QWORD))((char *)v14 + *v15 - 1);
          v14(v15);
        }
        else
        {
          v13();
        }
      }
    }
  }
}

