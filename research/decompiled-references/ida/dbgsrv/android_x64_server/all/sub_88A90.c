/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_88A90
// Address: 0x0000000000088A90

//----- (0000000000088A90) ----------------------------------------------------
unsigned __int64 __fastcall sub_88A90(__int64 a1, __int64 a2, char a3, double a4, __m128 a5)
{
  int v5; // eax
  int v6; // eax
  __int64 v7; // rax
  int v8; // eax
  char v10[8]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v11; // [rsp+8h] [rbp-40h]
  char v12[8]; // [rsp+10h] [rbp-38h] BYREF
  __int64 v13; // [rsp+18h] [rbp-30h]
  unsigned __int64 v14; // [rsp+20h] [rbp-28h]

  v14 = __readfsqword(0x28u);
  sub_887D0(a1, a2, a3, a4, a5);
  while ( 1 )
  {
    while ( 1 )
    {
      v12[0] = 1;
      v13 = 0;
      v5 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 432) + 24LL);
      if ( v5 != 45 )
        break;
      sub_887D0(a1, (__int64)v12, 1, a4, a5);
      *(_QWORD *)(a2 + 8) -= v13;
    }
    if ( (unsigned __int16)v5 != 43 )
      break;
    sub_887D0(a1, (__int64)v12, 1, a4, a5);
    *(_QWORD *)(a2 + 8) += v13;
  }
  while ( 1 )
  {
    v10[0] = 1;
    v11 = 0;
    if ( (unsigned __int16)v5 != 15420 )
      break;
    sub_887D0(a1, (__int64)v10, 1, a4, a5);
    while ( 1 )
    {
      while ( 1 )
      {
        v12[0] = 1;
        v13 = 0;
        v8 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 432) + 24LL);
        if ( v8 != 45 )
          break;
        sub_887D0(a1, (__int64)v12, 1, a4, a5);
        v11 -= v13;
      }
      if ( (unsigned __int16)v8 != 43 )
        break;
      sub_887D0(a1, (__int64)v12, 1, a4, a5);
      v11 += v13;
    }
    *(_QWORD *)(a2 + 8) <<= v11;
LABEL_7:
    LOWORD(v5) = *(_WORD *)(*(_QWORD *)(a1 + 432) + 24LL);
  }
  if ( (unsigned __int16)v5 == 15934 )
  {
    sub_887D0(a1, (__int64)v10, 1, a4, a5);
    while ( 1 )
    {
      while ( 1 )
      {
        v12[0] = 1;
        v13 = 0;
        v6 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 432) + 24LL);
        if ( v6 != 45 )
          break;
        sub_887D0(a1, (__int64)v12, 1, a4, a5);
        v11 -= v13;
      }
      if ( (unsigned __int16)v6 != 43 )
        break;
      sub_887D0(a1, (__int64)v12, 1, a4, a5);
      v11 += v13;
    }
    v7 = *(_QWORD *)(a2 + 8) >> v11;
    if ( !*(_BYTE *)a2 )
      v7 = *(__int64 *)(a2 + 8) >> v11;
    *(_QWORD *)(a2 + 8) = v7;
    goto LABEL_7;
  }
  return __readfsqword(0x28u);
}
