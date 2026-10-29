__int64 __fastcall sub_BA01B0(_QWORD *a1, __int64 *a2)
{
  __int64 v3; // rdi
  __int64 v4; // r9
  __int64 v5; // rbp
  __int64 v6; // r12
  __int64 result; // rax
  __int64 v8; // r14
  unsigned __int64 v9; // r15
  __int64 v10; // rdx
  __int64 v11; // r13
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rax
  __int64 v15; // rdi
  int v16; // eax
  __int64 v17; // r8
  unsigned __int64 v18; // rdx
  __int64 v19; // rax
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rax
  __int64 v22; // [rsp+8h] [rbp-40h]

  v3 = *(_QWORD *)(sub_B685F0((__int64)a1) + 18360);
  if ( v3 )
    (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v3 + 80LL))(v3, a1[9], 1);
  v5 = a1[10];
  if ( !v5 )
    v5 = sub_B9F7C0(a1);
  *((_DWORD *)a2 + 2) = 0;
  if ( *((_DWORD *)a2 + 3) < *(_DWORD *)(v5 + 116) )
    sub_22134E0(a2, a2 + 2, *(unsigned int *)(v5 + 116), 8);
  v6 = *(_QWORD *)(v5 + 120);
  result = *(unsigned int *)(v5 + 128);
  v8 = v6 + 8 * result;
  if ( v8 != v6 )
  {
    while ( 1 )
    {
      v11 = *(_QWORD *)(*(_QWORD *)v6 + 80LL);
      v12 = *(_QWORD *)(v11 + 72);
      v13 = v12 & 0xFFFFFFFFFFFFFFFELL;
      if ( (v12 & 1) == 0 )
      {
        v9 = v12 & 0xFFFFFFFFFFFFFFFCLL;
        if ( (v12 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
        {
          if ( (v12 & 2) == 0 )
            goto LABEL_11;
          v17 = *(_QWORD *)(v9 + 18360);
          v18 = v11 & 0xFFFFFFFFFFFFFFFBLL;
          if ( v17 )
          {
            v19 = *(_QWORD *)(v9 + 2352);
            *(_QWORD *)(v9 + 2432) += 24LL;
            v20 = (v19 + 7) & 0xFFFFFFFFFFFFFFF8LL;
            if ( *(_QWORD *)(v9 + 2360) >= v20 + 24 && v19 )
            {
              *(_QWORD *)(v9 + 2352) = v20 + 24;
              v21 = (v19 + 7) & 0xFFFFFFFFFFFFFFF8LL;
            }
            else
            {
              v22 = v17;
              v21 = sub_962430(v9 + 2352, 24, 24, 3, v17, v4);
              v17 = v22;
              v20 = v21 & 0xFFFFFFFFFFFFFFFBLL;
            }
            *(_QWORD *)v21 = v17;
            v18 = v20 | 4;
            *(_DWORD *)(v21 + 8) = 0;
            *(_QWORD *)(v21 + 16) = v11;
          }
          v13 = v18 & 0xFFFFFFFFFFFFFFFELL;
          v12 = v13 | 1;
          *(_QWORD *)(v11 + 72) = v13 | 1;
        }
      }
      v14 = v12 & 0xFFFFFFFFFFFFFFF8LL;
      v9 = v14;
      if ( v13 && (v13 & 4) != 0 && v14 )
      {
        v15 = *(_QWORD *)v14;
        v16 = *(_DWORD *)(*(_QWORD *)v14 + 12LL);
        if ( *(_DWORD *)(v9 + 8) != v16 )
        {
          *(_DWORD *)(v9 + 8) = v16;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 152LL))(v15, v11);
        }
        result = *((unsigned int *)a2 + 2);
        v9 = *(_QWORD *)(v9 + 16);
        v10 = result + 1;
        if ( result + 1 <= (unsigned __int64)*((unsigned int *)a2 + 3) )
          goto LABEL_12;
LABEL_20:
        v6 += 8;
        sub_22134E0(a2, a2 + 2, v10, 8);
        result = *a2;
        *(_QWORD *)(*a2 + 8LL * (unsigned int)(*((_DWORD *)a2 + 2))++) = v9;
        if ( v8 == v6 )
          return result;
      }
      else
      {
LABEL_11:
        result = *((unsigned int *)a2 + 2);
        v10 = result + 1;
        if ( result + 1 > (unsigned __int64)*((unsigned int *)a2 + 3) )
          goto LABEL_20;
LABEL_12:
        v6 += 8;
        *(_QWORD *)(*a2 + 8 * result) = v9;
        ++*((_DWORD *)a2 + 2);
        if ( v8 == v6 )
          return result;
      }
    }
  }
  return result;
}

