void __fastcall sub_19B02E0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  int v3; // r14d
  unsigned int v5; // ebx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  __int64 *v13; // r15
  unsigned int v14; // edx
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // r15
  __int64 v27; // rax
  _QWORD *v28; // rax
  __int64 *v29; // [rsp+8h] [rbp-100h]
  unsigned int v30; // [rsp+1Ch] [rbp-ECh]
  __int64 v31; // [rsp+20h] [rbp-E8h]
  unsigned __int64 v32; // [rsp+20h] [rbp-E8h]
  __int64 v33; // [rsp+20h] [rbp-E8h]
  __int64 v34; // [rsp+20h] [rbp-E8h]
  __int64 v35; // [rsp+28h] [rbp-E0h]
  __int64 v36; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v37[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v38; // [rsp+50h] [rbp-B8h]
  unsigned __int8 *v39[11]; // [rsp+60h] [rbp-A8h] BYREF
  char v40; // [rsp+B8h] [rbp-50h]
  unsigned int v41; // [rsp+C0h] [rbp-48h]
  char v42; // [rsp+C4h] [rbp-44h]

  if ( a3 <= 9 )
  {
    v3 = a3;
    v30 = 0;
    if ( !a3 )
      return;
  }
  else
  {
    v3 = 4;
    v30 = a3 - 8;
  }
  v5 = 0;
  v29 = (__int64 *)(a1 + 8);
  v6 = 0;
  do
  {
    while ( 1 )
    {
      v13 = (__int64 *)(a2 + 8 * v6);
      v14 = *(_DWORD *)(*v13 + 24);
      if ( v3 != v5 )
        break;
      sub_168B9F0((__int64)v37, v29, v14, 0x1839u, 0);
      if ( v40 )
      {
        sub_AE9DF0(v39, v30, 3u);
      }
      else if ( v42 )
      {
        v26 = sub_168B9E0(v37);
        v27 = v38;
        if ( v38 )
          v27 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v38 + 32LL))(v38);
        v36 = v27;
        v28 = sub_1587BC0(v26, &v36, v22, v23, v24, v25);
        sub_AE9DF0((unsigned __int8 **)(*v28 + 32LL * v41 + 8), v30, 3u);
      }
      sub_15F7200(v37);
      v5 += v30;
      v6 = v5;
      if ( v5 >= a3 )
        return;
    }
    sub_168B9F0((__int64)v37, v29, v14, 0x1838u, 0);
    v8 = *v13;
    v9 = *(_QWORD *)(*(_QWORD *)(*v13 + 48) & 0xFFFFFFFFFFFFFFF0LL);
    if ( (unsigned int)*(unsigned __int8 *)(v9 + 16) - 25 > 1 )
    {
      v31 = v8;
      v10 = sub_F63050(v9, v29, v7, v8);
      v8 = v31;
      v9 = v10;
    }
    v11 = sub_B8C330(v8);
    v36 = *(_QWORD *)(v9 + 24);
    v12 = sub_F67970(&v36, v11);
    if ( v40 )
    {
      sub_AE9DF0(v39, v12, 8u);
    }
    else if ( v42 )
    {
      v32 = v12;
      v15 = sub_168B9E0(v37);
      v18 = v32;
      v19 = v15;
      v20 = v38;
      if ( v38 )
      {
        v35 = v32;
        v33 = v19;
        v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v38 + 32LL))(v38);
        v18 = v35;
        v19 = v33;
      }
      v34 = v18;
      v36 = v20;
      v21 = sub_1587BC0(v19, &v36, v19, v18, v16, v17);
      sub_AE9DF0((unsigned __int8 **)(*v21 + 32LL * v41 + 8), v34, 8u);
    }
    ++v5;
    sub_15F7200(v37);
    v6 = v5;
  }
  while ( v5 < a3 );
}
