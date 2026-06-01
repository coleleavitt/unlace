__int64 __fastcall sub_722EF0(
        unsigned __int64 a1,
        __int16 *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6)
{
  unsigned int v8; // r14d
  unsigned int v9; // r11d
  __int64 v10; // r15
  __int64 v11; // rax
  unsigned int v12; // eax
  __int64 result; // rax
  __int64 v14; // rax
  __int64 v17; // [rsp+10h] [rbp-48h]
  __int64 v18; // [rsp+18h] [rbp-40h]

  v8 = *(__int16 *)(*(_QWORD *)a2 + 4LL);
  v9 = v8 - 1;
  if ( **(_DWORD **)a2 )
  {
    v10 = *(_QWORD *)(a1 + 16);
    v17 = *(_QWORD *)(v10 + 8);
    v11 = sub_71AA60(a1, *(unsigned int *)(*(_QWORD *)a2 + 6LL * (int)v9 + 6), 1u);
    if ( !v11 || *(__int16 *)(v11 + 8) < 0 )
      sub_722BF0();
    v18 = v11;
    sub_722EF0(a1, v11, a3, a2, a5, v8);
    if ( unk_2CA26C9 )
      sub_71FC40((unsigned int *)a1, (__int64)a2, v18, v8, 0);
    *(_QWORD *)(v10 + 8) = v17;
    v12 = a2[4];
    if ( a2[4] < 0 )
    {
      result = sub_724140(a1, a2, a4, a6);
      unk_2CA26C9 = 0;
      return result;
    }
  }
  else
  {
    v14 = sub_7256D0(a1, a2, v9);
    sub_725830(a1, a3, a5, v14, 0);
    sub_725DE0(a1, a2, v8 - 1);
    v12 = a2[4];
  }
  unk_2CA26C9 = *(_DWORD *)a1 >> 1 < v12;
  return sub_71A620(a1, (__int64)a2);
}

