__int64 __fastcall sub_412140(__int64 ***a1, __int64 *a2, int *a3)
{
  __int64 **v3; // rcx
  __int64 v4; // rsi
  __int64 v5; // r8
  unsigned int v6; // edi
  __int64 v7; // rax

  v3 = *a1;
  v4 = *a2;
  v5 = ***a1;
  v6 = 0;
  if ( ((unsigned __int64)v3[4] & ((unsigned __int64)v3[3] ^ *(_QWORD *)(v5 + 56 * v4 + 48))) == 0 )
  {
    v7 = *a3;
    v6 = 1;
    *v3[1] = v4;
    *v3[2] = *v3[1] + v7;
  }
  return v6;
}
