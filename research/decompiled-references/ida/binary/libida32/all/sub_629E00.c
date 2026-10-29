__int64 __fastcall sub_629E00(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v6; // r13
  __int64 linput; // rax
  void *zip_linput; // r14
  int v9; // [rsp+4h] [rbp-34h]

  if ( !a3 || (unsigned int)freadbytes() )
    return 0;
  v6 = qftell(a1);
  linput = make_linput(a1);
  zip_linput = (void *)create_zip_linput(linput, v9, 1);
  v3 = qlread(zip_linput, a2, a3);
  close_linput(zip_linput);
  qfseek(a1, v6 + v9, 0);
  return v3;
}

