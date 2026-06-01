__int64 __fastcall sub_1866EA0(
        _QWORD *a1,
        unsigned int a2,
        __int64 a3,
        void (__fastcall ***a4)(_QWORD, _QWORD *, _QWORD, unsigned __int64))
{
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD *v20; // r14
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned __int64 v23; // rax
  __int64 *v24; // rbp
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  _QWORD *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdi
  __int64 v35; // rbp
  _QWORD *v36; // rax

  if ( (*(_BYTE *)(a1[29] + 1LL) & 8) == 0 )
    return 0;
  v10 = sub_A71450(a1[31], a3);
  v15 = sub_F63270(*(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL), a3, v11, v12, v13, v14);
  v20 = v15;
  if ( !v15 )
    return 0;
  v21 = v15[16];
  if ( !v21 )
  {
    sub_7052B0((__int64 *)(v20[13] + 96LL), v20[13], v16, v17, v18, v19);
    v21 = v20[16];
    if ( !v21 )
      return 0;
  }
  v22 = *(_QWORD *)(v21 + 88);
  if ( !v22 )
    return 0;
  if ( (*(_BYTE *)(v22 + 74) & 2) != 0 )
    return 0;
  sub_7052B0((__int64 *)(v20[13] + 96LL), v20[13], v16, v17, v18, v19);
  if ( (*(_BYTE *)(v20[16] + 1LL) & 8) == 0 )
    return 0;
  v23 = sub_A71450(a1[31], a3);
  v24 = (__int64 *)(v23 & 0xFFFFFFFFFFFFFFF0LL);
  (**a4)(a4, a1, a2, v23);
  v29 = sub_F63270(*v24, (__int64)a1, v25, v26, v27, v28);
  v34 = a1[512];
  v35 = (__int64)v29;
  if ( v34 )
  {
    if ( *(_BYTE *)(v34 + 20) )
    {
      v36 = *(_QWORD **)v34;
      v30 = *(_QWORD *)v34 + 8LL * *(unsigned int *)(v34 + 12);
      if ( *(_QWORD *)v34 != v30 )
      {
        while ( v35 != *v36 )
        {
          if ( (_QWORD *)v30 == ++v36 )
            goto LABEL_18;
        }
        return 1;
      }
    }
    else if ( sub_2236570(v34, v29) )
    {
      return 1;
    }
  }
LABEL_18:
  if ( *(_DWORD *)(a1[33] + 204LL) )
  {
    sub_1866110((__int64)a1, v35, v30, v31, v32, v33);
    return 1;
  }
  return 1;
}
