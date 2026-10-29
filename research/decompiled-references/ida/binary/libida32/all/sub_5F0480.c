unsigned __int64 __fastcall sub_5F0480(unsigned int a1, _QWORD *a2)
{
  _DWORD *v2; // r9
  __int64 v3; // rax
  _DWORD *v4; // r12
  _DWORD *v5; // r15
  char *v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  unsigned int v10; // eax
  __int64 v12; // r10
  size_t v13; // r8
  unsigned __int64 v14; // r11
  unsigned __int64 v15; // [rsp+0h] [rbp-80h]
  unsigned __int64 v16; // [rsp+0h] [rbp-80h]
  size_t na; // [rsp+8h] [rbp-78h]
  size_t n; // [rsp+8h] [rbp-78h]
  __int64 v19; // [rsp+10h] [rbp-70h]
  __int64 v20; // [rsp+10h] [rbp-70h]
  void *ptr; // [rsp+18h] [rbp-68h] BYREF
  __int128 v22; // [rsp+20h] [rbp-60h]
  _BYTE src[5]; // [rsp+3Bh] [rbp-45h] BYREF
  unsigned __int64 v24[8]; // [rsp+40h] [rbp-40h] BYREF

  v2 = (_DWORD *)*a2;
  v3 = a2[1];
  v24[0] = __readfsqword(0x28u);
  v22 = 0;
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
      v9 = pack_dd(src, v24, v8) - (_QWORD)src;
      v13 = v9;
      if ( !v9 )
        goto LABEL_7;
      v12 = v22;
      v14 = v22 + v9;
      if ( !__CFADD__((_QWORD)v22, v9) )
        goto LABEL_3;
      if ( (unsigned __int64)v22 <= 0x7FFFFFFFFFFFFFFELL )
        break;
      if ( (_QWORD)v22 != 0x7FFFFFFFFFFFFFFFLL )
        *(_QWORD *)&v22 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_6:
      memcpy((char *)ptr + v12, src, v13);
LABEL_7:
      if ( v4 == ++v5 )
        goto LABEL_15;
    }
    v14 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_3:
    v6 = (char *)ptr;
    v7 = v22;
    if ( *((_QWORD *)&v22 + 1) < v14 )
    {
      v20 = v22;
      n = v13;
      v16 = v14;
      ptr = (void *)qvector_reserve(&ptr, ptr, v14, 1);
      v6 = (char *)ptr;
      v12 = v20;
      v7 = v22;
      v13 = n;
      v14 = v16;
    }
    v19 = v12;
    na = v13;
    v15 = v14;
    memset(&v6[v7], 0, v14 - v7);
    v13 = na;
    v12 = v19;
    *(_QWORD *)&v22 = v15;
    goto LABEL_6;
  }
LABEL_15:
  v10 = ea2node(a1);
  netnode_supset(v10, 30, ptr, v22, 83);
  if ( ptr )
  {
    *(_QWORD *)&v22 = 0;
    qfree(ptr);
  }
  return v24[0] - __readfsqword(0x28u);
}

