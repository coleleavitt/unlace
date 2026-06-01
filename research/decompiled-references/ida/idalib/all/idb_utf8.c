bool __fastcall idb_utf8(__int64 *a1, const char *a2, int a3, char a4)
{
  int v4; // r15d
  unsigned __int8 default_encoding_idx; // al
  __int64 encoding_name; // rbx
  unsigned __int8 v7; // al
  unsigned __int8 (*v8)(void); // rax
  int v9; // eax
  size_t v11; // rax
  __int64 v12; // r8
  size_t v13; // r9
  size_t v14; // r10
  __int64 v15; // rsi
  size_t v16; // rdx
  __int64 v17; // rax
  size_t v18; // [rsp+8h] [rbp-D0h]
  size_t v19; // [rsp+10h] [rbp-C8h]
  size_t v20; // [rsp+18h] [rbp-C0h]
  __int64 v21; // [rsp+20h] [rbp-B8h]
  size_t v22; // [rsp+28h] [rbp-B0h]
  unsigned int v23; // [rsp+3Ch] [rbp-9Ch] BYREF
  _QWORD v24[4]; // [rsp+40h] [rbp-98h] BYREF
  _QWORD v25[6]; // [rsp+60h] [rbp-78h] BYREF
  char s[8]; // [rsp+90h] [rbp-48h] BYREF
  unsigned __int64 v27; // [rsp+98h] [rbp-40h]

  v4 = a4 & 1;
  v27 = __readfsqword(0x28u);
  if ( a3 < 0 )
    v18 = strlen(a2);
  else
    v18 = a3;
  v25[2] = a2;
  v25[1] = 0;
  v25[4] = 0;
  v25[0] = off_2B3DE50;
  v25[3] = v18;
  default_encoding_idx = get_default_encoding_idx(1);
  encoding_name = get_encoding_name(default_encoding_idx);
  v7 = getinf_flag(3, 32);
  sub_8B7BF0(v24, v25, encoding_name, v7, 0);
  while ( 1 )
  {
    do
    {
      while ( 1 )
      {
        v8 = *(unsigned __int8 (**)(void))(*(_QWORD *)v24[0] + 16LL);
        if ( (char *)v8 == (char *)sub_4C74A0 )
        {
          if ( *(_QWORD *)(v24[0] + 32LL) >= *(_QWORD *)(v24[0] + 24LL) )
            return v24[2] == v18;
        }
        else if ( v8() )
        {
          return v24[2] == v18;
        }
        v9 = sub_8B7CF0(v24, s, &v23);
        if ( v9 )
          break;
        if ( v4 )
        {
          put_cstring_cp(a1, v23, s, -1, 2);
        }
        else
        {
          v11 = strlen(s);
          v12 = a1[1];
          v13 = v11;
          v14 = v11;
          if ( v12 )
          {
            --v12;
            v14 = v11 + v12;
          }
          v15 = *a1;
          v16 = v14 + 1;
          if ( a1[2] < v14 + 1 )
          {
            v22 = v11;
            v21 = v12;
            v20 = v14;
            v19 = v14 + 1;
            v17 = qvector_reserve(a1, v15, v16, 1);
            v13 = v22;
            v12 = v21;
            *a1 = v17;
            v14 = v20;
            v15 = v17;
            v16 = v19;
          }
          a1[1] = v16;
          *(_BYTE *)(v15 + v14) = 0;
          memmove((void *)(v12 + *a1), s, v13);
        }
      }
    }
    while ( v9 == 1 );
    if ( !v4 )
      break;
    put_cstring_cp(a1, 0xFFFFFFFFLL, s, -1, 0);
  }
  return 0;
}
