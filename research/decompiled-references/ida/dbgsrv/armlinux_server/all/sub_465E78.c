/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_465E78
// Address: 0x0000000000465E78

//----- (0000000000465E78) ----------------------------------------------------
__int64 __fastcall sub_465E78(__int64 a1, const char *a2, char *a3)
{
  unsigned int v4; // w20
  void **v7; // x0
  void **v8; // x21
  __int64 v9; // x1
  __int64 v10; // x19
  void *(__fastcall *v11)(__int64, unsigned __int8, __int64 *); // x3
  unsigned int *v12; // x0
  void *v13; // x20
  unsigned int v14; // w0
  size_t v15; // x21
  unsigned int v16; // w19
  FILE *v18; // x0
  FILE *v19; // x23
  bool v20; // zf
  const char *v21; // x2
  __int64 v22; // x0
  const char *v23; // x0
  void *v24; // [xsp+48h] [xbp-28h] BYREF
  void *ptr[3]; // [xsp+50h] [xbp-20h] BYREF

  v4 = -1;
  v7 = (void **)sub_48BF60(a2, 0);
  if ( v7 )
  {
    v8 = v7;
    v4 = sub_47FF28((__int64)v7);
    sub_48C0F8(v8);
  }
  sub_479010(51, (__int64 *)ptr);
  sub_4632A0((__int64)ptr, a3);
  sub_4631C0((__int64)ptr, v4);
  v9 = *(_QWORD *)(a1 + 192);
  v10 = a1 + 192;
  v11 = *(void *(__fastcall **)(__int64, unsigned __int8, __int64 *))(v9 + 16);
  if ( v11 == sub_4628F0 )
    v12 = (unsigned int *)sub_46F150(v10, 0x33u, (__int64 *)ptr, 0);
  else
    v12 = (unsigned int *)v11(v10, 51u, (__int64 *)ptr);
  v13 = v12;
  if ( v12 )
  {
    v24 = (char *)v12 + 5;
    v14 = sub_48E5A8((unsigned __int8 **)&v24, (unsigned __int64)v12 + *v12 + 5);
    v15 = v14;
    if ( v14 == 1 )
    {
      v16 = 1;
    }
    else
    {
      if ( v14 )
      {
        v18 = sub_48DEA0(a2);
        v19 = v18;
        if ( v18 )
        {
          v20 = sub_490560(v18, v24, v15) == v15;
          v21 = "success";
          v22 = v10;
          v16 = v20;
          if ( !v20 )
            v21 = "failed";
          sub_463598(v22, (__int64)"Updated kernel debugger stub: %s\n", v21);
          sub_4906A0(v19);
          goto LABEL_9;
        }
        v23 = (const char *)sub_487060(-1);
        sub_463688(v10, (__int64)"Could not update the kernel debugger stub.\n%s", v23);
      }
      v16 = 0;
    }
LABEL_9:
    j__free(v13);
    goto LABEL_10;
  }
  v16 = 0;
LABEL_10:
  if ( ptr[0] )
  {
    ptr[1] = nullptr;
    j__free(ptr[0]);
  }
  return v16;
}
