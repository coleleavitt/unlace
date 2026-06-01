/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: set_idcv_attr
// Address: 0x00000001000398D0

//----- (00000001000398D0) ----------------------------------------------------
__int64 __fastcall set_idcv_attr(__int64 a1, char *a2, unsigned __int8 *a3, char a4)
{
  size_t v6; // rax
  size_t v7; // r12
  size_t v8; // r13
  void *v9; // rdi
  unsigned __int8 *idc_gvar; // rax
  unsigned int qerrno; // r14d
  __int64 **v13; // r15
  int v14; // eax
  __int64 v15; // rax
  unsigned int v16; // edx
  __int64 *v17; // rax
  __int64 **v18; // rdi
  __int64 *v19; // rax
  char v20; // [rsp+Ch] [rbp-F4h]
  __int128 v21; // [rsp+10h] [rbp-F0h] BYREF
  __int64 v22; // [rsp+20h] [rbp-E0h]
  __int128 *v23; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v24[19]; // [rsp+38h] [rbp-C8h] BYREF

  if ( a1 )
  {
    if ( *(_BYTE *)a1 == 5 )
    {
      v21 = 0;
      v22 = 0;
      if ( a2 )
      {
        v20 = a4;
        v6 = strlen(a2);
        v7 = v6;
        v8 = v6 + 1;
        if ( v6 == -1 )
        {
          v9 = nullptr;
        }
        else
        {
          v9 = qvector_reserve((__int64)&v21, nullptr, v6 + 1, 1u);
          *(_QWORD *)&v21 = v9;
        }
        *((_QWORD *)&v21 + 1) = v8;
        memmove(v9, a2, v7);
        *(_BYTE *)(v21 + v7) = 0;
        a4 = v20;
      }
      if ( a4 )
      {
        sub_10003E3D0((__int64)v24, 0, 1);
        v13 = *(__int64 ***)(a1 + 8);
        v14 = *((_DWORD *)v13 + 7);
        if ( v14 )
        {
          while ( 1 )
          {
            v15 = sub_100033FB0(v24[1], v14);
            v16 = *(_DWORD *)(v15 + 60);
            if ( v16 != -1 )
              break;
            v14 = *(_DWORD *)(v15 + 24);
            if ( !v14 )
              goto LABEL_17;
          }
          qerrno = 0;
          if ( !(unsigned __int8)sub_10003CF30((__int64)v24, v13, v16, (__int64)&v21, a3, 0) )
            qerrno = get_qerrno();
        }
        else
        {
LABEL_17:
          v23 = &v21;
          v17 = sub_100044870(v13, (__int64)&v21, (__int64)&byte_10009086F, (__int64 *)&v23);
          qerrno = 0;
          copy_idcv((unsigned __int8 *)v17 + 56, a3);
        }
        sub_10003E5C0((__int64)v24);
      }
      else
      {
        v18 = *(__int64 ***)(a1 + 8);
        v24[0] = (__int64)&v21;
        v19 = sub_100044870(v18, (__int64)&v21, (__int64)&byte_10009086F, v24);
        qerrno = 0;
        copy_idcv((unsigned __int8 *)v19 + 56, a3);
      }
      if ( (_QWORD)v21 )
      {
        *((_QWORD *)&v21 + 1) = 0;
        qfree((void *)v21);
      }
      return qerrno;
    }
    return set_qerrno();
  }
  idc_gvar = (unsigned __int8 *)find_idc_gvar(a2);
  if ( !idc_gvar )
  {
    set_error_string(0, a2);
    return set_qerrno();
  }
  copy_idcv(idc_gvar, a3);
  return 0;
}
// 10009086F: using guessed type char byte_10009086F;
