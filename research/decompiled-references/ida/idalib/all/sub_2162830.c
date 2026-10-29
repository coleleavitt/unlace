__int64 __fastcall sub_2162830(__int64 a1, char *a2)
{
  __int64 (__fastcall *v2)(__int64, __int64, char *); // rax
  _QWORD *v3; // rax
  unsigned int v4; // ebx
  _BOOL4 v5; // eax
  _QWORD *v7; // [rsp+10h] [rbp-48h] BYREF
  __int64 v8; // [rsp+18h] [rbp-40h] BYREF
  __int64 v9[2]; // [rsp+20h] [rbp-38h] BYREF
  char v10; // [rsp+30h] [rbp-28h]

  v2 = *(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)a1 + 144LL);
  if ( v2 == sub_2160140 )
    sub_215FF90((__int64)v9, a1, a2);
  else
    v2((__int64)v9, a1, a2);
  v3 = (_QWORD *)v9[0];
  v4 = v10 & 1;
  if ( (v10 & 1) != 0 )
  {
    v9[0] = 0;
    v7 = v3;
    sub_A05760(&v8, &v7);
    if ( v7 )
      (*(void (__fastcall **)(_QWORD *))(*v7 + 8LL))(v7);
    v4 = 0;
  }
  else if ( v9[1] > 5uLL )
  {
    v5 = *(_DWORD *)v9[0] != 1650811950 || *(_WORD *)(v9[0] + 4) != 26485;
    LOBYTE(v4) = !v5;
  }
  sub_111DFC0(v9);
  return v4;
}
