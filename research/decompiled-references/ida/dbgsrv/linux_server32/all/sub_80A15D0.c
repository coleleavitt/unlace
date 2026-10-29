/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80A15D0
// Address: 0x080A15D0

//----- (080A15D0) --------------------------------------------------------
int __cdecl sub_80A15D0(__int64 ***a1, unsigned int *a2, _DWORD *a3, char a4)
{
  int result; // eax
  unsigned int *v5; // ebx
  __int64 **v6; // ecx
  unsigned int *v7; // edx
  unsigned int v8; // edi
  unsigned int *v9; // eax
  unsigned int v10; // ecx
  __int64 *v11; // eax
  int v12; // edi
  unsigned int v13; // ecx
  char *v14; // eax
  char *v15; // edx
  void *v16; // eax
  __int64 **v17; // eax
  __int64 **v18; // edx
  unsigned int v19; // eax
  unsigned int v20; // ebx
  __int64 *v21; // edx
  int v22; // ecx
  __int64 *v23; // eax
  int v24; // eax
  char *v25; // eax
  char *v26; // edx
  int v27; // [esp-68h] [ebp-68h]
  int v28; // [esp-64h] [ebp-64h]
  int v29; // [esp-60h] [ebp-60h]
  __int64 ***v30; // [esp-40h] [ebp-40h] BYREF
  int v31; // [esp-30h] [ebp-30h] BYREF
  void *v32; // [esp-2Ch] [ebp-2Ch]
  int v33; // [esp-28h] [ebp-28h]
  int v34; // [esp-24h] [ebp-24h]
  unsigned int v35; // [esp-20h] [ebp-20h]

  v35 = __readgsdword(0x14u);
  if ( ((unsigned int)a1[104] & 0x10) != 0 )
  {
    if ( a2[4] == 4 || (sub_80A14C0(&v30, a1, *a2, a2[63]), a1 + 79 == v30) )
    {
LABEL_3:
      result = 1;
      if ( (a4 & 2) == 0 )
      {
        result = ((int (__cdecl *)(__int64 ***, _DWORD *))(*a1)[21])(a1, a3);
        LOBYTE(result) = result > 0;
      }
      goto LABEL_5;
    }
  }
  v5 = (unsigned int *)a1[56];
  v6 = a1[57];
  v7 = &v5[(_DWORD)v6];
  v8 = *a2;
  if ( v5 == v7 )
  {
LABEL_13:
    v10 = (unsigned int)v6 + 1;
    if ( (unsigned int)a1[58] >= v10 )
    {
LABEL_14:
      *v7 = v8;
      a1[57] = (__int64 **)((char *)a1[57] + 1);
      if ( (a4 & 1) != 0 )
        goto LABEL_15;
      goto LABEL_25;
    }
  }
  else
  {
    v9 = (unsigned int *)a1[56];
    do
    {
      if ( v8 == *v9 )
      {
        if ( v7 != v9 )
        {
          if ( !byte_811F8A1 )
          {
            if ( v35 == __readgsdword(0x14u) )
              sub_80CFF40(616, v27, v28, v29);
            sub_80D7AB0();
          }
          JUMPOUT(0x804FBB6);
        }
        goto LABEL_13;
      }
      ++v9;
    }
    while ( v7 != v9 );
    v10 = (unsigned int)v6 + 1;
    if ( a1[58] >= (__int64 **)((char *)a1[57] + 1) )
      goto LABEL_14;
  }
  v17 = (__int64 **)sub_80CF920((int)(a1 + 56), v5, v10, 4u);
  v18 = a1[57];
  a1[56] = v17;
  v17[(_DWORD)v18] = (__int64 *)v8;
  a1[57] = (__int64 **)((char *)a1[57] + 1);
  if ( (a4 & 1) != 0 )
    goto LABEL_15;
LABEL_25:
  v31 = -2;
  v34 = 0;
  v16 = (void *)*a2;
  v33 = 0;
  v32 = v16;
  if ( ((int (__cdecl *)(__int64 ***, _DWORD, __int64 **, int *, _DWORD))(*a1)[29])(a1, a3[1], a1[101], &v31, 0) > 0 )
  {
    if ( v31 >= -1 && v32 )
    {
      v33 = 0;
      sub_80CF780(v32);
    }
LABEL_15:
    v11 = (*a1)[1];
    if ( v11 == (__int64 *)((char *)&qword_811CFF4 - 826788) )
      goto LABEL_16;
    v12 = ((int (__cdecl *)(__int64 ***, _DWORD))v11)(a1, a3[1]);
    if ( v12 <= 0 )
    {
      v13 = *a2;
      v14 = (char *)a1[56];
      v15 = &v14[4 * (_DWORD)a1[57]];
      if ( v15 == v14 )
      {
        result = 0;
        goto LABEL_5;
      }
LABEL_19:
      while ( v13 != *(_DWORD *)v14 )
      {
        v14 += 4;
        if ( v15 == v14 )
          goto LABEL_22;
      }
      if ( v14 != v15 )
      {
        memmove(v14, v14 + 4, v15 - v14 - 4);
        a1[57] = (__int64 **)((char *)a1[57] - 1);
      }
      goto LABEL_22;
    }
    v19 = a2[4];
    if ( v19 == 4 )
      v20 = a2[6];
    else
      v20 = a2[63];
    v12 = ((int (__cdecl *)(__int64 ***, unsigned int, unsigned int, unsigned int, unsigned int))(*a1)[40])(
            a1,
            v19,
            *a2,
            a2[5],
            v20);
    if ( v12 <= 0 )
    {
LABEL_42:
      v22 = a3[1];
      v23 = (*a1)[2];
      if ( v23 == (__int64 *)((char *)&qword_811CFF4 - 826772) )
      {
LABEL_43:
        sub_8058E50((int)a1, "%d: could not resume suspended threads\n", v22);
LABEL_16:
        v12 = 0;
        v13 = *a2;
        v14 = (char *)a1[56];
        v15 = &v14[4 * (_DWORD)a1[57]];
        if ( v14 != v15 )
          goto LABEL_19;
        goto LABEL_17;
      }
      if ( ((int (__cdecl *)(__int64 ***, int))v23)(a1, v22) <= 0 )
      {
        v22 = a3[1];
        goto LABEL_43;
      }
      v13 = *a2;
      v14 = (char *)a1[56];
      v15 = &v14[4 * (_DWORD)a1[57]];
      if ( v14 != v15 )
        goto LABEL_19;
LABEL_22:
      if ( v12 <= 0 )
      {
LABEL_17:
        result = 0;
        goto LABEL_5;
      }
      if ( (a3[4] & 0xFFFFFFF) != 6 )
      {
        result = 0;
        goto LABEL_5;
      }
      goto LABEL_3;
    }
    v21 = **a1;
    if ( v21 == (__int64 *)((char *)&qword_811CFF4 - 507780) )
    {
      if ( ((int (__cdecl *)(__int64 ***, _DWORD, int))(*a1)[27])(a1, a3[1], 1) <= 0 )
        goto LABEL_39;
      v24 = sub_80A0FE0((int)a1, (int)a3);
    }
    else
    {
      v24 = ((int (__cdecl *)(__int64 ***, _DWORD *, unsigned int *))v21)(a1, a3, a2 + 8);
    }
    if ( v24 > 0 )
    {
LABEL_40:
      if ( (int)(*(void *(__cdecl **)(void *))((char *)*a1 + (_DWORD)(&off_811D090 - 33846269)))(a1) <= 0 )
      {
        v12 = 0;
        sub_8058E50((int)a1, "%a: could not restore deleted bpt\n", *a2);
      }
      goto LABEL_42;
    }
LABEL_39:
    v12 = 0;
    sub_8058E20((int)a1, "%a: failed to single step\n", a3[2]);
    goto LABEL_40;
  }
  v25 = (char *)a1[56];
  v26 = &v25[4 * (_DWORD)a1[57]];
  if ( v25 != v26 )
  {
    while ( *a2 != *(_DWORD *)v25 )
    {
      v25 += 4;
      if ( v26 == v25 )
        goto LABEL_57;
    }
    if ( v25 != v26 )
    {
      memmove(v25, v25 + 4, v26 - v25 - 4);
      a1[57] = (__int64 **)((char *)a1[57] - 1);
    }
  }
LABEL_57:
  if ( v31 < -1 || !v32 )
    goto LABEL_17;
  v33 = 0;
  sub_80CF780(v32);
  result = 0;
LABEL_5:
  if ( v35 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
// 80A1A9C: control flows out of bounds to 804FBB6
// 80A1AB9: variable 'v27' is possibly undefined
// 80A1AB9: variable 'v28' is possibly undefined
// 80A1AB9: variable 'v29' is possibly undefined
// 811CFF4: using guessed type __int64 qword_811CFF4;
// 811D090: using guessed type _UNKNOWN *off_811D090;
// 811F8A1: using guessed type char byte_811F8A1;
