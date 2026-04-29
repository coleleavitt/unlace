__int64 __fastcall sub_3EB150(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 ph; // rbp
  __int64 v5; // r13
  char v6; // al
  unsigned __int64 v7; // r14
  int v8; // r15d
  __int64 v9; // rdx
  __int64 v10; // rbp
  __int64 result; // rax
  char *v12; // rax
  const char *s1; // [rsp+8h] [rbp-60h]
  char s; // [rsp+1Eh] [rbp-4Ah] BYREF
  char v15; // [rsp+1Fh] [rbp-49h] BYREF
  char v16; // [rsp+20h] [rbp-48h]
  unsigned __int64 v17; // [rsp+28h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  qstrncpy();
  if ( !v16 )
    goto LABEL_9;
  if ( s <= 115 )
  {
    if ( s > 113 )
    {
      if ( (unsigned int)v15 > 0x7F || (unsigned int)(v15 - 48) > 9 && v15 )
      {
        LODWORD(v5) = 8;
        s1 = &v15;
      }
      else
      {
        s1 = &s;
        LODWORD(v5) = 8;
      }
      goto LABEL_13;
    }
    if ( s == 101 )
    {
      LODWORD(v5) = 4;
      s1 = &v15;
      goto LABEL_13;
    }
    if ( s == 102 )
    {
      ph = get_ph();
      if ( (unsigned __int8)getinf() )
        LODWORD(v5) = (unsigned __int8)getinf();
      else
        v5 = *(_QWORD *)(ph + 120);
      s1 = &v15;
      goto LABEL_13;
    }
    goto LABEL_9;
  }
  if ( (unsigned __int8)(s - 120) > 1u )
  {
LABEL_9:
    v6 = v15;
    goto LABEL_10;
  }
  v6 = v15;
  if ( v16 == 109 && v15 == 109 )
  {
    LODWORD(v5) = 2;
    v12 = strchr(&s, 95);
    s1 = &s;
    if ( v12 )
    {
      *v12 = 0;
      LODWORD(v5) = strtol(v12 + 1, nullptr, 10);
    }
    goto LABEL_13;
  }
LABEL_10:
  if ( v6 != 102 )
  {
    if ( (v6 & 0xFB) != 0x68 )
    {
      s1 = &s;
      LODWORD(v5) = 2;
      goto LABEL_13;
    }
    v15 = 120;
  }
  s1 = &s;
  LODWORD(v5) = 1;
LABEL_13:
  if ( a3 )
    *a3 = v5;
  v7 = *(_QWORD *)(a1 + 3752);
  if ( !v7 )
    return 0xFFFFFFFFLL;
  v8 = 0;
  v9 = 0;
  while ( 1 )
  {
    v10 = 32 * v9;
    if ( !strcmp(s1, (const char *)(a1 + 32 * v9 + 720)) )
      break;
    v9 = ++v8;
    if ( v8 >= v7 )
      return 0xFFFFFFFFLL;
  }
  result = *(unsigned int *)(a1 + v10 + 740);
  if ( (_DWORD)v5 == 1 && *(_BYTE *)(a2 + 1) == 104 )
    return (unsigned int)(result + 1);
  return result;
}
