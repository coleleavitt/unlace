__int64 __fastcall sub_1765B0(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rbp
  _BYTE *v4; // r13
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 (__fastcall *v8)(__int64); // rax
  __int64 v9; // rax
  char i; // al
  char v11; // r10
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // rdx
  _BYTE *v14; // rax
  unsigned __int64 v15; // r12
  __int64 (__fastcall *v16)(__int64, unsigned __int64); // rax
  unsigned __int64 v17; // rax
  bool v18; // zf
  __int64 (__fastcall *v19)(__int64, __int64, char); // rax
  __int64 (__fastcall *v20)(__int64); // rax
  __int64 v21; // rax
  unsigned __int64 v22; // rbx
  __int64 (__fastcall *v23)(__int64, unsigned __int64); // rax
  unsigned __int64 v24; // rax
  __int64 v25; // rax
  __int64 (__fastcall *v27)(__int64, __int64, char); // rax
  __int64 v28; // rax
  void (*v29)(); // rax
  unsigned __int64 v30; // [rsp+8h] [rbp-80h]
  char v31; // [rsp+17h] [rbp-71h]
  __int64 v32; // [rsp+20h] [rbp-68h] BYREF
  __int128 v33; // [rsp+28h] [rbp-60h]
  __int64 v34; // [rsp+38h] [rbp-50h]
  unsigned __int64 v35; // [rsp+48h] [rbp-40h]

  v35 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a2 + 8);
  if ( !v3 )
    return v3;
  if ( !--v3 )
    return v3;
  v4 = *(_BYTE **)a2;
  v6 = (2 * a3) & 2;
  if ( *(_BYTE *)(a1 + 9) )
  {
    v27 = *(__int64 (__fastcall **)(__int64, __int64, char))(*(_QWORD *)a1 + 32LL);
    if ( v27 == sub_174C40 )
    {
      if ( (_DWORD)v6 )
      {
        qfputs();
        *(_QWORD *)(a1 + 24) = (*(_QWORD *)(a2 + 32) == 0) + *(_QWORD *)(a2 + 32) - 1LL;
      }
      else
      {
        *(_QWORD *)(a1 + 24) = 0;
      }
    }
    else
    {
      v27(a1, a2 + 24, (unsigned int)v6 | 1);
    }
    *(_BYTE *)(a1 + 9) = 0;
  }
  else if ( !*(_BYTE *)(a1 + 8) )
  {
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, a2 + 24, v6);
  }
  v7 = 0;
  v34 = 0;
  v33 = 0;
  v32 = qvector_reserve();
  v8 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL);
  if ( v8 == sub_174750 )
    v9 = *(_QWORD *)(a1 + 24);
  else
    v9 = ((__int64 (__fastcall *)(__int64, _QWORD))v8)(a1, 0);
  v34 = v9;
  for ( i = *v4; i; ++v4 )
  {
    if ( i == 13 )
    {
      if ( v4[1] != 10 )
      {
        v28 = *(_QWORD *)a1;
        v34 = 0;
        *(_QWORD *)&v33 = 0;
        v29 = *(void (**)())(v28 + 24);
        if ( v29 != nullsub_103 )
          ((void (__fastcall *)(__int64, __int64))v29)(a1, v7);
        v34 = 24;
        v14 = v4;
        goto LABEL_17;
      }
      v12 = v33;
      ++v4;
    }
    else
    {
      v11 = *v4;
      v12 = v33;
      if ( *v4 != 10 )
      {
        v13 = 2;
        if ( (_QWORD)v33 )
        {
          v13 = v33 + 1;
          v12 = v33 - 1;
        }
        v7 = v32;
        if ( *((_QWORD *)&v33 + 1) < v13 )
        {
          v31 = *v4;
          v30 = v13;
          v32 = qvector_reserve();
          v11 = v31;
          v7 = v32;
          v13 = v30;
        }
        *(_QWORD *)&v33 = v13;
        *(_BYTE *)(v7 + v12) = v11;
        *(_BYTE *)(v32 + v12 + 1) = 0;
        *(_BYTE *)(a1 + 8) = 1;
        goto LABEL_16;
      }
    }
    if ( v12 > 1 )
    {
      v15 = v34;
      v16 = *(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)a1 + 40LL);
      if ( v16 == sub_174B00 )
      {
        while ( 1 )
        {
          v17 = *(_QWORD *)(a1 + 24);
          v7 = *(_QWORD *)(a1 + 16);
          *(_QWORD *)(a1 + 24) = v17 + 1;
          if ( v17 >= v15 )
            break;
          qfputc();
        }
        qfputs();
      }
      else
      {
        v7 = v34;
        ((void (__fastcall *)(__int64, __int64, __int64 *))v16)(a1, v34, &v32);
      }
    }
    *(_QWORD *)&v33 = 0;
    v34 = 0;
    v18 = v4[1] == 0;
    *(_BYTE *)(a1 + 8) = v4[1] != 0;
    if ( !v18 )
    {
      v19 = *(__int64 (__fastcall **)(__int64, __int64, char))(*(_QWORD *)a1 + 32LL);
      if ( v19 == sub_174C40 )
      {
        v7 = *(_QWORD *)(a1 + 16);
        qfputc();
        *(_QWORD *)(a1 + 24) = 0;
      }
      else
      {
        v7 = a2 + 24;
        v19(a1, a2 + 24, 0);
      }
      v20 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL);
      if ( v20 == sub_174750 )
        v21 = *(_QWORD *)(a1 + 24);
      else
        v21 = ((__int64 (__fastcall *)(__int64, __int64))v20)(a1, v7);
      v34 = v21;
    }
LABEL_16:
    v14 = v4;
LABEL_17:
    i = v14[1];
  }
  if ( (unsigned __int64)v33 > 1 )
  {
    v22 = v34;
    v23 = *(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)a1 + 40LL);
    if ( v23 == sub_174B00 )
    {
      while ( 1 )
      {
        v24 = *(_QWORD *)(a1 + 24);
        v7 = *(_QWORD *)(a1 + 16);
        *(_QWORD *)(a1 + 24) = v24 + 1;
        if ( v24 >= v22 )
          break;
        qfputc();
      }
      qfputs();
    }
    else
    {
      v7 = v34;
      ((void (__fastcall *)(__int64, __int64, __int64 *))v23)(a1, v34, &v32);
    }
  }
  *(_QWORD *)&v33 = 0;
  v25 = *(_QWORD *)a1;
  v34 = 0;
  (*(void (__fastcall **)(__int64, __int64))(v25 + 48))(a1, v7);
  if ( v32 )
  {
    *(_QWORD *)&v33 = 0;
    qfree();
  }
  return v3;
}

