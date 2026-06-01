/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: lcred_process_switch_0
// Address: 0x00000000000AD5E0

//----- (00000000000AD5E0) ----------------------------------------------------
char __fastcall lcred_process_switch_0(__int64 a1, _BYTE *a2)
{
  char result; // al
  const char *v4; // rbx
  void *v5; // rdi
  size_t v6; // rax
  size_t v7; // r15
  char **v8; // r13
  size_t v9; // r12
  char *v10; // rdi
  size_t v11; // rax
  char **v12; // r13
  size_t v13; // r12
  char *v14; // rdi
  __int64 v15; // rax
  void *ptr[9]; // [rsp+0h] [rbp-48h] BYREF

  ptr[3] = (void *)__readfsqword(0x28u);
  if ( *a2 != 45 )
  {
    if ( !(_BYTE)under_debugger )
      interr(2756);
    BUG();
  }
  result = 0;
  v4 = a2 + 2;
  switch ( a2[1] )
  {
    case 'P':
      *(_DWORD *)(a1 + 168) |= 0x402u;
      sub_37F60((__int64)ptr, v4);
      sub_AD860((void **)(a1 + 88), (__int64)ptr, 1);
      v5 = ptr[0];
      if ( !ptr[0] )
        return 1;
      goto LABEL_10;
    case 'h':
      sub_37F60((__int64)ptr, v4);
      sub_AD860((void **)(a1 + 8), (__int64)ptr, 1);
      v5 = ptr[0];
      if ( ptr[0] )
      {
LABEL_10:
        ptr[1] = nullptr;
        qfree(v5);
        ptr[0] = nullptr;
        ptr[2] = nullptr;
      }
      return 1;
    case 'p':
      if ( a2 == (_BYTE *)-2LL || (v6 = strlen(v4)) == 0 )
      {
        *(_QWORD *)(a1 + 72) = 0;
        return 1;
      }
      v7 = v6;
      v8 = (char **)(a1 + 64);
      v9 = v6 + 1;
      if ( *(_QWORD *)(a1 + 80) >= v6 + 1 )
      {
        v10 = *v8;
      }
      else
      {
        v10 = (char *)qvector_reserve(a1 + 64, *v8, v6 + 1, 1u);
        *v8 = v10;
      }
      *(_QWORD *)(a1 + 72) = v9;
      memmove(v10, v4, v7);
      v15 = *(_QWORD *)(a1 + 64);
      goto LABEL_21;
    case 'u':
      if ( a2 == (_BYTE *)-2LL || (v11 = strlen(v4)) == 0 )
      {
        *(_QWORD *)(a1 + 48) = 0;
      }
      else
      {
        v7 = v11;
        v12 = (char **)(a1 + 40);
        v13 = v11 + 1;
        if ( *(_QWORD *)(a1 + 56) >= v11 + 1 )
        {
          v14 = *v12;
        }
        else
        {
          v14 = (char *)qvector_reserve(a1 + 40, *v12, v11 + 1, 1u);
          *v12 = v14;
        }
        *(_QWORD *)(a1 + 48) = v13;
        memmove(v14, v4, v7);
        v15 = *(_QWORD *)(a1 + 40);
LABEL_21:
        *(_BYTE *)(v15 + v7) = 0;
      }
      return 1;
    default:
      return result;
  }
}
// 158B40: using guessed type __int64 under_debugger;
