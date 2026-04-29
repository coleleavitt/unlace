unsigned __int64 __fastcall sub_67860(__int64 a1, __int64 *a2)
{
  __int64 v3; // rax
  int v5; // eax
  unsigned __int64 v6; // r12
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rax
  unsigned int i; // ebp
  int v12; // edx
  __int64 v13; // rax
  int j; // ebp
  unsigned __int64 v15; // rdx
  __int64 v16; // rsi
  unsigned __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20[2]; // [rsp+0h] [rbp-48h] BYREF
  int v21; // [rsp+10h] [rbp-38h]
  __int64 *v22; // [rsp+18h] [rbp-30h]
  unsigned __int64 v23; // [rsp+28h] [rbp-20h]

  v3 = *(_QWORD *)a1;
  v23 = __readfsqword(0x28u);
  v5 = (*(__int64 (__fastcall **)(__int64))(v3 + 56))(a1);
  v6 = v5;
  if ( !v5 )
    return v23 - __readfsqword(0x28u);
  v8 = *a2;
  if ( *a2 )
  {
    a2[1] = 0;
    qfree(v8);
    *a2 = 0;
    a2[2] = 0;
  }
  v9 = a2[3];
  if ( v9 )
  {
    a2[4] = 0;
    qfree(v9);
    a2[3] = 0;
    a2[5] = 0;
  }
  if ( (v6 & 0x80000000) == 0LL )
  {
    v15 = a2[1];
    LODWORD(v20[0]) = -1;
    if ( v6 >= v15 )
    {
      if ( v15 >= v6 )
        goto LABEL_8;
      v16 = *a2;
      v17 = a2[2];
      if ( (unsigned __int64)v20 < *a2 || (unsigned __int64)v20 >= v16 + 4 * v17 )
      {
        if ( v17 >= v6 || (v18 = qvector_reserve(a2, v16, v6, 4), v15 = a2[1], *a2 = v18, v16 = v18, v15 < v6) )
        {
          while ( 1 )
          {
            *(_DWORD *)(v16 + 4 * v15++) = -1;
            if ( v6 == v15 )
              break;
            v16 = *a2;
          }
        }
      }
      else if ( v17 >= v6 || (v19 = qvector_reserve(a2, v16, v6, 4), v15 = a2[1], *a2 = v19, v16 = v19, v15 < v6) )
      {
        while ( 1 )
        {
          *(_DWORD *)(v16 + 4 * v15++) = -1;
          if ( v6 == v15 )
            break;
          v16 = *a2;
        }
      }
    }
    a2[1] = v6;
  }
LABEL_8:
  v10 = *(_QWORD *)a1;
  v20[0] = 0;
  v20[1] = 0;
  v21 = 0;
  v22 = a2;
  for ( i = (*(__int64 (__fastcall **)(__int64, _QWORD))(v10 + 160))(a1, 0);
        ;
        i = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 160LL))(a1, i + 1) )
  {
    v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL))(a1);
    v13 = *(_QWORD *)a1;
    if ( v12 == i )
      break;
    if ( !(*(unsigned int (__fastcall **)(__int64, _QWORD))(v13 + 104))(a1, i) )
      sub_66540(v20, a1, i, (__int64)v20);
  }
  for ( j = (*(__int64 (__fastcall **)(__int64, _QWORD))(v13 + 160))(a1, 0);
        j != (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL))(a1);
        j = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 160LL))(a1, (unsigned int)(j + 1)) )
  {
    if ( !sub_5E3B0(v20, j) )
      sub_66540(v20, a1, j, (__int64)v20);
  }
  qfree(v20[0]);
  return v23 - __readfsqword(0x28u);
}
