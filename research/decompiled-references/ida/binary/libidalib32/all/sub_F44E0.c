unsigned __int64 __fastcall sub_F44E0(__int64 *a1, const char *a2, const char *a3)
{
  _QWORD *v3; // rbx
  const char *v7; // rax
  int v8; // eax
  char *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rbp
  char *v13; // rdi
  __int64 v15; // rax
  char *s1; // [rsp+10h] [rbp-58h] BYREF
  __int64 v17; // [rsp+18h] [rbp-50h]
  unsigned __int64 v18; // [rsp+28h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  v3 = (_QWORD *)qword_251670;
  if ( 8LL * (_QWORD)xmmword_251678 )
  {
    do
    {
      v12 = *v3;
      sub_153C60(&s1, *v3);
      v13 = (char *)::s1;
      if ( v17 )
        v13 = s1;
      if ( !strcmp(v13, a2) )
      {
        if ( !a3 )
        {
          if ( s1 )
          {
LABEL_6:
            v17 = 0;
            qfree();
          }
LABEL_7:
          v10 = a1[1];
          v11 = *a1;
          if ( a1[2] < (unsigned __int64)(v10 + 1) )
          {
            v15 = qvector_reserve();
            *a1 = v15;
            v11 = v15;
            v10 = a1[1];
          }
          *(_QWORD *)(v11 + 8 * v10) = v12;
          ++a1[1];
          goto LABEL_10;
        }
        v7 = (const char *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 664LL))(v12);
        v8 = strcmp(a3, v7);
        v9 = s1;
        if ( !v8 )
        {
          if ( s1 )
            goto LABEL_6;
          goto LABEL_7;
        }
      }
      else
      {
        v9 = s1;
      }
      if ( v9 )
      {
        v17 = 0;
        qfree();
      }
LABEL_10:
      ++v3;
    }
    while ( v3 != (_QWORD *)(qword_251670 + 8 * xmmword_251678) );
  }
  return v18 - __readfsqword(0x28u);
}

