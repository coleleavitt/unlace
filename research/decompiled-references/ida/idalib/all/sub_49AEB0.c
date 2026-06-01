unsigned __int64 __fastcall sub_49AEB0(__int64 *a1, __int64 a2)
{
  int v3; // r10d
  int v5; // eax
  char *v6; // rdx
  __int64 v7; // r14
  __int64 v8; // rbx
  char *v9; // rax
  void *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rdi
  char *v15; // rbx
  char v16; // al
  char **v17; // rax
  char **v18; // rax
  char **v19; // rdi
  __int64 v20; // rax
  unsigned int v21; // eax
  char *v22; // rcx
  char v23; // dl
  __int64 v24; // rbp
  char *v25; // rbx
  char **v26; // rax
  __int64 v27; // rsi
  char **v28; // rax
  void *v29; // [rsp+0h] [rbp-68h] BYREF
  __int128 v30; // [rsp+8h] [rbp-60h]
  void *v31; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v32; // [rsp+28h] [rbp-40h]
  unsigned __int64 v33; // [rsp+38h] [rbp-30h]

  v3 = *(_DWORD *)(a2 + 128);
  v33 = __readfsqword(0x28u);
  if ( v3 )
  {
    v18 = (char **)sub_498150(a1);
    sub_35A790(v18);
  }
  if ( *(_BYTE *)(a2 + 136) )
  {
    v17 = (char **)sub_498150(a1);
    sub_35A790(v17);
  }
  v5 = *(_DWORD *)(a2 + 132);
  v29 = nullptr;
  v30 = 0;
  if ( (v5 & 0x40) != 0 )
  {
    sub_472300((__int64)&v31, "UNALIGNED");
    sub_4790E0((__int64 *)&v29, (unsigned __int64)&v31);
    if ( v31 )
    {
      v32 = 0;
      qfree(v31);
    }
    v5 = *(_DWORD *)(a2 + 132);
  }
  if ( (v5 & 0x20) != 0 )
  {
    sub_472300((__int64)&v31, "BASECLASS");
    sub_4790E0((__int64 *)&v29, (unsigned __int64)&v31);
    if ( v31 )
    {
      v32 = 0;
      qfree(v31);
    }
    v5 = *(_DWORD *)(a2 + 132);
  }
  if ( (v5 & 0x80u) != 0 )
  {
    sub_472300((__int64)&v31, "VIRTBASE");
    sub_4790E0((__int64 *)&v29, (unsigned __int64)&v31);
    if ( v31 )
    {
      v32 = 0;
      qfree(v31);
    }
    v5 = *(_DWORD *)(a2 + 132);
  }
  if ( (v5 & 0x100) != 0 )
  {
    sub_472300((__int64)&v31, "VFTABLE");
    sub_4790E0((__int64 *)&v29, (unsigned __int64)&v31);
    if ( v31 )
    {
      v32 = 0;
      qfree(v31);
    }
    v5 = *(_DWORD *)(a2 + 132);
  }
  if ( (v5 & 0x200) != 0 )
  {
    sub_472300((__int64)&v31, "METHOD");
    sub_4790E0((__int64 *)&v29, (unsigned __int64)&v31);
    if ( v31 )
    {
      v32 = 0;
      qfree(v31);
    }
  }
  sub_421D60((__int64 *)&v31, (__int64 *)&v29, " ");
  v6 = (char *)v29;
  if ( v29 )
  {
    v7 = v30;
    if ( (_QWORD)v30 )
    {
      v8 = 0;
      do
      {
        v9 = &v6[24 * v8];
        v10 = *(void **)v9;
        if ( *(_QWORD *)v9 )
        {
          *((_QWORD *)v9 + 1) = 0;
          qfree(v10);
          v6 = (char *)v29;
        }
        ++v8;
      }
      while ( v7 != v8 );
    }
    *(_QWORD *)&v30 = 0;
    qfree(v6);
  }
  if ( v32 > 1 )
  {
    v11 = a1[1];
    v12 = *a1;
    if ( a1[2] < (unsigned __int64)(v11 + 1) )
    {
      v20 = qvector_reserve(a1, v12, v11 + 1, 24);
      *a1 = v20;
      v11 = a1[1];
      v12 = v20;
    }
    v13 = v12 + 24 * v11;
    *(_QWORD *)v13 = 0;
    *(_OWORD *)(v13 + 8) = 0;
    ++a1[1];
    sub_35A790((char **)v13);
  }
  if ( value_repr_t__print_(a2 + 72, &v31, 0) )
  {
    v19 = (char **)sub_498150(a1);
    sub_35A790(v19);
  }
  if ( *(_QWORD *)(a2 + 48) > 1u )
  {
    v15 = *(char **)(a2 + 40);
    if ( v15 )
    {
      v16 = *v15;
      if ( *v15 == 5 )
      {
        v21 = v15[1];
        v22 = v15 + 1;
        v23 = v15[1];
        if ( v21 > 0x7F )
          goto LABEL_58;
        v24 = -1;
        while ( v21 - 48 <= 9 )
        {
          v27 = 0;
          if ( v24 >= 0 )
            v27 = 10 * v24;
          ++v22;
          v24 = (char)(v23 - 48) + v27;
          v21 = *v22;
          v23 = *v22;
          if ( v21 > 0x7F )
            goto LABEL_56;
        }
        if ( v23 == 46 )
        {
          v25 = v22 + 1;
          goto LABEL_50;
        }
LABEL_56:
        v25 = v22;
LABEL_50:
        if ( !*v25 )
        {
          if ( v24 < 0 )
            goto LABEL_26;
          goto LABEL_58;
        }
        if ( v24 < 0 )
        {
LABEL_58:
          v28 = (char **)sub_498150(a1);
          sub_35A790(v28);
          goto LABEL_26;
        }
        v26 = (char **)sub_498150(a1);
        sub_35A790(v26);
        v16 = *v25;
      }
      if ( !v16 )
        goto LABEL_26;
      goto LABEL_58;
    }
  }
LABEL_26:
  if ( v31 )
  {
    v32 = 0;
    qfree(v31);
  }
  return v33 - __readfsqword(0x28u);
}
