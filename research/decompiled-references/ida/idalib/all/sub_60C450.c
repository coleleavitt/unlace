unsigned __int64 __fastcall sub_60C450(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // r9
  __int64 v3; // rax
  _QWORD *v4; // r12
  _QWORD *v5; // r15
  char *v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // r9
  __int64 v13; // r10
  size_t v14; // r8
  unsigned __int64 v15; // r11
  unsigned __int64 v16; // [rsp+0h] [rbp-80h]
  unsigned __int64 v17; // [rsp+0h] [rbp-80h]
  size_t na; // [rsp+8h] [rbp-78h]
  size_t n; // [rsp+8h] [rbp-78h]
  __int64 v20; // [rsp+10h] [rbp-70h]
  __int64 v21; // [rsp+10h] [rbp-70h]
  void *ptr; // [rsp+18h] [rbp-68h] BYREF
  __int128 v23; // [rsp+20h] [rbp-60h]
  _BYTE src[10]; // [rsp+36h] [rbp-4Ah] BYREF
  unsigned __int64 v25[8]; // [rsp+40h] [rbp-40h] BYREF

  v2 = (_QWORD *)*a2;
  v3 = a2[1];
  v25[0] = __readfsqword(0x28u);
  v23 = 0;
  ptr = nullptr;
  v4 = &v2[v3];
  if ( v4 != v2 )
  {
    v5 = v2;
    while ( 1 )
    {
      v8 = a1 - *v5;
      if ( *v5 == -1 )
        v8 = 0;
      v9 = pack_dq(src, v25, v8) - (_QWORD)src;
      v14 = v9;
      if ( !v9 )
        goto LABEL_7;
      v13 = v23;
      v15 = v23 + v9;
      if ( !__CFADD__((_QWORD)v23, v9) )
        goto LABEL_3;
      if ( (unsigned __int64)v23 <= 0x7FFFFFFFFFFFFFFELL )
        break;
      if ( (_QWORD)v23 != 0x7FFFFFFFFFFFFFFFLL )
        *(_QWORD *)&v23 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_6:
      memcpy((char *)ptr + v13, src, v14);
LABEL_7:
      if ( v4 == ++v5 )
        goto LABEL_15;
    }
    v15 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_3:
    v6 = (char *)ptr;
    v7 = v23;
    if ( *((_QWORD *)&v23 + 1) < v15 )
    {
      v21 = v23;
      n = v14;
      v17 = v15;
      ptr = (void *)qvector_reserve(&ptr, ptr, v15, 1);
      v6 = (char *)ptr;
      v13 = v21;
      v7 = v23;
      v14 = n;
      v15 = v17;
    }
    v20 = v13;
    na = v14;
    v16 = v15;
    memset(&v6[v7], 0, v15 - v7);
    v14 = na;
    v13 = v20;
    *(_QWORD *)&v23 = v16;
    goto LABEL_6;
  }
LABEL_15:
  v10 = ea2node(a1);
  netnode_supset(v10, 30, ptr, v23, 83, v11);
  if ( ptr )
  {
    *(_QWORD *)&v23 = 0;
    qfree(ptr);
  }
  return v25[0] - __readfsqword(0x28u);
}
