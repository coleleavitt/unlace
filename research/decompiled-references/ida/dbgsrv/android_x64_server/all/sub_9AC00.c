/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9AC00
// Address: 0x000000000009AC00

//----- (000000000009AC00) ----------------------------------------------------
__int64 __fastcall sub_9AC00(__int64 a1, const char *a2, const char *a3)
{
  _QWORD *v4; // rax
  void *v5; // rbx
  unsigned int v6; // r12d
  const char *v7; // rbx
  size_t v8; // rax
  _BYTE *v9; // rax
  _BYTE *v10; // r15
  unsigned int *v11; // rax
  void *v12; // rbx
  unsigned int v13; // ebp
  FILE *v14; // rax
  FILE *v15; // r14
  size_t v16; // rax
  const char *v17; // rdx
  const char *v18; // rax
  void *ptr[3]; // [rsp+0h] [rbp-58h] BYREF
  void *v21[8]; // [rsp+18h] [rbp-40h] BYREF

  v21[1] = (void *)__readfsqword(0x28u);
  v4 = open_linput(a2, 0);
  if ( v4 )
  {
    v5 = v4;
    v6 = calc_file_crc32((__int64)v4);
    close_linput(v5);
  }
  else
  {
    v6 = -1;
  }
  sub_AB1F0((__int64)ptr, 51);
  v7 = &byte_EB522;
  if ( a3 )
    v7 = a3;
  v8 = strlen(v7);
  sub_56350((__int64)ptr, v7, v8 + 1);
  v9 = pack_dd(v21, (unsigned __int64)v21 + 5, v6);
  sub_56350((__int64)ptr, v21, v9 - (_BYTE *)v21);
  v10 = (_BYTE *)(a1 + 192);
  v11 = (unsigned int *)(*(__int64 (__fastcall **)(__int64, __int64, void **))(*(_QWORD *)(a1 + 192) + 16LL))(
                          a1 + 192,
                          51,
                          ptr);
  v12 = v11;
  if ( v11 )
  {
    v21[0] = (char *)v11 + 5;
    v13 = unpack_dd((unsigned __int64 *)v21, (unsigned __int64)v11 + *v11 + 5);
    if ( v13 )
    {
      LOBYTE(v6) = 1;
      if ( v13 != 1 )
      {
        v14 = fopenWB(a2);
        v15 = v14;
        if ( v14 )
        {
          v16 = qfwrite(v14, v21[0], v13);
          LOBYTE(v6) = v16 == v13;
          v17 = "failed";
          if ( v16 == v13 )
            v17 = "success";
          sub_926F0(v10, "Updated kernel debugger stub: %s\n", v17);
          qfclose(v15);
        }
        else
        {
          v18 = (const char *)qerrstr(0xFFFFFFFFLL);
          v6 = 0;
          sub_9AE30(v10, "Could not update the kernel debugger stub.\n%s", v18);
        }
      }
    }
    else
    {
      v6 = 0;
    }
    qfree(v12);
  }
  else
  {
    v6 = 0;
  }
  if ( ptr[0] )
  {
    ptr[1] = nullptr;
    qfree(ptr[0]);
    ptr[0] = nullptr;
    ptr[2] = nullptr;
  }
  return v6;
}
