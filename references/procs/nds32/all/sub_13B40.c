__int64 __fastcall sub_13B40(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v6; // edx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r9
  __int64 v10; // rsi
  __int64 v11; // r10
  __int64 v12; // rcx
  __int64 v13; // rsi
  _DWORD *v14; // rax
  unsigned int v16; // edx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rsi
  __int64 *v20; // rax
  unsigned int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rdi
  int v25; // ecx
  __int64 v26; // rsi
  __int64 v27; // rdi
  _QWORD *v28; // rdx
  __int64 *v29; // rdx
  __int64 *v30; // rax
  __int64 *v31; // rdx
  __int64 *v32; // rdx
  __int64 v33; // rax
  _DWORD *v34; // rax
  __int64 *v35; // rsi

  if ( a2 == 48 )
  {
    if ( (unsigned __int8)getinf_flag(2, 4, a3, a4, a5) )
      return 0;
    v21 = *(_DWORD *)a3;
    if ( *(_DWORD *)a3 > 0x2Fu )
    {
      v33 = *(_QWORD *)(a3 + 8) + 8LL;
    }
    else
    {
      *(_DWORD *)a3 = v21 + 8;
      if ( v21 + 8 <= 0x2F )
      {
        v22 = v21 + 16;
        *(_DWORD *)a3 = v22;
        if ( (unsigned int)v22 <= 0x2F )
        {
          v23 = *(_QWORD *)(a3 + 16);
          v24 = v21 + 24;
          *(_DWORD *)a3 = v24;
          v25 = *(_DWORD *)(v23 + v22);
          if ( (unsigned int)v24 <= 0x2F )
          {
            v26 = v21 + 32;
            *(_DWORD *)a3 = v26;
            v27 = *(_QWORD *)(v23 + v24);
            if ( (unsigned int)v26 <= 0x2F )
            {
              v28 = (_QWORD *)(v26 + v23);
              *(_DWORD *)a3 = v21 + 40;
              goto LABEL_22;
            }
            v28 = *(_QWORD **)(a3 + 8);
LABEL_35:
            *(_QWORD *)(a3 + 8) = v28 + 1;
LABEL_22:
            if ( (unsigned int)(v25 - 34) <= 1 && *v28 != v27 )
              invalidate_regfinder_cache(-1, -1, 0);
            return 0;
          }
          v35 = *(__int64 **)(a3 + 8);
LABEL_34:
          v28 = v35 + 1;
          *(_QWORD *)(a3 + 8) = v35 + 1;
          v27 = *v35;
          goto LABEL_35;
        }
        v34 = *(_DWORD **)(a3 + 8);
LABEL_33:
        v35 = (__int64 *)(v34 + 2);
        *(_QWORD *)(a3 + 8) = v34 + 2;
        v25 = *v34;
        goto LABEL_34;
      }
      v33 = *(_QWORD *)(a3 + 8);
    }
    v34 = (_DWORD *)(v33 + 8);
    goto LABEL_33;
  }
  if ( a2 != 51 )
  {
    if ( a2 != 30 )
      return 0;
    v6 = *(_DWORD *)a3;
    if ( v6 > 0x2F )
    {
      v29 = *(__int64 **)(a3 + 8);
      v30 = v29 + 1;
      *(_QWORD *)(a3 + 8) = v29 + 1;
      v9 = *v29;
    }
    else
    {
      v7 = *(_QWORD *)(a3 + 16);
      v8 = v6 + 8;
      *(_DWORD *)a3 = v8;
      v9 = *(_QWORD *)(v7 + v6);
      if ( (unsigned int)v8 <= 0x2F )
      {
        v10 = v6 + 16;
        *(_DWORD *)a3 = v10;
        v11 = *(_QWORD *)(v7 + v8);
        if ( (unsigned int)v10 <= 0x2F )
        {
          v12 = v6 + 24;
          *(_DWORD *)a3 = v12;
          v13 = *(_QWORD *)(v7 + v10);
          if ( (unsigned int)v12 <= 0x2F )
          {
            v14 = (_DWORD *)(v12 + v7);
            *(_DWORD *)a3 = v6 + 32;
LABEL_9:
            sub_13930(*(_QWORD **)(a1 + 16), v9, v11, v13, *v14 != 0);
            return 0;
          }
          v14 = *(_DWORD **)(a3 + 8);
LABEL_28:
          *(_QWORD *)(a3 + 8) = v14 + 2;
          goto LABEL_9;
        }
        v31 = *(__int64 **)(a3 + 8);
LABEL_27:
        v14 = v31 + 1;
        *(_QWORD *)(a3 + 8) = v31 + 1;
        v13 = *v31;
        goto LABEL_28;
      }
      v30 = *(__int64 **)(a3 + 8);
    }
    v31 = v30 + 1;
    *(_QWORD *)(a3 + 8) = v30 + 1;
    v11 = *v30;
    goto LABEL_27;
  }
  v16 = *(_DWORD *)a3;
  if ( v16 > 0x2F )
  {
    v32 = *(__int64 **)(a3 + 8);
    v20 = v32 + 1;
    *(_QWORD *)(a3 + 8) = v32 + 1;
    v19 = *v32;
LABEL_30:
    *(_QWORD *)(a3 + 8) = v20 + 1;
    goto LABEL_14;
  }
  v17 = *(_QWORD *)(a3 + 16);
  v18 = v16 + 8;
  *(_DWORD *)a3 = v18;
  v19 = *(_QWORD *)(v17 + v16);
  if ( (unsigned int)v18 > 0x2F )
  {
    v20 = *(__int64 **)(a3 + 8);
    goto LABEL_30;
  }
  v20 = (__int64 *)(v18 + v17);
  *(_DWORD *)a3 = v16 + 16;
LABEL_14:
  sub_13AD0(*(_QWORD *)(a1 + 16), v19, *v20);
  return 0;
}
