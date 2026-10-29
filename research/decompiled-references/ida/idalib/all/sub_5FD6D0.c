const char *__fastcall sub_5FD6D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char **a6)
{
  size_t v7; // rbp
  __int16 v9; // ax
  char *v10; // rsi
  char v11; // dl
  const char *v12; // rbp
  void *v14; // rax
  const void *v15; // rsi
  char *v16; // rbx
  char *v17; // r14
  bool v18; // cf
  char *v19; // r14
  void *ptr; // [rsp+0h] [rbp-88h] BYREF
  __int128 v21; // [rsp+8h] [rbp-80h]
  __int16 v22; // [rsp+18h] [rbp-70h]
  char *v23; // [rsp+20h] [rbp-68h]
  char v24; // [rsp+28h] [rbp-60h]
  __m128i v25; // [rsp+30h] [rbp-58h]
  unsigned __int64 v26; // [rsp+48h] [rbp-40h]

  v7 = *(_QWORD *)(a3 + 8);
  v26 = __readfsqword(0x28u);
  ptr = nullptr;
  v21 = 0;
  if ( v7 )
  {
    v14 = (void *)qalloc_or_throw(v7);
    v15 = *(const void **)a3;
    *((_QWORD *)&v21 + 1) = v7;
    ptr = v14;
    memcpy(v14, v15, v7);
    *(_QWORD *)&v21 = v7;
  }
  v9 = *(_WORD *)(a3 + 24);
  v10 = *(char **)(a3 + 32);
  v11 = *(_BYTE *)(a3 + 40);
  v22 = v9;
  v23 = v10;
  v24 = v11;
  v25 = _mm_loadu_si128((const __m128i *)(a3 + 48));
  if ( v9 != 123 )
  {
    if ( v9 != 3 )
    {
LABEL_5:
      v12 = "Wrong START_EA";
      goto LABEL_6;
    }
    v17 = (char *)&loc_800000;
    goto LABEL_13;
  }
  sub_7480A0(a1, &ptr);
  if ( v22 != 3 )
    goto LABEL_5;
  v16 = v23;
  sub_7480A0(a1, &ptr);
  if ( v22 != 44 )
  {
LABEL_11:
    v12 = "Syntax: 'PRIVRANGE={START_EA,SIZE}' or 'PRIVRANGE=START_EA'";
    goto LABEL_6;
  }
  sub_7480A0(a1, &ptr);
  v12 = "Wrong END_EA";
  if ( v22 == 3 )
  {
    v17 = v23;
    v12 = "Insufficient size of PRIVRANGE";
    if ( v23 > &algn_7FFFFD[2] )
    {
      sub_7480A0(a1, &ptr);
      v10 = v16;
      if ( v22 == 125 )
      {
LABEL_13:
        v18 = __CFADD__(v10, v17);
        v19 = &v17[(_QWORD)v10];
        if ( v18 )
        {
          v12 = "Wrong PRIVRANGE: end_ea < start_ea";
        }
        else
        {
          *a6 = v10;
          a6[1] = v19;
          setinf(27, v10);
          setinf(28, v19);
          v12 = nullptr;
        }
        goto LABEL_6;
      }
      goto LABEL_11;
    }
  }
LABEL_6:
  if ( ptr )
  {
    *(_QWORD *)&v21 = 0;
    qfree(ptr);
  }
  return v12;
}
