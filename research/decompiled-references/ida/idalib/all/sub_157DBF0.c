void __fastcall sub_157DBF0(__int64 a1, _BYTE *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // r12
  unsigned int v7; // eax
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // r12
  unsigned int v11; // eax
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 *v14; // rax
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // r12
  unsigned int v19; // eax
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned __int64 v22; // r12
  unsigned int v23; // eax
  __int64 v24; // r8
  __int64 v25; // r9

  if ( (a2[29] & 1) == 0 )
  {
LABEL_2:
    v6 = *(_QWORD *)a1;
    v7 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a2 + 16LL))(a2);
    if ( (unsigned __int8)sub_FD3830(*(_QWORD *)(v6 + 32), 0x1D4Fu, v7, v6, v8, v9) != 1
      || (v10 = *(_QWORD *)a1,
          v11 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a2 + 16LL))(a2),
          (unsigned __int8)sub_FD3830(*(_QWORD *)(v10 + 32), 0x1D51u, v11, v10, v12, v13) != 1)
      || (v18 = *(_QWORD *)a1,
          v19 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a2 + 16LL))(a2),
          (unsigned __int8)sub_FD3830(*(_QWORD *)(v18 + 32), 0x1D50u, v19, v18, v20, v21) != 1)
      || (v22 = *(_QWORD *)a1,
          v23 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a2 + 16LL))(a2),
          (unsigned __int8)sub_FD3830(*(_QWORD *)(v22 + 32), 0x1D4Eu, v23, v22, v24, v25) != 1) )
    {
      sub_A00520(a2, *(_QWORD *)(a1 + 8), **(_BYTE **)(a1 + 16));
    }
    return;
  }
  v14 = sub_B8C3D0((__int64)a2, (__int64)a2, a3, a4, a5, a6);
  v15 = *v14;
  v16 = *v14 + 8LL * *((unsigned int *)v14 + 2);
  if ( *v14 >= v16 )
  {
    if ( v15 == v16 )
      goto LABEL_2;
    while ( *(_WORD *)(*(_QWORD *)v16 + 36LL) != 388 )
    {
      v16 += 8LL;
      if ( v15 == v16 )
        goto LABEL_2;
    }
  }
  else
  {
    v17 = *v14;
    while ( *(_WORD *)(*(_QWORD *)v17 + 36LL) != 388 )
    {
      v17 += 8LL;
      if ( v16 == v17 )
        goto LABEL_2;
    }
    if ( v16 == v17 )
      goto LABEL_2;
  }
}
