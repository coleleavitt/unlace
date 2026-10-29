unsigned __int64 __fastcall sub_136660(char a1, _QWORD *a2)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  unsigned __int64 v4; // rax
  const char *v5; // rsi
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // rbp
  __int64 v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // rbx
  __int64 v11; // r15
  bool v12; // r14
  unsigned __int64 v13; // r13
  int v14; // ebx
  int v15; // r12d
  __int64 v16; // rax
  __int64 v17; // rbp
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rsi
  char *v21; // rbp
  size_t v22; // rax
  __int64 v23; // r8
  size_t v24; // r9
  size_t v25; // r10
  __int64 v26; // rsi
  size_t v27; // rdx
  __int64 v28; // rbp
  unsigned __int64 v29; // r12
  __int64 v30; // rsi
  unsigned __int64 v31; // rax
  const char *v32; // rcx
  const char *v33; // rdx
  const char *v34; // rax
  size_t v36; // [rsp+8h] [rbp-B0h]
  __int64 v37; // [rsp+8h] [rbp-B0h]
  __int64 v38; // [rsp+10h] [rbp-A8h]
  __int64 v39; // [rsp+10h] [rbp-A8h]
  size_t v40; // [rsp+18h] [rbp-A0h]
  size_t v41; // [rsp+20h] [rbp-98h]
  unsigned __int64 v42; // [rsp+28h] [rbp-90h]
  const char *v44; // [rsp+40h] [rbp-78h] BYREF
  __int128 v45; // [rsp+48h] [rbp-70h]
  char s[24]; // [rsp+60h] [rbp-58h] BYREF
  unsigned __int64 v47; // [rsp+78h] [rbp-40h]

  v2 = a2[1];
  v47 = __readfsqword(0x28u);
  v45 = 0;
  v44 = nullptr;
  if ( 160 * v2 )
  {
    v44 = (const char *)qvector_reserve();
    v5 = v44;
    v3 = v45;
    if ( a2[1] )
    {
      v4 = *((_QWORD *)&v45 + 1);
      goto LABEL_3;
    }
    if ( (_QWORD)v45 )
      goto LABEL_55;
LABEL_59:
    v5 = s1;
    goto LABEL_55;
  }
  v3 = 0;
  v4 = 0;
  v5 = nullptr;
  if ( !v2 )
    goto LABEL_59;
LABEL_3:
  v42 = 0;
  while ( 1 )
  {
    v6 = 2;
    if ( v3 )
      v6 = v3-- + 1;
    if ( v4 < v6 )
    {
      v44 = (const char *)qvector_reserve();
      v5 = v44;
    }
    *(_QWORD *)&v45 = v6;
    v7 = 2;
    v5[v3] = 10;
    v44[v3 + 1] = 0;
    v8 = v45;
    if ( (_QWORD)v45 )
    {
      v7 = v45 + 1;
      v8 = v45 - 1;
    }
    v9 = (__int64)v44;
    if ( *((_QWORD *)&v45 + 1) < v7 )
    {
      v44 = (const char *)qvector_reserve();
      v9 = (__int64)v44;
    }
    *(_QWORD *)&v45 = v7;
    *(_BYTE *)(v9 + v8) = 9;
    v44[v8 + 1] = 0;
    v10 = *a2 + 80 * v42;
    if ( a2[1] > 1u && *(_QWORD *)(v10 + 56) && *(int *)(v10 + 72) > 0 )
    {
      get_encoding_name();
      sub_96570((__int64 *)&v44);
    }
    v11 = *(_QWORD *)(v10 + 24);
    v12 = 0;
    v13 = *(_QWORD *)(v10 + 8);
    if ( v11 )
      v12 = *(_QWORD *)(v10 + 32) != 0;
    v14 = 0;
    if ( v13 )
    {
      while ( 1 )
      {
        if ( v14 <= 0 )
          goto LABEL_20;
        v28 = v45;
        v29 = 2;
        if ( (_QWORD)v45 )
        {
          v29 = v45 + 1;
          v28 = v45 - 1;
        }
        v30 = (__int64)v44;
        if ( *((_QWORD *)&v45 + 1) < v29 )
        {
          v44 = (const char *)qvector_reserve();
          v30 = (__int64)v44;
        }
        *(_QWORD *)&v45 = v29;
        *(_BYTE *)(v30 + v28) = 32;
        v44[v28 + 1] = 0;
        if ( v14 <= 31 )
        {
LABEL_20:
          v15 = v14;
          v16 = v14;
          if ( !v12 )
            goto LABEL_40;
        }
        else
        {
          v15 = v13 - 1;
          v16 = (int)v13 - 1;
          if ( !v12 )
            goto LABEL_40;
        }
        if ( !*(_BYTE *)(v11 + v16) )
        {
          strcpy(s, "??");
          goto LABEL_23;
        }
LABEL_40:
        qsnprintf();
LABEL_23:
        if ( v14 > 31 )
        {
          v17 = v45;
          if ( (_QWORD)v45 )
          {
            v18 = v45 + 5;
            v19 = v45 + 6;
            v20 = (__int64)v44;
            v17 = v45 - 1;
            if ( *((_QWORD *)&v45 + 1) >= (unsigned __int64)(v45 + 6) )
            {
LABEL_26:
              *(_QWORD *)&v45 = v19;
              *(_BYTE *)(v20 + v18) = 0;
              v21 = (char *)&v44[v17];
              *(_DWORD *)v21 = 774778408;
              *((_WORD *)v21 + 2) = 8233;
              goto LABEL_27;
            }
          }
          else
          {
            v20 = (__int64)v44;
            v19 = 7;
            v18 = 6;
            if ( *((_QWORD *)&v45 + 1) >= 7u )
              goto LABEL_26;
          }
          v39 = v18;
          v37 = v19;
          v44 = (const char *)qvector_reserve();
          v18 = v39;
          v20 = (__int64)v44;
          v19 = v37;
          goto LABEL_26;
        }
LABEL_27:
        v22 = strlen(s);
        v23 = v45;
        v24 = v22;
        v25 = v22;
        if ( (_QWORD)v45 )
        {
          v23 = v45 - 1;
          v25 = v22 + v45 - 1;
        }
        v26 = (__int64)v44;
        v27 = v25 + 1;
        if ( *((_QWORD *)&v45 + 1) < v25 + 1 )
        {
          v41 = v22;
          v40 = v25;
          v38 = v23;
          v36 = v25 + 1;
          v44 = (const char *)qvector_reserve();
          v24 = v41;
          v26 = (__int64)v44;
          v25 = v40;
          v23 = v38;
          v27 = v36;
        }
        *(_QWORD *)&v45 = v27;
        *(_BYTE *)(v26 + v25) = 0;
        memmove((void *)&v44[v23], s, v24);
        if ( v14 <= 31 )
        {
          v14 = v15 + 1;
          if ( v15 + 1 < v13 )
            continue;
        }
        break;
      }
    }
    ++v42;
    v3 = v45;
    v31 = a2[1];
    if ( v42 >= v31 )
      break;
    v4 = *((_QWORD *)&v45 + 1);
    v5 = v44;
  }
  v5 = s1;
  if ( (_QWORD)v45 )
  {
    v5 = v44;
    v32 = "s";
    if ( v31 > 1 )
      goto LABEL_47;
  }
  else
  {
    v32 = "s";
    if ( v31 > 1 )
      goto LABEL_47;
  }
LABEL_55:
  v32 = "";
LABEL_47:
  v33 = "CASE-INSENSITIVELY";
  if ( (a1 & 4) != 0 )
    v33 = "CASE-SENSITIVELY";
  v34 = "up";
  if ( (a1 & 1) != 0 )
    v34 = "down";
  sub_8F660((__int64)"Searching %s %s for binary pattern%s:%s\n", v34, v33, v32, v5);
  if ( v44 )
  {
    *(_QWORD *)&v45 = 0;
    qfree();
  }
  return v47 - __readfsqword(0x28u);
}

