unsigned __int64 __fastcall sub_251FC0(__int64 a1)
{
  _QWORD *v1; // rax
  _QWORD *v2; // rbp
  _QWORD *v3; // rbx
  unsigned __int64 *v4; // r14
  _QWORD *v5; // rdx
  _QWORD *v7; // rax
  __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  size_t v10; // r15
  const char *numbered_type_name; // rax
  const char *v12; // r15
  size_t v13; // rax
  size_t v14; // r8
  void *v15; // rdi
  size_t v16; // rdx
  const __m128i *v17; // rdi
  int v18; // r8d
  int v19; // r9d
  void *v20; // rax
  const void *v21; // rsi
  size_t v22; // [rsp+0h] [rbp-108h]
  size_t v23; // [rsp+0h] [rbp-108h]
  size_t v24; // [rsp+8h] [rbp-100h]
  unsigned int v25; // [rsp+1Ch] [rbp-ECh] BYREF
  void *dest; // [rsp+20h] [rbp-E8h] BYREF
  __int128 v27; // [rsp+28h] [rbp-E0h]
  _QWORD v28[5]; // [rsp+40h] [rbp-C8h] BYREF
  char v29; // [rsp+68h] [rbp-A0h]
  _QWORD *v30; // [rsp+70h] [rbp-98h]
  __int64 v31; // [rsp+78h] [rbp-90h]
  __int64 (__fastcall **v32)(); // [rsp+80h] [rbp-88h] BYREF
  int v33; // [rsp+88h] [rbp-80h]
  __int64 v34; // [rsp+90h] [rbp-78h]
  __int128 v35; // [rsp+98h] [rbp-70h]
  __int64 v36; // [rsp+A8h] [rbp-60h]
  __int128 v37; // [rsp+B0h] [rbp-58h]
  __int64 v38; // [rsp+C0h] [rbp-48h]
  unsigned __int64 v39; // [rsp+C8h] [rbp-40h]

  v39 = __readfsqword(0x28u);
  v33 = 0;
  v32 = (__int64 (__fastcall **)())&off_4DF8C8;
  v34 = 0;
  v36 = 0;
  v35 = 0;
  v37 = 0;
  v38 = *(_QWORD *)(a1 + 8);
  sub_255A80(&v32, a1 + 16, 0);
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
        v4 = v3 + 3;
        if ( (unsigned __int8)is_stroff(v3[9], (unsigned int)*((char *)v3 + 44)) && (*((_BYTE *)v3 + 45) & 0x21) == 1 )
        {
          v10 = v3[7];
          dest = nullptr;
          v27 = 0;
          if ( v10 )
          {
            v20 = (void *)qalloc_or_throw(v10);
            v21 = (const void *)v3[6];
            dest = v20;
            *((_QWORD *)&v27 + 1) = v10;
            memcpy(v20, v21, v10);
            *(_QWORD *)&v27 = v10;
          }
          if ( (unsigned __int8)is_ordinal_name(v3[6], &v25) )
          {
            numbered_type_name = (const char *)get_numbered_type_name(0, v25);
            v12 = numbered_type_name;
            if ( numbered_type_name && (v13 = strlen(numbered_type_name), (v14 = v13) != 0) )
            {
              v15 = dest;
              v16 = v13 + 1;
              if ( *((_QWORD *)&v27 + 1) < v13 + 1 )
              {
                v24 = v13;
                v23 = v13 + 1;
                dest = (void *)qvector_reserve(&dest, dest, v16, 1);
                v14 = v24;
                v15 = dest;
                v16 = v23;
              }
              *(_QWORD *)&v27 = v16;
              v22 = v14;
              memmove(v15, v12, v14);
              *((_BYTE *)dest + v22) = 0;
            }
            else
            {
              *(_QWORD *)&v27 = 0;
            }
          }
          v17 = (const __m128i *)sub_670B0(v38, *v4);
          if ( v17 )
          {
            memset(&v28[1], 0, 32);
            v29 = 0;
            v28[0] = &off_4DF908;
            v30 = v3 + 3;
            v31 = 0;
            if ( (unsigned int)sub_11F5B0(v17, (__int64)v28) == 1 )
              sub_FAAD0((__int64 *)&dest, (__int64)" offset %d", v31);
            else
              sub_FAAD0((__int64 *)&dest, (__int64)" opnum %d", *((char *)v3 + 44));
          }
          else
          {
            sub_FAAD0((__int64 *)&dest, (__int64)", instruction optimized out");
          }
          sub_3311F0(v38, *v4, 33, (_DWORD)dest, v18, v19);
          if ( dest )
          {
            *(_QWORD *)&v27 = 0;
            qfree(dest);
          }
        }
        if ( (*v3 & 2) != 0 )
          break;
        v5 = (_QWORD *)v3[2];
        if ( (*(_BYTE *)v5 & 2) != 0 )
        {
          v7 = (_QWORD *)(*v3 & 0xFFFFFFFFFFFFFFFCLL);
          v8 = *v7;
          if ( (*v7 & 2) == 0 )
          {
            while ( (_QWORD *)v7[2] == v3 )
            {
              v3 = v7;
              v9 = v8 & 0xFFFFFFFFFFFFFFFCLL;
              v8 = *(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v8 & 2) != 0 )
              {
                v3 = (_QWORD *)v9;
                goto LABEL_4;
              }
              v7 = (_QWORD *)v9;
            }
          }
          v3 = v7;
          goto LABEL_4;
        }
        do
        {
          v3 = v5;
          v5 = (_QWORD *)v5[1];
        }
        while ( (*(_BYTE *)v5 & 2) == 0 );
        if ( v2 == v3 )
          goto LABEL_11;
      }
    }
  }
LABEL_11:
  v32 = off_4DBCF8;
  if ( v36 )
  {
    *(_QWORD *)&v37 = 0;
    qfree(v36);
  }
  if ( v34 )
  {
    *(_QWORD *)&v35 = 0;
    qfree(v34);
  }
  return v39 - __readfsqword(0x28u);
}
