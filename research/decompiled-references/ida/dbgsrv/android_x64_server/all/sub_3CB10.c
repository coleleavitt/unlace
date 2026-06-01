/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3CB10
// Address: 0x000000000003CB10

//----- (000000000003CB10) ----------------------------------------------------
unsigned __int64 __fastcall sub_3CB10(__int64 a1, char **a2)
{
  _QWORD *v2; // r15
  void *v4; // r13
  void *v5; // r14
  const char *v6; // rdi
  const char *v7; // rbp
  void *v8; // rbx
  const char *v9; // rsi
  __int64 v10; // rax
  char *v11; // rbx
  const void **v12; // rax
  char **v13; // rbp
  unsigned __int64 v14; // r13
  const void *v15; // rsi
  char *v16; // rax
  _QWORD *v17; // rcx
  _QWORD *v18; // rax
  __int64 v19; // r15
  bool v20; // zf
  const void *v22; // [rsp+8h] [rbp-70h]
  _QWORD *v24; // [rsp+18h] [rbp-60h]
  void *ptr[2]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v26; // [rsp+30h] [rbp-48h]
  unsigned __int64 v27; // [rsp+40h] [rbp-38h]

  v27 = __readfsqword(0x28u);
  v2 = *(_QWORD **)(a1 + 1032);
  v24 = (_QWORD *)(a1 + 1040);
  if ( v2 != (_QWORD *)(a1 + 1040) )
  {
    do
    {
      *(_OWORD *)ptr = 0;
      v26 = 0;
      if ( (unsigned __int8)sub_3C9C0(a1, ptr, *((_DWORD *)v2 + 10)) )
      {
        v4 = ptr[0];
        v5 = ptr[1];
        v6 = (const char *)ptr[0];
        if ( !ptr[1] )
          v6 = s1;
        v7 = (const char *)v2[9];
        v8 = (void *)v2[10];
        v9 = v7;
        if ( !v8 )
          v9 = s1;
        if ( strcmp(v6, v9) )
        {
          v10 = v2[11];
          v2[9] = v4;
          v2[10] = v5;
          v2[11] = v26;
          ptr[0] = (void *)v7;
          ptr[1] = v8;
          v26 = v10;
          v11 = sub_3CD60(a2);
          v12 = (const void **)(v2 + 9);
          *(_DWORD *)v11 = *((_DWORD *)v2 + 10);
          v13 = (char **)(v11 + 8);
          if ( v11 + 8 != (char *)(v2 + 9) )
          {
            v14 = v2[10];
            if ( v14 < 2 )
            {
              *((_QWORD *)v11 + 2) = 0;
            }
            else
            {
              v15 = *v12;
              if ( *((_QWORD *)v11 + 3) >= v14 )
              {
                v16 = *v13;
              }
              else
              {
                v22 = *v12;
                v16 = (char *)qvector_reserve((__int64)(v11 + 8), *v13, v14, 1u);
                *v13 = v16;
                v15 = v22;
              }
              *((_QWORD *)v11 + 2) = v14;
              memmove(v16, v15, v14 - 1);
              *(_BYTE *)(*((_QWORD *)v11 + 1) + v14 - 1) = 0;
            }
          }
        }
      }
      if ( ptr[0] )
      {
        ptr[1] = nullptr;
        qfree(ptr[0]);
        ptr[0] = nullptr;
        v26 = 0;
      }
      v17 = (_QWORD *)v2[1];
      if ( v17 )
      {
        do
        {
          v18 = v17;
          v17 = (_QWORD *)*v17;
        }
        while ( v17 );
      }
      else
      {
        v18 = (_QWORD *)v2[2];
        if ( (_QWORD *)*v18 != v2 )
        {
          v19 = (__int64)(v2 + 2);
          do
          {
            v18 = *(_QWORD **)(*(_QWORD *)v19 + 16LL);
            v20 = *v18 == *(_QWORD *)v19;
            v19 = *(_QWORD *)v19 + 16LL;
          }
          while ( !v20 );
        }
      }
      v2 = v18;
    }
    while ( v18 != v24 );
  }
  return __readfsqword(0x28u);
}
