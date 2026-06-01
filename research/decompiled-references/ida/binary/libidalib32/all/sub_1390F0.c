unsigned __int64 __fastcall sub_1390F0(int a1)
{
  int v2; // ebp
  __int64 extra_cmt; // rax
  __int64 v4; // rbx
  __int64 v5; // r8
  __int64 v6; // r15
  size_t v7; // r9
  size_t v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // r15
  __int64 v11; // rsi
  const char *v12; // r8
  const char *v13; // rdx
  const char *v14; // r13
  int v15; // ebp
  const char *v16; // rbx
  char *v17; // rax
  __int64 v19; // rsi
  __int64 v20; // [rsp+8h] [rbp-80h]
  __int64 v21; // [rsp+10h] [rbp-78h]
  __int128 v22; // [rsp+18h] [rbp-70h]
  void *src; // [rsp+30h] [rbp-58h] BYREF
  __int128 v24; // [rsp+38h] [rbp-50h]
  unsigned __int64 v25; // [rsp+48h] [rbp-40h]

  v25 = __readfsqword(0x28u);
  v22 = 0;
  v21 = 0;
  src = nullptr;
  v24 = 0;
  while ( 1 )
  {
    v2 = a1 + 1;
    extra_cmt = get_extra_cmt();
    v4 = v22;
    v5 = v22;
    if ( extra_cmt < 0 )
      break;
    v6 = v24;
    if ( (_QWORD)v24 )
    {
      v7 = v24 - 1;
      if ( (_QWORD)v24 != 1 )
      {
        v8 = v24 - 1;
        if ( (_QWORD)v22 )
        {
          v5 = v22 - 1;
          v8 = v7 + v22 - 1;
          v6 = v24 + v22 - 1;
        }
        v9 = v21;
        if ( v6 )
        {
          v20 = v5;
          v21 = qvector_reserve();
          v5 = v20;
          v9 = v21;
          v7 = v24 - 1;
        }
        *(_BYTE *)(v9 + v8) = 0;
        memcpy((void *)(v5 + v21), src, v7);
        v4 = v6;
      }
    }
    v10 = 2;
    if ( v4 )
      v10 = v4-- + 1;
    v11 = v21;
    if ( v10 )
    {
      v21 = qvector_reserve();
      v11 = v21;
    }
    *(_QWORD *)&v22 = v10;
    a1 = v2;
    *(_BYTE *)(v11 + v4) = 10;
    *(_BYTE *)(v21 + v4 + 1) = 0;
  }
  if ( (unsigned __int64)v22 > 1 )
  {
    v19 = v21;
    if ( *(_BYTE *)(v21 + v22 - 2) == 10 )
    {
      if ( (__int64)v22 - 1 <= 1 )
      {
        if ( v21 )
        {
          *(_QWORD *)&v22 = 0;
          qfree();
          v21 = 0;
        }
      }
      else
      {
        if ( *((_QWORD *)&v22 + 1) < (unsigned __int64)(v22 - 1) )
        {
          v21 = qvector_reserve();
          v19 = v21;
        }
        *(_QWORD *)&v22 = v22 - 1;
        *(_BYTE *)(v19 + v4 - 2) = 0;
      }
    }
  }
  v12 = (const char *)itext();
  v13 = s1;
  if ( (_QWORD)v22 )
    v13 = (const char *)v21;
  if ( (unsigned __int8)sub_139030((__int64)&src, 0, (__int64)v13, (__int64)"%s", v12) )
  {
    if ( (unsigned __int64)v24 > 1 )
    {
      v14 = (const char *)src;
      v15 = 0;
      while ( 1 )
      {
        v16 = nullptr;
        v17 = strchr(v14, 10);
        if ( v17 )
        {
          *v17 = 0;
          v16 = v17 + 1;
        }
        if ( !(unsigned __int8)update_extra_cmt() )
          break;
        ++v15;
        if ( !v16 )
          break;
        v14 = v16;
      }
    }
    delete_extra_cmts();
  }
  if ( src )
  {
    *(_QWORD *)&v24 = 0;
    qfree();
  }
  if ( v21 )
    qfree();
  return v25 - __readfsqword(0x28u);
}

