void __fastcall sub_2097790(__int64 a1, __int64 a2, int a3, double a4)
{
  __int64 v4; // rdi
  __int64 *v6; // rbx
  __int64 v7; // rbp
  __int64 v8; // r14
  size_t v9; // rax
  __int64 v10; // r15
  __int64 *ptr; // [rsp+0h] [rbp-E0h]
  signed __int64 v12; // [rsp+8h] [rbp-D8h]
  void *v13[2]; // [rsp+18h] [rbp-C8h] BYREF
  _BYTE v14[16]; // [rsp+28h] [rbp-B8h] BYREF
  __int64 *v15; // [rsp+38h] [rbp-A8h] BYREF
  __int64 v16; // [rsp+40h] [rbp-A0h]
  _BYTE v17[152]; // [rsp+48h] [rbp-98h] BYREF

  if ( dword_2CFD4D8 > 3 )
  {
    v4 = *(_QWORD *)(a1 + 8);
    v15 = (__int64 *)v17;
    v16 = 0xC00000000LL;
    if ( v4 )
    {
      sub_20974C0(v4, (__int64)&v15, a2);
      v6 = v15;
      ptr = &v15[(unsigned int)v16];
      if ( v15 != ptr )
      {
        v12 = (unsigned int)(2 * a3);
        do
        {
          v7 = *v6;
          v8 = sub_221A480(a4);
          v9 = j__strlen("--");
          v10 = sub_9954E0(v8, "--", v9);
          v13[0] = v14;
          sub_2096AC0(v13, v12, 32);
          sub_227BF10(v10, v13[0], v13[1]);
          if ( v13[0] != v14 )
            operator delete(v13[0]);
          ++v6;
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 120LL))(v7, 0);
        }
        while ( ptr != v6 );
        ptr = v15;
      }
      if ( ptr != (__int64 *)v17 )
        free(ptr);
    }
  }
}
