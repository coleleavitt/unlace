unsigned __int64 __fastcall sub_532CD0(__int64 *a1, _QWORD *a2, char a3)
{
  unsigned __int64 v5; // rbx
  _QWORD *v6; // rsi
  size_t v7; // rbp
  __int64 v8; // rbp
  unsigned __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  size_t v15; // r9
  __int64 v16; // r8
  size_t v17; // r10
  __int64 v18; // rsi
  __int64 v20; // rax
  void *v21; // rax
  __int64 v22; // rax
  unsigned __int64 v23; // [rsp+8h] [rbp-70h]
  size_t v24; // [rsp+8h] [rbp-70h]
  __int64 v25; // [rsp+10h] [rbp-68h]
  __int64 v26; // [rsp+10h] [rbp-68h]
  size_t v27; // [rsp+18h] [rbp-60h]
  void *src; // [rsp+20h] [rbp-58h] BYREF
  __int128 v29; // [rsp+28h] [rbp-50h]
  unsigned __int64 v30; // [rsp+38h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  if ( a2[1] )
  {
    v5 = 0;
    while ( 1 )
    {
      v6 = (_QWORD *)(*a2 + 24 * v5);
      if ( a3 )
      {
        src = nullptr;
        v29 = 0;
        v7 = v6[1];
        if ( !v7 )
          goto LABEL_5;
        v21 = (void *)qalloc_or_throw(v6[1]);
        *((_QWORD *)&v29 + 1) = v7;
        src = v21;
        v6 = (_QWORD *)*v6;
        memcpy(v21, v6, v7);
        *(_QWORD *)&v29 = v7;
      }
      else
      {
        sub_5329D0((__int64)&src, (__int64)v6);
        v7 = v29;
        if ( !(_QWORD)v29 )
          goto LABEL_16;
      }
      v15 = v7 - 1;
      if ( v7 != 1 )
      {
        v16 = a1[1];
        v17 = v7 - 1;
        if ( v16 )
        {
          --v16;
          v17 = v15 + v16;
          v7 += v16;
        }
        v18 = *a1;
        if ( a1[2] < v7 )
        {
          v27 = v17;
          v26 = v16;
          v24 = v15;
          v22 = qvector_reserve(a1, v18, v7, 1);
          *a1 = v22;
          v17 = v27;
          v18 = v22;
          v16 = v26;
          v15 = v24;
        }
        a1[1] = v7;
        *(_BYTE *)(v18 + v17) = 0;
        v6 = src;
        memcpy((void *)(v16 + *a1), src, v15);
      }
LABEL_16:
      if ( !src )
      {
LABEL_5:
        if ( ++v5 >= a2[1] )
          return v30 - __readfsqword(0x28u);
        goto LABEL_6;
      }
      *(_QWORD *)&v29 = 0;
      ++v5;
      qfree(src, (const char *)v6, v12, v13, v14, v15);
      if ( v5 >= a2[1] )
        return v30 - __readfsqword(0x28u);
LABEL_6:
      v8 = a1[1];
      if ( v8 )
      {
        v9 = v8 + 1;
        v10 = a1[1];
        v11 = *a1;
        --v8;
        if ( a1[2] >= v9 )
          goto LABEL_8;
      }
      else
      {
        v11 = *a1;
        v9 = 2;
        v10 = 1;
        if ( (unsigned __int64)a1[2] >= 2 )
          goto LABEL_8;
      }
      v25 = v10;
      v23 = v9;
      v20 = qvector_reserve(a1, v11, v9, 1);
      v10 = v25;
      v9 = v23;
      *a1 = v20;
      v11 = v20;
LABEL_8:
      a1[1] = v9;
      *(_BYTE *)(v11 + v10) = 0;
      *(_BYTE *)(*a1 + v8) = 44;
    }
  }
  return v30 - __readfsqword(0x28u);
}
