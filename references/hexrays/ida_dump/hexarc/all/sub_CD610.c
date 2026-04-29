__int64 __fastcall sub_CD610(__int64 a1, _QWORD *a2, __int64 *a3, int a4, char a5)
{
  __int64 v7; // rax
  __int64 v8; // rdx
  int v10; // ebp
  int v11; // ecx
  __int64 v12; // rax
  int v13; // ecx
  __int64 v14; // rdx
  __int64 v15; // r14
  unsigned int tinfo_size; // eax
  char v17; // al
  int *v18; // r15
  int *v21; // [rsp+10h] [rbp-58h] BYREF
  __int128 v22; // [rsp+18h] [rbp-50h]
  unsigned __int64 v23; // [rsp+28h] [rbp-40h]

  v7 = *(_QWORD *)(a1 + 80);
  v8 = *(int *)(a1 + 64);
  v23 = __readfsqword(0x28u);
  v10 = v8;
  v11 = *(_DWORD *)(*(_QWORD *)(v7 + 112) + 80LL);
  if ( !(unsigned __int8)sub_CC3A0(
                           (int *)a1,
                           a4,
                           ((v11 + *(_DWORD *)(*a2 + 104LL * *(int *)(*a3 + 4 * v8) + 88) - 1) & -v11) / v11,
                           a5) )
  {
    v12 = ++v10;
    if ( v10 < (unsigned __int64)a3[1] )
    {
      while ( 1 )
      {
        v14 = *a3;
        v22 = 0;
        v15 = *a2 + 104LL * *(int *)(v14 + 4 * v12);
        tinfo_size = get_tinfo_size(0, *(_QWORD *)(v15 + 80), 0);
        v21 = nullptr;
        v17 = sub_CC4E0(a1, (__int64 *)&v21, (__int64 *)v15, tinfo_size, 0);
        v18 = v21;
        if ( !v17 )
          break;
        v13 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 112LL) + 80LL);
        if ( (unsigned __int8)sub_CC3A0((int *)a1, *v21, ((v13 + *(_DWORD *)(v15 + 88) - 1) & -v13) / v13, a5) )
          goto LABEL_10;
        if ( v18 )
          qfree(v18);
        v12 = ++v10;
        if ( v10 >= (unsigned __int64)a3[1] )
          return (unsigned int)-1;
      }
      v10 = -1;
LABEL_10:
      if ( v18 )
        qfree(v18);
    }
    else
    {
      return (unsigned int)-1;
    }
  }
  return (unsigned int)v10;
}
