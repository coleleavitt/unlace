unsigned __int64 __fastcall sub_691290(__int64 a1, __int64 *a2, const char *a3, const char *a4)
{
  char *v7; // rbx
  _BYTE *v8; // rsi
  __int64 v10; // rax
  bool v11; // cc
  __int64 v12; // rax
  _BYTE v13[96]; // [rsp+0h] [rbp-A8h] BYREF
  _BYTE v14[16]; // [rsp+60h] [rbp-48h] BYREF
  char v15; // [rsp+70h] [rbp-38h] BYREF
  unsigned __int64 v16; // [rsp+78h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  memset(v13, 0, 0x58u);
  if ( !a3 )
  {
    if ( !under_debugger )
      interr(85);
    BUG();
  }
  MD5Init(v13);
  strlen(a3);
  MD5Update();
  if ( a4 )
  {
    strlen(a4);
    MD5Update();
  }
  v7 = v14;
  MD5Final(v14, v13);
  v8 = (_BYTE *)*a2;
  if ( (unsigned __int64)a2[2] <= 0x20 )
  {
    v10 = qvector_reserve(a2, v8, 33, 1);
    v11 = (unsigned __int64)a2[2] <= 1;
    *a2 = v10;
    v8 = (_BYTE *)v10;
    if ( v11 )
    {
      v12 = qvector_reserve(a2, v10, 2, 1);
      *a2 = v12;
      v8 = (_BYTE *)v12;
    }
  }
  a2[1] = 2;
  *v8 = 36;
  *(_BYTE *)(*a2 + 1) = 0;
  do
  {
    ++v7;
    sub_357520(a2);
  }
  while ( &v15 != v7 );
  return v16 - __readfsqword(0x28u);
}

