/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_89A90
// Address: 0x0000000000089A90

//----- (0000000000089A90) ----------------------------------------------------
unsigned __int64 __fastcall sub_89A90(__int64 a1, __int64 a2, char a3, double a4, __m128 a5)
{
  int v5; // eax
  _BOOL8 v6; // rcx
  int v7; // eax
  _BOOL8 v8; // rcx
  char v10[8]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v11; // [rsp+8h] [rbp-40h]
  char v12[8]; // [rsp+10h] [rbp-38h] BYREF
  __int64 v13; // [rsp+18h] [rbp-30h]
  unsigned __int64 v14; // [rsp+20h] [rbp-28h]

  v14 = __readfsqword(0x28u);
  sub_88D20(a1, a2, a3, a4, a5);
  while ( 1 )
  {
    v12[0] = 1;
    v13 = 0;
    v5 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 432) + 24LL);
    if ( v5 != 8509 )
      break;
    sub_88D20(a1, (__int64)v12, 1, a4, a5);
    v6 = *(_QWORD *)(a2 + 8) != v13;
LABEL_2:
    *(_QWORD *)(a2 + 8) = v6;
    *(_BYTE *)a2 = 0;
  }
  if ( (unsigned __int16)v5 == 15677 )
  {
    sub_88D20(a1, (__int64)v12, 1, a4, a5);
    v6 = *(_QWORD *)(a2 + 8) == v13;
    goto LABEL_2;
  }
  if ( (unsigned __int16)v5 == 38 )
  {
LABEL_8:
    v10[0] = 1;
    v11 = 0;
    sub_88D20(a1, (__int64)v10, 1, a4, a5);
    while ( 1 )
    {
      v12[0] = 1;
      v13 = 0;
      v7 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 432) + 24LL);
      if ( v7 == 8509 )
      {
        sub_88D20(a1, (__int64)v12, 1, a4, a5);
        v8 = v11 != v13;
      }
      else
      {
        if ( (unsigned __int16)v7 != 15677 )
        {
          *(_QWORD *)(a2 + 8) &= v11;
          if ( *(_WORD *)(*(_QWORD *)(a1 + 432) + 24LL) != 38 )
            return __readfsqword(0x28u);
          goto LABEL_8;
        }
        sub_88D20(a1, (__int64)v12, 1, a4, a5);
        v8 = v11 == v13;
      }
      v11 = v8;
      v10[0] = 0;
    }
  }
  return __readfsqword(0x28u);
}
