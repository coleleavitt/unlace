unsigned __int64 __fastcall sub_7C12E0(__int64 *a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rax
  __int64 v6; // rbp
  __int64 v7; // rbx
  unsigned int *v8; // r14
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // r13
  unsigned int *v12; // r12
  int v13; // r13d
  __int64 v14; // rcx
  __int64 v15; // rax
  size_t v16; // rcx
  void *v17; // rdi
  int v19; // eax
  _BYTE *v20; // rsi
  __int64 v21; // rax
  unsigned int v22; // esi
  int v23; // eax
  __int64 v24; // [rsp+0h] [rbp-B0h]
  __int64 v27; // [rsp+28h] [rbp-88h]
  void *v28; // [rsp+30h] [rbp-80h] BYREF
  __int128 v29; // [rsp+38h] [rbp-78h]
  __int64 v30; // [rsp+48h] [rbp-68h]
  void *ptr; // [rsp+50h] [rbp-60h] BYREF
  __int128 v32; // [rsp+58h] [rbp-58h]
  unsigned __int64 v33; // [rsp+70h] [rbp-40h]

  v33 = __readfsqword(0x28u);
  v5 = a2[1];
  v29 = 0;
  v27 = 0;
  v28 = nullptr;
  v30 = 0;
  ptr = nullptr;
  v32 = 0;
  v24 = v5;
  if ( !v5 )
    goto LABEL_20;
  v6 = 0;
  v7 = 0;
  do
  {
    v8 = (unsigned int *)(v6 + *a2);
    v9 = *((_QWORD *)v8 + 1);
    v10 = v9 >> 20;
    if ( (v9 & 0xFF00000) != 0 )
    {
      if ( (_QWORD)v29 )
      {
        if ( (_DWORD)v27 == *v8 )
        {
          v19 = HIDWORD(v27);
        }
        else
        {
          sub_407AD0((__int64 *)&v28, 0);
          sub_407AD0((__int64 *)&v28, *v8);
          LODWORD(v27) = *v8;
          v19 = 0;
        }
      }
      else
      {
        sub_407AD0((__int64 *)&v28, *v8);
        LODWORD(v27) = *v8;
        v19 = HIDWORD(v27);
      }
      sub_407AD0((__int64 *)&v28, v8[1] - v19);
      v20 = v28;
      HIDWORD(v27) = v8[1];
      v21 = v29;
      a3 = v29 + 1;
      if ( *((_QWORD *)&v29 + 1) < (unsigned __int64)(v29 + 1) )
      {
        v28 = (void *)qvector_reserve(&v28, v28, a3, 1);
        v20 = v28;
        v21 = v29;
      }
      v20[v21] = v10;
      *(_QWORD *)&v29 = v29 + 1;
      v9 = *((_QWORD *)v8 + 1);
      v11 = HIDWORD(v9);
      if ( !HIDWORD(v9) )
        goto LABEL_5;
LABEL_29:
      v22 = *v8;
      if ( (_QWORD)v32 )
      {
        if ( (_DWORD)v30 == v22 )
        {
          v23 = HIDWORD(v30);
        }
        else
        {
          sub_407AD0((__int64 *)&ptr, 0);
          sub_407AD0((__int64 *)&ptr, *v8);
          v30 = *v8;
          v23 = 0;
        }
      }
      else
      {
        sub_407AD0((__int64 *)&ptr, v22);
        LODWORD(v30) = *v8;
        v23 = HIDWORD(v30);
      }
      sub_407AD0((__int64 *)&ptr, v8[1] - v23);
      HIDWORD(v30) = v8[1];
      sub_407AD0((__int64 *)&ptr, v11);
      v9 = *((_QWORD *)v8 + 1);
      goto LABEL_5;
    }
    v11 = HIDWORD(v9);
    if ( HIDWORD(v9) )
      goto LABEL_29;
LABEL_5:
    v12 = v8 + 4;
    v13 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v14 = 4 * (v13 + (unsigned int)(v13 > 1) + 5);
        v15 = v9 & (15LL << (4 * ((unsigned __int8)v13 + (v13 > 1) + 5)));
        if ( !v15 )
          goto LABEL_10;
        if ( v13 > 1 )
          break;
        if ( v15 == 5LL << (4 * ((unsigned __int8)v13 + (v13 > 1) + 5)) )
        {
          sub_7BE1F0((__int64 *)&v28, v12, a3, v14, a5);
          v9 = *((_QWORD *)v8 + 1);
        }
        ++v13;
        v12 += 34;
      }
      if ( v15 == 5LL << (4 * ((unsigned __int8)v13 + (v13 > 1) + 5)) )
        sub_7BE1F0((__int64 *)&ptr, v12, a3, v14, a5);
LABEL_10:
      ++v13;
      v12 += 34;
      if ( v13 == 8 )
        break;
      v9 = *((_QWORD *)v8 + 1);
    }
    ++v7;
    v6 += 1104;
  }
  while ( v24 != v7 );
  if ( (_QWORD)v29 )
  {
    sub_7C0C50(a1, 0xAu, v28, v29);
    v16 = v32;
    v17 = ptr;
    if ( !(_QWORD)v32 )
      goto LABEL_18;
LABEL_38:
    sub_7C0C50(a1, 0xBu, v17, v16);
    v17 = ptr;
    goto LABEL_18;
  }
  v16 = v32;
  v17 = ptr;
  if ( (_QWORD)v32 )
    goto LABEL_38;
LABEL_18:
  if ( v17 )
  {
    *(_QWORD *)&v32 = 0;
    qfree(v17);
  }
LABEL_20:
  if ( v28 )
  {
    *(_QWORD *)&v29 = 0;
    qfree(v28);
  }
  return v33 - __readfsqword(0x28u);
}

