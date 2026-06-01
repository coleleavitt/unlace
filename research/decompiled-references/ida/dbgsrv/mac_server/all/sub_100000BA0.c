/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100000BA0
// Address: 0x0000000100000BA0

//----- (0000000100000BA0) ----------------------------------------------------
char __fastcall sub_100000BA0(__int64 a1, int a2, _BYTE *a3, __int64 a4)
{
  unsigned int v6; // eax
  void *v7; // rax
  void *v8; // r12
  size_t v10; // [rsp+0h] [rbp-40h] BYREF
  int v11; // [rsp+8h] [rbp-38h] BYREF
  int v12[2]; // [rsp+Ch] [rbp-34h] BYREF
  int v13; // [rsp+14h] [rbp-2Ch]

  *(_QWORD *)v12 = 0x800000001LL;
  v11 = 0;
  v10 = 4;
  sysctl(v12, 2u, &v11, &v10, nullptr, 0);
  v6 = v11;
  if ( v11 <= 0 )
  {
    v11 = 1024;
    v6 = 1024;
  }
  v7 = qalloc(v6);
  if ( !v7 )
    sub_100000CB0((int)"get_exec_fname");
  v8 = v7;
  *(_QWORD *)v12 = 0x3100000001LL;
  v13 = a2;
  v10 = v11;
  *a3 = 0;
  if ( sysctl(v12, 3u, v7, &v10, nullptr, 0) != -1 )
    qstrncpy(a3, (__int64)v8 + 4, a4);
  qfree(v8);
  return 1;
}
