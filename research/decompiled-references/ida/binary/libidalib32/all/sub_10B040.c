__int64 sub_10B040()
{
  unsigned __int64 v0; // rdi
  __int64 module_data; // r14
  int v2; // r12d
  __int64 v3; // r15
  __int64 v4; // rbx
  __int64 v5; // rdx
  char *v6; // rax
  const char **v7; // rax
  const char *v8; // rbx
  char *v9; // rax
  size_t v10; // rax
  size_t v11; // r15
  size_t v12; // r13
  char *v13; // rsi
  char *v14; // r13
  int v15; // ebx
  __int64 v16; // rcx
  unsigned __int16 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rsi
  __int16 v20; // ax
  unsigned __int16 *v21; // rbx
  unsigned __int16 *v22; // rcx
  unsigned __int16 *v23; // r15
  _WORD *v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // r12
  __int64 v27; // rdi
  const char **v29; // rax
  const char *v30; // rbx
  char *v31; // rax
  _QWORD *v32; // [rsp+0h] [rbp-C0h]
  __int64 v33; // [rsp+8h] [rbp-B8h]
  __int64 v34; // [rsp+10h] [rbp-B0h]
  unsigned __int16 v35; // [rsp+1Ch] [rbp-A4h]
  char *s1; // [rsp+20h] [rbp-A0h]
  TMenuItem *v37; // [rsp+28h] [rbp-98h]
  unsigned __int16 v38; // [rsp+28h] [rbp-98h]
  __int64 v39; // [rsp+30h] [rbp-90h] BYREF
  __int128 v40; // [rsp+38h] [rbp-88h]
  char *s2; // [rsp+50h] [rbp-70h]
  __int128 v42; // [rsp+58h] [rbp-68h]
  char s[24]; // [rsp+70h] [rbp-50h] BYREF
  unsigned __int64 v44; // [rsp+88h] [rbp-38h]

  v44 = __readfsqword(0x28u);
  v0 = (unsigned int)dword_2530D8;
  v39 = 0;
  v40 = 0;
  module_data = get_module_data();
  v33 = **(_QWORD **)(*(_QWORD *)module_data + 32LL);
  if ( v33 )
  {
    v34 = 0;
    v2 = 0;
    v3 = 0;
    v4 = 0;
    v32 = nullptr;
    v33 = 0;
    do
    {
      v17 = sub_199DB0(v0);
      v18 = v40;
      v19 = v39;
      if ( *((_QWORD *)&v40 + 1) < (unsigned __int64)(v40 + 1) )
      {
        v0 = (unsigned __int64)&v39;
        v38 = v17;
        v39 = qvector_reserve();
        v19 = v39;
        v17 = v38;
        v18 = v40;
      }
      *(_WORD *)(v19 + 2 * v18) = v17;
      *(_QWORD *)&v40 = v40 + 1;
      v5 = *(_QWORD *)module_data;
      v35 = v17;
      v6 = *(char **)(*(_QWORD *)(*(_QWORD *)module_data + 24LL) + v3 * 8);
      s1 = v6;
      if ( v6 && *v6 != 45 )
      {
        v37 = (TMenuItem *)operator new(0x28u);
        v7 = *(const char ***)(*(_QWORD *)module_data + 32LL);
        if ( v4 )
        {
          v8 = v7[v3];
        }
        else
        {
          v8 = *v7;
          v9 = strchr(*v7, 58);
          if ( v9 )
            v8 = v9 + 1;
        }
        TMenuItem::TMenuItem(v37, v8, v35, 0, 0, nullptr, nullptr);
        if ( v33 )
          *v32 = v37;
        else
          v33 = (__int64)v37;
        if ( !getinf_buf() )
          s[0] = 0;
        s2 = nullptr;
        v42 = 0;
        v10 = strlen(s);
        v11 = v10 + 1;
        v12 = v10;
        s2 = (char *)qvector_reserve();
        *(_QWORD *)&v42 = v11;
        memmove(s2, s, v12);
        v13 = (char *)::s1;
        v0 = (unsigned __int64)s1;
        s2[v12] = 0;
        v14 = s2;
        if ( (_QWORD)v42 )
          v13 = s2;
        v15 = strcasecmp(s1, v13);
        if ( v14 )
        {
          v0 = (unsigned __int64)v14;
          *(_QWORD *)&v42 = 0;
          qfree();
        }
        v16 = v34;
        v5 = *(_QWORD *)module_data;
        if ( !v15 )
          v16 = (__int64)v37;
        v32 = v37;
        v34 = v16;
      }
      v4 = ++v2;
      v3 = v2;
    }
    while ( *(_QWORD *)(*(_QWORD *)(v5 + 32) + v3 * 8) );
  }
  else
  {
    v34 = 0;
  }
  v20 = sub_104F60(v33, v34);
  v21 = (unsigned __int16 *)v39;
  v22 = (unsigned __int16 *)(v39 + 2 * v40);
  v23 = v22;
  if ( (unsigned __int16 *)v39 != v22 )
  {
    v24 = (_WORD *)v39;
    while ( v20 != *v24 )
    {
      if ( v22 == ++v24 )
        goto LABEL_32;
    }
    v25 = (__int64)v24 - v39;
    v26 = v25 >> 1;
    if ( v25 < 0 )
      goto LABEL_44;
    if ( (unsigned __int8)set_processor_type() )
    {
      v29 = *(const char ***)(*(_QWORD *)module_data + 32LL);
      if ( v26 )
      {
        v30 = v29[v26];
      }
      else
      {
        v30 = *v29;
        v31 = strchr(*v29, 58);
        if ( v31 )
          v30 = v31 + 1;
      }
      sub_108A90(965, v30);
    }
    v21 = (unsigned __int16 *)v39;
    v23 = (unsigned __int16 *)(v39 + 2 * v40);
    if ( (unsigned __int16 *)v39 != v23 )
    {
LABEL_44:
      do
      {
LABEL_32:
        v27 = *v21++;
        sub_199E00(v27);
      }
      while ( v23 != v21 );
      v23 = (unsigned __int16 *)v39;
    }
  }
  if ( v23 )
  {
    *(_QWORD *)&v40 = 0;
    qfree();
  }
  return 1;
}

