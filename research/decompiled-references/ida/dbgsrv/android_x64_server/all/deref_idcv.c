/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: deref_idcv
// Address: 0x0000000000071B00

//----- (0000000000071B00) ----------------------------------------------------
char *__fastcall deref_idcv(char *a1, char a2, double a3, __m128 a4)
{
  char *v4; // r12
  __int64 v6; // r14
  char *v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // rax
  char **v10; // rax
  __int64 v11; // rdi
  char **v12; // rcx
  void *ptr[2]; // [rsp+0h] [rbp-48h] BYREF
  char *v15; // [rsp+10h] [rbp-38h]
  unsigned __int64 v16; // [rsp+18h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  if ( !a1 )
  {
    set_qerrno(0x61Bu);
    return nullptr;
  }
  v4 = a1;
  if ( *a1 == 10 )
  {
    *(_OWORD *)ptr = 0;
    v15 = nullptr;
    v6 = sub_6B0F0();
    v7 = a1;
    while ( 1 )
    {
      v8 = *((int *)v7 + 4);
      if ( v8 < 0 )
      {
        v7 = (char *)sub_71A80(v6, ~(_DWORD)v8);
        if ( (a2 & 1) != 0 )
        {
LABEL_21:
          if ( (a2 & 2) == 0 )
          {
            v4 = v7;
            goto LABEL_26;
          }
          *v4 = 2;
          if ( (unsigned int)copy_idcv(v4, v7, 0.0, a4) )
            goto LABEL_25;
LABEL_26:
          if ( ptr[0] )
          {
            ptr[1] = nullptr;
            qfree(ptr[0]);
            ptr[0] = nullptr;
            v15 = nullptr;
          }
          return v4;
        }
      }
      else
      {
        v9 = *((_QWORD *)v7 + 1);
        if ( !v9 )
          goto LABEL_24;
        if ( *(_DWORD *)v9 != 289621065 )
          goto LABEL_24;
        if ( *(_QWORD *)(v9 + 32) <= (unsigned __int64)v8 )
          goto LABEL_24;
        v7 = (char *)(*(_QWORD *)(v9 + 24) + 32 * v8);
        if ( !v7 )
          goto LABEL_24;
        if ( (a2 & 1) != 0 )
          goto LABEL_21;
      }
      if ( *v7 != 10 )
        goto LABEL_21;
      v10 = (char **)((char *)ptr[0] + 8 * (__int64)ptr[1]);
      v11 = 8 * (__int64)ptr[1];
      v12 = (char **)ptr[0];
      if ( 8 * (__int64)ptr[1] )
      {
        v12 = (char **)ptr[0];
        while ( v7 != *v12 )
        {
          ++v12;
          v11 -= 8;
          if ( !v11 )
            goto LABEL_18;
        }
      }
      if ( v12 != v10 )
      {
LABEL_24:
        set_qerrno(0x61Bu);
LABEL_25:
        v4 = nullptr;
        goto LABEL_26;
      }
LABEL_18:
      if ( v15 < (char *)ptr[1] + 1 )
      {
        ptr[0] = qvector_reserve((__int64)ptr, (char *)ptr[0], (unsigned __int64)ptr[1] + 1, 8u);
        v10 = (char **)((char *)ptr[0] + 8 * (__int64)ptr[1]);
      }
      *v10 = v7;
      ++ptr[1];
    }
  }
  return v4;
}
