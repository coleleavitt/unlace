char *__fastcall qtmpnam(char *s, __int64 a2)
{
  char *v2; // r12
  __int64 v3; // rbp
  __int64 v4; // rbx
  char v5; // al
  int v6; // r9d
  char *v7; // rdx
  char *v8; // rbp
  unsigned int v9; // ecx
  char *v10; // rax
  int v11; // edx
  int v12; // r8d
  int v13; // r9d
  pthread_t v14; // rax
  int v15; // r15d
  unsigned int buf; // [rsp+Ch] [rbp-4Ch] BYREF
  char sa[6]; // [rsp+12h] [rbp-46h] BYREF
  unsigned __int64 v19; // [rsp+18h] [rbp-40h]

  v19 = __readfsqword(0x28u);
  if ( a2 < 0 )
  {
    if ( !under_debugger )
      interr(1225);
    BUG();
  }
  v2 = s;
  if ( s )
  {
    v3 = 9;
    v4 = a2;
    if ( (unsigned __int64)a2 <= 9 )
      v3 = a2;
  }
  else
  {
    v3 = 9;
    v4 = 4096;
    v2 = (char *)&unk_2CD5F00;
  }
  qtmpdir(v2, v4);
  v5 = qisdir(v2);
  v7 = ".";
  if ( v5 )
    LODWORD(v7) = (_DWORD)v2;
  qmakepath((_DWORD)v2, v4, (_DWORD)v7, (unsigned int)"ida12345.tmp", 0, v6);
  v8 = &v2[strlen(v2) - v3];
  do
  {
    if ( (unsigned __int8)gen_rand_buf(&buf, 4u) )
    {
      if ( !dword_2CD5EE4 )
      {
        v15 = time(nullptr);
        v9 = (rand() % 1000 + 1000 * v15) % 0x186A0u;
        dword_2CD5EE4 = v9;
        buf = v9;
        goto LABEL_12;
      }
      v9 = dword_2CD5EE4 + 1;
      dword_2CD5EE4 = v9;
      buf = v9;
    }
    else
    {
      v14 = qthread_self();
      buf ^= v14;
      qthread_free(v14);
      v9 = buf;
    }
    if ( v9 >> 17 )
    {
      v9 = (v9 >> 17) ^ v9 & 0x1FFFF;
      buf = v9;
    }
LABEL_12:
    qsnprintf((unsigned int)sa, 6, (unsigned int)"%05u", v9, v12, v13);
    v10 = &sa[strlen(sa) - 1];
    v11 = *(_DWORD *)v10;
    LOBYTE(v10) = v10[4];
    *(_DWORD *)v8 = v11;
    v8[4] = (char)v10;
  }
  while ( (unsigned __int8)qfileexist(v2, 6) );
  return v2;
}
