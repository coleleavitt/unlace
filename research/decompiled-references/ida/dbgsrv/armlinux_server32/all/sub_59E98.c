/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_59E98
// Address: 0x00059E98

//----- (00059E98) --------------------------------------------------------
size_t __fastcall sub_59E98(int a1, int a2, char *a3)
{
  unsigned int v6; // r10
  void **v7; // r0
  void **v8; // r5
  int v9; // r2
  _BYTE *v10; // r4
  void *(__fastcall *v11)(int, int, int *); // r9
  _DWORD *v12; // r0
  void *v13; // r5
  unsigned int v14; // r0
  size_t v15; // r6
  FILE *v17; // r0
  FILE *v18; // r7
  bool v19; // zf
  const char *v20; // r2
  const char *v21; // r0
  void *v22; // [sp+4h] [bp-14h] BYREF
  void *ptr[3]; // [sp+8h] [bp-10h] BYREF

  v6 = -1;
  v7 = (void **)sub_74A8C(a2, 0);
  if ( v7 )
  {
    v8 = v7;
    v6 = sub_6C584((int)v7);
    sub_74B54(v8);
  }
  sub_67C24((int *)ptr, 51);
  sub_581C8(ptr, a3);
  sub_58140((int)ptr, v6);
  v9 = *(_DWORD *)(a1 + 100);
  v10 = (_BYTE *)(a1 + 100);
  v11 = *(void *(__fastcall **)(int, int, int *))(v9 + 8);
  if ( v11 == sub_57B30 )
    v12 = sub_60C8C((int)v10, 51, (int *)ptr, 0);
  else
    v12 = (_DWORD *)v11((int)v10, 51, (int *)ptr);
  v13 = v12;
  if ( v12 )
  {
    v22 = (char *)v12 + 5;
    v14 = sub_762E4((unsigned __int8 **)&v22, (unsigned int)v12 + *v12 + 5);
    v15 = v14;
    if ( v14 != 1 )
    {
      if ( v14 )
      {
        v17 = sub_75E60(a2);
        v18 = v17;
        if ( v17 )
        {
          v19 = sub_777F4(v17, v22, v15) == v15;
          v15 = v19;
          if ( v19 )
            v20 = "success";
          else
            v20 = "failed";
          sub_5835C(v10, "Updated kernel debugger stub: %s\n", v20);
          sub_778BC(v18);
          goto LABEL_9;
        }
        v21 = (const char *)sub_71020(-1);
        sub_583DC(v10, "Could not update the kernel debugger stub.\n%s", v21);
      }
      v15 = 0;
    }
LABEL_9:
    sub_77F70(v13);
    goto LABEL_10;
  }
  v15 = 0;
LABEL_10:
  if ( ptr[0] )
  {
    ptr[1] = nullptr;
    sub_77F70(ptr[0]);
  }
  return v15;
}
