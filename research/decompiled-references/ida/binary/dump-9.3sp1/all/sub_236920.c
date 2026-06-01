unsigned __int64 __fastcall sub_236920(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // r12d
  size_t v8; // r13
  int tinfo_size; // eax
  int v10; // edx
  __int64 v11; // rdi
  void *v12; // rax
  const void *v13; // rsi
  __int64 v14; // rsi
  unsigned __int64 v15; // rdi
  __int64 v16; // r12
  __int64 v17; // rax
  int v18; // [rsp+4h] [rbp-A4h] BYREF
  __int64 v19; // [rsp+8h] [rbp-A0h] BYREF
  __int64 v20; // [rsp+10h] [rbp-98h] BYREF
  int v21; // [rsp+18h] [rbp-90h]
  int v22; // [rsp+1Ch] [rbp-8Ch]
  __int64 v23; // [rsp+20h] [rbp-88h] BYREF
  __int128 v24; // [rsp+28h] [rbp-80h]
  __int64 v25; // [rsp+38h] [rbp-70h]
  unsigned __int64 v26; // [rsp+40h] [rbp-68h]
  __int64 v27; // [rsp+48h] [rbp-60h]
  __int64 v28; // [rsp+50h] [rbp-58h]
  int v29; // [rsp+58h] [rbp-50h]
  unsigned __int64 v30; // [rsp+68h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  v6 = a3;
  if ( (int)a3 <= 1 && (!(unsigned __int8)*(_QWORD *)(a2 + 24) || (unsigned int)verify_tinfo()) )
    return v30 - __readfsqword(0x28u);
  v8 = *(_QWORD *)(a2 + 8);
  v23 = 0;
  v24 = 0;
  if ( v8 )
  {
    v12 = (void *)qalloc_or_throw(v8, a2, a3, a4);
    v13 = *(const void **)a2;
    *((_QWORD *)&v24 + 1) = v8;
    v23 = (__int64)v12;
    memcpy(v12, v13, v8);
    *(_QWORD *)&v24 = v8;
  }
  v25 = 0;
  copy_tinfo_t();
  v26 = *(_QWORD *)(a2 + 32);
  v27 = *(_QWORD *)(a2 + 40);
  v28 = *(_QWORD *)(a2 + 48);
  v29 = *(_DWORD *)(a2 + 56);
  if ( v6 > 1 )
  {
    v21 = 0;
    v22 = v6;
    v20 = 0;
    copy_tinfo_t();
    create_tinfo();
    clear_tinfo_t();
  }
  v29 = 2;
  tinfo_size = get_tinfo_size();
  HIDWORD(v28) = tinfo_size;
  v10 = tinfo_size;
  if ( tinfo_size )
  {
    if ( v6 > 1 && (signed __int64)v26 >= *(_QWORD *)(*(_QWORD *)(a1 + 8) + 144LL) )
    {
      v14 = *(int *)(a1 + 260);
      v15 = *(_QWORD *)(a1 + 240);
      if ( !*(_DWORD *)(a1 + 260) || v26 < v15 || v14 + v15 - 1 < v26 )
      {
        v18 = tinfo_size;
        v19 = v26;
        v20 = 0;
        copy_tinfo_t();
        sub_228510(&v18, &v19, *(_QWORD *)(a1 + 8), &v20);
        clear_tinfo_t();
        v16 = v19;
        if ( (__int64)v26 > v19 || (v10 = HIDWORD(v28), v19 + v18 > (__int64)(v26 + SHIDWORD(v28))) )
        {
          v11 = *(_QWORD *)(a1 + 8);
          v17 = *(_QWORD *)(v11 + 1504);
          if ( (*(_BYTE *)(v17 + 50) & 8) != 0 )
          {
            if ( v18 > 15 )
            {
              v29 |= 0x100u;
              v10 = v18;
              v26 = v19;
              HIDWORD(v28) = v18;
LABEL_15:
              if ( !sub_226FD0(v11, v26, v10) )
                sub_2360C0((__m128i *)(a1 + 88), (__int64)&v23, nullptr);
              goto LABEL_12;
            }
          }
          else
          {
            v10 = v18;
            if ( 2 * *(_DWORD *)(v17 + 80) <= v18 )
            {
LABEL_25:
              v29 |= 0x100u;
              v26 = v16;
              HIDWORD(v28) = v10;
              goto LABEL_11;
            }
          }
          v10 = sub_11CA90(v18);
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
  clear_tinfo_t();
  if ( v23 )
  {
    *(_QWORD *)&v24 = 0;
    qfree(v23);
  }
  return v30 - __readfsqword(0x28u);
}
