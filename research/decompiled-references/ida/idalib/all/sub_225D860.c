__int64 __fastcall sub_225D860(__int64 a1, int *a2, _QWORD **a3)
{
  __int64 v4; // rax
  int v5; // edx
  __int64 v8; // rax
  __int64 *v9; // rsi
  __int64 v10; // rax
  char v11; // cl
  char v12; // dl
  __int64 v13; // rax
  _BYTE *v14; // r14
  __int64 v15[2]; // [rsp+0h] [rbp-C8h] BYREF
  char v16; // [rsp+10h] [rbp-B8h]
  void *v17[2]; // [rsp+20h] [rbp-A8h] BYREF
  _BYTE v18[16]; // [rsp+30h] [rbp-98h] BYREF
  void *v19; // [rsp+40h] [rbp-88h] BYREF
  size_t v20; // [rsp+48h] [rbp-80h]
  _BYTE v21[16]; // [rsp+50h] [rbp-78h] BYREF
  char v22; // [rsp+60h] [rbp-68h]
  char v23; // [rsp+90h] [rbp-38h]
  char v24; // [rsp+98h] [rbp-30h]

  if ( (a2[4] & 1) != 0 )
  {
LABEL_2:
    v4 = *((_QWORD *)a2 + 1);
    v5 = *a2;
    *(_BYTE *)(a1 + 16) |= 1u;
    *(_DWORD *)a1 = v5;
    *(_QWORD *)(a1 + 8) = v4;
    return a1;
  }
  (*(void (__fastcall **)(void **))(**(_QWORD **)a2 + 16LL))(&v19);
  if ( v23 )
  {
    if ( (v24 & 1) == 0 && v19 != v21 )
      operator delete(v19);
    if ( (a2[4] & 1) == 0 )
    {
      v8 = *(_QWORD *)a2;
      *(_BYTE *)(a1 + 16) &= ~1u;
      *(_QWORD *)a2 = 0;
      *(_QWORD *)a1 = v8;
      return a1;
    }
    goto LABEL_2;
  }
  if ( (v24 & 1) == 0 && v19 != v21 )
    operator delete(v19);
  v9 = *(__int64 **)a2;
  v16 &= ~1u;
  *(_QWORD *)a2 = 0;
  v10 = *v9;
  v15[0] = (__int64)v9;
  (*(void (__fastcall **)(void **))(v10 + 24))(&v19);
  v11 = v22;
  if ( (v22 & 1) == 0 )
  {
    sub_2253560(v17, a3);
    v14 = v17[0];
    if ( (void *)v20 != v17[1] || sub_9B48C0(v19, v17[0], v20) )
    {
      if ( v14 != v18 )
        operator delete(v14);
      (*(void (__fastcall **)(__int64, _QWORD **))(*(_QWORD *)v15[0] + 48LL))(v15[0], a3);
    }
    else if ( v14 != v18 )
    {
      operator delete(v14);
      v11 = v22;
      goto LABEL_12;
    }
    v11 = v22;
  }
LABEL_12:
  v12 = v16 & 1;
  if ( (v16 & 1) != 0 )
  {
    *(_DWORD *)a1 = v15[0];
    *(_QWORD *)(a1 + 8) = v15[1];
  }
  else
  {
    v13 = v15[0];
    v15[0] = 0;
    *(_QWORD *)a1 = v13;
  }
  *(_BYTE *)(a1 + 16) = v12 | *(_BYTE *)(a1 + 16) & 0xFE;
  if ( (v11 & 1) == 0 && v19 != v21 )
    operator delete(v19);
  sub_FDCFC0(v15);
  return a1;
}
