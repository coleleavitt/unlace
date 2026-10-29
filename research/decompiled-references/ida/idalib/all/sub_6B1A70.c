unsigned __int64 __fastcall sub_6B1A70(__int64 a1, __int64 *a2, const char *a3, const char *a4)
{
  size_t v7; // rax
  size_t v8; // rax
  char *v9; // rbx
  _BYTE *v10; // rsi
  __int64 v12; // rax
  bool v13; // cc
  __int64 v14; // rax
  _BYTE v15[96]; // [rsp+0h] [rbp-A8h] BYREF
  _BYTE v16[16]; // [rsp+60h] [rbp-48h] BYREF
  char v17; // [rsp+70h] [rbp-38h] BYREF
  unsigned __int64 v18; // [rsp+78h] [rbp-30h]

  v18 = __readfsqword(0x28u);
  memset(v15, 0, 0x58u);
  if ( !a3 )
  {
    if ( !under_debugger )
      interr(85);
    BUG();
  }
  MD5Init(v15);
  v7 = strlen(a3);
  MD5Update(v15, a3, v7);
  if ( a4 )
  {
    v8 = strlen(a4);
    MD5Update(v15, a4, v8);
  }
  v9 = v16;
  MD5Final(v16, v15);
  v10 = (_BYTE *)*a2;
  if ( (unsigned __int64)a2[2] <= 0x20 )
  {
    v12 = qvector_reserve(a2, v10, 33, 1);
    v13 = (unsigned __int64)a2[2] <= 1;
    *a2 = v12;
    v10 = (_BYTE *)v12;
    if ( v13 )
    {
      v14 = qvector_reserve(a2, v12, 2, 1);
      *a2 = v14;
      v10 = (_BYTE *)v14;
    }
  }
  a2[1] = 2;
  *v10 = 36;
  *(_BYTE *)(*a2 + 1) = 0;
  do
  {
    ++v9;
    sub_35A910(a2);
  }
  while ( &v17 != v9 );
  return v18 - __readfsqword(0x28u);
}
