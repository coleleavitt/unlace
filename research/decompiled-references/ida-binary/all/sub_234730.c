unsigned __int64 __fastcall sub_234730(__int64 *a1)
{
  char v2; // bl
  __int64 v3; // r8
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rbp
  __int64 v7; // r15
  const char *v8; // r14
  size_t v9; // r13
  unsigned __int64 v10; // r11
  __int64 v11; // rsi
  unsigned __int64 v12; // rax
  const char *v13; // rsi
  unsigned __int64 v14; // [rsp+0h] [rbp-78h]
  unsigned __int64 v15; // [rsp+0h] [rbp-78h]
  __int64 v16; // [rsp+10h] [rbp-68h] BYREF
  __int64 v17; // [rsp+18h] [rbp-60h] BYREF
  __int64 v18; // [rsp+20h] [rbp-58h] BYREF
  __int128 v19; // [rsp+28h] [rbp-50h]
  unsigned __int64 v20; // [rsp+38h] [rbp-40h]

  v20 = __readfsqword(0x28u);
  if ( !(unsigned __int8)netnode_inited() )
    return v20 - __readfsqword(0x28u);
  v16 = -1;
  netnode_check(&v16, "$ debugger application", 0, 1);
  v18 = 0;
  v2 = *((_BYTE *)a1 + 24);
  v19 = 0;
  v18 = qvector_reserve(&v18, 0, 1, 1);
  *(_BYTE *)(v18 + v19) = v2;
  v3 = *a1;
  v4 = v19 + 1;
  v5 = a1[1];
  *(_QWORD *)&v19 = v19 + 1;
  v6 = v3 + 24 * v5;
  if ( v6 != v3 )
  {
    v7 = v3;
    while ( 1 )
    {
      v8 = &s1;
      if ( *(_QWORD *)(v7 + 8) )
        v8 = *(const char **)v7;
      if ( v8 )
      {
        v9 = strlen(v8) + 1;
        v10 = v9 + v4;
        if ( __CFADD__(v9, v4) )
        {
          if ( v4 > 0x7FFFFFFFFFFFFFFELL )
          {
            if ( v4 == 0x7FFFFFFFFFFFFFFFLL )
              goto LABEL_7;
LABEL_17:
            *(_QWORD *)&v19 = 0x7FFFFFFFFFFFFFFFLL;
            goto LABEL_7;
          }
          v10 = 0x7FFFFFFFFFFFFFFFLL;
        }
      }
      else
      {
        v9 = 1;
        v8 = (const char *)&unk_5C2F25;
        v10 = v4 + 1;
        if ( v4 == -1 )
          goto LABEL_17;
      }
      v11 = v18;
      v12 = v4;
      if ( *((_QWORD *)&v19 + 1) < v10 )
      {
        v15 = v10;
        v18 = qvector_reserve(&v18, v18, v10, 1);
        v11 = v18;
        v10 = v15;
        v12 = v19;
      }
      v14 = v10;
      memset((void *)(v11 + v12), 0, v10 - v12);
      *(_QWORD *)&v19 = v14;
LABEL_7:
      v7 += 24;
      memcpy((void *)(v18 + v4), v8, v9);
      if ( v6 == v7 )
        break;
      v4 = v19;
    }
  }
  netnode_check(&v17, "$ debugger application", 0, 0);
  v13 = (const char *)v18;
  netnode_setblob(v17, v18, v19, 0, 69);
  if ( v18 )
  {
    *(_QWORD *)&v19 = 0;
    qfree(v18, v13);
  }
  return v20 - __readfsqword(0x28u);
}
