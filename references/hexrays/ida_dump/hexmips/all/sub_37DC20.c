__int64 __fastcall sub_37DC20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  void (__fastcall *v6)(__int64, __int64); // rbx
  __int64 path; // rax
  _BYTE *v8; // rcx
  char v9; // al
  _BYTE *v10; // rdx
  const char *v11; // rdx
  char *v12; // r13
  char v13; // bp
  __int64 v14; // rsi
  unsigned __int64 v15; // rax
  _BYTE *v16; // rbx
  unsigned __int64 v17; // r12
  unsigned __int64 v18; // r12
  const char *v19; // rsi
  _BYTE *v21; // [rsp+0h] [rbp-88h] BYREF
  __int128 v22; // [rsp+8h] [rbp-80h]
  __int64 v23; // [rsp+18h] [rbp-70h]
  char *v24; // [rsp+20h] [rbp-68h] BYREF
  __int128 v25; // [rsp+28h] [rbp-60h]
  __int64 v26; // [rsp+40h] [rbp-48h] BYREF
  __int128 v27; // [rsp+48h] [rbp-40h]
  unsigned __int64 v28; // [rsp+58h] [rbp-30h]

  v28 = __readfsqword(0x28u);
  callui(12, a2, a3, a4, a5, a6, v21, v22, *((_QWORD *)&v22 + 1), v23);
  v6 = (void (__fastcall *)(__int64, __int64))callui;
  path = get_path(1);
  v6(13, path);
  v21 = nullptr;
  v22 = 0;
  if ( getinf_str(&v21, 85) > 0 )
  {
    v8 = v21;
    v9 = *v21;
    if ( *v21 )
    {
      v10 = v21;
      do
      {
        if ( v9 != 13 )
          *v8++ = v9;
        v9 = *++v10;
      }
      while ( v9 );
    }
    *v8 = 0;
  }
  v24 = nullptr;
  v11 = s1;
  v25 = 0;
  if ( (_QWORD)v22 )
    v11 = v21;
  if ( (unsigned __int8)sub_37DB60((__int64)&v24, 1023999, (__int64)v11, (__int64)"Please enter your notes") )
  {
    v12 = v24;
    v26 = 0;
    v27 = 0;
    v13 = *v24;
    if ( !*v24 )
      goto LABEL_25;
    v14 = 0;
    v15 = 0;
    v16 = nullptr;
    while ( 1 )
    {
      if ( v13 == 10 )
      {
        v18 = 2;
        if ( v16 )
          v18 = (unsigned __int64)(v16-- + 1);
        if ( v15 < v18 )
        {
          v26 = qvector_reserve(&v26, v14, v18, 1);
          v14 = v26;
        }
        *(_QWORD *)&v27 = v18;
        v16[v14] = 13;
        v16[v26 + 1] = 0;
        v15 = *((_QWORD *)&v27 + 1);
        v16 = (_BYTE *)v27;
        v14 = v26;
      }
      v17 = 2;
      if ( v16 )
        v17 = (unsigned __int64)(v16-- + 1);
      if ( v15 < v17 )
      {
        v26 = qvector_reserve(&v26, v14, v17, 1);
        v14 = v26;
      }
      *(_QWORD *)&v27 = v17;
      ++v12;
      v16[v14] = v13;
      v16[v26 + 1] = 0;
      v13 = *v12;
      v16 = (_BYTE *)v27;
      if ( !*v12 )
        break;
      v15 = *((_QWORD *)&v27 + 1);
      v14 = v26;
    }
    if ( (_QWORD)v27 )
    {
      v19 = (const char *)v26;
      if ( (unsigned __int64)(v27 - 1) > 0xF9FFF )
      {
        *(_QWORD *)&v27 = &loc_FA000;
        v16 = &loc_FA000;
        *(_BYTE *)(v26 + 1023999) = 0;
      }
    }
    else
    {
LABEL_25:
      v16 = &byte_1;
      v19 = s1;
    }
    setinf_buf(85, v19, v16);
    if ( v26 )
    {
      *(_QWORD *)&v27 = 0;
      qfree(v26);
    }
  }
  if ( v24 )
  {
    *(_QWORD *)&v25 = 0;
    qfree(v24);
  }
  if ( v21 )
  {
    *(_QWORD *)&v22 = 0;
    qfree(v21);
  }
  return 0;
}
