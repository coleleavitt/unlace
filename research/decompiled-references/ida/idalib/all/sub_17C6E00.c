__int64 __fastcall sub_17C6E00(__int64 *a1, __int64 *a2, __int64 a3, __int64 a4, unsigned __int8 a5)
{
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r15
  __int64 v10; // rdx
  unsigned __int64 v11; // rax
  _QWORD *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  int v18; // r15d
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned __int64 v24; // rdx
  __int64 v25; // rdi
  int v26; // eax
  __int64 v27; // rax
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // r13
  __int64 v33; // r14
  void **v34; // r15
  __int64 v35; // rcx
  __int64 v36; // r8
  unsigned __int64 v37; // [rsp+8h] [rbp-50h]
  __int64 v38; // [rsp+8h] [rbp-50h]

  sub_17C44D0(a1, a2, a3, 1u);
  if ( (*(_BYTE *)(a3 + 82) & 8) != 0 )
    sub_B74970((__int64)a2, 1);
  v9 = *(_QWORD *)(a3 + 112);
  v10 = *(_QWORD *)(v9 + 104);
  v11 = v10 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v10 & 1) == 0 )
  {
    v12 = (_QWORD *)(v10 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v10 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
    {
      v13 = v10 & 2;
      v14 = (__int64)v12;
      if ( !(_DWORD)v13 )
        goto LABEL_6;
      v11 = sub_6E2500(v12, *(_QWORD *)(a3 + 112), v13, (__int64)v12, v7, v8) & 0xFFFFFFFFFFFFFFFELL;
      v10 = v11 | 1;
      *(_QWORD *)(v9 + 104) = v11 | 1;
    }
  }
  v24 = v10 & 0xFFFFFFFFFFFFFFF8LL;
  v14 = v24;
  if ( v11 )
  {
    if ( (v11 & 4) != 0 )
    {
      v14 = 0;
      if ( v24 )
      {
        v25 = *(_QWORD *)v24;
        v26 = *(_DWORD *)(*(_QWORD *)v24 + 12LL);
        if ( *(_DWORD *)(v24 + 8) != v26 )
        {
          *(_DWORD *)(v24 + 8) = v26;
          v37 = v24;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v25 + 152LL))(v25, v9);
          v24 = v37;
        }
        v14 = *(_QWORD *)(v24 + 16);
      }
    }
  }
LABEL_6:
  if ( sub_B8C400(v14, 0) )
  {
    v17 = (*(__int64 (__fastcall **)(__int64 *))(*a2 + 32))(a2);
    *(_BYTE *)(v17 + 29) |= 4u;
  }
  v18 = sub_B76070((__int64)a2, 0, v15, v16);
  if ( v18 == (unsigned int)sub_B76070(a3, 0, v19, v20) )
  {
    v28 = sub_B76070((__int64)a2, 0, v21, v22);
    if ( v28 )
    {
      v32 = 0;
      v38 = 8LL * (unsigned int)(v28 - 1) + 8;
      do
      {
        v33 = *(_QWORD *)(a2[15] + v32);
        v34 = *(void ***)(*(_QWORD *)(a3 + 120) + v32);
        v32 += 8;
        sub_17ADD40(v33, v34, (__int64)a1, v29, v30, v31);
        sub_17BAC80(v33, (__int64)v34, (__int64)a1, v35, v36);
      }
      while ( v32 != v38 );
    }
  }
  if ( (*(_BYTE *)(a1[29] + 1) & 8) != 0 )
    return sub_1878BE0(a1, a2, a3, a4);
  v27 = sub_AA91B0(a1[31], *(_QWORD *)(a3 + 48), a2[6], 0, 0, 0);
  if ( (((v27 & 0xFFFFFFFFFFFFFFF0LL) != 0) & a5) != 0 )
    a2[6] = v27;
  return 0;
}
