/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000409F0
// Address: 0x00000001000409F0

//----- (00000001000409F0) ----------------------------------------------------
__int64 __fastcall sub_1000409F0(__int64 a1)
{
  unsigned int v1; // ebx
  void *v2; // rax
  unsigned __int64 v3; // r14

  LOBYTE(v1) = 1;
  switch ( *(_BYTE *)a1 )
  {
    case 2:
      return v1;
    case 5:
      sub_1000380B0(*(unsigned __int8 ***)(a1 + 8), (unsigned __int8 *)a1);
      *(_BYTE *)a1 = 2;
      *(_QWORD *)(a1 + 8) = 1;
      break;
    case 7:
      v2 = *(void **)(a1 + 8);
      v3 = *(_QWORD *)(a1 + 16);
      if ( v2 )
      {
        *(_QWORD *)(a1 + 16) = 0;
        qfree(v2);
        *(_QWORD *)(a1 + 24) = 0;
      }
      *(_BYTE *)a1 = 2;
      *(_QWORD *)(a1 + 8) = v3 >= 2;
      break;
    case 9:
      *(_QWORD *)(a1 + 8) = *(_QWORD *)(a1 + 8) != 0;
      *(_BYTE *)a1 = 2;
      break;
    default:
      set_qerrno();
      v1 = 0;
      break;
  }
  return v1;
}
// 100040A97: variable 'v1' is possibly undefined
