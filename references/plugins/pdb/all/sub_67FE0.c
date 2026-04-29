__int64 __fastcall sub_67FE0(_QWORD *a1, unsigned int a2)
{
  unsigned int v3; // ebx
  char v4; // al
  char *v5; // rbp
  char *v7; // rdx
  __int64 *v8; // rax
  unsigned __int64 v9; // rdi
  _QWORD *v10; // r8
  unsigned __int64 v11; // r9
  _QWORD *v12; // rax
  _QWORD *v13; // rsi
  __int16 v14; // [rsp+2h] [rbp-3Eh] BYREF
  unsigned int v15; // [rsp+4h] [rbp-3Ch] BYREF
  char *s1; // [rsp+8h] [rbp-38h] BYREF
  __int128 v17; // [rsp+10h] [rbp-30h]
  unsigned __int64 v18; // [rsp+20h] [rbp-20h]

  v18 = __readfsqword(0x28u);
  v3 = a2;
  v17 = 0;
  s1 = nullptr;
  v4 = sub_671F0((__int64)a1, (__int64)&s1, a2);
  v5 = s1;
  if ( v4 )
  {
    if ( (unsigned __int64)v17 > 1 && strcmp(s1, "<anonymous-tag>") )
    {
      if ( (unsigned __int8)sub_67430((__int64)a1, &v14, a2) )
      {
        if ( (v14 & 0x80u) == 0 )
          goto LABEL_6;
        v7 = (char *)src;
        if ( (_QWORD)v17 )
          v7 = s1;
        if ( (unsigned __int8)sub_67A10((__int64)a1, &v15, v7) )
        {
          v3 = v15;
          goto LABEL_6;
        }
        if ( a1[38] )
        {
          v9 = a1[36];
          v10 = *(_QWORD **)(a1[35] + 8 * (a2 % v9));
          v11 = a2 % v9;
          if ( !v10 )
            goto LABEL_6;
          v12 = (_QWORD *)*v10;
          if ( *(_DWORD *)(*v10 + 8LL) != a2 )
          {
            do
            {
              v13 = (_QWORD *)*v12;
              if ( !*v12 )
                goto LABEL_6;
              v10 = v12;
              if ( v11 != *((unsigned int *)v13 + 2) % v9 )
                goto LABEL_6;
              v12 = (_QWORD *)*v12;
            }
            while ( *((_DWORD *)v13 + 2) != v3 );
          }
          if ( !v10 || (v8 = (__int64 *)*v10) == nullptr )
          {
LABEL_6:
            v5 = s1;
            goto LABEL_7;
          }
        }
        else
        {
          v8 = (__int64 *)a1[37];
          if ( !v8 )
            goto LABEL_6;
          while ( *((_DWORD *)v8 + 2) != a2 )
          {
            v8 = (__int64 *)*v8;
            if ( !v8 )
              goto LABEL_6;
          }
        }
        v3 = *((_DWORD *)v8 + 3);
        goto LABEL_6;
      }
      v5 = s1;
      v3 = -1;
    }
  }
  else
  {
    v3 = -1;
  }
LABEL_7:
  if ( v5 )
  {
    *(_QWORD *)&v17 = 0;
    qfree(v5);
  }
  return v3;
}
