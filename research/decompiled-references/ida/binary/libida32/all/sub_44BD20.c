__int64 __fastcall sub_44BD20(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        char a17)
{
  __int64 v17; // r14
  char v19; // r14
  char v21; // al
  unsigned int v22; // eax
  char *v23; // rdx
  char *v24; // rax
  char merge_state; // al
  __int64 v26; // rdi
  char v27; // [rsp+38h] [rbp-2E8h]
  int v28; // [rsp+44h] [rbp-2DCh]
  unsigned int v29; // [rsp+48h] [rbp-2D8h]
  _QWORD v30[19]; // [rsp+C0h] [rbp-260h] BYREF
  char v31; // [rsp+158h] [rbp-1C8h] BYREF
  unsigned __int64 v32; // [rsp+2E8h] [rbp-38h]

  v32 = __readfsqword(0x28u);
  if ( a2 )
  {
    v17 = qword_2CA18C0;
    *(_QWORD *)(v17 + 1056) = get_eah();
    set_merge_state((8 * (a3 == 0)) | 1u);
    v28 = *(_DWORD *)(a1 + 88);
    v19 = sub_615160(**(_QWORD **)(a1 + 1480), 3, 4);
    v29 = sub_4435D0(a2, a1 + 760);
    if ( !v29 )
    {
      v21 = sub_615160(**(_QWORD **)(qword_2CA1698 + 1480), 3, 4);
      if ( v21 != v19 )
        sub_375320((__int64)"Remote and local databases should have the same bitness");
      v27 = v21;
      if ( a3 )
      {
        v22 = sub_4435D0(a3, a1 + 760);
        if ( v22 )
          return v22;
        if ( (unsigned __int8)sub_615160(**(_QWORD **)(qword_2CA1698 + 1480), 3, 4) != v27 )
          sub_375320((__int64)"Base and local databases should have the same bitness");
      }
      v23 = &v31;
      do
      {
        *((_QWORD *)v23 - 19) = 0;
        v24 = v23 - 144;
        do
        {
          *(_QWORD *)v24 = 0;
          v24 += 24;
          *((_OWORD *)v24 - 1) = 0;
        }
        while ( v24 != v23 );
        v23 = v24 + 184;
        *(_DWORD *)v24 = 0;
        *((_QWORD *)v24 + 1) = 0;
        *((_OWORD *)v24 + 1) = 0;
      }
      while ( v24 + 184 != &a17 );
      switch_dbctx(v28);
      sub_443530(a1, v30);
    }
  }
  else
  {
    merge_state = get_merge_state(a1, 0);
    v26 = 4;
    if ( (merge_state & 3) == 0 )
      v26 = get_merge_state(4, 0) & 4;
    set_merge_state(v26);
    return 0;
  }
  return v29;
}

