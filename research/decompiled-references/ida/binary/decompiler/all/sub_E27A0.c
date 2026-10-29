__int64 __fastcall sub_E27A0(__int64 *a1, __int64 a2, int a3)
{
  __int64 v4; // rcx
  int v6; // r14d
  char *v7; // rax
  int v8; // ebx
  char *v9; // rax
  const char *v10; // rdi
  char v11; // dl
  unsigned int v12; // ecx
  char *v13; // rsi
  char v14; // cl
  unsigned int v15; // edx
  unsigned int v16; // ebx
  char v18; // al
  unsigned __int64 v19; // rcx
  int v20; // edx
  unsigned __int64 v21; // rax
  char *s; // [rsp+0h] [rbp-58h] BYREF
  __int128 v23; // [rsp+8h] [rbp-50h]
  unsigned __int64 v24; // [rsp+18h] [rbp-40h]

  v4 = *(_QWORD *)(a2 + 24);
  v24 = __readfsqword(0x28u);
  s = 0;
  v23 = 0;
  v6 = sub_E2360(a1, (__int64)&s, *(_QWORD *)(*a1 + 56), 80LL * a3 + v4, 0);
  if ( !v6 )
    goto LABEL_24;
  v7 = 0;
  if ( (_QWORD)v23 )
    v7 = strchr(s, 37);
  v8 = 0;
  while ( v7 )
  {
    v11 = v7[1];
    if ( !v11 )
      break;
    v10 = v7 + 2;
    if ( v11 != 37 )
    {
      v12 = v11;
      v9 = v7 + 1;
      if ( (unsigned int)v11 <= 0x7F )
      {
        while ( v12 - 48 <= 9 )
        {
          v12 = *++v9;
          v11 = v12;
          if ( v12 > 0x7F )
            goto LABEL_16;
        }
        if ( v11 != 42 )
        {
LABEL_16:
          v13 = v9;
          goto LABEL_17;
        }
        ++v8;
        v13 = v9 + 1;
LABEL_17:
        v14 = *v13;
        v9 = v13;
        v15 = *v13;
        if ( *v13 == 46 )
        {
          v15 = v13[1];
          v9 = v13 + 1;
          v14 = v13[1];
        }
        if ( v15 <= 0x7F )
        {
          while ( v15 - 48 <= 9 )
          {
            v15 = *++v9;
            v14 = v15;
            if ( v15 > 0x7F )
            {
              if ( *v9 )
                goto LABEL_8;
              goto LABEL_23;
            }
          }
          if ( v14 == 42 )
          {
            ++v8;
            ++v9;
          }
          if ( !*v9 )
            break;
        }
      }
LABEL_8:
      ++v8;
      v10 = v9 + 1;
    }
    v7 = strchr(v10, 37);
  }
LABEL_23:
  if ( !v8 )
    goto LABEL_24;
  v18 = getinf_flag();
  v19 = *(_QWORD *)(a2 + 32);
  if ( v18 )
  {
    v20 = a3 + 1;
    v21 = a3 + 1;
    if ( v21 < v19 )
    {
      while ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(a2 + 24) + 80 * v21 + 56) - 3) > 1 )
      {
        v21 = ++v20;
        if ( v20 >= v19 )
          goto LABEL_36;
      }
      goto LABEL_24;
    }
  }
LABEL_36:
  if ( (_DWORD)v19 - a3 == 2 && v8 > 1 )
  {
LABEL_24:
    v16 = 0;
    goto LABEL_25;
  }
  if ( v6 == 1 )
    copy_tinfo_t();
  v16 = 1;
LABEL_25:
  if ( s )
  {
    *(_QWORD *)&v23 = 0;
    qfree();
  }
  return v16;
}
