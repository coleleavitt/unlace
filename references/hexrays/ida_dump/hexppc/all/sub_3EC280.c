__int64 __fastcall sub_3EC280(__int64 a1, signed __int8 a2, int a3, int a4)
{
  __int64 v5; // r12
  __int64 v6; // rax
  __int64 v8; // rax
  char *v9; // r14
  char *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // r14
  __int64 v14; // rcx
  __int64 v15; // rax
  int v16; // r15d
  int dtype_size; // eax
  __int64 v18; // [rsp+0h] [rbp-A0h]
  unsigned __int8 v19; // [rsp+Fh] [rbp-91h]
  __int64 v20; // [rsp+18h] [rbp-88h] BYREF
  char *s1; // [rsp+20h] [rbp-80h] BYREF
  __int128 v22; // [rsp+28h] [rbp-78h]
  _BYTE v23[16]; // [rsp+40h] [rbp-60h] BYREF
  __int64 v24; // [rsp+50h] [rbp-50h]
  char v25; // [rsp+58h] [rbp-48h]
  unsigned __int64 v26; // [rsp+68h] [rbp-38h]

  v26 = __readfsqword(0x28u);
  if ( a3 != 4096 )
    return 0;
  v5 = a4;
  v6 = *(_QWORD *)(a1 + 832);
  if ( *(_DWORD *)(v6 + 80) == 8 )
  {
    if ( a2 != 7 )
      return 0;
  }
  else if ( a2 != 2 )
  {
    return 0;
  }
  if ( *(_DWORD *)(v6 + 384) != a4 )
    return 0;
  if ( !(unsigned __int8)get_refinfo(v23, *(_QWORD *)(a1 + 40), 1) )
    return 0;
  if ( (v25 & 0x40) != 0 )
    return 0;
  if ( v24 )
    return 0;
  v19 = calc_reference_data(&v20, 0, *(_QWORD *)(a1 + 40) + *(char *)(a1 + 106), v23);
  if ( !v19 )
    return 0;
  v8 = getseg(v20);
  if ( !v8 )
    return 0;
  s1 = nullptr;
  v22 = 0;
  get_segm_name(&s1, v8, 0);
  if ( (_QWORD)v22 )
  {
    v9 = s1;
    v10 = s1;
    if ( !strcmp(s1, ".plt") )
    {
      v11 = *(_QWORD *)(a1 + 832);
      v12 = *(_QWORD *)(v11 + 4464);
      if ( !v12 )
        sub_3E6800(0.0, (__int64)v10, (__int64)".plt");
      v13 = *(int *)(*(_QWORD *)(v11 + 4456) + 4 * v12 - 4);
      v14 = v20;
      *(_QWORD *)(v11 + 4464) = v12 - 1;
      sub_3E9DD0(a1, (unsigned __int8 *)(a1 + 104), a2, v14, v13);
      v15 = *(_QWORD *)(a1 + 832);
      v16 = *(_DWORD *)(v15 + 80);
      v18 = *(int *)(v15 + 64);
      dtype_size = get_dtype_size((unsigned int)a2);
      sub_1D2710(a1, 2u, dtype_size, v18, v13, v5, v16);
      v9 = s1;
    }
    else
    {
      v19 = 0;
    }
  }
  else
  {
    v19 = 0;
    v9 = s1;
  }
  if ( v9 )
  {
    *(_QWORD *)&v22 = 0;
    qfree(v9);
  }
  return v19;
}
