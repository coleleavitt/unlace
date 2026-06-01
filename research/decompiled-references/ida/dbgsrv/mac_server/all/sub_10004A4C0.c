/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004A4C0
// Address: 0x000000010004A4C0

//----- (000000010004A4C0) ----------------------------------------------------
unsigned __int64 __fastcall sub_10004A4C0(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // r15
  unsigned __int64 result; // rax
  unsigned __int64 v5; // r15
  char v6; // cl
  unsigned __int64 v7; // rdx
  __int64 v8; // rcx
  int qerrno; // eax

  v2 = *(_DWORD *)(a1 + 336) + 1;
  *(_DWORD *)(a1 + 336) = v2;
  if ( v2 >= 1024 )
    longjmp((int *)(a1 + 344), 54);
  sub_10004A600(a1, a2, 1);
  v3 = *(_QWORD *)(a1 + 496);
  if ( *(_WORD *)(v3 + 24) != 41 )
    sub_10004A4A0(a1);
  result = sub_100048770(a1, *(_QWORD *)(a1 + 496), 0, nullptr);
  if ( *(_QWORD *)(a1 + 64) != 0 && (_DWORD)result == 0 )
    result = sub_100049580(a1, v3);
  if ( (_DWORD)result )
  {
    qerrno = get_qerrno();
    longjmp((int *)(a1 + 344), qerrno);
  }
  if ( *(_BYTE *)(a1 + 504) == 1 )
  {
    *(_BYTE *)(a1 + 504) = 0;
    v5 = *(_QWORD *)(a1 + 508);
    sub_10004A750(a1, a2, 0);
    v6 = -((v5 >> 29) & 0xF8);
    result = 0xFFFFFFFFFFFFFFFFLL >> v6;
    v7 = 0x8000000000000000LL >> v6;
    v8 = *(_QWORD *)(a2 + 8);
    *(_QWORD *)(a2 + 8) = v8 & result;
    *(_BYTE *)a2 = v5;
    if ( (v5 & 1) == 0 && (v7 & v8 & result) != 0 )
    {
      result = ~result;
      *(_QWORD *)(a2 + 8) = result | v7 | v8;
    }
    *(_QWORD *)(a1 + 508) = v5;
  }
  --*(_DWORD *)(a1 + 336);
  return result;
}
