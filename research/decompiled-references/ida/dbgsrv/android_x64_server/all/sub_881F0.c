/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_881F0
// Address: 0x00000000000881F0

//----- (00000000000881F0) ----------------------------------------------------
unsigned __int64 __fastcall sub_881F0(__int64 a1, __int64 a2, double a3, __m128 a4)
{
  int v4; // eax
  __int64 v5; // r15
  unsigned __int64 result; // rax
  int qerrno; // eax
  __int64 v8; // r15
  unsigned __int64 v9; // rdx
  __int64 v10; // rcx

  v4 = *(_DWORD *)(a1 + 336) + 1;
  *(_DWORD *)(a1 + 336) = v4;
  if ( v4 >= 1024 )
    longjmp((struct __jmp_buf_tag *)(a1 + 344), 54);
  sub_88330(a1, a2, 1, a3, a4);
  v5 = *(_QWORD *)(a1 + 432);
  if ( *(_WORD *)(v5 + 24) != 41 )
    sub_881D0(a1);
  result = sub_862A0(a1, *(_QWORD *)(a1 + 432), 0, nullptr, a3, a4);
  if ( !(_DWORD)result && *(_QWORD *)(a1 + 64) )
    result = sub_871E0(a1, v5, a3, a4);
  if ( (_DWORD)result )
  {
    qerrno = get_qerrno();
    longjmp((struct __jmp_buf_tag *)(a1 + 344), qerrno);
  }
  if ( *(_BYTE *)(a1 + 440) )
  {
    *(_BYTE *)(a1 + 440) = 0;
    v8 = *(_QWORD *)(a1 + 444);
    sub_88460(a1, a2, 0, a3, a4);
    result = 0xFFFFFFFFFFFFFFFFLL >> (64 - 8 * BYTE4(v8));
    v9 = 0x8000000000000000LL >> (64 - 8 * BYTE4(v8));
    v10 = *(_QWORD *)(a2 + 8);
    *(_QWORD *)(a2 + 8) = v10 & result;
    *(_BYTE *)a2 = v8;
    if ( !(_BYTE)v8 && (v9 & v10 & result) != 0 )
    {
      result = ~result;
      *(_QWORD *)(a2 + 8) = v9 | result | v10;
    }
    *(_QWORD *)(a1 + 444) = v8;
  }
  --*(_DWORD *)(a1 + 336);
  return result;
}
