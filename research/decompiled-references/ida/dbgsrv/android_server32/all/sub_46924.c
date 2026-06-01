/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46924
// Address: 0x00046924

//----- (00046924) --------------------------------------------------------
int __fastcall sub_46924(unsigned __int8 *a1)
{
  void *qerrno; // r7
  int idc_class; // r0
  int v4; // r4
  _DWORD *v5; // r0
  _DWORD *v6; // r6
  int v7; // r1
  int v8; // r0
  const char *v9; // r4
  size_t v10; // r2
  unsigned __int8 *v12; // [sp+Ch] [bp-20h]
  char v13[8]; // [sp+10h] [bp-1Ch] BYREF
  void *v14; // [sp+18h] [bp-14h] BYREF
  int v15; // [sp+1Ch] [bp-10h]
  int v16; // [sp+20h] [bp-Ch]
  int v17; // [sp+24h] [bp-8h]
  int v18; // [sp+28h] [bp-4h]

  qerrno = (void *)get_qerrno();
  idc_class = find_idc_class("exception");
  v12 = a1;
  if ( a1 )
  {
    v4 = idc_class;
    free_idcv(a1);
    *a1 = 5;
    v5 = operator new(0x14u);
    v6 = v5;
    v7 = 0;
    if ( v4 )
      v7 = *(_DWORD *)(v4 + 16);
    sub_3F83C(v5, v7);
    v8 = (int)v12;
    *((_DWORD *)v12 + 2) = v6;
  }
  else
  {
    set_qerrno(1532);
    v8 = 0;
  }
  v13[0] = 2;
  v14 = qerrno;
  v17 = 0;
  v16 = 0;
  v15 = 0;
  set_idcv_attr(v8, "qerrno", (unsigned __int8 *)v13, 0);
  v9 = qstrerror(0xFFFFFFFF);
  if ( v13[0] == 5 )
  {
    sub_448A0((int)v14, (unsigned __int8 *)v13);
  }
  else if ( v13[0] == 7 && v14 )
  {
    v15 = 0;
    qfree(v14);
    v16 = 0;
    v14 = nullptr;
  }
  v13[0] = 2;
  v14 = nullptr;
  v10 = 0;
  if ( v9 )
    v10 = strlen(v9);
  v13[0] = 7;
  sub_266B8(&v14, v9, v10);
  set_idcv_attr((int)v12, "description", (unsigned __int8 *)v13, 0);
  set_qerrno((int)qerrno);
  if ( v13[0] == 5 )
  {
    sub_448A0((int)v14, (unsigned __int8 *)v13);
  }
  else if ( v13[0] == 7 && v14 )
  {
    v15 = 0;
    qfree(v14);
    v16 = 0;
    v14 = nullptr;
  }
  return _stack_chk_guard - v18;
}
