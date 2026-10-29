__int64 *__fastcall sub_1EAD7B0(__int64 *a1, __int64 *a2, __int64 *a3)
{
  __int64 v5; // rdi
  __int64 v7; // r13
  __int64 v8; // r15
  __int64 (__fastcall *v9)(__int64, __int64); // rax
  __int64 v10; // rax
  void *v11; // [rsp+0h] [rbp-98h] BYREF
  signed __int64 v12; // [rsp+8h] [rbp-90h]
  _BYTE v13[16]; // [rsp+10h] [rbp-88h] BYREF
  __int64 (__fastcall **v14)(); // [rsp+20h] [rbp-78h] BYREF
  int v15; // [rsp+28h] [rbp-70h]
  __int128 v16; // [rsp+30h] [rbp-68h]
  __int64 v17; // [rsp+40h] [rbp-58h]
  char v18; // [rsp+48h] [rbp-50h]
  int v19; // [rsp+4Ch] [rbp-4Ch]
  void **v20; // [rsp+50h] [rbp-48h]

  if ( (*(unsigned __int8 (__fastcall **)(__int64, void *))(*(_QWORD *)*a2 + 48LL))(*a2, &unk_2CD90E0) )
  {
    v5 = *a2;
    *a2 = 0;
    *a1 = 0;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  }
  else
  {
    v7 = *a2;
    *a2 = 0;
    if ( (*(unsigned __int8 (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 48LL))(v7, &unk_2D0AA9C) )
    {
      v8 = *a3;
      v9 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 24LL);
      if ( v9 == sub_AE9D50 )
      {
        v11 = v13;
        v16 = 0;
        v13[0] = 0;
        v12 = 0;
        v15 = 0;
        v18 = 0;
        v19 = 1;
        v17 = 0;
        v14 = &off_2BEBE68;
        v20 = &v11;
        sub_227B8B0(&v14, 0, 0, 0);
        (*(void (__fastcall **)(__int64, __int64 (__fastcall ***)()))(*(_QWORD *)v7 + 16LL))(v7, &v14);
        v14 = &off_2BEBE68;
        sub_227B7A0(&v14);
      }
      else
      {
        v9((__int64)&v11, v7);
      }
      sub_1EAD680(v8, v11, v12);
      if ( v11 != v13 )
        operator delete(v11);
      v10 = *(_QWORD *)v7;
      *a1 = 0;
      (*(void (__fastcall **)(__int64))(v10 + 8))(v7);
    }
    else
    {
      *a1 = v7;
    }
  }
  return a1;
}
