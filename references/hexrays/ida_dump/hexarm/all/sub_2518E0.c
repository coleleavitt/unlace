_DWORD *__fastcall sub_2518E0(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 (__fastcall *v4)(__int64, int, int); // rax
  int v5; // r12d
  _QWORD *v6; // rdx
  __int64 v7; // r13
  unsigned __int64 v8; // rax
  __int64 v10; // rax

  v4 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 112LL);
  if ( v4 == sub_64AD0 )
    v5 = **(_DWORD **)(a1[6] + 24LL * (int)a2);
  else
    v5 = v4((__int64)a1, a2, 0);
  v6 = (_QWORD *)a1[30];
  if ( !v6 )
  {
LABEL_6:
    sub_2508D0(a1, (unsigned int)v5, a3, 0);
    return sub_241910(a1, v5, a3);
  }
  v7 = 24;
  v8 = *v6 & 0xFFFFFFFFFFFFFFFCLL;
  if ( v8 )
  {
    while ( (*(_BYTE *)v8 & 2) == 0 )
    {
      v7 = v8 + 24;
      if ( v5 < *(_DWORD *)(v8 + 24) )
      {
        v8 = *(_QWORD *)(v8 + 8);
      }
      else
      {
        if ( v5 <= *(_DWORD *)(v8 + 24) )
        {
          if ( v6 == (_QWORD *)v8 )
            goto LABEL_6;
          goto LABEL_8;
        }
        v8 = *(_QWORD *)(v8 + 16);
      }
    }
    goto LABEL_6;
  }
LABEL_8:
  v10 = sub_2418B0((__int64)a1);
  return sub_241820((__int64)a1, a3, *(_DWORD *)(v7 + 4), v10);
}
