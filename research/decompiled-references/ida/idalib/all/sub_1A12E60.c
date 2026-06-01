__int64 __fastcall sub_1A12E60(_BYTE *a1, _DWORD *a2, unsigned __int64 a3, __int64 a4, char a5, double a6)
{
  unsigned int v9; // r14d
  unsigned int v10; // r15d
  unsigned __int64 v12; // rax
  unsigned int v13; // eax
  int v14; // eax
  int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // r15
  __int64 v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // rdi
  __int64 *v31; // [rsp+8h] [rbp-F0h]
  __int64 v32; // [rsp+18h] [rbp-E0h] BYREF
  __int64 v33; // [rsp+20h] [rbp-D8h] BYREF
  char v34; // [rsp+28h] [rbp-D0h]
  _QWORD v35[2]; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v36; // [rsp+40h] [rbp-B8h]
  unsigned __int8 *v37[11]; // [rsp+50h] [rbp-A8h] BYREF
  char v38; // [rsp+A8h] [rbp-50h]
  unsigned int v39; // [rsp+B0h] [rbp-48h]
  char v40; // [rsp+B4h] [rbp-44h]

  if ( (*(_WORD *)a3 & 0x1FF) != 0x35 || (unsigned int)((__int64)(*(_QWORD *)(a3 + 24) - *(_QWORD *)(a3 + 16)) >> 3) )
  {
    if ( !a5 || *a2 || (v12 = sub_1A0B620((__int64)a2), sub_9B48E0(v12)) )
    {
      v9 = 1;
      v10 = 3825;
      if ( a1[9] )
        return v9;
      goto LABEL_9;
    }
    v9 = 0;
    v10 = 5558;
  }
  else
  {
    v9 = 0;
    v10 = 5558;
  }
  if ( a1[9] )
    return v9;
LABEL_9:
  v31 = (__int64 *)(*(_QWORD *)a1 + 8LL);
  v13 = sub_EEB7E0(a3, (__int64)v31, a6);
  sub_168B9F0((__int64)v35, v31, v13, v10, 0);
  v14 = sub_EEB7E0(a3, (__int64)v31, a6);
  v15 = v14;
  if ( v38 )
  {
    LODWORD(v33) = v14;
    HIDWORD(v33) = v14;
    v34 = 1;
    sub_AEC610((__int64 *)v37, &v33);
  }
  else if ( v40 )
  {
    v27 = sub_168B9E0(v35);
    v28 = v36;
    if ( v36 )
      v28 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v36 + 32LL))(v36);
    v32 = v28;
    v29 = sub_1587BC0(v27, &v32, v23, v24, v25, v26);
    v30 = *v29 + 32LL * v39;
    LODWORD(v33) = v15;
    HIDWORD(v33) = v15;
    v34 = 1;
    sub_AEC610((__int64 *)(v30 + 8), &v33);
  }
  sub_15F7200(v35);
  sub_168B9F0((__int64)v35, (__int64 *)(*(_QWORD *)a1 + 8LL), *(_DWORD *)(a4 + 24), 0x1761u, 0);
  if ( v38 )
  {
    sub_AE9DF0(v37, a4, 0xAu);
    sub_15F7200(v35);
  }
  else
  {
    if ( v40 )
    {
      v18 = sub_168B9E0(v35);
      v21 = v36;
      if ( v36 )
        v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v36 + 32LL))(v36);
      v33 = v21;
      v22 = sub_1587BC0(v18, &v33, v16, v17, v19, v20);
      sub_AE9DF0((unsigned __int8 **)(*v22 + 32LL * v39 + 8), a4, 0xAu);
    }
    sub_15F7200(v35);
  }
  return v9;
}
