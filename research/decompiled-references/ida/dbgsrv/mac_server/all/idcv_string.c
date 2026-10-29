/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: idcv_string
// Address: 0x0000000100038650

//----- (0000000100038650) ----------------------------------------------------
__int64 __fastcall idcv_string(__int64 a1)
{
  __int64 result; // rax
  char v3; // al
  size_t v4; // r14
  bool v5; // r12
  void *v6; // rax
  _QWORD *v7; // r14
  size_t v8; // rax
  size_t v9; // r15
  size_t v10; // r12
  void *v11; // rdi
  char v12; // r15
  _BYTE *v13; // rax
  char __src[1032]; // [rsp+0h] [rbp-430h] BYREF

  if ( !a1 )
    return set_qerrno();
  while ( *(_BYTE *)a1 == 10 )
  {
    if ( !deref_idcv((unsigned __int8 *)a1, 2) )
      return get_qerrno();
  }
  switch ( *(_BYTE *)a1 )
  {
    case 2:
      __src[0] = *(_BYTE *)(a1 + 8);
      v3 = __src[0];
      v4 = 0;
      *(_OWORD *)(a1 + 8) = 0;
      *(_QWORD *)(a1 + 24) = 0;
      v5 = v3 != 0;
      if ( v3 )
      {
        v6 = qvector_reserve(a1 + 8, nullptr, 2u, 1u);
        LOBYTE(v4) = v5;
        *(_QWORD *)(a1 + 8) = v6;
        *(_QWORD *)(a1 + 16) = 2;
        memmove(v6, __src, v4);
        *(_BYTE *)(*(_QWORD *)(a1 + 8) + v4) = 0;
      }
      goto LABEL_14;
    case 3:
      v7 = (_QWORD *)(a1 + 8);
      realtoasc(__src, 1024, a1 + 8, 50);
      *(_OWORD *)(a1 + 8) = 0;
      *(_QWORD *)(a1 + 24) = 0;
      v8 = strlen(__src);
      v9 = v8;
      v10 = v8 + 1;
      if ( v8 == -1 )
      {
        v11 = nullptr;
      }
      else
      {
        v11 = qvector_reserve(a1 + 8, nullptr, v8 + 1, 1u);
        *v7 = v11;
      }
      *(_QWORD *)(a1 + 16) = v10;
      memmove(v11, __src, v9);
      *(_BYTE *)(*(_QWORD *)(a1 + 8) + v9) = 0;
      goto LABEL_14;
    case 7:
      goto LABEL_15;
    case 9:
      v12 = *(_BYTE *)(a1 + 8);
      *(_OWORD *)(a1 + 8) = 0;
      *(_QWORD *)(a1 + 24) = 0;
      v13 = qvector_reserve(a1 + 8, nullptr, 2u, 1u);
      *(_QWORD *)(a1 + 8) = v13;
      *(_QWORD *)(a1 + 16) = 2;
      *v13 = v12;
      *(_BYTE *)(*(_QWORD *)(a1 + 8) + 1LL) = 0;
LABEL_14:
      *(_BYTE *)a1 = 7;
LABEL_15:
      result = 0;
      break;
    default:
      return set_qerrno();
  }
  return result;
}
