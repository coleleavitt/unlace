unsigned __int64 __fastcall sub_22F5A0(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // rdi
  size_t v8; // r13
  int tinfo_size; // eax
  int v10; // edx
  __int64 v11; // rdi
  void *v12; // rax
  const void *v13; // rsi
  unsigned __int64 v14; // rdi
  __int64 v15; // r12
  __int64 v16; // rax
  int v17; // [rsp+4h] [rbp-A4h] BYREF
  __int64 v18; // [rsp+8h] [rbp-A0h] BYREF
  __int64 v19; // [rsp+10h] [rbp-98h] BYREF
  int v20; // [rsp+18h] [rbp-90h]
  int v21; // [rsp+1Ch] [rbp-8Ch]
  void *v22; // [rsp+20h] [rbp-88h] BYREF
  __int128 v23; // [rsp+28h] [rbp-80h]
  __int64 v24; // [rsp+38h] [rbp-70h] BYREF
  unsigned __int64 v25; // [rsp+40h] [rbp-68h]
  __int64 v26; // [rsp+48h] [rbp-60h]
  __int64 v27; // [rsp+50h] [rbp-58h]
  int v28; // [rsp+58h] [rbp-50h]
  unsigned __int64 v29; // [rsp+68h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  if ( a3 <= 1 )
  {
    v6 = *(_QWORD *)(a2 + 24);
    if ( !(_BYTE)v6 || (unsigned int)verify_tinfo(v6) )
      return v29 - __readfsqword(0x28u);
  }
  v8 = *(_QWORD *)(a2 + 8);
  v22 = nullptr;
  v23 = 0;
  if ( v8 )
  {
    v12 = (void *)qalloc_or_throw(v8);
    v13 = *(const void **)a2;
    *((_QWORD *)&v23 + 1) = v8;
    v22 = v12;
    memcpy(v12, v13, v8);
    *(_QWORD *)&v23 = v8;
  }
  v24 = 0;
  copy_tinfo_t(&v24, a2 + 24);
  v25 = *(_QWORD *)(a2 + 32);
  v26 = *(_QWORD *)(a2 + 40);
  v27 = *(_QWORD *)(a2 + 48);
  v28 = *(_DWORD *)(a2 + 56);
  if ( a3 > 1 )
  {
    v20 = 0;
    v21 = a3;
    v19 = 0;
    copy_tinfo_t(&v19, a2 + 24);
    create_tinfo(&v24, 11, 11, &v19);
    clear_tinfo_t(&v19);
  }
  v28 = 2;
  tinfo_size = get_tinfo_size(0, v24, 0);
  HIDWORD(v27) = tinfo_size;
  v10 = tinfo_size;
  if ( tinfo_size )
  {
    if ( a3 > 1 && (signed __int64)v25 >= *(_QWORD *)(*(_QWORD *)(a1 + 8) + 144LL) )
    {
      v14 = *(_QWORD *)(a1 + 240);
      if ( !*(_DWORD *)(a1 + 260) || v25 < v14 || *(int *)(a1 + 260) + v14 - 1 < v25 )
      {
        v17 = tinfo_size;
        v18 = v25;
        v19 = 0;
        copy_tinfo_t(&v19, &v24);
        sub_221190(&v17, &v18, *(_QWORD *)(a1 + 8), &v19);
        clear_tinfo_t(&v19);
        v15 = v18;
        if ( (__int64)v25 > v18 || (v10 = HIDWORD(v27), v18 + v17 > (__int64)(v25 + SHIDWORD(v27))) )
        {
          v11 = *(_QWORD *)(a1 + 8);
          v16 = *(_QWORD *)(v11 + 1504);
          if ( (*(_BYTE *)(v16 + 50) & 8) != 0 )
          {
            if ( v17 > 15 )
            {
              v28 |= 0x100u;
              v10 = v17;
              v25 = v18;
              HIDWORD(v27) = v17;
LABEL_15:
              if ( !sub_21FC50(v11, v25, v10) )
                sub_22ED40((__m128i *)(a1 + 88), (__int64)&v22, nullptr);
              goto LABEL_12;
            }
          }
          else
          {
            v10 = v17;
            if ( 2 * *(_DWORD *)(v16 + 80) <= v17 )
            {
LABEL_25:
              v28 |= 0x100u;
              v25 = v15;
              HIDWORD(v27) = v10;
              goto LABEL_11;
            }
          }
          v10 = sub_1163D0(v17);
          goto LABEL_25;
        }
      }
    }
  }
LABEL_11:
  if ( v10 > 0 )
  {
    v11 = *(_QWORD *)(a1 + 8);
    goto LABEL_15;
  }
LABEL_12:
  clear_tinfo_t(&v24);
  if ( v22 )
  {
    *(_QWORD *)&v23 = 0;
    qfree(v22);
  }
  return v29 - __readfsqword(0x28u);
}
