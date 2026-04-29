unsigned __int64 __fastcall sub_4F9D0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v5; // rax
  size_t v6; // r13
  __int64 v7; // r14
  unsigned __int64 v8; // r15
  __int64 v9; // rax
  _QWORD *v10; // r15
  __int64 v11; // rbp
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rax
  size_t v15; // r9
  __int64 v16; // r10
  unsigned __int64 v17; // r11
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rbp
  __int64 v22; // rbx
  __int64 v23; // r10
  size_t v24; // r9
  unsigned __int64 v25; // r11
  __int64 v26; // rsi
  __int64 v27; // rax
  __int64 v28; // [rsp+0h] [rbp-98h]
  unsigned __int64 v29; // [rsp+8h] [rbp-90h]
  size_t n; // [rsp+10h] [rbp-88h]
  __int64 v31; // [rsp+18h] [rbp-80h]
  __int64 v32; // [rsp+28h] [rbp-70h] BYREF
  __int64 v33; // [rsp+30h] [rbp-68h] BYREF
  __int128 v34; // [rsp+38h] [rbp-60h]
  _BYTE src[5]; // [rsp+4Eh] [rbp-4Ah] BYREF
  _BYTE v36[5]; // [rsp+53h] [rbp-45h] BYREF
  unsigned __int64 v37[8]; // [rsp+58h] [rbp-40h] BYREF

  v28 = a1;
  v37[0] = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a2 + 8);
  if ( !v2 )
    return v37[0] - __readfsqword(0x28u);
  v34 = 0;
  v33 = 0;
  v5 = pack_dd(src, v36, v2) - (_QWORD)src;
  v6 = v5;
  if ( v5 )
  {
    v7 = v34;
    v8 = v34 + v5;
    if ( __CFADD__((_QWORD)v34, v5) )
    {
      if ( (unsigned __int64)v34 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v34 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v34 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_8:
        memcpy((void *)(v7 + v33), src, v6);
        goto LABEL_9;
      }
      v8 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v26 = v33;
    v27 = v34;
    if ( *((_QWORD *)&v34 + 1) < v8 )
    {
      v33 = qvector_reserve(&v33, v33, v8, 1);
      v26 = v33;
      v27 = v34;
    }
    memset((void *)(v26 + v27), 0, v8 - v27);
    *(_QWORD *)&v34 = v8;
    goto LABEL_8;
  }
LABEL_9:
  v9 = v28;
  v10 = *(_QWORD **)a2;
  v11 = *(_QWORD *)a2 + 16LL * *(_QWORD *)(a2 + 8);
  if ( (_QWORD *)v11 != v10 )
  {
    while ( 1 )
    {
      v20 = pack_dq(src, v37, *v10 + 1LL - v9) - (_QWORD)src;
      v24 = v20;
      if ( v20 )
        break;
LABEL_15:
      v14 = pack_dd(src, v36, (unsigned int)v10[1] - *(_DWORD *)v10) - (_QWORD)src;
      v15 = v14;
      if ( v14 )
      {
        v16 = v34;
        v17 = v34 + v14;
        if ( __CFADD__((_QWORD)v34, v14) )
        {
          if ( (unsigned __int64)v34 <= 0x7FFFFFFFFFFFFFFELL )
          {
            v18 = v33;
            v19 = v34;
            v17 = 0x7FFFFFFFFFFFFFFFLL;
            if ( *((_QWORD *)&v34 + 1) < 0x7FFFFFFFFFFFFFFFuLL )
              goto LABEL_32;
            goto LABEL_18;
          }
          if ( (_QWORD)v34 != 0x7FFFFFFFFFFFFFFFLL )
            *(_QWORD *)&v34 = 0x7FFFFFFFFFFFFFFFLL;
        }
        else
        {
          v18 = v33;
          v19 = v34;
          if ( *((_QWORD *)&v34 + 1) >= v17 )
            goto LABEL_18;
LABEL_32:
          v31 = v34;
          n = v15;
          v29 = v17;
          v33 = qvector_reserve(&v33, v18, v17, 1);
          v18 = v33;
          v16 = v31;
          v19 = v34;
          v15 = n;
          v17 = v29;
LABEL_18:
          v31 = v16;
          n = v15;
          v29 = v17;
          memset((void *)(v18 + v19), 0, v17 - v19);
          v15 = n;
          v16 = v31;
          *(_QWORD *)&v34 = v29;
        }
        memcpy((void *)(v16 + v33), src, v15);
      }
      v9 = v10[1];
      v10 += 2;
      if ( (_QWORD *)v11 == v10 )
        goto LABEL_29;
    }
    v23 = v34;
    v25 = v34 + v20;
    if ( __CFADD__((_QWORD)v34, v20) )
    {
      if ( (unsigned __int64)v34 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v34 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v34 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_14:
        memcpy((void *)(v23 + v33), src, v24);
        goto LABEL_15;
      }
      v25 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v12 = v33;
    v13 = v34;
    if ( *((_QWORD *)&v34 + 1) < v25 )
    {
      v31 = v34;
      n = v24;
      v29 = v25;
      v33 = qvector_reserve(&v33, v33, v25, 1);
      v12 = v33;
      v23 = v31;
      v13 = v34;
      v24 = n;
      v25 = v29;
    }
    v31 = v23;
    n = v24;
    v29 = v25;
    memset((void *)(v12 + v13), 0, v25 - v13);
    v24 = n;
    v23 = v31;
    *(_QWORD *)&v34 = v29;
    goto LABEL_14;
  }
LABEL_29:
  v21 = sub_1DD10();
  v22 = netnode_suplast(v21, 2);
  netnode_setblob(v21, v33, v34, v22 + 2, 2);
  v32 = v22 + 3;
  netnode_supset(v21, v28, &v32, 8, 359);
  if ( v33 )
  {
    *(_QWORD *)&v34 = 0;
    qfree(v33);
  }
  return v37[0] - __readfsqword(0x28u);
}
