__int64 __fastcall sub_665870(
        __int64 *a1,
        unsigned int a2,
        unsigned int a3,
        char a4,
        __int64 a5,
        double a6,
        double a7,
        double a8)
{
  unsigned int v10; // ebp
  unsigned int v11; // ebx
  unsigned int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  int v29; // ecx
  int v30; // r8d
  int v31; // r9d
  __int64 v32; // [rsp+0h] [rbp-38h] BYREF
  void *v33; // [rsp+8h] [rbp-30h]

  v10 = a3;
  v11 = a2;
  v33 = (void *)__readfsqword(0x28u);
  if ( a3 >= a2 )
  {
    v10 = a2;
    v11 = a3;
  }
  v32 = __PAIR64__(v11, v10);
  v13 = sub_3BB410((__int64)a1, &v32, (a4 & 4) == 0 ? -1 : 1, a5);
  if ( v13 )
    sub_384000(v13, (__int64)&byte_22CD811, v14, v15);
  if ( (*(_BYTE *)(a5 + 24) & 8) == 0 || (unsigned __int8)is_dbgmem_valid() )
  {
    v18 = sub_614FB0(*a1, 20, v14, v15, v16, v17);
    v23 = *a1;
    if ( v11 > v18 )
    {
      sub_615AB0(v23, 20, v11);
      if ( v10 >= (unsigned int)sub_614FB0(*a1, 19, v25, v26, v27, v28) )
        goto LABEL_16;
    }
    else if ( v10 >= (unsigned int)sub_614FB0(v23, 19, v19, v20, v21, v22) )
    {
      goto LABEL_7;
    }
    sub_615AB0(*a1, 19, v10);
LABEL_16:
    callui(1, 19, (int)&callui, v29, v30, v31);
  }
LABEL_7:
  if ( (a4 & 1) != 0 )
  {
    sub_665700(a1, v10, v11, 0, 0, a6, a7, a8);
  }
  else if ( (a4 & 2) != 0 )
  {
    auto_mark_range(v10, v11, 40);
    sub_3A1A90(a1, v10, v11, 0xC8u);
  }
  return 1;
}

