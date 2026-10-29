__int64 __fastcall sub_9E3ED0(__int64 a1, __int64 a2, __int64 a3, void *a4, char a5)
{
  __int64 v8; // rbp
  unsigned int v9; // r14d
  unsigned __int64 v11; // r15
  __int64 v12; // rax
  _WORD *v13; // rax
  __int16 v14; // ax
  _QWORD *v15; // r14
  unsigned __int64 v16; // rax
  __int64 v17; // rdi
  unsigned __int64 v18; // r13
  __int64 v19; // rcx
  __int64 v20; // rsi
  unsigned int v21; // eax
  _QWORD *v22; // rdx
  unsigned int v23; // ecx
  _QWORD **v24; // rax
  unsigned __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rsi
  _DWORD *v28; // rcx
  __int64 v29; // rdx
  char v30; // al
  unsigned __int64 v31; // rax
  __int64 v32; // rdi
  unsigned int v33; // eax
  unsigned __int8 **v34; // rax
  unsigned __int8 **v35; // rbx
  _QWORD *v36; // [rsp+8h] [rbp-90h]
  unsigned __int64 v37; // [rsp+8h] [rbp-90h]
  void *v40; // [rsp+20h] [rbp-78h] BYREF
  unsigned int v41; // [rsp+28h] [rbp-70h]

  v8 = sub_A1A5A0(*(_QWORD *)(a1 + 184), 56);
  if ( !sub_9E26A0(a1, a2, v8) || !(unsigned __int8)sub_9DCCC0(a1, a2, a3) )
    return 0;
  v11 = sub_8E8FB0(v8);
  v12 = *(_QWORD *)sub_8E5480(v8);
  v36 = (_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (v12 & 2) != 0 )
  {
    v13 = (_WORD *)(v12 & 0xFFFFFFFFFFFFFFFCLL);
    if ( v13 )
    {
      v14 = *v13 & 0x1FF;
      if ( (v14 == 107 || v14 == 93)
        && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v36 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 41 )
      {
        v11 = sub_B167E0(*v36, a2);
        v36 = (_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL);
      }
    }
  }
  v15 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
  if ( a5 )
  {
    v41 = 64;
    v40 = a4;
    v31 = *(_QWORD *)(a3 + 8) & 0xFFFFFFFFFFFFFFF0LL;
    v32 = *(_QWORD *)v31;
    if ( *(_BYTE *)(*(_QWORD *)v31 + 16LL) != 41 )
      v32 = sub_B0D320(v32);
    v18 = sub_6C55D0((__int64)v15, *(_QWORD *)(v32 + 32), (__int64)&v40, 0, 0, 0);
    if ( v41 > 0x40 && v40 )
      operator delete[](v40);
  }
  else
  {
    v16 = *(_QWORD *)(a3 + 8) & 0xFFFFFFFFFFFFFFF0LL;
    v17 = *(_QWORD *)v16;
    if ( *(_BYTE *)(*(_QWORD *)v16 + 16LL) != 41 )
      v17 = sub_B0D320(v17);
    v18 = *(_QWORD *)(v17 + 32);
  }
  v19 = *(_QWORD *)(v18 & 0xFFFFFFFFFFFFFFF0LL);
  v20 = *v36;
  v21 = *(unsigned __int8 *)(*v36 + 16LL) - 2;
  if ( (unsigned int)*(unsigned __int8 *)(v19 + 16) - 2 > 1 )
  {
    v23 = 1;
    if ( v21 > 1 )
      goto LABEL_24;
  }
  else
  {
    v22 = *(_QWORD **)(v19 + 40);
    if ( (*(_BYTE *)(v19 + 19) & 2) != 0 )
    {
      if ( *((_DWORD *)v22 + 2) <= 0x40u )
        v22 = (_QWORD *)*v22;
      else
        v22 = *(_QWORD **)*v22;
    }
    v23 = (unsigned int)v22;
    LODWORD(v22) = 1;
    if ( v21 > 1 )
      goto LABEL_23;
  }
  v24 = *(_QWORD ***)(v20 + 40);
  if ( (*(_BYTE *)(v20 + 19) & 2) == 0 )
  {
LABEL_22:
    LODWORD(v22) = (_DWORD)v24;
    goto LABEL_23;
  }
  v22 = *v24;
  if ( *((_DWORD *)v24 + 2) > 0x40u )
  {
    v24 = (_QWORD **)*v22;
    goto LABEL_22;
  }
LABEL_23:
  if ( (unsigned int)v22 < v23 )
    goto LABEL_40;
LABEL_24:
  v37 = sub_6CB5B0(v15, v11);
  v25 = sub_6CB5B0(v15, v18);
  v9 = sub_6DA930(v15, v25, v37);
  if ( !(_BYTE)v9 )
  {
LABEL_40:
    v33 = sub_A1A260(*(_QWORD *)(a1 + 200), a2);
    v34 = (unsigned __int8 **)sub_A2E1A0(a1, v33, 2265, 0);
    v35 = v34;
    if ( v34 )
    {
      sub_9B5660(v34, v11);
      sub_9B5660(v35, v18);
    }
    return 0;
  }
  if ( *(_DWORD *)(v8 + 48) )
    return v9;
  v26 = *(unsigned int *)(v8 + 32);
  v27 = *(_QWORD *)(v8 + 24);
  v28 = (_DWORD *)(v27 + v26 + 24);
  v29 = v26;
  v30 = *(_BYTE *)(v27 + v26 + 28);
  if ( (v30 & 0x20) == 0
    || !v27
    || *(_DWORD *)(*(_QWORD *)(v27 + 32) + 16LL) == (_DWORD)v29
    || !(_DWORD)v29
    || (v30 & 0x10) != 0 )
  {
    return v9;
  }
  if ( (_DWORD)v29 == -1 )
    sub_A1C030(&v40, v27, v29, 0);
  else
    sub_A1C030(&v40, v27, (unsigned int)(v29 - *v28), (unsigned int)(v29 - *v28));
  if ( *(_BYTE *)(*(_QWORD *)(sub_8E5480((__int64)&v40) + 24) + 648LL) )
  {
    sub_A1C0C0(&v40);
    return v9;
  }
  sub_A1C0C0(&v40);
  return sub_9D92B0(a1, a2, v8, 8);
}

