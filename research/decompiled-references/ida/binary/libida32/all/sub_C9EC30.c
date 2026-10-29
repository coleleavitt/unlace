__int64 __fastcall sub_C9EC30(_BYTE *a1, __int64 a2)
{
  __int64 v3; // r14
  unsigned int v4; // r10d
  bool v5; // zf
  unsigned int v6; // eax
  unsigned int *v7; // r14
  __int64 v8; // rsi
  __int64 v9; // r15
  unsigned int v10; // eax
  __int64 v11; // rcx
  unsigned int v13; // r13d
  int v14; // eax
  unsigned int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rdx
  int v18; // eax
  unsigned int *v19; // r12
  unsigned int v20; // eax
  __int64 v21; // rax
  char v22; // al
  unsigned __int8 v23; // [rsp+0h] [rbp-78h]
  char v24; // [rsp+0h] [rbp-78h]
  int v25; // [rsp+0h] [rbp-78h]
  char v26; // [rsp+0h] [rbp-78h]
  unsigned __int8 v27; // [rsp+4h] [rbp-74h]
  unsigned int v28; // [rsp+4h] [rbp-74h]
  unsigned int v29; // [rsp+8h] [rbp-70h]
  unsigned int v30; // [rsp+Ch] [rbp-6Ch]
  __int64 v31; // [rsp+18h] [rbp-60h] BYREF
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __int64 v33; // [rsp+28h] [rbp-50h]
  _BYTE v34[72]; // [rsp+30h] [rbp-48h] BYREF

  v3 = *(_QWORD *)(a2 + 16);
  ptr = v34;
  v33 = 0x400000000LL;
  sub_BDC820(a2, (__int64)&ptr);
  if ( (_DWORD)v33 == 1 )
  {
    v4 = (*(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a1 + 40LL))(a1, v3);
    if ( (_BYTE)v4 )
    {
      v5 = (*(_BYTE *)(a2 + 1) & 6) == 0;
      v31 = a2 | 4;
      if ( !v5 )
      {
        v4 = sub_C80730((__int64)a1, *(_DWORD *)ptr, &v31);
        if ( (_BYTE)v4 )
        {
          v31 = a2 | 4;
          v6 = sub_C7C470((__int64)a1, 5, &v31);
          v7 = (unsigned int *)ptr;
          v4 = v6;
          goto LABEL_9;
        }
        goto LABEL_8;
      }
      v13 = *(_DWORD *)ptr;
      v14 = sub_C8D700((__int64)a1, *(_QWORD *)(a2 + 8));
      v15 = sub_C80210((__int64)a1, v14, v13, &v31);
      v7 = (unsigned int *)ptr;
      v4 = v15;
      goto LABEL_9;
    }
LABEL_8:
    v7 = (unsigned int *)ptr;
    goto LABEL_9;
  }
  v31 = v3 | 2;
  v30 = sub_C9B2B0((__int64)a1, &v31, 13, 1u, 0, 1, 0);
  v4 = (*(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a1 + 40LL))(a1, v3);
  if ( !(_BYTE)v4 )
    goto LABEL_8;
  v8 = 13;
  v9 = a2 | 4;
  v31 = a2 | 4;
  v10 = sub_C81650((__int64)a1, 13, v30, &v31);
  v4 = v10;
  if ( !(_BYTE)v10 )
    goto LABEL_8;
  if ( !a1[586] )
  {
    v26 = v10;
    v31 = a2 | 2;
    v21 = sub_C986D0((__int64)a1, &v31, 0, 0, 1, 0);
    if ( !BYTE4(v21)
      || (v8 = (unsigned int)v21, v31 = a2 | 4, v22 = sub_C80E60((__int64)a1, v21, &v31), LOBYTE(v4) = v26, !v22) )
    {
      v7 = (unsigned int *)ptr;
      v4 = 0;
      goto LABEL_9;
    }
  }
  v16 = *(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v17 = (unsigned int)*(unsigned __int8 *)(v16 + 16) - 57;
  if ( (unsigned int)v17 > 1 )
  {
    v24 = v4;
    v16 = sub_C8ADC0(v16, v8, v17, v11);
    LOBYTE(v4) = v24;
  }
  v27 = v4;
  v18 = sub_C8D700((__int64)a1, *(_QWORD *)(v16 + 32));
  v19 = (unsigned int *)ptr;
  v4 = v27;
  v25 = v18;
  v7 = (unsigned int *)((char *)ptr + 4 * (unsigned int)v33);
  if ( ptr != v7 )
  {
    v29 = 0;
    do
    {
      v20 = *v19;
      v31 = v9;
      v28 = v20;
      v4 = sub_C80B80((__int64)a1, 13, v30, &v31);
      if ( !(_BYTE)v4 )
        break;
      v31 = v9;
      v4 = sub_C80210((__int64)a1, v25, v28, &v31);
      if ( !(_BYTE)v4 )
        break;
      v31 = v9;
      v4 = sub_C81040((__int64)a1, v25, v29, &v31);
      if ( !(_BYTE)v4 )
        break;
      ++v19;
      ++v29;
    }
    while ( v7 != v19 );
    goto LABEL_8;
  }
LABEL_9:
  if ( v7 != (unsigned int *)v34 )
  {
    v23 = v4;
    free(v7);
    return v23;
  }
  return v4;
}

