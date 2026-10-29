__int64 __fastcall sub_1AA3DE0(__int64 *a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdi
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned int v20; // eax
  unsigned int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  unsigned int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rbp
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  _QWORD *v33; // rax
  unsigned __int8 v34; // [rsp+1h] [rbp-B9h]
  unsigned __int64 v35; // [rsp+2h] [rbp-B8h] BYREF
  __int64 v36; // [rsp+Ah] [rbp-B0h] BYREF
  _QWORD v37[2]; // [rsp+12h] [rbp-A8h] BYREF
  __int64 v38; // [rsp+22h] [rbp-98h]
  unsigned __int8 *v39; // [rsp+32h] [rbp-88h] BYREF
  char v40; // [rsp+8Ah] [rbp-30h]
  unsigned int v41; // [rsp+92h] [rbp-28h]
  char v42; // [rsp+96h] [rbp-24h]

  if ( !a3 || (*(_DWORD *)a3 & 0x40000) != 0 )
    return 0;
  if ( (*(_WORD *)sub_BFBAE0(a3) & 0x1FF) == 0x7C
    || (v8 = *(_QWORD *)(a3 + 8), v9 = *(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v9 + 16) == 13)
    && (v5 = *(unsigned __int16 *)(v9 + 18), LOWORD(v5) = ((unsigned __int16)v5 >> 3) & 0x1FF, (_WORD)v5 == 506) )
  {
    v21 = sub_C00A40(a3, a2, v5, v6, v7);
    sub_168B9F0((__int64)v37, a1, v21, 0xC0Bu, 0);
    LODWORD(v36) = 0;
    sub_1587D10((__int64)v37, (int *)&v36);
    sub_15F7200(v37);
    v25 = sub_C00A40(a3, (__int64)&v36, v22, v23, v24);
    sub_168B9F0((__int64)v37, a1, v25, 0x1673u, 0);
    sub_15F7200(v37);
    return 1;
  }
  else
  {
    v35 = *(_QWORD *)(a3 + 8);
    v10 = *(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF0LL);
    if ( (unsigned int)*(unsigned __int8 *)(v10 + 16) - 43 <= 1
      || (v26 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43,
          (unsigned int)v26 <= 1)
      && (v10 = sub_F63050(v10, a2, v26, v6)) != 0 )
    {
      while ( 1 )
      {
        v11 = *(_QWORD *)(v10 + 32);
        if ( (*(_BYTE *)(v10 + 18) & 0x10) == 0 )
          break;
        while ( 1 )
        {
          v10 = *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL);
          v12 = (unsigned int)*(unsigned __int8 *)(v10 + 16) - 43;
          if ( (unsigned int)v12 <= 1 )
            break;
          v13 = sub_F63050(v10, a2, v12, v6);
          v11 = *(_QWORD *)(v13 + 32);
          if ( (*(_BYTE *)(v13 + 18) & 0x10) == 0 )
            goto LABEL_10;
        }
      }
LABEL_10:
      v14 = v11;
    }
    else
    {
      v14 = v35;
    }
    v15 = *(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF0LL);
    v16 = *(_QWORD *)(v15 + 8) & 7LL;
    v17 = v16 | (*(__int64 *)(v15 + 8) >> 3) & 1;
    if ( v17 )
      v15 = sub_F64F00(v14, a2, v16, v17, v7);
    v35 = v15 & 0xFFFFFFFFFFFFFFF0LL;
    v18 = *(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF0LL);
    if ( (*(_BYTE *)(v18 + 17) & 4) != 0
      || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v18 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 42 )
    {
      return 0;
    }
    else
    {
      v20 = sub_C00A40(a3, a2, v16, v17, v7);
      sub_168B9F0((__int64)v37, a1, v20, 0xB7Cu, 0);
      if ( v40 )
      {
        sub_1573010(&v39, a2);
      }
      else if ( v42 )
      {
        v29 = sub_168B9E0(v37);
        v32 = v38;
        if ( v38 )
          v32 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v38 + 32LL))(v38);
        v36 = v32;
        v33 = sub_1587BC0(v29, &v36, v27, v28, v30, v31);
        sub_1573010((unsigned __int8 **)(*v33 + 32LL * v41 + 8), a2);
      }
      v34 = *(_BYTE *)(sub_1605D30((__int64)v37, (__int64 *)&v35) + 120);
      sub_15F7200(v37);
      return v34;
    }
  }
}
