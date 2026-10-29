unsigned __int64 __fastcall sub_251FC0(__int64 a1)
{
  _QWORD *v1; // rax
  _QWORD *v2; // rbp
  _QWORD *v3; // rbx
  __int64 v4; // rsi
  unsigned __int64 *v5; // r14
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *v8; // rdx
  _QWORD *v10; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  size_t v13; // r15
  const char *numbered_type_name; // rax
  const char *v15; // r15
  size_t v16; // rax
  size_t v17; // r8
  void *v18; // rdi
  __int64 v19; // rdx
  const __m128i *v20; // rdi
  int v21; // r8d
  int v22; // r9d
  void *v23; // rax
  const void *v24; // rsi
  size_t v25; // [rsp+0h] [rbp-108h]
  __int64 v26; // [rsp+0h] [rbp-108h]
  size_t v27; // [rsp+8h] [rbp-100h]
  void *dest; // [rsp+20h] [rbp-E8h] BYREF
  __int128 v29; // [rsp+28h] [rbp-E0h]
  _QWORD v30[5]; // [rsp+40h] [rbp-C8h] BYREF
  char v31; // [rsp+68h] [rbp-A0h]
  _QWORD *v32; // [rsp+70h] [rbp-98h]
  __int64 v33; // [rsp+78h] [rbp-90h]
  __int64 (__fastcall **v34)(); // [rsp+80h] [rbp-88h] BYREF
  int v35; // [rsp+88h] [rbp-80h]
  __int64 v36; // [rsp+90h] [rbp-78h]
  __int128 v37; // [rsp+98h] [rbp-70h]
  __int64 v38; // [rsp+A8h] [rbp-60h]
  __int128 v39; // [rsp+B0h] [rbp-58h]
  __int64 v40; // [rsp+C0h] [rbp-48h]
  unsigned __int64 v41; // [rsp+C8h] [rbp-40h]

  v41 = __readfsqword(0x28u);
  v35 = 0;
  v34 = (__int64 (__fastcall **)())&off_4DF8C8;
  v36 = 0;
  v38 = 0;
  v37 = 0;
  v39 = 0;
  v40 = *(_QWORD *)(a1 + 8);
  sub_255A80(&v34, a1 + 16, 0);
  v1 = *(_QWORD **)(*(_QWORD *)(a1 + 8) + 1328LL);
  v2 = (_QWORD *)*v1;
  if ( *v1 && v1[1] )
  {
    v3 = (_QWORD *)v2[1];
LABEL_4:
    while ( v2 != v3 )
    {
      while ( 1 )
      {
        v4 = (unsigned int)*((char *)v3 + 44);
        v5 = v3 + 3;
        if ( (unsigned __int8)is_stroff() && (*((_BYTE *)v3 + 45) & 0x21) == 1 )
        {
          v13 = v3[7];
          dest = nullptr;
          v29 = 0;
          if ( v13 )
          {
            v23 = (void *)qalloc_or_throw(v13, v4, v6, v7);
            v24 = (const void *)v3[6];
            dest = v23;
            *((_QWORD *)&v29 + 1) = v13;
            memcpy(v23, v24, v13);
            *(_QWORD *)&v29 = v13;
          }
          if ( (unsigned __int8)is_ordinal_name() )
          {
            numbered_type_name = (const char *)get_numbered_type_name();
            v15 = numbered_type_name;
            if ( numbered_type_name && (v16 = strlen(numbered_type_name), (v17 = v16) != 0) )
            {
              v18 = dest;
              v19 = v16 + 1;
              if ( *((_QWORD *)&v29 + 1) < v16 + 1 )
              {
                v27 = v16;
                v26 = v16 + 1;
                dest = (void *)qvector_reserve((__int64)&dest, (__int64)dest, v19, 1);
                v17 = v27;
                v18 = dest;
                v19 = v26;
              }
              *(_QWORD *)&v29 = v19;
              v25 = v17;
              memmove(v18, v15, v17);
              *((_BYTE *)dest + v25) = 0;
            }
            else
            {
              *(_QWORD *)&v29 = 0;
            }
          }
          v20 = (const __m128i *)sub_670B0(v40, *v5);
          if ( v20 )
          {
            memset(&v30[1], 0, 32);
            v31 = 0;
            v30[0] = &off_4DF908;
            v32 = v3 + 3;
            v33 = 0;
            sub_11F5B0(v20, (__int64)v30);
          }
          sub_FAAD0((__int64 *)&dest);
          sub_3311F0(v40, *v5, 33, (_DWORD)dest, v21, v22);
          if ( dest )
          {
            *(_QWORD *)&v29 = 0;
            qfree((__int64)dest);
          }
        }
        if ( (*v3 & 2) != 0 )
          break;
        v8 = (_QWORD *)v3[2];
        if ( (*(_BYTE *)v8 & 2) != 0 )
        {
          v10 = (_QWORD *)(*v3 & 0xFFFFFFFFFFFFFFFCLL);
          v11 = *v10;
          if ( (*v10 & 2) == 0 )
          {
            while ( (_QWORD *)v10[2] == v3 )
            {
              v3 = v10;
              v12 = v11 & 0xFFFFFFFFFFFFFFFCLL;
              v11 = *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v11 & 2) != 0 )
              {
                v3 = (_QWORD *)v12;
                goto LABEL_4;
              }
              v10 = (_QWORD *)v12;
            }
          }
          v3 = v10;
          goto LABEL_4;
        }
        do
        {
          v3 = v8;
          v8 = (_QWORD *)v8[1];
        }
        while ( (*(_BYTE *)v8 & 2) == 0 );
        if ( v2 == v3 )
          goto LABEL_11;
      }
    }
  }
LABEL_11:
  v34 = off_4DBCF8;
  if ( v38 )
  {
    *(_QWORD *)&v39 = 0;
    qfree(v38);
  }
  if ( v36 )
  {
    *(_QWORD *)&v37 = 0;
    qfree(v36);
  }
  return v41 - __readfsqword(0x28u);
}
