__int64 __fastcall sub_6DEF0(_BYTE *a1, int a2)
{
  unsigned int v2; // r12d
  const char *v3; // r15
  size_t v4; // rax
  __int64 v5; // rbx
  size_t v6; // r8
  unsigned __int64 v7; // r13
  char *v8; // rsi
  unsigned __int64 v9; // rax
  void *v10; // rax
  __int64 v11; // rbx
  size_t na; // [rsp+8h] [rbp-80h]
  size_t n; // [rsp+8h] [rbp-80h]
  void *v15; // [rsp+10h] [rbp-78h] BYREF
  unsigned __int64 v16; // [rsp+18h] [rbp-70h]
  unsigned __int64 v17; // [rsp+20h] [rbp-68h]
  void *ptr; // [rsp+30h] [rbp-58h] BYREF
  __int128 v19; // [rsp+38h] [rbp-50h]
  unsigned __int64 v20; // [rsp+48h] [rbp-40h]

  v20 = __readfsqword(0x28u);
  if ( a1[68] )
  {
    if ( !byte_1671A1 )
      sub_96F80(1621);
    BUG();
  }
  v2 = 53;
  if ( a2 )
    v2 = 2 * (a2 > 0) + 52;
  sub_6E490(&v15, v2);
  v19 = 0;
  ptr = nullptr;
  sub_17CB0((char **)&ptr);
  v3 = haystack;
  if ( !(_QWORD)v19 )
  {
    if ( haystack )
      goto LABEL_6;
LABEL_17:
    v5 = v16;
    v6 = 1;
    v3 = "";
    v7 = v16 + 1;
    if ( v16 == -1 )
    {
      v5 = -1;
      v3 = "";
      v16 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_10;
    }
    goto LABEL_7;
  }
  v3 = (const char *)ptr;
  if ( !ptr )
    goto LABEL_17;
LABEL_6:
  v4 = strlen(v3);
  v5 = v16;
  v6 = v4 + 1;
  v7 = v4 + 1 + v16;
  if ( !__CFADD__(v4 + 1, v16) )
  {
LABEL_7:
    v8 = (char *)v15;
    v9 = v5;
    if ( v17 < v7 )
    {
      n = v6;
      v15 = (void *)sub_96080(&v15, v15, v7, 1);
      v8 = (char *)v15;
      v6 = n;
      v9 = v16;
    }
    na = v6;
    memset(&v8[v9], 0, v7 - v9);
    v16 = v7;
    v6 = na;
    goto LABEL_10;
  }
  if ( v16 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v7 = 0x7FFFFFFFFFFFFFFFLL;
    goto LABEL_7;
  }
  if ( v16 != 0x7FFFFFFFFFFFFFFFLL )
    v16 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_10:
  memcpy((char *)v15 + v5, v3, v6);
  v10 = (void *)(*(__int64 (__fastcall **)(_BYTE *, _QWORD, void **))(*(_QWORD *)a1 + 16LL))(a1, v2, &v15);
  j__free(v10);
  if ( v2 == 52 )
    exit(1);
  v11 = ((_QWORD)v19 == 0) + (_QWORD)v19 - 1LL;
  if ( ptr )
  {
    *(_QWORD *)&v19 = 0;
    j__free(ptr);
  }
  if ( v15 )
  {
    v16 = 0;
    j__free(v15);
  }
  return v11;
}

