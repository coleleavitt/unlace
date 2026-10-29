__int64 *__fastcall sub_BC50F0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v9; // rdi
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdx
  __int64 *v19; // r14
  __int64 v20; // rdi
  int v21; // eax
  __int64 v22; // rax
  unsigned __int64 v24; // rdi
  __int64 v25; // r14
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rsi
  char v30; // al
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rax
  __int64 v39; // [rsp+8h] [rbp-E0h]
  __int64 v40; // [rsp+8h] [rbp-E0h]
  __int64 v41; // [rsp+10h] [rbp-D8h]
  unsigned __int64 v42; // [rsp+10h] [rbp-D8h]
  __int64 v43; // [rsp+10h] [rbp-D8h]
  __int64 v44; // [rsp+18h] [rbp-D0h]
  void *ptr; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v46; // [rsp+28h] [rbp-C0h]
  _QWORD v47[23]; // [rsp+30h] [rbp-B8h] BYREF

  v9 = *(_QWORD *)(sub_B8C330((__int64)a1) + 18360);
  if ( v9 )
    (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v9 + 80LL))(v9, a1[9], 1);
  v10 = a1[10];
  if ( !v10 )
    v10 = sub_BC3500(a1);
  ptr = v47;
  v11 = sub_B8C330((__int64)a1);
  v47[0] = a3;
  v12 = a2;
  v13 = a2 + 24 * a3;
  v46 = 0x2000000002LL;
  if ( v13 != a2 )
  {
    do
    {
      v44 = v13;
      v41 = v11;
      v39 = v12;
      sub_F1D660(v12, &ptr, v11);
      v13 = v44;
      v11 = v41;
      v12 = v39 + 24;
    }
    while ( v44 != v39 + 24 );
  }
  sub_BC0290(a4, (__int64)&ptr, v11);
  v40 = v10 + 104;
  v14 = sub_2223360(v10 + 104, &ptr, a5, &off_2B4B400);
  if ( !v14 || v14 == 144 )
  {
    if ( ptr != v47 )
      free(ptr);
LABEL_30:
    v19 = *(__int64 **)(sub_B8C330((__int64)a1) + 18360);
    if ( v19 )
    {
      v28 = *v19;
      v29 = a1[9];
      if ( a4 )
        v30 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD))(v28 + 80))(v19, v29, 0);
      else
        v30 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64, __int64))(v28 + 88))(v19, v29, a2, a3);
      if ( v30 )
      {
        ptr = v47;
        v46 = 0x2000000000LL;
        v31 = sub_B8C330((__int64)a1);
        sub_BC0710((__int64)&ptr, a2, a3, a4, v31);
        v32 = sub_2223360(v40, &ptr, a5, &off_2B4B400);
        if ( v32 )
        {
          v37 = v32 - 144;
          v19 = (__int64 *)v37;
          if ( v37 )
            v19 = (__int64 *)sub_BC4F90(v37, (__int64)&ptr, v33, v34, v35, v36);
        }
        else
        {
          v19 = nullptr;
        }
        if ( ptr != v47 )
          free(ptr);
      }
      else
      {
        return nullptr;
      }
    }
    return v19;
  }
  v15 = *(_QWORD *)(v14 - 40);
  v16 = *(_QWORD *)(v15 + 96);
  v17 = v16 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v16 & 1) == 0 )
  {
    v24 = v16 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (v16 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
    {
      v19 = (__int64 *)(v16 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (v16 & 2) == 0 )
        goto LABEL_16;
      v25 = *(_QWORD *)(v24 + 18360);
      v26 = v15 & 0xFFFFFFFFFFFFFFFBLL;
      if ( v25 )
      {
        v43 = v15;
        v27 = sub_BC1250((__int64 *)(v24 + 2352), 24, 3u);
        v15 = v43;
        *(_QWORD *)v27 = v25;
        *(_DWORD *)(v27 + 8) = 0;
        *(_QWORD *)(v27 + 16) = v43;
        v26 = v27 | 4;
      }
      v17 = v26 & 0xFFFFFFFFFFFFFFFELL;
      v16 = v17 | 1;
      *(_QWORD *)(v15 + 96) = v17 | 1;
    }
  }
  v18 = v16 & 0xFFFFFFFFFFFFFFF8LL;
  v19 = (__int64 *)v18;
  if ( v17 )
  {
    if ( (v17 & 4) != 0 )
    {
      v19 = nullptr;
      if ( v18 )
      {
        v20 = *(_QWORD *)v18;
        v21 = *(_DWORD *)(*(_QWORD *)v18 + 12LL);
        if ( *(_DWORD *)(v18 + 8) != v21 )
        {
          *(_DWORD *)(v18 + 8) = v21;
          v42 = v18;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v20 + 152LL))(v20, v15);
          v18 = v42;
        }
        v19 = *(__int64 **)(v18 + 16);
      }
    }
  }
LABEL_16:
  while ( sub_B97450((__int64)v19) )
  {
    while ( 1 )
    {
      v22 = v19[12];
      v19 = nullptr;
      if ( (v22 & 3) != 0 )
        break;
      v19 = (__int64 *)(v22 & 0xFFFFFFFFFFFFFFFCLL);
      if ( !sub_B97450(v22 & 0xFFFFFFFFFFFFFFFCLL) )
        goto LABEL_19;
    }
  }
LABEL_19:
  if ( ptr != v47 )
    free(ptr);
  if ( !v19 )
    goto LABEL_30;
  return v19;
}
