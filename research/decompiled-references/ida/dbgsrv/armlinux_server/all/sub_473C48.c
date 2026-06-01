/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_473C48
// Address: 0x0000000000473C48

//----- (0000000000473C48) ----------------------------------------------------
__int64 __fastcall sub_473C48(
        __int64 a1,
        unsigned int a2,
        unsigned __int8 a3,
        __int64 a4,
        __int64 a5,
        __int64 (__fastcall ***a6)(_QWORD, __int64 *, __int64))
{
  __int64 v6; // x19
  char v12; // w0
  __int64 (*v13)(); // x3
  __int64 v14; // x0
  unsigned int v15; // w1
  int v16; // w0
  __int64 *v17; // x0
  int *v18; // x0
  int *v19; // x20
  int v20; // w1
  int v21; // w0
  size_t v22; // x24
  void *v23; // x25
  void *v24; // x0
  int v25; // w0
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x0
  int v31; // w1
  int v32; // w0
  unsigned int v33; // w1
  int v34; // w1
  int v35; // w0
  unsigned int v36; // w1
  unsigned int v37; // w0
  __int64 v38; // x1
  __int64 v39; // x0
  __int64 v40; // x0
  void *v41; // x0
  size_t v42; // x25
  void *v43; // x0

  v6 = (int)a2;
  v12 = 0;
  v13 = (__int64 (*)())(*a6)[5];
  if ( v13 != sub_473910 )
    v12 = ((__int64 (__fastcall *)(_QWORD, __int64, _QWORD))v13)(a6, a1, a2);
  *(_BYTE *)a4 = v12;
  v14 = a1 + 40 * v6;
  v15 = *(unsigned __int8 *)(v14 + 41);
  if ( v15 == 4 )
  {
    v31 = *(unsigned __int16 *)(v14 + 46);
    if ( v31 == 160 )
    {
      *(_QWORD *)(a4 + 8) = 0;
      if ( (*(_DWORD *)(a1 + 28) & 0x80) != 0 )
        goto LABEL_29;
      v29 = 0;
    }
    else
    {
      v40 = sub_473A80(a3, v31, a5, a6);
      *(_QWORD *)(a4 + 8) = v40;
      v29 = v40;
      v28 = 0;
      if ( (*(_DWORD *)(a1 + 28) & 0x80) != 0 )
        goto LABEL_28;
    }
    v28 = 0;
    v29 += *(_QWORD *)(a1 + 40 * v6 + 56);
    *(_QWORD *)(a4 + 8) = v29;
    goto LABEL_28;
  }
  if ( v15 > 4 )
  {
    if ( v15 != 7 )
    {
      if ( v15 == 8 )
      {
        v32 = *(unsigned __int16 *)(v14 + 46);
        v33 = 0;
        if ( v32 != 160 )
          v33 = sub_473A80(a3, v32, a5, a6);
        v28 = (unsigned int)sub_473B18(*(_DWORD *)(a1 + 28), v33, a3, a1 + 40 * (v6 + 1), a5, a6);
        v29 = *(_QWORD *)(a4 + 8);
      }
      else
      {
        if ( v15 != 5 )
          return 0;
        v28 = *(_QWORD *)(v14 + 48);
        v29 = *(_QWORD *)(a4 + 8);
      }
      goto LABEL_28;
    }
LABEL_49:
    v28 = 0;
    v29 = *(_QWORD *)(a1 + 40 * v6 + 56);
    *(_QWORD *)(a4 + 8) = v29;
    goto LABEL_28;
  }
  if ( v15 == 2 )
    goto LABEL_49;
  if ( v15 > 2 )
  {
    v34 = *(unsigned __int16 *)(v14 + 46);
    if ( v34 != 160 )
    {
      v39 = sub_473A80(a3, v34, a5, a6);
      *(_QWORD *)(a4 + 8) = v39;
      v29 = v39;
      v28 = 0;
      v35 = *(_DWORD *)(a1 + 28);
      if ( (v35 & 0x80) != 0 )
        goto LABEL_28;
      goto LABEL_44;
    }
    *(_QWORD *)(a4 + 8) = 0;
    v35 = *(_DWORD *)(a1 + 28);
    if ( (v35 & 0x80) == 0 )
    {
LABEL_44:
      v36 = 0;
      if ( *(unsigned __int8 *)(a1 + 40 * v6 + 72) != 160 )
      {
        v36 = sub_473A80(a3, *(unsigned __int8 *)(a1 + 40 * v6 + 72), a5, a6);
        v35 = *(_DWORD *)(a1 + 28);
      }
      v37 = sub_473B18(v35, v36, a3, a1 + 40 * (v6 + 1), a5, a6);
      v38 = v37;
      v28 = 0;
      if ( (*(_DWORD *)(a1 + 28) & 0x10LL) != 0 )
        v38 = -(__int64)v37;
      v29 = v38 + *(_QWORD *)(a4 + 8);
      *(_QWORD *)(a4 + 8) = v29;
      goto LABEL_28;
    }
LABEL_29:
    v30 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int64 *, __int64), _QWORD))(*a6)[4])(
            a6,
            *(unsigned __int8 *)(a1 + 40 * v6 + 45));
    if ( v30 == 1 )
    {
      v28 = ((unsigned __int8 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int64 *, __int64), _QWORD))(*a6)[1])(
              a6,
              *(_QWORD *)(a4 + 8));
    }
    else if ( v30 == 2 )
    {
      v28 = ((unsigned __int16 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int64 *, __int64), _QWORD))(*a6)[2])(
              a6,
              *(_QWORD *)(a4 + 8));
    }
    else
    {
      v28 = ((unsigned int (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int64 *, __int64), _QWORD))(*a6)[3])(
              a6,
              *(_QWORD *)(a4 + 8));
    }
    goto LABEL_32;
  }
  if ( v15 != 1 )
    return 0;
  v16 = *(unsigned __int16 *)(v14 + 46);
  if ( (unsigned __int16)(v16 - 61) <= 0x1Fu || (unsigned __int16)(v16 - 163) <= 0x1Fu )
  {
    v17 = sub_4739D8(v16);
    if ( v17 )
    {
      v18 = (int *)(**a6)(a6, v17, a5);
      v19 = v18;
      *(_DWORD *)(a4 + 48) = ((__int64)v18 - a5) >> 5;
      if ( v18 == (int *)(a4 + 16) )
      {
        v25 = *(_DWORD *)(a4 + 16);
      }
      else
      {
        v20 = *v18;
        v21 = *(_DWORD *)(a4 + 16);
        if ( v20 < -1 )
        {
          if ( v21 >= -1 )
          {
            v41 = *(void **)(a4 + 24);
            if ( v41 )
            {
              *(_QWORD *)(a4 + 32) = 0;
              j__free(v41);
            }
          }
          *(_QWORD *)(a4 + 24) = *((_QWORD *)v19 + 1);
        }
        else if ( v21 < -1 )
        {
          *(_QWORD *)(a4 + 24) = 0;
          *(_QWORD *)(a4 + 32) = 0;
          *(_QWORD *)(a4 + 40) = 0;
          v42 = *((_QWORD *)v19 + 2);
          if ( v42 )
          {
            v43 = sub_491248(*((_QWORD *)v19 + 2));
            *(_QWORD *)(a4 + 24) = v43;
            *(_QWORD *)(a4 + 40) = v42;
            memcpy(v43, *((const void **)v19 + 1), v42);
            *(_QWORD *)(a4 + 32) = v42;
          }
        }
        else
        {
          v22 = *((_QWORD *)v19 + 2);
          v23 = nullptr;
          if ( v22 )
          {
            v23 = sub_491248(*((_QWORD *)v19 + 2));
            memcpy(v23, *((const void **)v19 + 1), v22);
          }
          v24 = *(void **)(a4 + 24);
          if ( v24 )
          {
            *(_QWORD *)(a4 + 32) = 0;
            j__free(v24);
          }
          *(_QWORD *)(a4 + 24) = v23;
          *(_QWORD *)(a4 + 32) = v22;
          *(_QWORD *)(a4 + 40) = v22;
        }
        v25 = *v19;
        *(_DWORD *)(a4 + 16) = *v19;
      }
      if ( (v25 & 0x80000000) == 0 )
      {
        *(_DWORD *)(a4 + 52) = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int64 *, __int64), _QWORD))(*a6)[4])(
                                 a6,
                                 *(unsigned __int8 *)(a1 + 40 * v6 + 45));
        return 1;
      }
    }
    return 0;
  }
  if ( v16 == 160 )
    v28 = 0;
  else
    v28 = sub_473A80(a3, v16, a5, a6);
  v29 = *(_QWORD *)(a4 + 8);
LABEL_28:
  if ( v29 != -1 )
    goto LABEL_29;
LABEL_32:
  *(_QWORD *)(a4 + 24) = v28;
  *(_DWORD *)(a4 + 52) = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int64 *, __int64), _QWORD))(*a6)[4])(
                           a6,
                           *(unsigned __int8 *)(a1 + 40 * v6 + 45));
  return 1;
}
