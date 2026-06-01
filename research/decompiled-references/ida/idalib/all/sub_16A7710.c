unsigned __int64 __fastcall sub_16A7710(__int64 a1, int a2, unsigned __int8 a3)
{
  unsigned __int64 result; // rax
  unsigned __int64 v4; // [rsp+10h] [rbp-10h] BYREF

  v4 = *(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFFELL;
  if ( (unsigned int)sub_19E4440(
                       *(_QWORD *)(*(_QWORD *)a1 + 736LL),
                       *(_DWORD *)(a1 + 100),
                       *(_QWORD *)(a1 + 16),
                       (unsigned int)&v4,
                       a2,
                       1,
                       0,
                       0,
                       a3) == 1 )
    *(_BYTE *)(a1 + 96) = 1;
  result = v4;
  *(_QWORD *)(a1 + 8) = v4;
  return result;
}
