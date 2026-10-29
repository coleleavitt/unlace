_BOOL8 __fastcall sub_1A0240(__int64 a1, _DWORD a2, _DWORD a3, char a4)
{
  char *v4; // rax
  __int64 v5; // rsi
  char *v6; // rbx
  char *v7; // rbx
  char *v8; // r12
  __int64 v9; // rdx
  signed __int64 v10; // r13
  __int64 v11; // rdi
  __int64 v12; // rax
  _BOOL4 v13; // ebx
  void *v15; // rdi
  __int64 v16; // [rsp+0h] [rbp-B8h]
  _QWORD v17[4]; // [rsp+20h] [rbp-98h] BYREF
  char *v18; // [rsp+40h] [rbp-78h] BYREF
  __int128 v19; // [rsp+48h] [rbp-70h]
  __int64 v20; // [rsp+58h] [rbp-60h]
  __int128 v21; // [rsp+60h] [rbp-58h]
  char *s1; // [rsp+70h] [rbp-48h]
  __int16 v23; // [rsp+78h] [rbp-40h]
  char v24; // [rsp+7Ah] [rbp-3Eh]
  unsigned __int64 v25; // [rsp+88h] [rbp-30h]

  v25 = __readfsqword(0x28u);
  v17[3] = a1;
  v17[0] = &off_235608;
  v17[1] = 0;
  v17[2] = 0;
  v18 = nullptr;
  v20 = 0;
  s1 = nullptr;
  v23 = 257;
  v24 = a4;
  v19 = 0;
  v21 = 0;
  sub_94290((__int64 *)&v18);
  sub_17C2C0(nullptr, nullptr, (__int64)&v18);
  v4 = (char *)::s1;
  if ( (_QWORD)v19 )
    v4 = v18;
  v5 = v20;
  s1 = v4;
  if ( *((_QWORD *)&v21 + 1) <= 6u )
  {
    v20 = qvector_reserve();
    v5 = v20;
  }
  *(_QWORD *)&v21 = 7;
  *(_DWORD *)v5 = 1668178243;
  *(_WORD *)(v5 + 4) = 27749;
  *(_BYTE *)(v20 + 6) = 0;
  v6 = s1;
  while ( 1 )
  {
    if ( !strncmp(v6, "HIDECANCEL\n", 0xBu) )
    {
      v6 += 11;
      LOBYTE(v23) = 0;
      s1 = v6;
      goto LABEL_20;
    }
    if ( strncmp(v6, "NODELAY\n", 8u) )
      break;
    v6 += 8;
    s1 = v6;
LABEL_20:
    HIBYTE(v23) = 0;
  }
  if ( !strncmp(v6, "CANCEL ", 7u) )
  {
    v7 = v6 + 7;
    s1 = v7;
    v8 = strchr(v7, 10);
    if ( !v8 )
      v8 = &v7[strlen(v7)];
    v9 = 0;
    v16 = 0;
    v10 = v8 - v7;
    if ( v8 != v7 )
    {
      v15 = nullptr;
      if ( v10 != -1 )
      {
        v16 = qvector_reserve();
        v15 = (void *)v16;
      }
      memmove(v15, v7, v8 - v7);
      *(_BYTE *)(v16 + v10) = 0;
      v9 = v16;
      ++v10;
    }
    v11 = v20;
    v20 = v9;
    v21 = (unsigned __int64)v10;
    s1 = v8;
    if ( v11 )
      qfree();
  }
  v12 = sub_175450((__int64)v17, 0, 0);
  v17[0] = &off_235608;
  v13 = v12 != 0;
  if ( v20 )
  {
    *(_QWORD *)&v21 = 0;
    qfree();
  }
  if ( v18 )
  {
    *(_QWORD *)&v19 = 0;
    qfree();
  }
  v17[0] = &off_235C80;
  qsem_free();
  return v13;
}

