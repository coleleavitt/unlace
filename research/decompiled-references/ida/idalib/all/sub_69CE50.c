unsigned __int64 __fastcall sub_69CE50(__int64 *a1, __int64 a2)
{
  __int64 v2; // rdx
  void *v3; // r13
  void **v4; // r14
  char v5; // r12
  __int64 v6; // rsi
  __int64 v7; // r15
  __int64 v9; // rax
  __int64 v10; // r12
  void **v11; // rbx
  __int64 v12; // rbp
  void *v13; // rdi
  void *ptr; // [rsp+0h] [rbp-8h] BYREF
  __int128 vars0; // [rsp+8h] [rbp+0h]
  void *vars10; // [rsp+18h] [rbp+10h]
  __int64 vars18; // [rsp+20h] [rbp+18h]
  void *vars38; // [rsp+40h] [rbp+38h]
  char vars59; // [rsp+61h] [rbp+59h]
  unsigned __int64 vars60; // [rsp+68h] [rbp+60h]

  vars60 = __readfsqword(0x28u);
  ptr = nullptr;
  vars10 = nullptr;
  vars59 = 0;
  vars0 = 0;
  sub_698F60((__int64)&ptr, a2);
  v2 = a1[1];
  v3 = ptr;
  v4 = (void **)vars10;
  v5 = vars59;
  v6 = *a1;
  if ( a1[2] < (unsigned __int64)(v2 + 1) )
  {
    v9 = qvector_reserve(a1, v6, v2 + 1, 104);
    *a1 = v9;
    v2 = a1[1];
    v6 = v9;
  }
  v7 = v6 + 104 * v2;
  *(_QWORD *)v7 = 0;
  *(_BYTE *)(v7 + 97) = 0;
  *(_OWORD *)(v7 + 8) = 0;
  sub_698F60(v7, (__int64)&ptr);
  ++a1[1];
  if ( v5 == 2 )
  {
    if ( !v4 )
      goto LABEL_5;
    v10 = vars18;
    v11 = v4;
    v12 = 0;
    if ( vars18 )
    {
      do
      {
        v13 = *v11;
        if ( *v11 )
        {
          v11[1] = nullptr;
          qfree(v13);
        }
        ++v12;
        v11 += 7;
      }
      while ( v10 != v12 );
    }
    goto LABEL_17;
  }
  if ( v5 == 1 )
  {
    if ( vars38 )
      qfree(vars38);
    if ( v4 )
LABEL_17:
      qfree(v4);
  }
LABEL_5:
  if ( v3 )
    qfree(v3);
  return vars60 - __readfsqword(0x28u);
}
