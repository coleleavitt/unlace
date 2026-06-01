void __fastcall sub_665A00(
        __int64 *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned __int8 a4,
        char a5,
        double a6,
        double a7,
        double a8)
{
  unsigned int v8; // ebp
  unsigned int v9; // ebx
  unsigned int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // eax
  int v21; // ecx
  int v22; // r8d
  int v23; // r9d
  unsigned int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9

  if ( a3 != a2 )
  {
    v8 = a2;
    v9 = a3;
    if ( a3 >= a2 )
    {
      v9 = a2;
      v8 = a3;
    }
    sub_665700(a1, v9, v8, a4, a5, a6, a7, a8);
    if ( a4 )
    {
      v11 = sub_3D0FA0(a1, v9, v8);
      if ( v11 )
        sub_383F40(v11, &byte_22CD811);
      if ( (!a1[96] || (unsigned __int8)is_dbgmem_valid()) && (get_merge_state(a1, v9) & 2) == 0 )
      {
        if ( v9 <= (unsigned int)sub_614FB0(*a1, 19, v12, v13, v14, v15) )
        {
          v24 = sub_3B87D0((__int64)a1, v8 - 1);
          sub_615AB0(*a1, 19, v24);
          if ( v8 < (unsigned int)sub_614FB0(*a1, 20, v25, v26, v27, v28) )
LABEL_14:
            callui(1, 20, (int)&callui, v21, v22, v23);
LABEL_13:
          v20 = sub_3B8820((__int64)a1, v9);
          sub_615AB0(*a1, 20, (unsigned int)(v20 + 1));
          goto LABEL_14;
        }
        if ( v8 >= (unsigned int)sub_614FB0(*a1, 20, v16, v17, v18, v19) )
          goto LABEL_13;
      }
    }
    sub_5B9900((int)a1);
    if ( (*(_BYTE *)(a1[2] + 8) & 1) != 0 )
      sub_5027D0(*a1, v9, v8);
  }
}

