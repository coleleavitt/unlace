unsigned __int64 __fastcall sub_3727D0(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // rdi
  char tinfo_property; // al
  __int64 v5; // rbp
  __int64 v6; // r8
  int v7; // r9d
  int v9; // eax
  __int64 v10; // rdi
  __int64 v11; // rcx
  char v12; // al
  __int64 v13; // [rsp+8h] [rbp-30h] BYREF
  __int64 v14; // [rsp+10h] [rbp-28h] BYREF
  unsigned __int64 v15; // [rsp+18h] [rbp-20h]

  v1 = *(_QWORD *)(a1 + 8);
  v15 = __readfsqword(0x28u);
  if ( !*(_BYTE *)(v1 + 320) )
  {
    sub_3695A0(&v13, v1, 0);
    v3 = *(_QWORD *)(a1 + 8);
    if ( *(_DWORD *)(v3 + 480) != -1 )
    {
      tinfo_property = get_tinfo_property(v13, 2);
      v3 = *(_QWORD *)(a1 + 8);
      if ( (tinfo_property & 8) == 0 )
      {
        v5 = *(_QWORD *)(v3 + 432) + 104LL * *(int *)(v3 + 480);
        if ( (*(_BYTE *)(v5 + 24) & 2) == 0 )
        {
          if ( (unsigned __int8)sub_36EDD0(a1, *(_DWORD *)(v5 + 88)) )
          {
            v12 = sub_298DE0(*(_QWORD *)(a1 + 216), (__int64)&v13, *(unsigned int *)(v5 + 88), v11);
            v3 = *(_QWORD *)(a1 + 8);
            if ( !v12 )
              goto LABEL_5;
            sub_1EBC70(v5, *(_QWORD *)(v3 + 1504), &v13, 0);
            *(_DWORD *)(v5 + 24) = *(_DWORD *)(v5 + 24) & 0xFFFBFFFD | 2;
          }
          v3 = *(_QWORD *)(a1 + 8);
        }
      }
    }
LABEL_5:
    v14 = 0;
    if ( (unsigned __int8)sub_372620(v3, &v14) )
      sub_EFA80(*(_QWORD *)(a1 + 8), *(_QWORD *)(*(_QWORD *)(a1 + 8) + 40LL), &v14, 0, v6, v7);
    clear_tinfo_t(&v14);
    clear_tinfo_t(&v13);
    return v15 - __readfsqword(0x28u);
  }
  v9 = get_tinfo_property(*(_QWORD *)(v1 + 328), 21);
  v10 = *(_QWORD *)(a1 + 8);
  if ( *(_DWORD *)(v10 + 68) == v9 )
    return v15 - __readfsqword(0x28u);
  return sub_32CD90((_QWORD *)v10, *(_QWORD *)(v10 + 40), 0xCu);
}
