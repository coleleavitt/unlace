unsigned __int64 __fastcall sub_BC18E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v8; // rax
  __int64 v9; // r15
  __int64 v10; // r12
  __int64 v11; // rdi
  __int64 v12; // rax
  unsigned __int64 v13; // rbx
  __int64 v14; // r12
  __int64 v15; // rdx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdi
  __int64 v19; // rbx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rdx
  __int64 v23; // rdi
  int v24; // eax
  unsigned __int64 v25; // [rsp+8h] [rbp-D0h]
  void *ptr[2]; // [rsp+10h] [rbp-C8h] BYREF
  _QWORD v27[23]; // [rsp+20h] [rbp-B8h] BYREF

  ptr[0] = v27;
  v8 = sub_B8C330(a1);
  v27[0] = a5;
  v9 = v8;
  ptr[1] = (void *)0x2000000002LL;
  v10 = a4 + 24 * a5;
  while ( v10 != a4 )
  {
    v11 = a4;
    a4 += 24;
    sub_F1D660(v11, ptr, v9);
  }
  v12 = sub_2223360(a2, ptr, a3, off_2B4B3C0);
  v13 = v12;
  if ( v12 )
  {
    v14 = *(_QWORD *)((*(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF8LL) + 112);
    v15 = *(_QWORD *)(v14 + 104);
    v16 = v15 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v15 & 1) == 0 )
    {
      v17 = v15 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (v15 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
      {
        v13 = v15 & 0xFFFFFFFFFFFFFFFCLL;
        if ( (v15 & 2) == 0 )
          goto LABEL_7;
        v19 = *(_QWORD *)(v17 + 18360);
        v20 = v14 & 0xFFFFFFFFFFFFFFFBLL;
        if ( v19 )
        {
          v21 = sub_BC1250((__int64 *)(v17 + 2352), 24, 3u);
          *(_QWORD *)v21 = v19;
          *(_DWORD *)(v21 + 8) = 0;
          *(_QWORD *)(v21 + 16) = v14;
          v20 = v21 | 4;
        }
        v16 = v20 & 0xFFFFFFFFFFFFFFFELL;
        v15 = v16 | 1;
        *(_QWORD *)(v14 + 104) = v16 | 1;
      }
    }
    v22 = v15 & 0xFFFFFFFFFFFFFFF8LL;
    v13 = v22;
    if ( v16 )
    {
      if ( (v16 & 4) != 0 )
      {
        v13 = 0;
        if ( v22 )
        {
          v23 = *(_QWORD *)v22;
          v24 = *(_DWORD *)(*(_QWORD *)v22 + 12LL);
          if ( *(_DWORD *)(v22 + 8) != v24 )
          {
            *(_DWORD *)(v22 + 8) = v24;
            v25 = v22;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v23 + 152LL))(v23, v14);
            v22 = v25;
          }
          v13 = *(_QWORD *)(v22 + 16);
        }
      }
    }
  }
LABEL_7:
  if ( ptr[0] != v27 )
    free(ptr[0]);
  return v13;
}
