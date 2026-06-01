unsigned __int64 __fastcall sub_BA0FE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v8; // rax
  __int64 v9; // r15
  __int64 v10; // r12
  __int64 v11; // rdi
  unsigned __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // r12
  __int64 v15; // rdx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdx
  __int64 v18; // rdi
  int v19; // eax
  __int64 v20; // rax
  unsigned __int64 v22; // rdi
  __int64 v23; // rbx
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // [rsp+8h] [rbp-D0h]
  void *ptr[2]; // [rsp+10h] [rbp-C8h] BYREF
  _QWORD v28[23]; // [rsp+20h] [rbp-B8h] BYREF

  ptr[0] = v28;
  v8 = sub_B685F0(a1);
  v28[0] = a5;
  v9 = v8;
  ptr[1] = (void *)0x2000000002LL;
  v10 = a4 + 24 * a5;
  while ( v10 != a4 )
  {
    v11 = a4;
    a4 += 24;
    sub_EF9920(v11, ptr, v9);
  }
  v12 = 0;
  v13 = sub_21FF620(a2, ptr, a3, &off_2B21400);
  if ( !v13 )
    goto LABEL_15;
  v12 = v13 - 144;
  if ( v13 == 144 )
    goto LABEL_15;
  v14 = *(_QWORD *)(v13 - 40);
  v15 = *(_QWORD *)(v14 + 96);
  v16 = v15 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v15 & 1) == 0 )
  {
    v22 = v15 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (v15 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
    {
      v12 = v15 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (v15 & 2) == 0 )
        goto LABEL_12;
      v23 = *(_QWORD *)(v22 + 18360);
      v24 = v14 & 0xFFFFFFFFFFFFFFFBLL;
      if ( v23 )
      {
        v25 = sub_B9D510((__int64 *)(v22 + 2352), 24, 3u);
        *(_QWORD *)v25 = v23;
        *(_DWORD *)(v25 + 8) = 0;
        *(_QWORD *)(v25 + 16) = v14;
        v24 = v25 | 4;
      }
      v16 = v24 & 0xFFFFFFFFFFFFFFFELL;
      v15 = v16 | 1;
      *(_QWORD *)(v14 + 96) = v16 | 1;
    }
  }
  v17 = v15 & 0xFFFFFFFFFFFFFFF8LL;
  v12 = v17;
  if ( v16 )
  {
    if ( (v16 & 4) != 0 )
    {
      v12 = 0;
      if ( v17 )
      {
        v18 = *(_QWORD *)v17;
        v19 = *(_DWORD *)(*(_QWORD *)v17 + 12LL);
        if ( *(_DWORD *)(v17 + 8) != v19 )
        {
          *(_DWORD *)(v17 + 8) = v19;
          v26 = v17;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 152LL))(v18, v14);
          v17 = v26;
        }
        v12 = *(_QWORD *)(v17 + 16);
      }
    }
  }
LABEL_12:
  while ( sub_B73710(v12) )
  {
    while ( 1 )
    {
      v20 = *(_QWORD *)(v12 + 96);
      v12 = 0;
      if ( (v20 & 3) != 0 )
        break;
      v12 = v20 & 0xFFFFFFFFFFFFFFFCLL;
      if ( !sub_B73710(v20 & 0xFFFFFFFFFFFFFFFCLL) )
        goto LABEL_15;
    }
  }
LABEL_15:
  if ( ptr[0] != v28 )
    free(ptr[0]);
  return v12;
}

