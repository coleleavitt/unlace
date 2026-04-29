__int64 __fastcall sub_224260(__int64 a1, int a2, __int64 a3, int a4)
{
  unsigned __int64 v5; // rbx
  int v6; // r15d
  unsigned int v7; // eax
  __int64 v8; // r12
  int *v9; // r14
  __int64 v11; // r14
  int v12; // r15d
  int v13; // [rsp+0h] [rbp-58h] BYREF
  __int64 v14; // [rsp+8h] [rbp-50h]
  unsigned __int64 v15; // [rsp+18h] [rbp-40h]

  v5 = a2;
  v15 = __readfsqword(0x28u);
  v6 = a4;
  v13 = 0;
  if ( a4 == -1 )
    v6 = 1;
  copy_argloc(&v13, a3);
  v7 = *(_DWORD *)(a1 + 72);
  if ( v7 <= 0x10 )
    v7 = getinf(99);
  if ( v7 != 176 && v7 != 256 && !(unsigned __int8)getinf_flag(67, 2) && v13 == 1 )
  {
    v11 = v14 & -*(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL);
    cleanup_argloc(&v13);
    v12 = *(_DWORD *)(a3 + 8) + v6;
    v13 = 1;
    v14 = v11;
    v6 = v12 - v11;
  }
  if ( (unsigned __int64)a2 >= *(_QWORD *)(a1 + 440) )
  {
LABEL_13:
    LODWORD(v5) = -1;
  }
  else
  {
    v8 = 104LL * a2;
    while ( 1 )
    {
      v9 = (int *)(v8 + *(_QWORD *)(a1 + 432));
      if ( sub_224090(a1, (__int64)v9) )
      {
        if ( (unsigned __int8)sub_1C0460(v9, v9[22], &v13, v6) )
          break;
      }
      ++v5;
      v8 += 104;
      if ( v5 >= *(_QWORD *)(a1 + 440) )
        goto LABEL_13;
    }
  }
  cleanup_argloc(&v13);
  return (unsigned int)v5;
}
