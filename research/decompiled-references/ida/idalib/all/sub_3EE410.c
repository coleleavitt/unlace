__int64 __fastcall sub_3EE410(__int64 a1, __int64 a2, unsigned int *a3)
{
  unsigned int v5; // esi
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r11
  __int64 v9; // r9
  int v10; // edx
  __int64 v11; // r8
  __int64 v12; // rbx
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 v15; // r10
  __int64 v16; // r9
  _QWORD *v17; // rcx
  unsigned int v18; // esi
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r11
  __int64 v22; // r9
  int v23; // edx
  __int64 v24; // r8
  __int64 v25; // rbx
  __int64 v26; // r9
  __int64 v27; // r8
  __int64 v28; // r10
  __int64 v29; // r9
  _QWORD *v30; // rcx
  _QWORD *v31; // rcx
  _DWORD *v32; // rdx
  __int64 *v33; // rsi
  _QWORD *v34; // rcx
  int *v35; // rsi
  _QWORD *v36; // rcx
  _DWORD *v37; // rdx
  __int64 *v38; // rsi
  _QWORD *v39; // rcx
  int *v40; // rsi

  if ( a2 != 96 )
  {
    if ( a2 != 97 )
      return 0;
    v5 = *a3;
    if ( *a3 > 0x2F )
    {
      v36 = *((_QWORD **)a3 + 1);
      v37 = v36 + 1;
      *((_QWORD *)a3 + 1) = v36 + 1;
      v8 = *v36;
    }
    else
    {
      v6 = *((_QWORD *)a3 + 2);
      v7 = v5 + 8;
      *a3 = v7;
      v8 = *(_QWORD *)(v6 + v5);
      if ( (unsigned int)v7 <= 0x2F )
      {
        v9 = v5 + 16;
        *a3 = v9;
        v10 = *(_DWORD *)(v6 + v7);
        if ( (unsigned int)v9 <= 0x2F )
        {
          v11 = v5 + 24;
          *a3 = v11;
          v12 = *(_QWORD *)(v6 + v9);
          if ( (unsigned int)v11 <= 0x2F )
          {
            v13 = v5 + 32;
            *a3 = v13;
            v14 = *(_QWORD *)(v6 + v11);
            if ( (unsigned int)v13 <= 0x2F )
            {
              v15 = v5 + 40;
              *a3 = v15;
              v16 = *(int *)(v6 + v13);
              if ( (unsigned int)v15 <= 0x2F )
              {
                v17 = (_QWORD *)(v15 + v6);
                *a3 = v5 + 48;
                return (*(int (__fastcall **)(__int64, __int64, _QWORD, __int64, __int64, __int64, _QWORD))(*(_QWORD *)a1 + 40LL))(
                         a1,
                         v8,
                         (unsigned __int8)v10,
                         v12,
                         v14,
                         v16,
                         *v17);
              }
              v17 = *((_QWORD **)a3 + 1);
LABEL_31:
              *((_QWORD *)a3 + 1) = v17 + 1;
              return (*(int (__fastcall **)(__int64, __int64, _QWORD, __int64, __int64, __int64, _QWORD))(*(_QWORD *)a1 + 40LL))(
                       a1,
                       v8,
                       (unsigned __int8)v10,
                       v12,
                       v14,
                       v16,
                       *v17);
            }
            v40 = *((int **)a3 + 1);
LABEL_30:
            v17 = v40 + 2;
            *((_QWORD *)a3 + 1) = v40 + 2;
            v16 = *v40;
            goto LABEL_31;
          }
          v39 = *((_QWORD **)a3 + 1);
LABEL_29:
          v40 = (int *)(v39 + 1);
          *((_QWORD *)a3 + 1) = v39 + 1;
          v14 = *v39;
          goto LABEL_30;
        }
        v38 = *((__int64 **)a3 + 1);
LABEL_28:
        v39 = v38 + 1;
        *((_QWORD *)a3 + 1) = v38 + 1;
        v12 = *v38;
        goto LABEL_29;
      }
      v37 = *((_DWORD **)a3 + 1);
    }
    v38 = (__int64 *)(v37 + 2);
    *((_QWORD *)a3 + 1) = v37 + 2;
    v10 = *v37;
    goto LABEL_28;
  }
  v18 = *a3;
  if ( *a3 > 0x2F )
  {
    v31 = *((_QWORD **)a3 + 1);
    v32 = v31 + 1;
    *((_QWORD *)a3 + 1) = v31 + 1;
    v21 = *v31;
LABEL_21:
    v33 = (__int64 *)(v32 + 2);
    *((_QWORD *)a3 + 1) = v32 + 2;
    v23 = *v32;
LABEL_22:
    v34 = v33 + 1;
    *((_QWORD *)a3 + 1) = v33 + 1;
    v25 = *v33;
LABEL_23:
    v35 = (int *)(v34 + 1);
    *((_QWORD *)a3 + 1) = v34 + 1;
    v27 = *v34;
LABEL_24:
    v30 = v35 + 2;
    *((_QWORD *)a3 + 1) = v35 + 2;
    v29 = *v35;
LABEL_25:
    *((_QWORD *)a3 + 1) = v30 + 1;
    return (*(int (__fastcall **)(__int64, __int64, _QWORD, __int64, __int64, __int64, _QWORD))(*(_QWORD *)a1 + 32LL))(
             a1,
             v21,
             (unsigned __int8)v23,
             v25,
             v27,
             v29,
             *v30);
  }
  v19 = *((_QWORD *)a3 + 2);
  v20 = v18 + 8;
  *a3 = v20;
  v21 = *(_QWORD *)(v19 + v18);
  if ( (unsigned int)v20 > 0x2F )
  {
    v32 = *((_DWORD **)a3 + 1);
    goto LABEL_21;
  }
  v22 = v18 + 16;
  *a3 = v22;
  v23 = *(_DWORD *)(v19 + v20);
  if ( (unsigned int)v22 > 0x2F )
  {
    v33 = *((__int64 **)a3 + 1);
    goto LABEL_22;
  }
  v24 = v18 + 24;
  *a3 = v24;
  v25 = *(_QWORD *)(v19 + v22);
  if ( (unsigned int)v24 > 0x2F )
  {
    v34 = *((_QWORD **)a3 + 1);
    goto LABEL_23;
  }
  v26 = v18 + 32;
  *a3 = v26;
  v27 = *(_QWORD *)(v19 + v24);
  if ( (unsigned int)v26 > 0x2F )
  {
    v35 = *((int **)a3 + 1);
    goto LABEL_24;
  }
  v28 = v18 + 40;
  *a3 = v28;
  v29 = *(int *)(v19 + v26);
  if ( (unsigned int)v28 > 0x2F )
  {
    v30 = *((_QWORD **)a3 + 1);
    goto LABEL_25;
  }
  v30 = (_QWORD *)(v28 + v19);
  *a3 = v18 + 48;
  return (*(int (__fastcall **)(__int64, __int64, _QWORD, __int64, __int64, __int64, _QWORD))(*(_QWORD *)a1 + 32LL))(
           a1,
           v21,
           (unsigned __int8)v23,
           v25,
           v27,
           v29,
           *v30);
}
