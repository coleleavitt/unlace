__int64 __fastcall sub_7E3150(__int64 a1, unsigned __int64 *a2, __int64 a3, int a4)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v6[3]; // [rsp+0h] [rbp-18h] BYREF

  v6[1] = __readfsqword(0x28u);
  v4 = *a2;
  v6[0] = v4;
  if ( !__CFADD__(v4, a3) )
  {
    if ( a4 <= 5 )
    {
LABEL_3:
      *a2 = v4;
      return 1;
    }
    if ( sub_7E30F0((_DWORD *)(a1 + 12), v6) )
    {
      v4 = v6[0];
      goto LABEL_3;
    }
  }
  return 0;
}
