__int64 __fastcall sub_684690(
        __int64 *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        char a4,
        __int64 a5,
        double a6,
        double a7,
        double a8)
{
  char *v10; // rbp
  void *v11; // rbx
  unsigned int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int64 v18; // rax
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
  int v32[2]; // [rsp+0h] [rbp-48h] BYREF
  void *v33; // [rsp+8h] [rbp-40h]
  int v34[2]; // [rsp+18h] [rbp-30h]

  v10 = (char *)a3;
  v11 = (void *)a2;
  *(_QWORD *)v34 = __readfsqword(0x28u);
  if ( a3 >= a2 )
  {
    v10 = (char *)a2;
    v11 = (void *)a3;
  }
  *(_QWORD *)v32 = v10;
  v33 = v11;
  v13 = sub_3C0380((__int64)a1, (unsigned __int64 *)v32, (a4 & 4) == 0 ? -1 : 1, a5);
  if ( v13 )
    sub_387D20(v13, (__int64)&byte_22F0C30, v14, v15);
  if ( (*(_BYTE *)(a5 + 44) & 8) == 0 || (unsigned __int8)is_dbgmem_valid() )
  {
    v18 = sub_631AD0(*a1, 20, v14, v15, v16, v17);
    v23 = *a1;
    if ( v18 < (unsigned __int64)v11 )
    {
      sub_632610(v23, 20, (__int64)v11);
      if ( (unsigned __int64)v10 >= sub_631AD0(*a1, 19, v25, v26, v27, v28) )
        goto LABEL_16;
    }
    else if ( (unsigned __int64)v10 >= sub_631AD0(v23, 19, v19, v20, v21, v22) )
    {
      goto LABEL_7;
    }
    sub_632610(*a1, 19, (__int64)v10);
LABEL_16:
    callui(1, 19, (int)&callui, v29, v30, v31);
  }
LABEL_7:
  if ( (a4 & 1) != 0 )
  {
    sub_684520(a1, v10, (char *)v11, 0, 0, a6, a7, a8);
  }
  else if ( (a4 & 2) != 0 )
  {
    auto_mark_range(v10, v11, 40);
    sub_3A61A0(a1, (unsigned __int64)v10, (unsigned __int64)v11, 0xC8u);
  }
  return 1;
}
