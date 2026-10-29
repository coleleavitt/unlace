void __fastcall sub_18829B0(__int64 a1)
{
  __int64 v2; // rdi
  int v3; // edx
  int v4; // ebp
  __int64 v5; // rbx
  __int64 v6; // rdi
  _QWORD *v7; // rbx
  unsigned __int64 *v8; // rbp
  unsigned __int64 v9; // rdi
  unsigned __int64 *v10; // rax
  unsigned __int64 *v11; // rax
  unsigned __int64 v12; // [rsp+8h] [rbp-100h]
  void *v13[2]; // [rsp+10h] [rbp-F8h] BYREF
  int v14; // [rsp+20h] [rbp-E8h]
  char v15; // [rsp+24h] [rbp-E4h]
  __int64 v16; // [rsp+28h] [rbp-E0h] BYREF
  void *v17; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v18; // [rsp+58h] [rbp-B0h]
  int v19; // [rsp+60h] [rbp-A8h]
  char v20; // [rsp+64h] [rbp-A4h]
  __int64 v21; // [rsp+68h] [rbp-A0h] BYREF
  void *ptr[2]; // [rsp+90h] [rbp-78h] BYREF
  int v23; // [rsp+A0h] [rbp-68h]
  char v24; // [rsp+A4h] [rbp-64h]
  __int64 v25; // [rsp+A8h] [rbp-60h] BYREF

  v2 = *(_QWORD *)(a1 + 552);
  v13[1] = &byte_4;
  v14 = 0;
  v13[0] = &v16;
  v17 = &v21;
  v15 = 1;
  v18 = 4;
  v19 = 0;
  v20 = 1;
  ptr[0] = &v25;
  ptr[1] = &byte_4;
  v23 = 0;
  v24 = 1;
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 320LL))(v2, a1 + 4104);
    v3 = *(_DWORD *)(a1 + 4144);
    v4 = -*(_DWORD *)(a1 + 4112);
    if ( v3 == v4 )
      goto LABEL_8;
  }
  else
  {
    v3 = *(_DWORD *)(a1 + 4144);
    v4 = -*(_DWORD *)(a1 + 4112);
    if ( v4 == v3 )
      goto LABEL_15;
  }
  v5 = v4;
  v12 = v4 + (unsigned __int64)(unsigned int)(v3 - 1 - v4) + 1;
  do
  {
    if ( (int)v5 >= 0 )
      v6 = *(_QWORD *)(*(_QWORD *)(a1 + 4136) + 8 * v5);
    else
      v6 = *(_QWORD *)(*(_QWORD *)(a1 + 4104) + 8 * (v5 + *(unsigned int *)(a1 + 4112)));
    sub_1882480(v6, (__int64)v13, (__int64)&v17, (__int64)ptr, a1);
    ++v5;
  }
  while ( v5 != v12 );
LABEL_8:
  v7 = v17;
  if ( v20 )
    v8 = (unsigned __int64 *)((char *)v17 + 8 * HIDWORD(v18));
  else
    v8 = (unsigned __int64 *)((char *)v17 + 8 * (unsigned int)v18);
  if ( v17 != v8 )
  {
    v9 = *(_QWORD *)v17;
    if ( *(_QWORD *)v17 < 0xFFFFFFFFFFFFFFFELL )
      goto LABEL_20;
    v10 = (unsigned __int64 *)((char *)v17 + 8);
    while ( 1 )
    {
      v7 = v10;
      if ( v8 == v10 )
        break;
      v9 = *v10++;
      if ( v9 < 0xFFFFFFFFFFFFFFFELL )
      {
LABEL_20:
        while ( 1 )
        {
          sub_B88650(v9, 1);
          if ( v7 + 1 == v8 )
            goto LABEL_15;
          v9 = v7[1];
          if ( v9 >= 0xFFFFFFFFFFFFFFFELL )
          {
            v11 = v7 + 2;
            while ( 1 )
            {
              v7 = v11;
              if ( v11 == v8 )
                break;
              v9 = *v11++;
              if ( v9 < 0xFFFFFFFFFFFFFFFELL )
                goto LABEL_20;
            }
            if ( v24 )
              goto LABEL_16;
            goto LABEL_26;
          }
          ++v7;
        }
      }
    }
  }
LABEL_15:
  if ( v24 )
  {
LABEL_16:
    if ( v20 )
      goto LABEL_17;
  }
  else
  {
LABEL_26:
    free(ptr[0]);
    if ( v20 )
    {
LABEL_17:
      if ( v15 )
        return;
LABEL_28:
      free(v13[0]);
      return;
    }
  }
  free(v17);
  if ( !v15 )
    goto LABEL_28;
}
