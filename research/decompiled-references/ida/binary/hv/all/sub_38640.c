__int64 __fastcall sub_38640(__int64 a1, __int64 a2)
{
  bool v2; // zf
  const char *v3; // r12
  size_t v4; // rax
  size_t v5; // r13
  size_t v6; // rbp
  size_t v7; // rbp
  void *v8; // rax
  void *v9; // rsi
  unsigned __int64 v10; // rbp
  size_t v12; // r13
  __int64 v13; // r12
  size_t v14; // r14
  __int64 v15; // rsi
  size_t v16; // r12
  void *v17; // rax
  __int64 v18; // rax
  void *src; // [rsp+0h] [rbp-68h] BYREF
  size_t n[3]; // [rsp+8h] [rbp-60h]
  void *ptr; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v22; // [rsp+28h] [rbp-40h]
  unsigned __int64 v23; // [rsp+38h] [rbp-30h]

  v2 = *(_DWORD *)(a2 + 152) == -4;
  v23 = __readfsqword(0x28u);
  if ( !v2 )
  {
    sub_38570((char **)&ptr, *(_DWORD *)(a2 + 156));
    v3 = *(const char **)(a2 + 16);
    src = nullptr;
    *(_OWORD *)n = 0;
    if ( v3 )
    {
      v4 = strlen(v3);
      v5 = v4 + 1;
      v6 = v4;
      src = (void *)sub_96080(&src, 0, v4 + 1, 1);
      n[0] = v5;
      memmove(src, v3, v6);
      *((_BYTE *)src + v6) = 0;
      v7 = n[0];
      *(_QWORD *)a1 = 0;
      *(_OWORD *)(a1 + 8) = 0;
      if ( v7 )
      {
        v8 = (void *)sub_96030(v7);
        *(_QWORD *)a1 = v8;
        v9 = src;
        *(_QWORD *)(a1 + 16) = v7;
        memcpy(v8, v9, v7);
        *(_QWORD *)(a1 + 8) = v7;
      }
      v10 = v22;
      if ( !v22 )
        goto LABEL_6;
    }
    else
    {
      v10 = v22;
      *(_QWORD *)a1 = 0;
      *(_OWORD *)(a1 + 8) = 0;
      if ( !v10 )
      {
LABEL_8:
        if ( ptr )
        {
          v22 = 0;
          j__free(ptr);
        }
        return a1;
      }
    }
    v12 = v10 - 1;
    if ( v10 != 1 )
    {
      v13 = *(_QWORD *)(a1 + 8);
      v14 = v10 - 1;
      if ( v13 )
      {
        --v13;
        v14 = v12 + v13;
        v10 += v13;
      }
      v15 = *(_QWORD *)a1;
      if ( *(_QWORD *)(a1 + 16) < v10 )
      {
        v18 = sub_96080(a1, v15, v10, 1);
        *(_QWORD *)a1 = v18;
        v15 = v18;
      }
      *(_QWORD *)(a1 + 8) = v10;
      *(_BYTE *)(v15 + v14) = 0;
      memcpy((void *)(v13 + *(_QWORD *)a1), ptr, v12);
    }
LABEL_6:
    if ( src )
    {
      n[0] = 0;
      j__free(src);
    }
    goto LABEL_8;
  }
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v16 = *(_QWORD *)(a2 + 32);
  if ( v16 )
  {
    v17 = (void *)sub_96030(*(_QWORD *)(a2 + 32));
    *(_QWORD *)a1 = v17;
    *(_QWORD *)(a1 + 16) = v16;
    memcpy(v17, *(const void **)(a2 + 24), v16);
    *(_QWORD *)(a1 + 8) = v16;
  }
  return a1;
}

