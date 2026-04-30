__int64 __fastcall sub_4EA400(
        char *src,
        char *a2,
        char *a3,
        char *a4,
        _QWORD *a5,
        double a6,
        double a7,
        double a8,
        double a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  char *v12; // r14
  char *v13; // r13
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  double v19; // xmm4_8
  __int64 v20; // rax
  __int64 v21; // r15
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // r15
  _QWORD *v25; // rbp
  _QWORD v28[2]; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v29[11]; // [rsp+30h] [rbp-58h] BYREF

  v12 = a3;
  v13 = src;
  for ( v29[3] = __readfsqword(0x28u); v13 != a2 && v12 != a4; ++a5 )
  {
    v21 = *(_QWORD *)v13;
    v22 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a12 + 48LL))(a12, a11, *(_QWORD *)v12);
    v23 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a12 + 48LL))(a12, a11, v21);
    v24 = v23;
    if ( v22
      && v23
      && (v29[0] = sub_4D89F0(a11, *(_DWORD *)(*(_QWORD *)v23 + 24LL * *(int *)(v23 + 96)), 0),
          v15 = *(int *)(v22 + 96),
          v29[1] = v16,
          v17 = sub_4D89F0(a11, *(_DWORD *)(*(_QWORD *)v22 + 24 * v15), 0),
          v28[1] = v18,
          v28[0] = v17,
          sub_4D9280(v22 + 48, (__int64)v28, v24 + 48, v29, a6, a7, a8, a9, v19)) )
    {
      v20 = *(_QWORD *)v12;
      v12 += 8;
    }
    else
    {
      v20 = *(_QWORD *)v13;
      v13 += 8;
    }
    *a5 = v20;
  }
  if ( a2 - v13 <= 8 )
  {
    if ( a2 - v13 == 8 )
      *a5 = *(_QWORD *)v13;
  }
  else
  {
    memmove(a5, v13, a2 - v13);
  }
  v25 = (_QWORD *)((char *)a5 + a2 - v13);
  if ( a4 - v12 <= 8 )
  {
    if ( a4 - v12 == 8 )
      *v25 = *(_QWORD *)v12;
  }
  else
  {
    memmove(v25, v12, a4 - v12);
  }
  return (__int64)v25 + a4 - v12;
}
