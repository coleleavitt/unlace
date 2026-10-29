std::_V2 **__fastcall sub_12EB840(std::_V2 **a1, std::_V2 **a2, __int64 a3)
{
  std::_V2 *v5; // rdi
  std::_V2 *v6; // rax
  std::_V2 *v8; // r14
  __int64 (__fastcall *v9)(__int64); // rax
  __int64 v10; // rbx
  __int64 v11; // r15
  unsigned int v12; // r13d
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // r9
  char v22; // cl
  __int64 v23; // rdx
  __int64 v24; // [rsp+10h] [rbp-B8h]
  __int64 v25; // [rsp+10h] [rbp-B8h]
  __int64 v26; // [rsp+10h] [rbp-B8h]
  __int64 v27; // [rsp+18h] [rbp-B0h]
  _QWORD v28[4]; // [rsp+20h] [rbp-A8h] BYREF
  __int16 v29; // [rsp+40h] [rbp-88h]
  __int64 v30[4]; // [rsp+50h] [rbp-78h] BYREF
  __int16 v31; // [rsp+70h] [rbp-58h]
  char v32; // [rsp+80h] [rbp-48h]

  v5 = *a2;
  if ( (*(unsigned __int8 (__fastcall **)(std::_V2 *, void *))(*(_QWORD *)v5 + 48LL))(v5, &unk_2D0AA9A) )
  {
    v8 = *a2;
    *a2 = nullptr;
    v9 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 32LL);
    if ( v9 == sub_12E86A0 )
    {
      v10 = *((unsigned int *)v8 + 2);
      v11 = *((_QWORD *)v8 + 2);
      v12 = *((_DWORD *)v8 + 2);
    }
    else
    {
      v5 = v8;
      v10 = v9((__int64)v8);
      v12 = v10;
      v11 = v14;
    }
    if ( !**(_BYTE **)a3 )
      goto LABEL_9;
    v13 = std::_V2::generic_category(v5);
    if ( v13 != v11 )
      goto LABEL_9;
    if ( v12 != 2 )
      goto LABEL_9;
    v24 = v13;
    v30[0] = sub_228A4B0(**(_QWORD **)(a3 + 8), *(_QWORD *)(*(_QWORD *)(a3 + 8) + 8LL), 0);
    v30[1] = v15;
    v31 = 261;
    v10 = sub_228BCB0(v30, 1, 504);
    v12 = v10;
    v11 = v16;
    if ( (_DWORD)v10 )
      goto LABEL_9;
    v17 = **(unsigned int **)(a3 + 32);
    v18 = *(__int64 **)(a3 + 24);
    v29 = 261;
    v19 = *v18;
    v20 = v18[1];
    v28[0] = v19;
    v28[1] = v20;
    sub_2290390(v30, v28, 438, v17);
    v21 = v24;
    if ( *(__int64 **)(a3 + 16) != v30 )
    {
      v27 = v24;
      v25 = *(_QWORD *)(a3 + 16);
      sub_12EB810((__int64 *)v25);
      v21 = v27;
      v22 = v32 & 1;
      *(_BYTE *)(v25 + 48) = v32 & 1 | *(_BYTE *)(v25 + 48) & 0xFE;
      if ( v22 )
      {
        v23 = v30[0];
        v30[0] = 0;
        *(_QWORD *)v25 = v23;
      }
      else
      {
        sub_228D960(v25, v30);
        v21 = v27;
      }
    }
    v26 = v21;
    sub_12EB810(v30);
    if ( (*(_BYTE *)(*(_QWORD *)(a3 + 16) + 48LL) & 1) != 0 )
      sub_2220500(a1, 2, v26);
    else
LABEL_9:
      sub_2220500(a1, v10 & 0xFFFFFFFF00000000LL | v12, v11);
    (*(void (__fastcall **)(std::_V2 *))(*(_QWORD *)v8 + 8LL))(v8);
  }
  else
  {
    v6 = *a2;
    *a2 = nullptr;
    *a1 = v6;
  }
  return a1;
}
