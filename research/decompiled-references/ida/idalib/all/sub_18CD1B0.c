void __fastcall sub_18CD1B0(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // eax
  unsigned int v7; // ebp
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int16 v12; // ax
  __int16 v13; // dx
  __int64 v14; // r14
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rax
  _BYTE *v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // r13
  __int64 v23; // rax
  int v24; // [rsp+0h] [rbp-BCh] BYREF
  _BYTE v25[184]; // [rsp+4h] [rbp-B8h] BYREF

  if ( *(_DWORD *)(a4 + 12596) < *(_DWORD *)(a4 + 11320) )
    return;
  v5 = *(_DWORD *)(*(_QWORD *)(a4 + 4616) + 640LL * *(unsigned int *)(a4 + 4624) - 640);
  if ( v5 == 3 || (int)a3 <= 0 )
    return;
  if ( v5 <= 1 )
    return;
  v7 = a3;
  LOBYTE(a5) = v5 == 3;
  if ( (int)sub_C00A40(a1, a2, a3, a4, a5) < 0 || (int)sub_C00A40(a2, a2, v9, v10, v11) < 0 )
    return;
  v12 = *(_WORD *)a1 & 0x1FF;
  v13 = *(_WORD *)a2 & 0x1FF;
  if ( v12 != 46 )
    goto LABEL_18;
  if ( v13 == 46 && (**(_WORD **)(a1 + 16) & 0x1FF) == 0x62 && (**(_WORD **)(a2 + 16) & 0x1FF) == 0x62 )
  {
    v14 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
    if ( v14 == (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 24) + 32LL))(*(_QWORD *)(a2 + 24)) )
    {
      v18 = *(_QWORD *)(v14 + 48);
      if ( (v18 & 4) == 0 )
      {
        v19 = (_BYTE *)(v18 & 0xFFFFFFFFFFFFFFF0LL);
        if ( (v19[8] & 4) == 0 )
        {
          if ( (v20 = *(_QWORD *)v19, (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v19 + 16LL) - 43 > 1)
            && (v20 = sub_18BBE30(v20, a2, v15, v16)) == 0
            || (v21 = sub_9B4870(v20, a2, v15, v16, v17), (v21 & 4) == 0)
            && (byte_8[v21 & 0xFFFFFFFFFFFFFFF0LL] & 4) == 0 )
          {
            sub_168B9F0((__int64)v25, (__int64 *)(a4 + 8), v7, 0x1B43u, 0);
            v24 = 0;
            sub_1587D10((__int64)v25, &v24);
            sub_15F7200(v25);
            v12 = *(_WORD *)a1 & 0x1FF;
            v13 = *(_WORD *)a2 & 0x1FF;
LABEL_18:
            if ( v12 == 34 && v13 == 34 && *(_QWORD *)(a1 + 16) == *(_QWORD *)(a2 + 16) )
            {
              v22 = sub_BFB840(*(_QWORD *)(a1 + 24));
              v23 = sub_BFB840(*(_QWORD *)(a2 + 24));
              if ( (*(_WORD *)v22 & 0x1FF) == 0x47
                && (*(_WORD *)v23 & 0x1FF) == 0x47
                && *(_QWORD *)(v22 + 16) == *(_QWORD *)(v23 + 16) )
              {
                sub_168B9F0((__int64)v25, (__int64 *)(a4 + 8), v7, 0x1B43u, 0);
                v24 = 1;
                sub_1587D10((__int64)v25, &v24);
                sub_15F7200(v25);
              }
            }
          }
        }
      }
    }
  }
}
