/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: set_idcv_attr
// Address: 0x0000000000074280

//----- (0000000000074280) ----------------------------------------------------
__int64 __fastcall set_idcv_attr(__int64 a1, char *a2, char *a3, char a4, double a5, __m128 a6)
{
  _DWORD *v8; // r14
  int v9; // eax
  __int64 v10; // rax
  int v11; // edx
  unsigned int qerrno; // ebp
  char *idc_gvar; // rax
  unsigned int v14; // edi
  __int64 v15; // rdi
  __int64 *v16; // rax
  __int64 *v18; // rax
  void *ptr[3]; // [rsp+8h] [rbp-F0h] BYREF
  void **v20; // [rsp+28h] [rbp-D0h] BYREF
  __int64 v21[25]; // [rsp+30h] [rbp-C8h] BYREF

  v21[19] = __readfsqword(0x28u);
  if ( a1 )
  {
    if ( *(_BYTE *)a1 == 5 )
    {
      sub_37F60((__int64)ptr, a2);
      if ( a4 )
      {
        sub_78CB0((__int64)v21, 0, 1);
        v8 = *(_DWORD **)(a1 + 8);
        v9 = v8[7];
        if ( v9 )
        {
          while ( 1 )
          {
            v10 = sub_6D4B0(v21[1], v9);
            v11 = *(_DWORD *)(v10 + 60);
            if ( v11 != -1 )
              break;
            v9 = *(_DWORD *)(v10 + 24);
            if ( !v9 )
              goto LABEL_16;
          }
          qerrno = 0;
          if ( !(unsigned __int8)sub_77750((__int64)v21, v8, v11, (__int64)ptr, a3, 0, a5, a6) )
            qerrno = get_qerrno();
        }
        else
        {
LABEL_16:
          v20 = ptr;
          v18 = sub_80B80((__int64)v8, (__int64)ptr, (__int64)&dword_1034A4, (__int64 *)&v20);
          qerrno = 0;
          copy_idcv((char *)v18 + 56, a3, a5, a6);
        }
        sub_78F40((__int64)v21, a5, a6);
      }
      else
      {
        v15 = *(_QWORD *)(a1 + 8);
        v21[0] = (__int64)ptr;
        v16 = sub_80B80(v15, (__int64)ptr, (__int64)&dword_1034A4, v21);
        qerrno = 0;
        copy_idcv((char *)v16 + 56, a3, a5, a6);
      }
      if ( ptr[0] )
      {
        ptr[1] = nullptr;
        qfree(ptr[0]);
        ptr[0] = nullptr;
        ptr[2] = nullptr;
      }
      return qerrno;
    }
    v14 = 1532;
    return set_qerrno(v14);
  }
  idc_gvar = (char *)find_idc_gvar(a2);
  if ( !idc_gvar )
  {
    set_error_string(0, a2);
    v14 = 1538;
    return set_qerrno(v14);
  }
  copy_idcv(idc_gvar, a3, a5, a6);
  return 0;
}
// 1034A4: using guessed type int dword_1034A4;
