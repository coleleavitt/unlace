/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: idcv_string
// Address: 0x00000000000733A0

//----- (00000000000733A0) ----------------------------------------------------
__int64 __fastcall idcv_string(__int64 a1, double a2, __m128 a3)
{
  unsigned int v4; // r14d
  _BYTE *v6; // rax
  char v7[1032]; // [rsp+0h] [rbp-428h] BYREF
  unsigned __int64 v8; // [rsp+408h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  if ( !a1 )
    return set_qerrno(0x5FBu);
  while ( *(_BYTE *)a1 == 10 )
  {
    if ( !deref_idcv((char *)a1, 2, a2, a3) )
      return (unsigned int)get_qerrno();
  }
  switch ( *(_BYTE *)a1 )
  {
    case 2:
      v7[0] = *(_BYTE *)(a1 + 8);
      sub_4ABC0(a1 + 8, v7, v7[0] != 0);
      goto LABEL_10;
    case 3:
      realtoasc(v7, 1024, (__m128i *)(a1 + 8), 50, a2, a3);
      sub_37F60(a1 + 8, v7);
LABEL_10:
      *(_BYTE *)a1 = 7;
      goto LABEL_11;
    case 7:
LABEL_11:
      v4 = 0;
      break;
    case 9:
      v7[0] = *(_BYTE *)(a1 + 8);
      *(_OWORD *)(a1 + 8) = 0;
      *(_QWORD *)(a1 + 24) = 0;
      v4 = 0;
      v6 = qvector_reserve(a1 + 8, nullptr, 2u, 1u);
      *(_QWORD *)(a1 + 8) = v6;
      *(_QWORD *)(a1 + 16) = 2;
      *v6 = v7[0];
      *(_BYTE *)(*(_QWORD *)(a1 + 8) + 1LL) = 0;
      *(_BYTE *)a1 = 7;
      break;
    default:
      return (unsigned int)set_qerrno(0x5FBu);
  }
  return v4;
}
