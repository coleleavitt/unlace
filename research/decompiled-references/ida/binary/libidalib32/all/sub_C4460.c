unsigned __int64 __fastcall sub_C4460(__int64 *a1)
{
  char v2; // bl
  unsigned __int64 v3; // rbx
  __int64 v4; // rbp
  __int64 v5; // r15
  const char *v6; // r14
  size_t v7; // r13
  unsigned __int64 v8; // r11
  _BYTE *v9; // rsi
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // [rsp+0h] [rbp-78h]
  unsigned __int64 v12; // [rsp+0h] [rbp-78h]
  _BYTE *v13; // [rsp+20h] [rbp-58h]
  __int128 v14; // [rsp+28h] [rbp-50h]
  unsigned __int64 v15; // [rsp+38h] [rbp-40h]

  v15 = __readfsqword(0x28u);
  if ( !(unsigned __int8)netnode_inited() )
    return v15 - __readfsqword(0x28u);
  netnode_check();
  v2 = *((_BYTE *)a1 + 24);
  v14 = 0;
  v13 = (_BYTE *)qvector_reserve();
  *v13 = v2;
  v3 = 1;
  *(_QWORD *)&v14 = 1;
  v4 = *a1 + 24 * a1[1];
  if ( v4 != *a1 )
  {
    v5 = *a1;
    while ( 1 )
    {
      v6 = s1;
      if ( *(_QWORD *)(v5 + 8) )
        v6 = *(const char **)v5;
      if ( v6 )
      {
        v7 = strlen(v6) + 1;
        v8 = v7 + v3;
        if ( __CFADD__(v7, v3) )
        {
          if ( v3 > 0x7FFFFFFFFFFFFFFELL )
          {
            if ( v3 == 0x7FFFFFFFFFFFFFFFLL )
              goto LABEL_7;
LABEL_17:
            *(_QWORD *)&v14 = 0x7FFFFFFFFFFFFFFFLL;
            goto LABEL_7;
          }
          v8 = 0x7FFFFFFFFFFFFFFFLL;
        }
      }
      else
      {
        v7 = 1;
        v6 = "";
        v8 = v3 + 1;
        if ( v3 == -1 )
          goto LABEL_17;
      }
      v9 = v13;
      v10 = v3;
      if ( *((_QWORD *)&v14 + 1) < v8 )
      {
        v12 = v8;
        v13 = (_BYTE *)qvector_reserve();
        v9 = v13;
        v8 = v12;
        v10 = v14;
      }
      v11 = v8;
      memset(&v9[v10], 0, v8 - v10);
      *(_QWORD *)&v14 = v11;
LABEL_7:
      v5 += 24;
      memcpy(&v13[v3], v6, v7);
      if ( v4 == v5 )
        break;
      v3 = v14;
    }
  }
  netnode_check();
  netnode_setblob();
  if ( v13 )
    qfree();
  return v15 - __readfsqword(0x28u);
}

