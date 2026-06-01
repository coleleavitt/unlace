void __fastcall sub_180FE80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char v7; // al
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  unsigned __int64 v18; // r12
  __int64 *v19; // r15
  unsigned int v20; // ebp
  __int64 v21; // rbx
  __int64 v22; // r13
  bool v23; // zf
  __int64 *v24; // rax
  signed __int64 v25; // rbx
  signed __int64 v26; // rax
  int v27; // ebp
  __int64 v28; // rax
  __int64 *v29; // r12
  __int64 *v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  int v33; // eax
  unsigned int v34; // eax
  unsigned __int64 v35; // rax
  __int64 v36; // rdi
  __int64 v37; // r12
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // r12
  __int64 v43; // rax
  _QWORD *v44; // rax
  __int64 v45; // [rsp+8h] [rbp-E0h]
  unsigned __int64 v46; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v47; // [rsp+18h] [rbp-D0h] BYREF
  _QWORD v48[2]; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v49; // [rsp+30h] [rbp-B8h]
  unsigned __int8 *v50; // [rsp+40h] [rbp-A8h] BYREF
  char v51; // [rsp+98h] [rbp-50h]
  unsigned int v52; // [rsp+A0h] [rbp-48h]
  char v53; // [rsp+A4h] [rbp-44h]

  v7 = *(_BYTE *)(a2 + 28);
  v46 = 0;
  if ( (v7 & 0x7Fu) - 26 > 0x1A )
  {
    v46 = sub_A7AC20(*(_QWORD *)(a1 + 248), a2, a3, a4, a5, a6);
    v45 = v46;
    if ( (*(_BYTE *)(a2 + 28) & 0x7F) == 0x3E )
    {
      a3 = *(_QWORD *)(a2 + 128);
      v29 = (__int64 *)(a3 & 0xFFFFFFFFFFFFFFF8LL);
      if ( (a3 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
      {
        if ( (a3 & 4) != 0 )
        {
          v36 = *v29;
          v37 = *(_QWORD *)(*v29 & 0xFFFFFFFFFFFFFFF0LL);
          a3 = *(_QWORD *)(v37 + 8) & 7LL | (*(__int64 *)(v37 + 8) >> 3) & 1;
          if ( a3 )
            v29 = (__int64 *)(sub_F64F00(v36, a2, a3, a4, a5) & 0xFFFFFFFFFFFFFFF0LL);
          else
            v29 = (__int64 *)(v37 & 0xFFFFFFFFFFFFFFF0LL);
        }
        else
        {
          a3 &= 0xFFFFFFFFFFFFFFF0LL;
          v29 = (__int64 *)a3;
        }
      }
      v45 = (__int64)v29;
    }
  }
  else
  {
    v46 = *(_QWORD *)(a2 + 48);
    v45 = v46;
  }
  v8 = *(_QWORD *)(v46 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (*(_BYTE *)(v8 + 17) & 4) != 0 || sub_F62670(v8, nullptr, a3, a4, a5, a6) || (*(_BYTE *)(a2 + 29) & 1) == 0 )
    return;
  v13 = sub_B8C3D0(a2, 0, v9, v10, v11, v12);
  v17 = *((unsigned int *)v13 + 2);
  v18 = *v13 + 8 * v17;
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
    v19 = (__int64 *)*sub_B8C3D0(a2, 0, v17, v14, v15, v16);
  else
    v19 = nullptr;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = v19 == (__int64 *)v18;
  if ( (unsigned __int64)v19 >= v18 )
    goto LABEL_35;
LABEL_10:
  v24 = v19;
  do
  {
    if ( *(_WORD *)(*v24 + 36) == 126 )
    {
      while ( 1 )
      {
LABEL_23:
        v21 = *v19;
        if ( *(_WORD *)(*v19 + 36) != 126 )
        {
          v30 = v19 + 1;
          do
          {
            v21 = *v30;
            v19 = v30++;
          }
          while ( *(_WORD *)(v21 + 36) != 126 );
        }
        if ( sub_B08AF0(v21) )
          return;
        v32 = *(_BYTE *)(v21 + 34) & 0xF0;
        if ( (*(_BYTE *)(v21 + 34) & 0xF0) == 0xF0 )
        {
          if ( (unsigned int)sub_FA77D0(v21) != 4 )
          {
            v32 = *(_BYTE *)(v21 + 34) & 0xF0;
            if ( (*(_BYTE *)(v21 + 34) & 0xF0) == 0xF0 )
            {
              v33 = sub_FA77D0(v21);
            }
            else
            {
              LOBYTE(v33) = *(_BYTE *)(v21 + 34) >> 4;
LABEL_29:
              v33 = (unsigned __int8)v33;
            }
            if ( v33 == 5 )
              v22 = v21;
            goto LABEL_32;
          }
        }
        else
        {
          LOBYTE(v33) = *(_BYTE *)(v21 + 34) >> 4;
          if ( (_BYTE)v33 != 4 )
            goto LABEL_29;
        }
        v22 = v21;
LABEL_32:
        v34 = sub_B065C0(v21, *(_QWORD *)(a1 + 248), v32, v31);
        if ( v20 < v34 )
          v20 = v34;
        v23 = ++v19 == (__int64 *)v18;
        if ( (unsigned __int64)v19 < v18 )
          goto LABEL_10;
LABEL_35:
        if ( v23 )
          goto LABEL_13;
        v35 = v18;
        if ( *(_WORD *)(*(_QWORD *)v18 + 36LL) != 126 )
        {
          while ( 1 )
          {
            v35 += 8LL;
            if ( (__int64 *)v35 == v19 )
              break;
            if ( *(_WORD *)(*(_QWORD *)v35 + 36LL) == 126 )
              goto LABEL_23;
          }
          if ( v20 )
            goto LABEL_14;
          return;
        }
      }
    }
    ++v24;
  }
  while ( (__int64 *)v18 != v24 );
LABEL_13:
  if ( v20 )
  {
LABEL_14:
    if ( sub_F582C0(*(_QWORD *)(v46 & 0xFFFFFFFFFFFFFFF0LL)) )
    {
      sub_168B9F0((__int64)v48, (__int64 *)(a1 + 8), *(_DWORD *)(v21 + 24), 0xC9Bu, 0);
      if ( v51 )
      {
        sub_AE9DF0(&v50, v21, 0xEu);
      }
      else if ( v53 )
      {
        v42 = sub_168B9E0(v48);
        v43 = v49;
        if ( v49 )
          v43 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v49 + 32LL))(v49);
        v47 = v43;
        v44 = sub_1587BC0(v42, &v47, v38, v39, v40, v41);
        sub_AE9DF0((unsigned __int8 **)(*v44 + 32LL * v52 + 8), v21, 0xEu);
      }
      sub_1605D30((__int64)v48, (__int64 *)&v46);
      sub_15F7200(v48);
    }
    else if ( v22 )
    {
      v25 = sub_A97FF0(*(_QWORD *)(a1 + 248), v20);
      v26 = sub_A980A0(*(_QWORD *)(a1 + 248), v45);
      v27 = v26;
      if ( v26 > v25 )
      {
        sub_168B9F0((__int64)v48, (__int64 *)(a1 + 8), *(_DWORD *)(v22 + 24), 0xBA0u, 0);
        v28 = sub_1605D30((__int64)v48, (__int64 *)&v46);
        LODWORD(v47) = v27;
        sub_16CF160(v28, (unsigned int *)&v47);
        sub_15F7200(v48);
      }
    }
  }
}
