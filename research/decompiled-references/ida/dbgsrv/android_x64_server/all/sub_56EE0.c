/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_56EE0
// Address: 0x0000000000056EE0

//----- (0000000000056EE0) ----------------------------------------------------
char __fastcall sub_56EE0(__int64 a1, _QWORD *a2)
{
  unsigned int v3; // ecx
  unsigned int v4; // eax
  unsigned __int64 v5; // r15
  char **v6; // rax
  unsigned __int64 v7; // rdi
  char *v8; // rax
  char v10[24]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v11; // [rsp+18h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  v3 = *(_DWORD *)(a1 + 72);
  v4 = *(_DWORD *)(a1 + 76);
  if ( v3 >= v4 )
  {
    v5 = *(_QWORD *)(a1 + 24) - *(_QWORD *)(a1 + 64);
    if ( !v5 )
      return 0;
    v6 = (char **)(a1 + 40);
    v7 = *(_QWORD *)(a1 + 48);
    if ( v7 >= v5 )
    {
      if ( v7 != v5 )
      {
        *(_OWORD *)v10 = 0;
        sub_5EE80(a1 + 40, v5, v10);
      }
    }
    else
    {
      if ( *(_QWORD *)(a1 + 56) >= v5 )
      {
        v8 = *v6;
      }
      else
      {
        v8 = (char *)qvector_reserve(a1 + 40, *(char **)(a1 + 40), v5, 0x10u);
        *(_QWORD *)(a1 + 40) = v8;
        v7 = *(_QWORD *)(a1 + 48);
      }
      memset(&v8[16 * v7], 0, 16 * (v5 - v7));
      *(_QWORD *)(a1 + 48) = v5;
    }
    *(_DWORD *)(a1 + 72) = 0;
    v4 = sub_5ED50((_QWORD *)a1, v5);
    *(_DWORD *)(a1 + 76) = v4;
    if ( !v4 )
      return 0;
    *(_QWORD *)(a1 + 64) += v4;
    v3 = *(_DWORD *)(a1 + 72);
  }
  if ( v3 < v4 )
  {
    *a2 = *(_QWORD *)(a1 + 40) + 16LL * v3;
    ++*(_DWORD *)(a1 + 72);
    return 1;
  }
  return 0;
}
