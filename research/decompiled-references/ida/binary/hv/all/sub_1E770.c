__int64 __fastcall sub_1E770(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // r14
  __int64 v4; // rbx
  __int64 i; // rbx
  unsigned int v6; // ebp
  int v8; // ecx
  unsigned int v9; // eax
  char *v10; // rdx
  __int64 v11; // r13
  char *v12; // rax
  void *v13; // rdi
  __int64 v14; // rax
  unsigned __int64 v15; // rbp
  void *v16; // rdx
  char *v17; // rsi
  char *v18; // rax
  unsigned __int64 v19; // r15
  size_t v20; // rbx
  void *v21; // r13
  char *v22; // rdx
  void *v23; // r12
  void *v24; // rbx
  char *v25; // rax
  void *v26; // rdi
  int v27; // eax
  const char *v28; // rdx
  const char *v29; // rsi
  void *ptr; // [rsp+10h] [rbp-98h] BYREF
  __int128 v31; // [rsp+18h] [rbp-90h]
  void *v32; // [rsp+30h] [rbp-78h] BYREF
  void *v33[2]; // [rsp+38h] [rbp-70h] BYREF
  void **v34; // [rsp+48h] [rbp-60h]
  void **v35; // [rsp+50h] [rbp-58h]
  __int64 v36; // [rsp+58h] [rbp-50h]
  unsigned __int64 v37; // [rsp+68h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 8);
  v37 = __readfsqword(0x28u);
  if ( !v1 || (v3 = *(_QWORD *)a1, *(_QWORD *)(*(_QWORD *)a1 + 8LL) <= 1u) || **(_BYTE **)v3 != 64 )
  {
    LODWORD(v33[0]) = 0;
    v33[1] = nullptr;
    v34 = v33;
    v35 = v33;
    v36 = 0;
    if ( (unsigned int)sub_1C7E0((__int64 *)a1, &v32, -1) )
    {
      v6 = 7;
    }
    else
    {
      v4 = v36;
      if ( v36 )
      {
        for ( i = (__int64)v34; (void **)i != v33; i = std::_Rb_tree_increment() )
        {
          v6 = sub_1E690(a1, i + 40, *(_DWORD *)(i + 32), *(_DWORD *)(a1 + 176) | 1u);
          if ( v6 )
            goto LABEL_10;
        }
      }
      else
      {
        v8 = *(_DWORD *)(a1 + 176);
        v31 = 0;
        ptr = nullptr;
        v9 = sub_1E690(a1, (__int64)&ptr, 0xFFFFFFFF, v8 | 1u);
        v10 = (char *)ptr;
        v6 = v9;
        if ( ptr )
        {
          v11 = v31;
          if ( (_QWORD)v31 )
          {
            do
            {
              v12 = &v10[24 * v4];
              v13 = *(void **)v12;
              if ( *(_QWORD *)v12 )
              {
                *((_QWORD *)v12 + 1) = 0;
                j__free(v13);
                v10 = (char *)ptr;
              }
              ++v4;
            }
            while ( v11 != v4 );
          }
          *(_QWORD *)&v31 = 0;
          j__free(v10);
        }
        if ( v6 )
          goto LABEL_10;
      }
      sub_19CE0(a1, (__int64)"ok sync completed\n");
      v6 = 0;
    }
LABEL_10:
    sub_18C40(v33[1]);
    return v6;
  }
  v32 = nullptr;
  *(_OWORD *)v33 = 0;
  if ( v1 == 1 )
  {
LABEL_30:
    v6 = sub_1E690(a1, (__int64)&v32, *(_DWORD *)(v3 + 60), *(_DWORD *)(a1 + 176));
  }
  else
  {
    v14 = v3;
    v15 = 1;
    while ( 1 )
    {
      v19 = v14 + 72 * v15;
      if ( *(_DWORD *)(v19 + 60) != -4 )
        break;
      v20 = *(_QWORD *)(v19 + 8);
      v21 = nullptr;
      if ( v20 )
      {
        v21 = (void *)sub_96030(*(_QWORD *)(v19 + 8));
        memcpy(v21, *(const void **)v19, v20);
      }
      v16 = v33[0];
      v17 = (char *)v32;
      if ( v33[1] < (char *)v33[0] + 1 )
      {
        v32 = (void *)sub_96080(&v32, v32, (char *)v33[0] + 1, 24);
        v16 = v33[0];
        v17 = (char *)v32;
      }
      ++v15;
      v18 = &v17[24 * (_QWORD)v16];
      *(_QWORD *)v18 = v21;
      *(__m128i *)(v18 + 8) = _mm_unpacklo_epi64((__m128i)v20, (__m128i)v20);
      ++v33[0];
      if ( v15 >= *(_QWORD *)(a1 + 8) )
        goto LABEL_30;
      v14 = *(_QWORD *)a1;
    }
    v27 = *(_DWORD *)(v19 + 64);
    v28 = "file revision";
    if ( v27 != 2 )
    {
      v28 = "commit id";
      if ( !v27 )
        v28 = "worklist id";
    }
    sub_19CE0(a1, (__int64)"No %s is permitted here\n", v28);
    v29 = haystack;
    if ( *(_QWORD *)(v19 + 32) )
      v29 = *(const char **)(v19 + 24);
    sub_8F890(0, v29);
    v6 = 7;
  }
  v22 = (char *)v32;
  if ( v32 )
  {
    v23 = v33[0];
    if ( v33[0] )
    {
      v24 = nullptr;
      do
      {
        v25 = &v22[24 * (_QWORD)v24];
        v26 = *(void **)v25;
        if ( *(_QWORD *)v25 )
        {
          *((_QWORD *)v25 + 1) = 0;
          j__free(v26);
          v22 = (char *)v32;
        }
        v24 = (char *)v24 + 1;
      }
      while ( v23 != v24 );
    }
    v33[0] = nullptr;
    j__free(v22);
  }
  return v6;
}

