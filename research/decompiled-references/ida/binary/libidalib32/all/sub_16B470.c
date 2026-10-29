unsigned __int64 __fastcall sub_16B470(__int64 a1, char a2, const char *a3)
{
  __int64 v3; // rbp
  bool v4; // zf
  __int64 v6; // rdi
  __int64 v7; // rax
  size_t v8; // r14
  __int64 v9; // rbx
  char *v10; // rax
  char *v11; // r12
  char *v12; // rax
  size_t v13; // r14
  char v14; // r15
  __int64 v15; // rax
  __int64 v16; // rbx
  size_t v17; // rdx
  const char *v18; // r15
  char *v19; // r8
  void *v20; // rax
  __int64 v21; // rax
  const char *v22; // r14
  char *v23; // rax
  signed __int64 v24; // rax
  char *v26; // rax
  size_t v27; // rdx
  unsigned __int64 v28; // r14
  const char *v29; // r12
  char *v30; // rax
  signed __int64 v31; // r15
  char *v32; // rax
  signed __int64 v33; // r14
  char v34; // dl
  __int64 v35; // rax
  const char *v36; // r13
  const char *v37; // rbx
  size_t v38; // [rsp+0h] [rbp-88h]
  char *v39; // [rsp+0h] [rbp-88h]
  char *src; // [rsp+8h] [rbp-80h]
  char srca; // [rsp+8h] [rbp-80h]
  int v42; // [rsp+18h] [rbp-70h] BYREF
  int v43; // [rsp+1Ch] [rbp-6Ch] BYREF
  void *dest; // [rsp+20h] [rbp-68h]
  __int128 v45; // [rsp+28h] [rbp-60h]
  char needle[3]; // [rsp+42h] [rbp-46h] BYREF
  char v47[3]; // [rsp+45h] [rbp-43h] BYREF
  unsigned __int64 v48; // [rsp+48h] [rbp-40h]

  v3 = a1;
  v4 = *(_BYTE *)(a1 + 984) == 0;
  v48 = __readfsqword(0x28u);
  if ( v4 )
  {
    a1 = 0;
  }
  else
  {
    if ( !*(_QWORD *)(a1 + 480) )
      goto LABEL_57;
    a1 = 0;
    if ( *(_DWORD *)(v3 + 472) == 1 )
      a1 = *(_QWORD *)(v3 + 848);
  }
  sub_91990((unsigned __int8 *)a1);
  needle[2] = 0;
  v4 = *(_BYTE *)(v3 + 984) == 0;
  needle[0] = 1;
  needle[1] = a2 + 41;
  v47[2] = 0;
  v47[0] = 2;
  v47[1] = a2 + 41;
  if ( v4 )
  {
    v6 = 0;
    goto LABEL_9;
  }
  if ( !*(_QWORD *)(v3 + 480) )
LABEL_57:
    sub_1582F0(a1);
  v6 = 0;
  if ( *(_DWORD *)(v3 + 472) == 1 )
    v6 = *(_QWORD *)(v3 + 848);
LABEL_9:
  v7 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 96LL))(v6, 0);
  v8 = *(_QWORD *)(v7 + 16);
  v9 = v7;
  if ( !v8 )
  {
    v10 = strstr(s1, needle);
    v11 = v10;
    if ( !v10 )
      return v48 - __readfsqword(0x28u);
    if ( v10 != s1 )
      return v48 - __readfsqword(0x28u);
    v12 = strstr(v10, v47);
    if ( !v12 )
      return v48 - __readfsqword(0x28u);
    v13 = v12 - v11;
    if ( v12 - v11 == -1 )
      return v48 - __readfsqword(0x28u);
    v14 = byte_251020;
    byte_251020 = 0;
    v15 = tag_strlen();
    byte_251020 = v14;
    v16 = v15;
    if ( !a3 )
    {
      dest = nullptr;
      v29 = nullptr;
      v45 = 0;
      goto LABEL_37;
    }
    if ( *a3 )
    {
      dest = nullptr;
      v17 = v13 + 1;
      v18 = nullptr;
      v45 = 0;
      v19 = &byte_251020;
      goto LABEL_17;
    }
    v18 = nullptr;
    goto LABEL_36;
  }
  v26 = (char *)qalloc_or_throw();
  v27 = v8;
  v28 = v8 - 1;
  v29 = v26;
  memcpy(v26, *(const void **)(v9 + 8), v27);
  v30 = strstr(v29, needle);
  if ( v30 )
  {
    v31 = v30 - v29;
    if ( v28 >= v30 - v29 )
    {
      v39 = v30;
      v32 = strstr(v30, v47);
      if ( v32 )
      {
        v33 = v32 - v29;
        if ( v32 - v29 != -1 )
        {
          v34 = *v39;
          *v39 = 0;
          srca = v34;
          v35 = tag_strlen();
          v19 = v39;
          v16 = v35;
          *v39 = srca;
          if ( a3 && *a3 )
          {
            dest = nullptr;
            v13 = v33 - v31;
            v18 = v29;
            v45 = 0;
            v17 = v13 + 1;
            if ( v13 == -1 )
            {
              v13 = -1;
              v20 = nullptr;
              goto LABEL_18;
            }
LABEL_17:
            v38 = v17;
            src = v19;
            v20 = (void *)qvector_reserve();
            v17 = v38;
            v19 = src;
            dest = v20;
LABEL_18:
            *(_QWORD *)&v45 = v17;
            *((_BYTE *)v20 + v13) = 0;
            memmove(dest, v19, v13);
            v21 = v45;
            if ( (unsigned __int64)v45 > 1 )
            {
              tag_remove();
              v21 = v45;
            }
            v22 = s1;
            if ( v21 )
              v22 = (const char *)dest;
            v23 = strstr(v22, a3);
            if ( v23 )
            {
              v24 = v23 - v22;
              if ( v24 != -1 )
              {
                v42 = v16 + v24;
                sub_16ACA0(v3, (unsigned __int64)&v42, 0);
                if ( dest )
                {
                  *(_QWORD *)&v45 = 0;
                  qfree();
                }
                if ( v18 )
                  qfree();
                return v48 - __readfsqword(0x28u);
              }
            }
            if ( dest )
            {
              *(_QWORD *)&v45 = 0;
              qfree();
            }
            goto LABEL_36;
          }
          v18 = v29;
LABEL_36:
          dest = nullptr;
          v29 = v18;
          v45 = 0;
LABEL_37:
          tag_remove();
          v36 = s1;
          if ( (_QWORD)v45 )
            v36 = (const char *)dest;
          v37 = &v36[v16 + (v36[v16] == 91)];
          if ( !strncmp(v37, "offset ", 7u) )
            v37 += 7;
          if ( !strncmp(v37, "far ptr ", 8u) )
            v37 += 8;
          if ( !strncmp(v37, "near ptr ", 9u) )
            LODWORD(v37) = (_DWORD)v37 + 9;
          v43 = (_DWORD)v37 - (_DWORD)v36;
          sub_16ACA0(v3, (unsigned __int64)&v43, 0);
          if ( dest )
          {
            *(_QWORD *)&v45 = 0;
            qfree();
          }
        }
      }
    }
  }
  if ( v29 )
    qfree();
  return v48 - __readfsqword(0x28u);
}

