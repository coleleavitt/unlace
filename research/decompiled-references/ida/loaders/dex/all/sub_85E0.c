unsigned __int64 __fastcall sub_85E0(_QWORD *a1)
{
  int v2; // eax
  __int64 v3; // rdi
  __int64 v4; // r14
  __int64 v5; // rax
  size_t v6; // rbp
  __int64 v7; // r15
  __int64 v8; // rbp
  __int64 v9; // rsi
  __int64 v10; // rax
  size_t v11; // r8
  __int64 v12; // r10
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned __int64 v15; // r11
  __int64 v17; // r13
  unsigned __int64 v18; // r15
  __int64 v19; // rsi
  __int64 v20; // rax
  unsigned __int64 v21; // [rsp+8h] [rbp-90h]
  unsigned __int64 v22; // [rsp+8h] [rbp-90h]
  size_t n; // [rsp+10h] [rbp-88h]
  size_t na; // [rsp+10h] [rbp-88h]
  __int64 v25; // [rsp+18h] [rbp-80h]
  __int64 v26; // [rsp+18h] [rbp-80h]
  int v27; // [rsp+2Ch] [rbp-6Ch] BYREF
  __int64 v28; // [rsp+30h] [rbp-68h] BYREF
  __int128 v29; // [rsp+38h] [rbp-60h]
  _BYTE src[3]; // [rsp+4Eh] [rbp-4Ah] BYREF
  _BYTE v31[7]; // [rsp+51h] [rbp-47h] BYREF
  unsigned __int64 v32[8]; // [rsp+58h] [rbp-40h] BYREF

  v32[0] = __readfsqword(0x28u);
  if ( !*((_BYTE *)a1 + 72) )
  {
    if ( !under_debugger )
      interr(20109);
    BUG();
  }
  v2 = *((unsigned __int8 *)a1 + 12);
  v3 = *a1;
  v27 = v2;
  netnode_hashset(v3, "optimized", &v27, 4, 72);
  netnode_hashset(*a1, "dex_version", a1 + 1, 4, 72);
  v4 = a1[3];
  v29 = 0;
  v28 = 0;
  v5 = pack_dw(src, v31, (unsigned __int16)v4) - (_QWORD)src;
  v6 = v5;
  if ( v5 )
  {
    v17 = v29;
    v18 = v29 + v5;
    if ( __CFADD__((_QWORD)v29, v5) )
    {
      if ( (unsigned __int64)v29 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v29 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v29 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_26;
      }
      v18 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v19 = v28;
    v20 = v29;
    if ( *((_QWORD *)&v29 + 1) < v18 )
    {
      v28 = qvector_reserve(&v28, v28, v18, 1);
      v19 = v28;
      v20 = v29;
    }
    memset((void *)(v19 + v20), 0, v18 - v20);
    *(_QWORD *)&v29 = v18;
LABEL_26:
    memcpy((void *)(v17 + v28), src, v6);
  }
  if ( (int)v4 > 0 )
  {
    v7 = 0;
    v8 = 0;
    do
    {
      v13 = v8;
      v8 = *(_QWORD *)(a1[2] + v7);
      v14 = pack_dq(src, v32, v8 - v13) - (_QWORD)src;
      v11 = v14;
      if ( !v14 )
        goto LABEL_8;
      v12 = v29;
      v15 = v29 + v14;
      if ( __CFADD__((_QWORD)v29, v14) )
      {
        if ( (unsigned __int64)v29 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( (_QWORD)v29 != 0x7FFFFFFFFFFFFFFFLL )
            *(_QWORD *)&v29 = 0x7FFFFFFFFFFFFFFFLL;
          goto LABEL_7;
        }
        v9 = v28;
        v10 = v29;
        v15 = 0x7FFFFFFFFFFFFFFFLL;
        if ( *((_QWORD *)&v29 + 1) < 0x7FFFFFFFFFFFFFFFuLL )
        {
LABEL_18:
          v26 = v29;
          na = v11;
          v22 = v15;
          v28 = qvector_reserve(&v28, v9, v15, 1);
          v9 = v28;
          v12 = v26;
          v10 = v29;
          v11 = na;
          v15 = v22;
        }
      }
      else
      {
        v9 = v28;
        v10 = v29;
        if ( *((_QWORD *)&v29 + 1) < v15 )
          goto LABEL_18;
      }
      v25 = v12;
      n = v11;
      v21 = v15;
      memset((void *)(v9 + v10), 0, v15 - v10);
      v11 = n;
      v12 = v25;
      *(_QWORD *)&v29 = v21;
LABEL_7:
      memcpy((void *)(v12 + v28), src, v11);
LABEL_8:
      v7 += 8;
    }
    while ( v7 != 8LL * (unsigned int)(v4 - 1) + 8 );
  }
  netnode_setblob(*a1, v28, v29, 0, 1);
  if ( v28 )
  {
    *(_QWORD *)&v29 = 0;
    qfree(v28);
  }
  return v32[0] - __readfsqword(0x28u);
}

