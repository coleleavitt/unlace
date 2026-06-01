void __fastcall sub_13ACD70(__int64 a1, const void *a2, size_t a3, __int64 a4)
{
  const void *v4; // r12
  size_t v5; // rbx
  __int64 v6; // rbp
  void *v7; // rdi
  unsigned __int64 v9; // r15
  size_t v10; // rdx
  _QWORD *v11; // rax
  _QWORD *v12; // [rsp+10h] [rbp-58h] BYREF
  __int64 v13; // [rsp+18h] [rbp-50h] BYREF
  _QWORD *v14; // [rsp+20h] [rbp-48h] BYREF
  char v15; // [rsp+28h] [rbp-40h]

  v4 = a2;
  v5 = a3;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 16) + 1LL) & 1) != 0 )
  {
    sub_FD9C70((__int64)&v14, *(_QWORD *)(a4 + 16), a2, a3, 0, 1, 1);
    if ( (v15 & 1) != 0 )
    {
      v11 = v14;
      v14 = nullptr;
      v12 = v11;
      sub_A05760(&v13, &v12);
      if ( v12 )
        (*(void (__fastcall **)(_QWORD *))(*v12 + 8LL))(v12);
      sub_A04D90((__int64 *)&v14);
    }
    else
    {
      v9 = (unsigned __int64)v14;
      sub_A04D90((__int64 *)&v14);
      if ( v9 )
      {
        v4 = (const void *)sub_FDBE90(*(_QWORD *)(a4 + 16), v9);
        v5 = v10;
      }
    }
  }
  v6 = *(_QWORD *)(a1 + 40);
  v7 = *(void **)(v6 + 32);
  if ( *(_QWORD *)(v6 + 24) - (_QWORD)v7 < v5 )
  {
    sub_227BF10(v6, v4, v5);
  }
  else if ( v5 )
  {
    memcpy(v7, v4, v5);
    *(_QWORD *)(v6 + 32) += v5;
  }
}
