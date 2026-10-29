__int64 __fastcall sub_9DC8F0(__int64 a1, __int64 a2, unsigned __int8 a3, unsigned __int8 a4, __int64 a5, __int64 a6)
{
  __int64 v11; // rax
  unsigned __int64 v12; // rbp
  unsigned __int8 **v13; // rax
  unsigned __int8 **v14; // r15
  unsigned int v15; // eax
  __int64 *v16; // rbx
  void *v17; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  _QWORD **v21; // rdi
  __int64 (*v22)(void); // rax
  __int64 v23; // rdi
  unsigned int v24; // edx
  unsigned __int64 v25; // rax
  __int64 v26; // [rsp+0h] [rbp-60h]
  __int64 v27; // [rsp+10h] [rbp-50h] BYREF
  void *v28; // [rsp+18h] [rbp-48h] BYREF
  unsigned int v29; // [rsp+20h] [rbp-40h]

  if ( a3 == a4 )
    return 1;
  if ( *(_BYTE *)(a5 + 51) )
  {
    v19 = sub_BEDF70(a5);
    v20 = sub_B167E0(*(_QWORD *)(v19 & 0xFFFFFFFFFFFFFFF0LL), a2);
    v21 = *(_QWORD ***)(a1 + 24);
    v26 = v20;
    v22 = (__int64 (*)(void))(*v21)[13];
    if ( (char *)v22 == (char *)sub_8D7E60 )
      v23 = (*(__int64 (__fastcall **)(_QWORD *))(*v21[3] + 104LL))(v21[3]);
    else
      v23 = v22();
    v24 = *(_DWORD *)(a5 + 12);
    v25 = 0;
    if ( v24 != -1 )
      v25 = v24 / *(_DWORD *)(a5 + 8);
    v29 = 64;
    v28 = (void *)v25;
    v12 = sub_6C55D0(v23, v26, (__int64)&v28, 0, 0, 0);
    if ( v29 > 0x40 && v28 )
      operator delete[](v28);
  }
  else
  {
    v11 = sub_BEDF70(a5);
    v12 = sub_B167E0(*(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL), a2);
  }
  v27 = sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
  v13 = (unsigned __int8 **)sub_A2E0C0(a1, &v27, 2244, 0);
  v14 = v13;
  if ( v13 )
  {
    sub_9B5410(v13, a4);
    sub_9B5410(v14, a3);
    sub_9B5660(v14, v12);
  }
  v15 = sub_8124E0(a6);
  v16 = (__int64 *)sub_A2DD70(a1, v15, 2206);
  v17 = (void *)sub_AC7B80(a6);
  if ( v16 )
  {
    v28 = v17;
    LOBYTE(v29) = 1;
    sub_839C90(v16, (__int64 *)&v28);
  }
  return 0;
}

