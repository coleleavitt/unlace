__int64 __fastcall sub_D6EC10(_QWORD *a1, __int64 a2)
{
  _QWORD *v3; // rdi
  __int64 (__fastcall *v4)(__int64); // rax
  _QWORD *v5; // rdi
  __int64 (*v6)(void); // rdx
  _QWORD *v7; // rdi
  _QWORD **v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // r8
  char *v11; // rax
  unsigned __int64 v12; // rdx
  char *v13; // rdi
  char *v14; // rcx
  __int64 v15; // rsi
  void *v17; // [rsp+0h] [rbp-118h] BYREF
  unsigned int v18; // [rsp+8h] [rbp-110h]
  char v19; // [rsp+Ch] [rbp-10Ch]
  void *ptr; // [rsp+10h] [rbp-108h] BYREF
  __int64 v21; // [rsp+18h] [rbp-100h]
  _BYTE v22[248]; // [rsp+20h] [rbp-F8h] BYREF

  v3 = (_QWORD *)a1[3];
  ptr = v22;
  v21 = 0x400000000LL;
  v4 = *(__int64 (__fastcall **)(__int64))(*v3 + 104LL);
  if ( v4 == sub_D66930 )
  {
    v5 = (_QWORD *)v3[3];
    v6 = *(__int64 (**)(void))(*v5 + 104LL);
    if ( (char *)v6 != (char *)v4 )
    {
LABEL_14:
      v9 = v6();
      goto LABEL_6;
    }
    v7 = (_QWORD *)v5[3];
    v4 = *(__int64 (__fastcall **)(__int64))(*v7 + 104LL);
    if ( (char *)v4 == (char *)v6 )
    {
      v8 = (_QWORD **)v7[3];
      v6 = (__int64 (*)(void))(*v8)[13];
      if ( (char *)v6 == (char *)v4 )
      {
        v9 = (*(__int64 (__fastcall **)(_QWORD *))(*v8[3] + 104LL))(v8[3]);
        goto LABEL_6;
      }
      goto LABEL_14;
    }
  }
  v9 = ((__int64 (*)(void))v4)();
LABEL_6:
  sub_EA11B0(v9, a2, &ptr);
  v11 = (char *)ptr;
  v12 = *(_QWORD *)(a2 + 8);
  v13 = (char *)ptr + 56 * (unsigned int)v21;
  v14 = (_BYTE *)(&dword_0 + 2);
  if ( ptr != v13 )
  {
    do
    {
      v15 = *((_QWORD *)v11 + 3);
      v11 += 56;
      v14 += v15 + 2;
    }
    while ( v13 != v11 );
  }
  v17 = v14;
  v18 = 64;
  v19 = 0;
  sub_D6C2A0(a1, (__int64)&v17, v12, (__int64)v14, v10);
  if ( v18 > 0x40 && v17 )
    operator delete[](v17);
  if ( ptr != v22 )
    free(ptr);
  return 1;
}

