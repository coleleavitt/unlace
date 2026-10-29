/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8FF90
// Address: 0x000000000008FF90

//----- (000000000008FF90) ----------------------------------------------------
__int64 __fastcall sub_8FF90(__int64 a1, _DWORD *a2, unsigned int a3)
{
  unsigned int v3; // ebx
  unsigned __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  _QWORD *v7; // rdi

  if ( a2 )
  {
    v4 = a3;
    v5 = a3;
    if ( *a2 == 3 )
    {
LABEL_12:
      qlseek((__int64)a2, v5, 0);
      LOBYTE(v3) = 1;
      return v3;
    }
  }
  else
  {
    v4 = a3;
  }
  v6 = *(_QWORD *)(a1 + 16) - 1LL;
  if ( v6 >= 0 )
  {
    v7 = (_QWORD *)(32LL * *(_QWORD *)(a1 + 16) + *(_QWORD *)(a1 + 8) - 16);
    while ( v4 < *(v7 - 2) || *(v7 - 1) <= v4 )
    {
      v7 -= 4;
      if ( --v6 < 0 )
        goto LABEL_10;
    }
    v5 = *v7 + v4 - *(v7 - 2);
    if ( v5 != -1 )
      goto LABEL_12;
  }
LABEL_10:
  v3 = 0;
  qlseek((__int64)a2, v4, 0);
  return v3;
}
// 90002: variable 'v3' is possibly undefined
