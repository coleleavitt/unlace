unsigned __int64 __fastcall sub_D3290(__int64 *a1, __int64 *a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v9; // rdi
  int v10; // ecx
  int v11; // r12d
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // r15
  __int64 v15; // rdx
  __int64 v17; // rax
  __int64 v19; // [rsp+10h] [rbp-68h] BYREF
  char v20[8]; // [rsp+18h] [rbp-60h] BYREF
  __int64 v21; // [rsp+20h] [rbp-58h] BYREF
  __int64 v22; // [rsp+28h] [rbp-50h]
  unsigned __int64 v23; // [rsp+38h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  v19 = 0;
  if ( a5 == 1 )
  {
    v21 = 17;
    copy_tinfo_t(&v19, &v21);
    clear_tinfo_t(&v21);
    goto LABEL_13;
  }
  if ( *(_BYTE *)(*(_QWORD *)(a3 + 96) + 148LL) == 2 )
  {
    v9 = *(unsigned int *)(a3 + 80);
    goto LABEL_5;
  }
  if ( a5 <= 8 )
  {
    sub_327340(&v21, a3, (unsigned int)a5);
    copy_tinfo_t(&v19, &v21);
    clear_tinfo_t(&v21);
  }
  else
  {
    v9 = *(unsigned int *)(a3 + 80);
    if ( a5 % (int)v9 )
      goto LABEL_5;
    sub_327340(v20, a3, (unsigned int)v9);
    LODWORD(v22) = 0;
    HIDWORD(v22) = a5 / (int)v9;
    v21 = 0;
    copy_tinfo_t(&v21, v20);
    create_tinfo(&v19, 11, 11, &v21);
    clear_tinfo_t(&v21);
    clear_tinfo_t(v20);
  }
  if ( (_BYTE)v19 )
    goto LABEL_13;
  v9 = *(unsigned int *)(a3 + 80);
LABEL_5:
  if ( a5 <= (int)v9 )
    v9 = (unsigned int)a5;
  v10 = round_down_power2(v9);
  if ( v10 <= 1 )
  {
    v11 = a5 / v10;
  }
  else
  {
    while ( 1 )
    {
      if ( !(a5 % v10) )
      {
        v11 = a5 / v10;
        if ( a5 / v10 > 1 )
          break;
      }
      v10 >>= 1;
      if ( v10 == 1 )
      {
        v11 = a5;
        break;
      }
    }
  }
  sub_327340(v20, a3, (unsigned int)v10);
  LODWORD(v22) = 0;
  HIDWORD(v22) = v11;
  v21 = 0;
  copy_tinfo_t(&v21, v20);
  create_tinfo(&v19, 11, 11, &v21);
  clear_tinfo_t(&v21);
  clear_tinfo_t(v20);
LABEL_13:
  v21 = 0;
  v22 = 0;
  cleanup_argloc(&v21);
  LODWORD(v21) = 1;
  v22 = a4;
  if ( !(_BYTE)v19 )
  {
    if ( !under_debugger )
      sub_37E160(52855);
    BUG();
  }
  v12 = a1[1];
  v13 = *a1;
  if ( a1[2] < (unsigned __int64)(v12 + 1) )
  {
    v17 = qvector_reserve(a1, v13, v12 + 1, 144);
    *a1 = v17;
    v13 = v17;
    v12 = a1[1];
  }
  v14 = v13 + 144 * v12;
  *(_QWORD *)(v14 + 16) = 0;
  *(_QWORD *)(v14 + 40) = 0;
  *(_QWORD *)(v14 + 112) = 1;
  *(_DWORD *)(v14 + 120) = -1;
  *(_QWORD *)(v14 + 128) = 0;
  *(_BYTE *)(v14 + 136) = 0;
  *(_OWORD *)v14 = 0;
  *(_OWORD *)(v14 + 24) = 0;
  *(_OWORD *)(v14 + 48) = 0;
  *(_OWORD *)(v14 + 64) = 0;
  v15 = a1[1];
  a1[1] = v15 + 1;
  sub_67670((__int64 *)(v14 + 16), (__int64)"_r%zu", v15);
  copy_tinfo_t(v14 + 64, &v19);
  if ( a2 )
    sub_CBF90(a2, (__int64)&v21, a5);
  cleanup_argloc(&v21);
  clear_tinfo_t(&v19);
  return v23 - __readfsqword(0x28u);
}
