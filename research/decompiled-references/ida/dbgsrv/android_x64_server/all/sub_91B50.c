/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_91B50
// Address: 0x0000000000091B50

//----- (0000000000091B50) ----------------------------------------------------
__int64 __fastcall sub_91B50(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  const char *v5; // r12
  _QWORD *v6; // r15
  _QWORD *v7; // rbp
  const char *v8; // rdi
  int v9; // eax
  const char *v10; // rsi
  unsigned int v11; // ebx
  const void **v13; // rax
  unsigned __int64 v14; // rbp
  const void *v15; // r12
  char *v16; // rdi
  void *ptr[2]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v18; // [rsp+10h] [rbp-48h]
  unsigned __int64 v19; // [rsp+20h] [rbp-38h]

  v19 = __readfsqword(0x28u);
  *(_OWORD *)ptr = 0;
  v18 = 0;
  sub_91650(a3, (__int64)ptr);
  v4 = *(_QWORD *)(a1 + 8);
  if ( !v4 )
    goto LABEL_13;
  v5 = s1;
  if ( ptr[1] )
    v5 = (const char *)ptr[0];
  v6 = (_QWORD *)(a1 + 8);
  v7 = (_QWORD *)(a1 + 8);
  do
  {
    v8 = s1;
    if ( *(_QWORD *)(v4 + 40) )
      v8 = *(const char **)(v4 + 32);
    v9 = strcmp(v8, v5);
    if ( v9 >= 0 )
      v7 = (_QWORD *)v4;
    v4 = *(_QWORD *)(v4 + 8LL * (v9 < 0));
  }
  while ( v4 );
  if ( v7 == v6 )
  {
LABEL_13:
    v11 = 0;
  }
  else
  {
    if ( v7[5] )
      v10 = (const char *)v7[4];
    else
      v10 = s1;
    v11 = 0;
    if ( strcmp(v5, v10) >= 0 )
    {
      if ( a2 )
      {
        v13 = (const void **)(v7 + 7);
        LOBYTE(v11) = 1;
        if ( v7 + 7 != (_QWORD *)a2 )
        {
          v14 = v7[8];
          if ( v14 < 2 )
          {
            *(_QWORD *)(a2 + 8) = 0;
          }
          else
          {
            v15 = *v13;
            if ( *(_QWORD *)(a2 + 16) >= v14 )
            {
              v16 = *(char **)a2;
            }
            else
            {
              v16 = (char *)qvector_reserve(a2, *(char **)a2, v14, 1u);
              *(_QWORD *)a2 = v16;
            }
            *(_QWORD *)(a2 + 8) = v14;
            memmove(v16, v15, v14 - 1);
            *(_BYTE *)(*(_QWORD *)a2 + v14 - 1) = 0;
          }
        }
      }
    }
  }
  if ( ptr[0] )
  {
    ptr[1] = nullptr;
    qfree(ptr[0]);
    ptr[0] = nullptr;
    v18 = 0;
  }
  return v11;
}
