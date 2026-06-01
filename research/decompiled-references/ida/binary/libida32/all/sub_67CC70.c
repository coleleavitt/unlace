unsigned __int64 __fastcall sub_67CC70(__int64 *a1, void **a2)
{
  __int64 v2; // rdx
  void *v3; // r14
  void **v4; // r15
  char v5; // r13
  __int64 v6; // rsi
  __int64 v7; // rbp
  __int64 v9; // rax
  __int64 v10; // r12
  void **v11; // rbx
  __int64 v12; // rbp
  void *v13; // rdi
  void *ptr; // [rsp+0h] [rbp-A8h] BYREF
  __int128 v15; // [rsp+8h] [rbp-A0h]
  void *v16; // [rsp+18h] [rbp-90h]
  __int64 v17; // [rsp+20h] [rbp-88h]
  void *v18; // [rsp+38h] [rbp-70h]
  char v19; // [rsp+59h] [rbp-4Fh]
  unsigned __int64 v20; // [rsp+68h] [rbp-40h]

  v20 = __readfsqword(0x28u);
  ptr = nullptr;
  v16 = nullptr;
  v19 = 0;
  v15 = 0;
  sub_679080(&ptr, a2);
  v2 = a1[1];
  v3 = ptr;
  v4 = (void **)v16;
  v5 = v19;
  v6 = *a1;
  if ( a1[2] < (unsigned __int64)(v2 + 1) )
  {
    v9 = qvector_reserve(a1, v6, v2 + 1, 96);
    *a1 = v9;
    v2 = a1[1];
    v6 = v9;
  }
  v7 = v6 + 96 * v2;
  *(_QWORD *)v7 = 0;
  *(_BYTE *)(v7 + 89) = 0;
  *(_OWORD *)(v7 + 8) = 0;
  sub_679080((void **)v7, &ptr);
  ++a1[1];
  if ( v5 == 2 )
  {
    if ( !v4 )
      goto LABEL_5;
    v10 = v17;
    v11 = v4;
    v12 = 0;
    if ( v17 )
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
        v11 += 5;
      }
      while ( v10 != v12 );
    }
    goto LABEL_17;
  }
  if ( v5 == 1 )
  {
    if ( v18 )
      qfree(v18);
    if ( v4 )
LABEL_17:
      qfree(v4);
  }
LABEL_5:
  if ( v3 )
    qfree(v3);
  return v20 - __readfsqword(0x28u);
}

