__int64 __fastcall sub_421C0(__int64 a1, const char *a2)
{
  __int64 v2; // rdx
  const char **v3; // r12
  int v4; // ebp
  const char *v5; // rbx
  const char *v6; // r13
  char *v7; // rax
  char *v8; // r15
  signed __int64 v9; // r14
  __int16 v10; // bx
  char **v11; // r15
  unsigned int v12; // ebx
  char *endptr; // [rsp+10h] [rbp-60h] BYREF
  const char *v15; // [rsp+18h] [rbp-58h] BYREF
  __int128 v16; // [rsp+20h] [rbp-50h]
  unsigned __int64 v17; // [rsp+30h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  v16 = 0;
  v15 = nullptr;
  if ( get_ea_name(&v15, a2, 512, 0) <= 0 )
  {
LABEL_14:
    v12 = 0;
    goto LABEL_15;
  }
  v3 = (const char **)&off_84DA0;
  v4 = 0;
  while ( 1 )
  {
    v5 = s1;
    if ( (_QWORD)v16 )
      v5 = v15;
    v6 = *v3;
    v7 = strchr(*v3, 109);
    v8 = v7;
    if ( !v7 )
      break;
    a2 = v5;
    v9 = v7 - v6;
    if ( !strncmp(v6, v5, v7 - v6) )
    {
      if ( v5[v9] )
      {
        a2 = v8 + 1;
        v10 = strtol(&v5[v9], &endptr, 10);
        if ( !strcmp(endptr, v8 + 1) )
          goto LABEL_9;
      }
    }
LABEL_13:
    ++v4;
    v3 += 2;
    if ( v4 == 30 )
      goto LABEL_14;
  }
  a2 = v5;
  if ( strcmp(v6, v5) )
    goto LABEL_13;
  v10 = 0;
LABEL_9:
  if ( a1 )
  {
    v11 = &(&off_84DA0)[2 * v4];
    *(_DWORD *)a1 = (unsigned __int16)(*((_WORD *)v11 + 5) + v10) | (*((unsigned __int16 *)v11 + 6) << 16);
    *(_BYTE *)(a1 + 4) = *((_BYTE *)v11 + 8);
  }
  v12 = 1;
LABEL_15:
  if ( v15 )
  {
    *(_QWORD *)&v16 = 0;
    qfree(v15, a2, v2, 0.0);
  }
  return v12;
}
