__int64 __fastcall sub_A2F0(__int64 a1, int a2, int a3, unsigned int *a4)
{
  __int64 v5; // rax
  size_t v6; // rbp
  __int64 v7; // r13
  unsigned __int64 v8; // r14
  __int64 v9; // rax
  size_t v10; // rbp
  __int64 v11; // r14
  unsigned __int64 v12; // r15
  __int64 v13; // rbp
  int v14; // r15d
  __int64 v15; // rax
  size_t v16; // r14
  __int64 v17; // r8
  unsigned __int64 v18; // r9
  __int64 v19; // r14
  __int64 v20; // rbp
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // r9
  __int64 v24; // rax
  size_t v25; // r15
  unsigned __int64 v26; // r10
  unsigned __int64 v27; // rax
  unsigned int v28; // ebx
  __int64 v30; // rsi
  __int64 v31; // rax
  __int64 v32; // rsi
  __int64 v33; // rax
  __int64 v34; // rsi
  __int64 v35; // rax
  unsigned __int64 v36; // [rsp+0h] [rbp-88h]
  __int64 v37; // [rsp+8h] [rbp-80h]
  __int64 v38; // [rsp+10h] [rbp-78h]
  int v39; // [rsp+18h] [rbp-70h]
  int v40; // [rsp+1Ch] [rbp-6Ch]
  __int64 v41; // [rsp+20h] [rbp-68h] BYREF
  __int128 v42; // [rsp+28h] [rbp-60h]
  _BYTE src[3]; // [rsp+43h] [rbp-45h] BYREF
  _BYTE v44[2]; // [rsp+46h] [rbp-42h] BYREF
  unsigned __int64 v45[8]; // [rsp+48h] [rbp-40h] BYREF

  v38 = a1;
  v39 = a2;
  v40 = a3;
  v45[0] = __readfsqword(0x28u);
  v42 = 0;
  v41 = 0;
  v5 = pack_dd(src, v45, *a4) - (_QWORD)src;
  v6 = v5;
  if ( v5 )
  {
    v7 = v42;
    v8 = v42 + v5;
    if ( __CFADD__((_QWORD)v42, v5) )
    {
      if ( (unsigned __int64)v42 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v42 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v42 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_6:
        memcpy((void *)(v7 + v41), src, v6);
        goto LABEL_7;
      }
      v8 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v34 = v41;
    v35 = v42;
    if ( *((_QWORD *)&v42 + 1) < v8 )
    {
      v41 = qvector_reserve(&v41, v41, v8, 1);
      v34 = v41;
      v35 = v42;
    }
    memset((void *)(v34 + v35), 0, v8 - v35);
    *(_QWORD *)&v42 = v8;
    goto LABEL_6;
  }
LABEL_7:
  v9 = pack_dw(src, v44, *((unsigned __int16 *)a4 + 2)) - (_QWORD)src;
  v10 = v9;
  if ( !v9 )
    goto LABEL_13;
  v11 = v42;
  v12 = v42 + v9;
  if ( !__CFADD__((_QWORD)v42, v9) )
    goto LABEL_40;
  if ( (unsigned __int64)v42 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v12 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_40:
    v30 = v41;
    v31 = v42;
    if ( *((_QWORD *)&v42 + 1) < v12 )
    {
      v41 = qvector_reserve(&v41, v41, v12, 1);
      v30 = v41;
      v31 = v42;
    }
    memset((void *)(v30 + v31), 0, v12 - v31);
    *(_QWORD *)&v42 = v12;
    goto LABEL_12;
  }
  if ( (_QWORD)v42 != 0x7FFFFFFFFFFFFFFFLL )
    *(_QWORD *)&v42 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_12:
  memcpy((void *)(v11 + v41), src, v10);
LABEL_13:
  v13 = *((_QWORD *)a4 + 2);
  v14 = (unsigned __int16)v13;
  v15 = pack_dw(src, v44, (unsigned __int16)v13) - (_QWORD)src;
  v16 = v15;
  if ( !v15 )
    goto LABEL_19;
  v17 = v42;
  v18 = v42 + v15;
  if ( !__CFADD__((_QWORD)v42, v15) )
    goto LABEL_44;
  if ( (unsigned __int64)v42 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v18 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_44:
    v32 = v41;
    v33 = v42;
    if ( *((_QWORD *)&v42 + 1) < v18 )
    {
      v36 = v18;
      v37 = v42;
      v41 = qvector_reserve(&v41, v41, v18, 1);
      v32 = v41;
      v17 = v37;
      v33 = v42;
      v18 = v36;
    }
    v37 = v17;
    v36 = v18;
    memset((void *)(v32 + v33), 0, v18 - v33);
    v17 = v37;
    *(_QWORD *)&v42 = v36;
    goto LABEL_18;
  }
  if ( (_QWORD)v42 != 0x7FFFFFFFFFFFFFFFLL )
    *(_QWORD *)&v42 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_18:
  memcpy((void *)(v17 + v41), src, v16);
LABEL_19:
  v19 = 0;
  v20 = 2LL * (unsigned __int16)v13;
  if ( v14 )
  {
    do
    {
      v24 = pack_dw(src, v44, *(unsigned __int16 *)(*((_QWORD *)a4 + 1) + v19)) - (_QWORD)src;
      v25 = v24;
      if ( !v24 )
        goto LABEL_24;
      v23 = v42;
      v26 = v42 + v24;
      if ( __CFADD__((_QWORD)v42, v24) )
      {
        if ( (unsigned __int64)v42 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( (_QWORD)v42 != 0x7FFFFFFFFFFFFFFFLL )
            *(_QWORD *)&v42 = 0x7FFFFFFFFFFFFFFFLL;
          goto LABEL_23;
        }
        v21 = v41;
        v22 = v42;
        v26 = 0x7FFFFFFFFFFFFFFFLL;
        if ( *((_QWORD *)&v42 + 1) < 0x7FFFFFFFFFFFFFFFuLL )
        {
LABEL_37:
          v36 = v26;
          v37 = v42;
          v41 = qvector_reserve(&v41, v21, v26, 1);
          v21 = v41;
          v23 = v37;
          v22 = v42;
          v26 = v36;
        }
      }
      else
      {
        v21 = v41;
        v22 = v42;
        if ( *((_QWORD *)&v42 + 1) < v26 )
          goto LABEL_37;
      }
      v37 = v23;
      v36 = v26;
      memset((void *)(v21 + v22), 0, v26 - v22);
      v23 = v37;
      *(_QWORD *)&v42 = v36;
LABEL_23:
      memcpy((void *)(v23 + v41), src, v25);
LABEL_24:
      v19 += 2;
    }
    while ( v19 != v20 );
  }
  if ( (unsigned __int64)v42 > 0x400 )
  {
    v28 = 0;
  }
  else
  {
    v27 = (unsigned int)(v39 - 1);
    if ( v27 >= *(_QWORD *)(v38 + 56) )
      sub_59F0();
    v28 = netnode_supset(*(_QWORD *)(*(_QWORD *)(v38 + 48) + 8 * v27), (unsigned __int16)v40, v41, v42, 80);
  }
  if ( v41 )
  {
    *(_QWORD *)&v42 = 0;
    qfree(v41);
  }
  return v28;
}

