void __fastcall sub_684820(
        __int64 *a1,
        char *a2,
        char *a3,
        unsigned __int8 a4,
        char a5,
        double a6,
        double a7,
        double a8)
{
  char *v8; // rbp
  char *v9; // rbx
  unsigned int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  int v21; // ecx
  int v22; // r8d
  int v23; // r9d
  unsigned __int64 v24; // rax
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
    sub_684520(a1, v9, v8, a4, a5, a6, a7, a8);
    if ( a4 )
    {
      v11 = sub_3D6B90(a1, v9, v8);
      if ( v11 )
        sub_387C60(v11, &byte_22F0C30);
      if ( (!a1[97] || (unsigned __int8)is_dbgmem_valid()) && (get_merge_state(a1, v9) & 2) == 0 )
      {
        if ( sub_631AD0(*a1, 19, v12, v13, v14, v15) >= (unsigned __int64)v9 )
        {
          v24 = sub_3BD3C0((__int64)a1, (__int64)(v8 - 1));
          sub_632610(*a1, 19, v24);
          if ( (unsigned __int64)v8 < sub_631AD0(*a1, 20, v25, v26, v27, v28) )
LABEL_14:
            callui(1, 20, (int)&callui, v21, v22, v23);
LABEL_13:
          v20 = sub_3BD420((__int64)a1, (__int64)v9);
          sub_632610(*a1, 20, v20 + 1);
          goto LABEL_14;
        }
        if ( (unsigned __int64)v8 >= sub_631AD0(*a1, 20, v16, v17, v18, v19) )
          goto LABEL_13;
      }
    }
    sub_5D4A70((int)a1);
    if ( (*(_BYTE *)(a1[2] + 8) & 1) != 0 )
      sub_51A4E0(*a1, (unsigned __int64)v9, (unsigned __int64)v8);
  }
}
