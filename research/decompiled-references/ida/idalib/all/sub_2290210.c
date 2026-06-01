__int64 __fastcall sub_2290210(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // ebp
  _QWORD *v7; // rax
  _QWORD *v8; // [rsp+10h] [rbp-38h] BYREF
  __int64 v9; // [rsp+18h] [rbp-30h] BYREF
  _QWORD *v10; // [rsp+20h] [rbp-28h] BYREF
  char v11; // [rsp+28h] [rbp-20h]

  sub_2290910(&v10, a2, a3, a4, a5);
  if ( (v11 & 1) != 0 )
  {
    v7 = v10;
    v10 = nullptr;
    v8 = v7;
    sub_A05760(&v9, &v8);
    if ( v8 )
      (*(void (__fastcall **)(_QWORD *))(*v8 + 8LL))(v8);
    v5 = 4096;
  }
  else
  {
    v5 = (unsigned int)v10;
  }
  sub_A0AE90((__int64 *)&v10);
  return v5;
}
