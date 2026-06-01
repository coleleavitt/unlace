__int64 __fastcall sub_537E90(__int64 *a1, __int64 a2, __int64 idati, __int64 a4, __int64 a5, char a6)
{
  __int64 *v6; // r13
  __int64 *v9; // rbx
  __int64 v11; // rdi
  char tinfo_property; // al
  __int64 v13; // rdx
  __int64 v15; // r12
  unsigned __int64 v16; // r14
  __int64 v17; // r15
  __int64 v18; // r12
  __int64 v19; // rax
  __int64 v20; // [rsp+8h] [rbp-60h] BYREF
  _QWORD v21[2]; // [rsp+10h] [rbp-58h] BYREF
  __int16 v22; // [rsp+20h] [rbp-48h]
  unsigned __int64 v23; // [rsp+28h] [rbp-40h]

  v6 = a1;
  v9 = (__int64 *)a2;
  v23 = __readfsqword(0x28u);
  if ( (a4 & 0x100) == 0 )
  {
    if ( !a5 )
      goto LABEL_3;
LABEL_12:
    a1 = v9;
    sub_357520(v9);
    goto LABEL_13;
  }
  a2 = a4;
  a1 = v9;
  get_tinfo_pdata(v9, a4, 0);
  if ( a5 )
    goto LABEL_12;
LABEL_3:
  if ( a6 )
    goto LABEL_4;
LABEL_13:
  v15 = v9[1];
  if ( v15 )
  {
    v17 = v15 + 4;
    v16 = v15 + 5;
    a2 = *v9;
    --v15;
    if ( v9[2] >= v16 )
      goto LABEL_15;
LABEL_17:
    a1 = v9;
    v19 = qvector_reserve(v9, a2, v16, 1);
    *v9 = v19;
    a2 = v19;
    goto LABEL_15;
  }
  a2 = *v9;
  v16 = 6;
  v17 = 5;
  if ( (unsigned __int64)v9[2] < 6 )
    goto LABEL_17;
LABEL_15:
  v9[1] = v16;
  *(_BYTE *)(a2 + v17) = 0;
  v18 = *v9 + v15;
  *(_DWORD *)v18 = 1651799647;
  *(_BYTE *)(v18 + 4) = 108;
LABEL_4:
  v20 = 0;
  if ( *v9 )
  {
    v21[1] = *v9;
    v22 = 0;
    if ( !idati )
      idati = get_idati(a1, a2);
    v21[0] = idati;
    create_tinfo(&v20, 61, 61, v21);
    v11 = v20;
  }
  else
  {
    v11 = 0;
  }
  tinfo_property = get_tinfo_property(v11, 2);
  LOBYTE(idati) = tinfo_property != 0;
  if ( tinfo_property )
  {
    v13 = v20;
    v20 = *v6;
    *v6 = v13;
  }
  clear_tinfo_t(&v20);
  return (unsigned int)idati;
}

