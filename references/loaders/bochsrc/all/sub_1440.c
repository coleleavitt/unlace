char __fastcall sub_1440(__int64 a1, _BYTE *a2, unsigned __int64 a3)
{
  int v3; // ebx
  int v4; // r12d
  char v5; // r14
  int v6; // r15d
  char *v7; // r13
  char *v9; // rax
  char *v10; // r15
  char *v11; // rax
  unsigned __int64 v12; // rax
  char s1[1032]; // [rsp+20h] [rbp-448h] BYREF
  unsigned __int64 v15; // [rsp+428h] [rbp-40h]

  v15 = __readfsqword(0x28u);
  if ( a2 )
    *a2 = 0;
  v3 = 0;
  v4 = 0;
LABEL_4:
  while ( 1 )
  {
    s1[0] = 0;
    if ( !qlgets(s1, 1024, a1) )
      break;
    v5 = s1[0];
    if ( !s1[0] )
      break;
    v6 = s1[0];
    v7 = s1;
    if ( (unsigned int)s1[0] > 0x7F )
      break;
    while ( isspace(v6) )
    {
      v5 = *++v7;
      if ( !v5 )
        goto LABEL_4;
      v6 = v5;
      if ( (unsigned int)v5 > 0x7F )
        return (~(_BYTE)v3 & 0xC) == 0;
    }
    if ( v5 != 35 )
    {
      if ( !isprint(v6) )
        return (~(_BYTE)v3 & 0xC) == 0;
      if ( ++v4 > 20 )
        return (~(_BYTE)v3 & 0xC) == 0;
      if ( !strncmp(s1, "romimage", 8u) )
      {
        v3 |= 1u;
        goto LABEL_13;
      }
      if ( !strncmp(s1, "vgaromimage", 0xBu) )
      {
        v3 |= 2u;
        goto LABEL_13;
      }
      if ( !strncmp(s1, "boot", 4u) )
      {
        v3 |= 4u;
        goto LABEL_13;
      }
      if ( !strncmp(s1, "megs", 4u) || !strncmp(s1, "memory", 6u) )
      {
        v3 |= 8u;
        goto LABEL_13;
      }
      if ( s1[0] != 97 || s1[1] != 116 || s1[2] != 97 )
        goto LABEL_13;
      v9 = strstr(s1, "path=\"");
      if ( v9 )
      {
        v10 = v9 + 6;
        v11 = strchr(v9 + 6, 34);
        if ( v11 )
        {
          if ( a2 )
          {
            v12 = v11 - v10 + 1;
            if ( v12 > a3 )
              v12 = a3;
            qstrncpy(a2, v10, v12);
          }
          if ( (~(_BYTE)v3 & 0xF) == 0 )
            return 1;
          v3 |= 0x10u;
LABEL_13:
          if ( v3 == 31 )
            return 1;
        }
      }
    }
  }
  return (~(_BYTE)v3 & 0xC) == 0;
}
