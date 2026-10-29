__int64 __fastcall sub_647400(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // r13
  __int64 linput; // rax
  void *zip_linput; // r14
  int v11; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v12; // [rsp+8h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  if ( !a3 || (unsigned int)freadbytes(a1, &v11, 4, 0) )
    return 0;
  v6 = qftell(a1);
  v7 = v11;
  v8 = v6;
  linput = make_linput(a1);
  zip_linput = (void *)create_zip_linput(linput, v7, 1);
  v3 = qlread(zip_linput, a2, a3);
  close_linput(zip_linput);
  qfseek(a1, v8 + v11, 0);
  return v3;
}
