void __fastcall sub_1390A80(std::_V2 *a1, const void *a2, size_t a3, void *a4, size_t a5)
{
  unsigned __int8 (__fastcall *v6)(std::_V2 *, const void *, size_t); // rax
  unsigned int v7; // eax
  unsigned int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // r14d
  __int64 *v13; // r15
  __int64 v14; // rax
  _QWORD *v15; // rcx
  unsigned int v16; // eax
  _QWORD *v19; // [rsp+18h] [rbp-50h]
  __int64 *v20[8]; // [rsp+28h] [rbp-40h] BYREF

  v6 = *(unsigned __int8 (__fastcall **)(std::_V2 *, const void *, size_t))(*(_QWORD *)a1 + 64LL);
  if ( (char *)v6 == (char *)&sub_1390BD0 )
  {
    v7 = sub_2244B30(a2, a3);
    v8 = sub_2244CB0((char *)a1 + 96, a2, a3, v7);
    v12 = v8;
    v13 = (__int64 *)(*((_QWORD *)a1 + 12) + 8LL * v8);
    if ( *v13 )
    {
      if ( *v13 != -8 )
      {
        sub_A45C10(v20, v13, 0);
        return;
      }
      --*((_DWORD *)a1 + 28);
    }
    v14 = sub_22300B0(a3 + 9, 8, v8, v9, v10, v11);
    v15 = (_QWORD *)v14;
    if ( a3 )
    {
      v19 = (_QWORD *)v14;
      memcpy((void *)(v14 + 8), a2, a3);
      v15 = v19;
    }
    *((_BYTE *)v15 + a3 + 8) = 0;
    *v15 = a3;
    *v13 = (__int64)v15;
    ++*((_DWORD *)a1 + 27);
    v16 = sub_22450D0((char *)a1 + 96, v12);
    sub_A45C10(v20, (__int64 *)(*((_QWORD *)a1 + 12) + 8LL * v16), 0);
  }
  else if ( !v6(a1, a2, a3) )
  {
    return;
  }
  if ( (unsigned int)sub_1390590(a1, (__int64)a2, a3, a4, a5) )
    *((_BYTE *)a1 + 88) = 1;
}
