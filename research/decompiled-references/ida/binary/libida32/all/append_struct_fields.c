__int64 __fastcall append_struct_fields(
        __int64 (__fastcall **a1)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD),
        unsigned int *a2,
        int a3,
        void *a4,
        int a5,
        __int64 a6,
        int a7,
        char a8)
{
  char v12; // r9
  __int64 v13; // r15
  __int64 (__fastcall **v14)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // rax
  __int64 v15; // r8
  void *v17; // rdi
  unsigned int v18; // eax
  __int64 v19; // [rsp+0h] [rbp-78h]
  int v20; // [rsp+8h] [rbp-70h]
  __int64 (__fastcall **v21[3])(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // [rsp+10h] [rbp-68h] BYREF
  __int64 v22; // [rsp+28h] [rbp-50h]
  unsigned __int64 v23; // [rsp+38h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  v12 = a8;
  v13 = *(_QWORD *)(qword_2CA1698 + 1480);
  v14 = *(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v13;
  v15 = *(_QWORD *)(*(_QWORD *)v13 + 1528LL);
  if ( a3 == *(_DWORD *)(v15 + 60) && !*(_DWORD *)(v15 + 56) )
  {
    if ( a5 > 0 )
    {
      v17 = *(void **)(v15 + 64);
      if ( v17 )
      {
        v19 = *(_QWORD *)(*(_QWORD *)v13 + 1528LL);
        v20 = a5;
        memcpy(v17, a4, 4LL * a5);
        v12 = a8;
        v15 = v19;
        a5 = v20;
      }
    }
    *(_DWORD *)(v15 + 72) = a5;
    v18 = *a2;
    *(_DWORD *)(v15 + 80) = a7;
    *(_DWORD *)(v15 + 76) = v18;
    *(_DWORD *)(v15 + 56) = 1;
    v14 = *(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v13;
  }
  *a2 += a7;
  v21[0] = (__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))off_2B02F28;
  v21[1] = v14;
  v21[2] = a1;
  v22 = a6;
  sub_3C6030(v13, v21, (unsigned int *)a4, a5, a2, v12);
  *a2 -= a7;
  return v22;
}

