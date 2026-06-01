__int64 __fastcall vault_with_events_t__::vfunc_24(__int64 a1, void **p_src)
{
  unsigned int v2; // r12d
  __int64 *v4; // rdi
  __int64 v5; // rax
  _QWORD *v6; // rbp
  __int64 v7; // rbx
  __int64 v8; // rbx
  __int64 v9; // rbx
  __int64 v10; // rbx
  void **v12; // r14
  void *v13; // rdi
  void **v14; // r14
  void *v15; // rdi
  void **v16; // r14
  void *v17; // rdi
  void **v18; // r14
  void *v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  void *src; // [rsp+10h] [rbp-98h] BYREF
  __int128 v25; // [rsp+18h] [rbp-90h]
  void *v26; // [rsp+28h] [rbp-80h]
  __int128 v27; // [rsp+30h] [rbp-78h]
  void *v28; // [rsp+40h] [rbp-68h]
  __int128 v29; // [rsp+48h] [rbp-60h]
  void *v30; // [rsp+58h] [rbp-50h]
  __int128 v31; // [rsp+60h] [rbp-48h]
  __int64 v32; // [rsp+70h] [rbp-38h]
  unsigned __int64 v33; // [rsp+78h] [rbp-30h]

  v2 = 52;
  v33 = __readfsqword(0x28u);
  v4 = *(__int64 **)(a1 + 8);
  v25 = 0;
  src = nullptr;
  v26 = nullptr;
  v28 = nullptr;
  v30 = nullptr;
  v32 = 0;
  v27 = 0;
  v29 = 0;
  v31 = 0;
  if ( !v4 )
    goto LABEL_18;
  v5 = *v4;
  v6 = p_src;
  p_src = *(void ***)(*v4 + 480);
  if ( p_src == (void **)sub_178B60 )
    goto LABEL_3;
  v2 = 52;
  if ( !((unsigned __int8 (*)(void))p_src)() )
  {
    v4 = *(__int64 **)(a1 + 8);
    v5 = *v4;
LABEL_3:
    p_src = &src;
    v2 = (*(__int64 (__fastcall **)(__int64 *, void **))(v5 + 160))(v4, &src);
    if ( !v2 )
    {
      p_src = nullptr;
      sub_416510(a1 + 16, 0, 0, &src);
      if ( v6 )
      {
        v7 = v25;
        if ( (unsigned __int64)v25 > 1 )
        {
          v12 = (void **)src;
          v13 = (void *)*v6;
          if ( v6[2] < (unsigned __int64)v25 )
          {
            v22 = qvector_reserve(v6, *v6, v25, 1);
            *v6 = v22;
            v13 = (void *)v22;
          }
          v6[1] = v7;
          p_src = v12;
          memmove(v13, v12, v7 - 1);
          *(_BYTE *)(*v6 + v7 - 1) = 0;
        }
        else
        {
          v6[1] = 0;
        }
        v8 = v27;
        if ( (unsigned __int64)v27 > 1 )
        {
          v18 = (void **)v26;
          v19 = (void *)v6[3];
          if ( v6[5] < (unsigned __int64)v27 )
          {
            v21 = qvector_reserve(v6 + 3, v6[3], v27, 1);
            v6[3] = v21;
            v19 = (void *)v21;
          }
          v6[4] = v8;
          p_src = v18;
          memmove(v19, v18, v8 - 1);
          *(_BYTE *)(v6[3] + v8 - 1) = 0;
        }
        else
        {
          v6[4] = 0;
        }
        v9 = v29;
        if ( (unsigned __int64)v29 > 1 )
        {
          v16 = (void **)v28;
          v17 = (void *)v6[6];
          if ( v6[8] < (unsigned __int64)v29 )
          {
            v23 = qvector_reserve(v6 + 6, v6[6], v29, 1);
            v6[6] = v23;
            v17 = (void *)v23;
          }
          v6[7] = v9;
          p_src = v16;
          memmove(v17, v16, v9 - 1);
          *(_BYTE *)(v6[6] + v9 - 1) = 0;
        }
        else
        {
          v6[7] = 0;
        }
        v10 = v31;
        if ( (unsigned __int64)v31 > 1 )
        {
          v14 = (void **)v30;
          v15 = (void *)v6[9];
          if ( v6[11] < (unsigned __int64)v31 )
          {
            v20 = qvector_reserve(v6 + 9, v6[9], v31, 1);
            v6[9] = v20;
            v15 = (void *)v20;
          }
          v6[10] = v10;
          p_src = v14;
          memmove(v15, v14, v10 - 1);
          *(_BYTE *)(v6[9] + v10 - 1) = 0;
        }
        else
        {
          v6[10] = 0;
        }
        v6[12] = v32;
      }
    }
  }
  if ( v30 )
  {
    *(_QWORD *)&v31 = 0;
    qfree(v30, (const char *)p_src);
  }
  if ( v28 )
  {
    *(_QWORD *)&v29 = 0;
    qfree(v28, (const char *)p_src);
  }
LABEL_18:
  if ( v26 )
  {
    *(_QWORD *)&v27 = 0;
    qfree(v26, (const char *)p_src);
  }
  if ( src )
  {
    *(_QWORD *)&v25 = 0;
    qfree(src, (const char *)p_src);
  }
  return v2;
}
