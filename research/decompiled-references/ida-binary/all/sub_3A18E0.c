unsigned __int64 __fastcall sub_3A18E0(__int64 a1, const char *a2, _QWORD *a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // rax
  char *v5; // r12
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v14; // rbx
  __int64 v15; // rdi
  __int64 (*v16)(); // rax
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // [rsp+0h] [rbp-68h]
  __int64 v20; // [rsp+10h] [rbp-58h] BYREF
  __int128 v21; // [rsp+18h] [rbp-50h]
  unsigned __int64 v22; // [rsp+28h] [rbp-40h]

  v4 = a3[1];
  v22 = __readfsqword(0x28u);
  v5 = (char *)a2;
  v21 = 0;
  v20 = 0;
  if ( a4 <= v4 )
    v4 = a4;
  v6 = v4;
  if ( v4 )
  {
    a2 = nullptr;
    v20 = qvector_reserve(&v20, 0, v4, 8);
    v14 = 0;
    do
    {
      while ( 1 )
      {
        v15 = *(_QWORD *)(a1 + 2392);
        v16 = *(__int64 (**)())(*(_QWORD *)v15 + 56LL);
        if ( v16 != addon_chooser_t__::vfunc_7 )
        {
          a2 = *(const char **)(*a3 + 8 * v14);
          v17 = ((__int64 (__fastcall *)(__int64, const char *))v16)(v15, a2);
          if ( v17 != -1 )
            break;
        }
        if ( v6 == ++v14 )
          goto LABEL_15;
      }
      v18 = v21;
      a2 = (const char *)v20;
      if ( *((_QWORD *)&v21 + 1) < (unsigned __int64)(v21 + 1) )
      {
        v19 = v17;
        v20 = qvector_reserve(&v20, v20, v21 + 1, 8);
        a2 = (const char *)v20;
        v17 = v19;
        v18 = v21;
      }
      ++v14;
      *(_QWORD *)&a2[8 * v18] = v17;
      *(_QWORD *)&v21 = v21 + 1;
    }
    while ( v6 != v14 );
LABEL_15:
    v8 = v20;
    v7 = *((_QWORD *)&v21 + 1);
    v6 = v21;
  }
  else
  {
    v7 = 0;
    v8 = 0;
  }
  v9 = *(_QWORD *)v5;
  v10 = *((_QWORD *)v5 + 2);
  *(_QWORD *)v5 = v8;
  *((_QWORD *)v5 + 1) = v6;
  *((_QWORD *)v5 + 2) = v7;
  v20 = v9;
  *((_QWORD *)&v21 + 1) = v10;
  if ( v9 )
  {
    *(_QWORD *)&v21 = 0;
    qfree(v9, a2);
  }
  return v22 - __readfsqword(0x28u);
}
