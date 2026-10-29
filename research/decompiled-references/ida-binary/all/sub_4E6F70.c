unsigned __int64 __fastcall sub_4E6F70(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        double a5,
        double a6,
        double a7,
        double a8)
{
  _QWORD *i; // r15
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  double v15; // xmm4_8
  char v16; // al
  __int64 v17; // r12
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // r12
  _QWORD *j; // r14
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rdx
  double v26; // xmm4_8
  __int64 v27; // r12
  __int64 v28; // rbx
  __int64 v29; // rax
  __int64 v30; // r12
  __int64 v32; // [rsp+8h] [rbp-90h]
  _QWORD *v33; // [rsp+10h] [rbp-88h]
  __int64 v34; // [rsp+30h] [rbp-68h] BYREF
  __int64 v35; // [rsp+38h] [rbp-60h]
  __int64 v36; // [rsp+40h] [rbp-58h] BYREF
  __int64 v37; // [rsp+48h] [rbp-50h]
  unsigned __int64 v38; // [rsp+58h] [rbp-40h]

  v38 = __readfsqword(0x28u);
  if ( a1 != a2 )
  {
    for ( i = a1 + 1; a2 != i; *a1 = v32 )
    {
      while ( 1 )
      {
        v17 = *a1;
        v18 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a4 + 48LL))(a4, a3, *i);
        v19 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a4 + 48LL))(a4, a3, v17);
        v20 = v19;
        if ( v18 )
        {
          if ( v19 )
            break;
        }
        v32 = *i;
LABEL_11:
        for ( j = i; ; j[1] = *j )
        {
          v27 = *(j - 1);
          v33 = j;
          v28 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a4 + 48LL))(a4, a3, v32);
          v29 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a4 + 48LL))(a4, a3, v27);
          v30 = v29;
          if ( !v28 )
            break;
          if ( !v29 )
            break;
          --j;
          v22 = sub_4D89F0(a3, *(_DWORD *)(*(_QWORD *)v29 + 24LL * *(int *)(v29 + 96)), 0);
          v37 = v23;
          v36 = v22;
          v24 = sub_4D89F0(a3, *(_DWORD *)(*(_QWORD *)v28 + 24LL * *(int *)(v28 + 96)), 0);
          v35 = v25;
          v34 = v24;
          if ( !sub_4D9280(v28 + 48, (__int64)&v34, v30 + 48, (unsigned __int64 *)&v36, a5, a6, a7, a8, v26) )
            break;
        }
        ++i;
        *v33 = v32;
        if ( a2 == i )
          return v38 - __readfsqword(0x28u);
      }
      v11 = sub_4D89F0(a3, *(_DWORD *)(*(_QWORD *)v19 + 24LL * *(int *)(v19 + 96)), 0);
      v37 = v12;
      v36 = v11;
      v13 = sub_4D89F0(a3, *(_DWORD *)(*(_QWORD *)v18 + 24LL * *(int *)(v18 + 96)), 0);
      v35 = v14;
      v34 = v13;
      v16 = sub_4D9280(v18 + 48, (__int64)&v34, v20 + 48, (unsigned __int64 *)&v36, a5, a6, a7, a8, v15);
      v32 = *i;
      if ( !v16 )
        goto LABEL_11;
      if ( (char *)i - (char *)a1 <= 8 )
      {
        if ( (char *)i - (char *)a1 == 8 )
          *i = *a1;
      }
      else
      {
        memmove(a1 + 1, a1, (char *)i - (char *)a1);
      }
      ++i;
    }
  }
  return v38 - __readfsqword(0x28u);
}
