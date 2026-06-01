/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A29F0
// Address: 0x00000000000A29F0

//----- (00000000000A29F0) ----------------------------------------------------
__int64 __fastcall sub_A29F0(_QWORD *a1, _DWORD *a2, __int64 *a3, int a4, int a5, double a6)
{
  int v6; // r14d
  char *v9; // rbp
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // r13
  __int64 i; // r14
  void *v13; // rdi
  __int64 v14; // rax
  __int64 *v15; // r13
  int v16; // r12d
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rax
  _DWORD *v20; // r14
  __int64 v21; // rsi
  __int64 v22; // rcx
  void *v23; // rdi
  int v24; // ebp
  char v25; // al
  char v26; // al
  __int64 *j; // r13
  __int64 v28; // rsi
  __int64 v29; // r8
  int v30; // ebp
  int v31; // eax
  __int64 v36; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v37; // [rsp+2Ch] [rbp-3Ch] BYREF
  unsigned __int64 v38; // [rsp+30h] [rbp-38h]

  v6 = a4;
  v38 = __readfsqword(0x28u);
  if ( !a1[20] )
  {
    v9 = (char *)a1[57];
    if ( v9 )
    {
      v10 = a1[58];
      if ( v10 )
      {
        v11 = 1;
        for ( i = 8; ; i += 56 )
        {
          v13 = *(void **)&v9[i];
          if ( v13 )
          {
            *(_QWORD *)&v9[i + 8] = 0;
            qfree(v13);
            *(_QWORD *)&v9[i] = 0;
            *(_QWORD *)&v9[i + 16] = 0;
          }
          if ( v11 >= v10 )
            break;
          v9 = (char *)a1[57];
          ++v11;
        }
        v9 = (char *)a1[57];
        v6 = a4;
      }
      a1[58] = 0;
      qfree(v9);
      a1[57] = 0;
      a1[59] = 0;
    }
  }
  v14 = 7LL * v6;
  v15 = &a3[v14];
  v16 = 0;
  if ( v14 * 8 )
  {
    while ( 1 )
    {
      if ( !*((_BYTE *)a3 + 40) )
      {
        v17 = *((_DWORD *)a3 + 8);
        if ( v17 == 4 )
          v18 = a1[52];
        else
          LODWORD(v18) = *((_DWORD *)a3 + 9);
        v37 = v18;
        v36 = *a3;
        if ( v17 == 4 )
          (*(void (__fastcall **)(_QWORD *, __int64 *, unsigned int *))(*a1 + 544LL))(a1, &v36, &v37);
        v19 = 56LL * a1[58];
        v20 = (_DWORD *)a1[57];
        if ( v19 )
        {
          v21 = 56LL * a1[58];
          v20 = (_DWORD *)a1[57];
          while ( *a3 != *(_QWORD *)v20 || *((_DWORD *)a3 + 8) != v20[8] )
          {
            v20 += 14;
            v21 -= 56;
            if ( !v21 )
              goto LABEL_29;
          }
        }
        v22 = v19 + a1[57];
        if ( v20 != (_DWORD *)v22 && v20[12] == *((_DWORD *)a3 + 12) )
        {
          v23 = *((void **)v20 + 1);
          if ( v23 )
          {
            *((_QWORD *)v20 + 2) = 0;
            qfree(v23);
            *((_QWORD *)v20 + 1) = 0;
            *((_QWORD *)v20 + 3) = 0;
            v22 = a1[57] + 56LL * a1[58];
          }
          memmove(v20, v20 + 14, v22 + -56LL - (_QWORD)v20);
          --a1[58];
        }
LABEL_29:
        v24 = (*(__int64 (__fastcall **)(_QWORD *, __int64 *, _QWORD, __int64, _QWORD))(*a1 + 312LL))(
                a1,
                a3 + 1,
                *((unsigned int *)a3 + 8),
                v36,
                v37);
        sub_9FDA0((__int64)a1, "dbg_add_bpt(type=%d, ea=%a, len=%d) => %d\n", *((_DWORD *)a3 + 8), a6, v36, v37);
        if ( v24 == -2 )
        {
          v25 = 7;
LABEL_36:
          *((_BYTE *)a3 + 40) = v25;
          goto LABEL_37;
        }
        if ( v24 == 2 )
        {
          v26 = 10;
        }
        else
        {
          v25 = 8;
          if ( v24 != 1 )
            goto LABEL_36;
          v26 = 0;
        }
        *((_BYTE *)a3 + 40) = v26;
        ++v16;
      }
LABEL_37:
      a3 += 7;
      if ( a3 == v15 )
      {
        a3 = v15;
        break;
      }
    }
  }
  for ( j = &v15[7 * a5]; j != a3; a3 += 7 )
  {
    *((_BYTE *)a3 + 40) = 0;
    v28 = *((unsigned int *)a3 + 8);
    if ( (_DWORD)v28 == 4 )
      v29 = a3[2];
    else
      v29 = *((int *)a3 + 9);
    v30 = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64, __int64, __int64))(*a1 + 320LL))(
            a1,
            v28,
            *a3,
            a3[1],
            v29);
    sub_9FDA0((__int64)a1, "dbg_del_bpt(type=%d, ea=%a) => %d\n", *((_DWORD *)a3 + 8), a6, *a3);
    if ( v30 <= 0 )
    {
      *((_BYTE *)a3 + 40) = 8;
    }
    else
    {
      ++v16;
      v31 = *((_DWORD *)a3 + 8);
      if ( v31 == 8 || v31 == 4 )
        sub_A2D80((__int64)(a1 + 57), a3);
    }
  }
  if ( a2 )
    *a2 = v16;
  return 1;
}
