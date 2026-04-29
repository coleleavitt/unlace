__int64 __fastcall sub_174190(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int128 v5; // rdi
  _QWORD *v8; // r12
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // r9d
  __int64 v13; // r12
  __int64 v14; // r14
  __int64 v15; // rdi
  unsigned int v16; // r12d
  __int64 v18; // rax
  __int64 *v19; // r15
  int v20; // r8d
  int v21; // r9d
  char v22; // dl
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  char v26; // dl
  char v27; // r15
  char v28; // al
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdi
  int v33; // r8d
  int v34; // r9d
  char v35; // al
  __int64 v36; // rdi
  char v37; // al
  __int64 v38; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v39; // [rsp+8h] [rbp-C0h]
  __int64 v40; // [rsp+10h] [rbp-B8h] BYREF
  __int128 v41; // [rsp+18h] [rbp-B0h]
  __int64 v42[2]; // [rsp+30h] [rbp-98h] BYREF
  __int64 v43; // [rsp+40h] [rbp-88h] BYREF
  __int128 v44; // [rsp+48h] [rbp-80h]
  __int64 v45[2]; // [rsp+60h] [rbp-68h] BYREF
  __int64 v46; // [rsp+70h] [rbp-58h] BYREF
  __int64 v47; // [rsp+78h] [rbp-50h]
  unsigned __int64 v48; // [rsp+88h] [rbp-40h]

  v48 = __readfsqword(0x28u);
  if ( *(_BYTE *)a2 == 8 || a4 )
    return 0;
  *(_QWORD *)&v5 = *(_QWORD *)(a1 + 16);
  *((_QWORD *)&v5 + 1) = &v38;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  v41 = 0;
  sub_123EA0(v5, a2, 0, 0xFFFF0000);
  v8 = *(_QWORD **)(a1 + 56);
  if ( !(unsigned __int8)sub_64780(&v38, v8) && !(unsigned __int8)sub_318470(&v40, v8 + 2) )
  {
    *(_BYTE *)(a1 + 40) = 1;
LABEL_16:
    v16 = 0;
    goto LABEL_9;
  }
  v13 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 480LL);
  v14 = *(_QWORD *)(v13 + 112);
  if ( !*(_BYTE *)(a1 + 68) || !(unsigned __int8)sub_11E2C0(*(int ***)(a1 + 32), nullptr, nullptr, 0) )
  {
    v15 = *(_QWORD *)(a1 + 48);
    if ( *(_BYTE *)a2 == 4 )
    {
      if ( !sub_125B90((unsigned __int8 *)v15, v14, *(unsigned int **)(a2 + 8), 0) )
        goto LABEL_16;
      *(_BYTE *)(a1 + 40) = 1;
      v18 = *(_QWORD *)(a1 + 48);
LABEL_21:
      if ( *(_DWORD *)(v18 + 68) >= *(_DWORD *)(a2 + 4) )
      {
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 24LL))(a1, a2);
        ++*(_DWORD *)(a1 + 64);
        goto LABEL_16;
      }
      goto LABEL_8;
    }
    if ( *(_DWORD *)v15 == 4 )
    {
      if ( (*(_BYTE *)(a2 + 1) & 4) == 0 && (*(_BYTE *)(v15 + 33) & 4) == 0 )
        goto LABEL_25;
    }
    else if ( *(_DWORD *)v15 != 67 || *(_DWORD *)(v15 + 68) != *(_DWORD *)(v15 + 36) )
    {
      goto LABEL_8;
    }
    if ( !sub_125B60((unsigned __int8 *)(v15 + 32), a2, 0) )
      goto LABEL_8;
LABEL_25:
    v19 = *(__int64 **)(a1 + 56);
    sub_64640(&v38, v19, v9, v10, v11, v12);
    sub_317C60(&v40, v19 + 2);
    if ( (unsigned __int8)sub_64880(&v38) && !(_QWORD)v41 )
    {
      v18 = *(_QWORD *)(a1 + 48);
      if ( *(_DWORD *)v18 == 4 )
      {
        v22 = sub_1255D0((unsigned __int8 *)a2, v14, v18 + 32, 1);
        v18 = *(_QWORD *)(a1 + 48);
        if ( !v22 )
        {
          v26 = *(_BYTE *)(v18 + 32);
          if ( v26 == 14 )
            goto LABEL_8;
          if ( v26 == 4 )
            goto LABEL_8;
          if ( (*(_BYTE *)(v18 + 4) & 0x10) != 0 )
            goto LABEL_8;
          if ( !(unsigned __int8)sub_121BB0(v18 + 32, (char *)a2, v42, v23, v24, v25) )
            goto LABEL_8;
          v27 = sub_11CC50((unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 32LL), v13);
          v28 = sub_11CC50((unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 64LL), v13);
          v30 = *(_QWORD *)(a1 + 48);
          if ( v27 != v28 )
          {
            LODWORD(v42[0]) = *(_DWORD *)(v30 + 68) - LODWORD(v42[0]) - *(_DWORD *)(a2 + 4);
            if ( SLODWORD(v42[0]) < 0 )
              goto LABEL_8;
          }
          sub_123A40((__int64)v45, (unsigned __int8 *)(v30 + 64), v30, v29);
          if ( !(unsigned __int8)sub_126F10((unsigned __int64)v45, v14, v42[0], v31) )
          {
            sub_11CDA0((__int64)v45);
            goto LABEL_8;
          }
          sub_11CDA0((__int64)v45);
          v18 = *(_QWORD *)(a1 + 48);
        }
      }
      goto LABEL_21;
    }
    v16 = 1;
    if ( *(_BYTE *)a2 != 14 )
      goto LABEL_9;
    v32 = *(_QWORD *)(a1 + 16);
    v42[0] = 0;
    v42[1] = 0;
    v43 = 0;
    v44 = 0;
    sub_128EE0(v32, (__int64)v42, (unsigned __int8 *)a2, 0x4001u, v20, v21, v38, v39, v40, v41, *((__int64 *)&v41 + 1));
    if ( !(unsigned __int8)sub_64880(v42) || (_QWORD)v44 )
    {
      sub_127A20((__int64)v45, *(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 48), 0, v33, v34);
      v35 = sub_64780(v42, v45);
      v36 = v46;
      if ( v35 || (v37 = sub_318470(&v43, &v46), v36 = v46, v37) )
      {
        if ( v36 )
        {
          v47 = 0;
          qfree(v36);
        }
        v16 = 1;
        qfree(v45[0]);
        goto LABEL_44;
      }
      if ( v46 )
      {
        v47 = 0;
        qfree(v46);
      }
      qfree(v45[0]);
    }
    v16 = 0;
LABEL_44:
    if ( v43 )
    {
      *(_QWORD *)&v44 = 0;
      qfree(v43);
    }
    qfree(v42[0]);
    goto LABEL_9;
  }
LABEL_8:
  v16 = 1;
LABEL_9:
  if ( v40 )
  {
    *(_QWORD *)&v41 = 0;
    qfree(v40);
  }
  qfree(v38);
  return v16;
}
