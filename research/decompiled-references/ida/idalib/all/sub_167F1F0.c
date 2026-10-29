__int64 __fastcall sub_167F1F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rbx
  _QWORD *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // r13
  __int64 *v14; // rbx
  __int64 v15; // r14
  __int64 v16; // rbp
  unsigned int *v17; // rdi
  unsigned __int64 v18; // rax
  size_t v19; // rdx
  const void *v20; // rdi
  bool v21; // sf
  __int64 v22; // r15
  __int64 v23; // rcx
  int v24; // esi
  int v26; // r14d
  bool v27; // r9
  char v28; // r14
  unsigned int *v29; // rcx
  __int64 v30; // rdx
  int v31; // [rsp+Ch] [rbp-4Ch]
  const void *v32; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v33; // [rsp+18h] [rbp-40h]

  v7 = a2;
  if ( (*(_BYTE *)(a2 + 28) & 0x7F) == 0x47 )
    v7 = *(_QWORD *)(a2 + 48);
  if ( (*(_BYTE *)(v7 + 29) & 1) == 0 )
    return 0;
  v8 = sub_B8C3D0(v7, a2, a3, a4, a5, a6);
  v12 = *((unsigned int *)v8 + 2);
  v13 = *v8 + 8 * v12;
  if ( (*(_BYTE *)(v7 + 29) & 1) != 0 )
    v14 = (__int64 *)*sub_B8C3D0(v7, a2, v12, v9, v10, v11);
  else
    v14 = nullptr;
  v15 = 0;
  if ( (__int64 *)v13 != v14 )
  {
    while ( 1 )
    {
      v16 = *v14;
      if ( *(_WORD *)(*v14 + 36) != 142 )
        goto LABEL_32;
      v17 = *(unsigned int **)(*(_QWORD *)(v16 + 40) + 16LL);
      v18 = *(_QWORD *)(a1 + 2320);
      v19 = *v17;
      v20 = v17 + 4;
      v21 = *(char *)(v18 + 2) < 0;
      v32 = v20;
      v33 = v19;
      if ( v21 )
      {
        v18 = sub_2246E40(&v32, "_app_extension", 14);
        if ( v18 == -1 )
        {
          v20 = v32;
          v19 = v33;
        }
        else
        {
          if ( v33 <= v18 )
            v18 = v33;
          v20 = v32;
          v19 = v18;
          v33 = v18;
        }
      }
      v22 = *(_QWORD *)(a1 + 17448);
      if ( *(_QWORD *)(v22 + 368) != v19 )
        goto LABEL_32;
      if ( v19 )
      {
        LODWORD(v18) = memcmp(v20, *(const void **)(v22 + 360), v19);
        if ( (_DWORD)v18 )
          goto LABEL_32;
      }
      v23 = *(_QWORD *)(v16 + 136);
      v24 = *(_DWORD *)(v22 + 264);
      LOBYTE(v18) = v23 == 0 || v24 == 0;
      if ( (_BYTE)v18 )
        return v16;
      v29 = *(unsigned int **)(v23 + 16);
      v30 = *v29;
      if ( v30 == 5 )
        break;
      if ( v30 == 6 )
      {
        v27 = 1;
        if ( v29[4] == 1953654134 && *((_WORD *)v29 + 10) == 30821 )
        {
          LODWORD(v18) = 1;
          v31 = 34;
        }
LABEL_41:
        LOBYTE(v10) = v30 != 13;
        if ( v30 == 6 && !(_BYTE)v18 )
        {
          if ( v29[4] == 1634561892 && *((_WORD *)v29 + 10) == 28265 )
          {
            v31 = 37;
            LODWORD(v18) = 1;
          }
          goto LABEL_22;
        }
        goto LABEL_19;
      }
      if ( v30 == 8 )
      {
        v26 = 35;
        if ( *((_QWORD *)v29 + 2) != 0x797274656D6F6567LL )
          v26 = v31;
        v27 = 1;
        LODWORD(v10) = 1;
        LOBYTE(v18) = *((_QWORD *)v29 + 2) == 0x797274656D6F6567LL;
        v31 = v26;
LABEL_19:
        v28 = v27 | v18;
        goto LABEL_20;
      }
      v28 = v30 != 7;
      v27 = v30 != 7;
      if ( v30 != 4 )
        goto LABEL_41;
      LODWORD(v10) = 1;
      if ( v29[4] == 1819047272 )
      {
        LODWORD(v18) = 1;
        v31 = 36;
LABEL_21:
        if ( !((unsigned __int8)v10 | (unsigned __int8)v18) )
        {
          if ( *((_QWORD *)v29 + 2) == 0x72656E6567796172LL && v29[6] == 1869182049 && *((_BYTE *)v29 + 28) == 110 )
          {
            LODWORD(v18) = 1;
            v31 = 40;
            goto LABEL_24;
          }
          goto LABEL_23;
        }
        goto LABEL_22;
      }
LABEL_20:
      if ( v28 )
        goto LABEL_21;
      if ( v29[4] == 1886220131 && *((_WORD *)v29 + 10) == 29813 && *((_BYTE *)v29 + 22) == 101 )
      {
        v31 = 38;
        LODWORD(v18) = 1;
LABEL_23:
        if ( !((unsigned __int8)v18 | (v30 != 6)) )
        {
          if ( v29[4] == 1752788577 && *((_WORD *)v29 + 10) == 29801 )
          {
            LODWORD(v18) = 1;
            v31 = 42;
            goto LABEL_26;
          }
          goto LABEL_25;
        }
        goto LABEL_24;
      }
LABEL_22:
      if ( (unsigned __int8)v18 | (v30 != 12) )
        goto LABEL_23;
      if ( *((_QWORD *)v29 + 2) == 0x6365737265746E69LL && v29[6] == 1852795252 )
      {
        v31 = 41;
        LODWORD(v18) = 1;
LABEL_25:
        if ( !((unsigned __int8)v18 | (v30 != 4)) )
        {
          if ( v29[4] == 1936943469 )
          {
            v31 = 44;
            LOBYTE(v18) = 1;
          }
          else if ( v29[4] == 1752393069 )
          {
            v31 = 46;
LABEL_57:
            if ( v24 == v31 )
              return v16;
            goto LABEL_31;
          }
          goto LABEL_29;
        }
        goto LABEL_26;
      }
LABEL_24:
      if ( (unsigned __int8)v18 | (v30 != 10) )
        goto LABEL_25;
      if ( *((_QWORD *)v29 + 2) == 0x68747365736F6C63LL && *((_WORD *)v29 + 12) == 29801 )
      {
        v31 = 43;
        LODWORD(v18) = 1;
        goto LABEL_27;
      }
LABEL_26:
      if ( !((unsigned __int8)v18 | (v30 != 8)) )
      {
        LODWORD(v10) = v18 | v10;
        if ( *((_QWORD *)v29 + 2) == 0x656C62616C6C6163LL )
        {
          v31 = 45;
          LOBYTE(v18) = 1;
          goto LABEL_29;
        }
        goto LABEL_28;
      }
LABEL_27:
      LODWORD(v10) = v18 | v10;
LABEL_28:
      if ( !(_BYTE)v10 )
      {
        if ( *((_QWORD *)v29 + 2) == 0x636966696C706D61LL && v29[6] == 1869182049 && *((_BYTE *)v29 + 28) == 110 )
        {
          v31 = 47;
          goto LABEL_57;
        }
LABEL_30:
        if ( (_BYTE)v18 )
          goto LABEL_57;
        goto LABEL_31;
      }
LABEL_29:
      if ( (unsigned __int8)v18 | v27 )
        goto LABEL_30;
      if ( v29[4] == 1919052140 && *((_WORD *)v29 + 10) == 29281 && *((_BYTE *)v29 + 22) == 121 )
      {
        v31 = 39;
        goto LABEL_57;
      }
LABEL_31:
      v15 = v16;
LABEL_32:
      if ( (__int64 *)v13 == ++v14 )
        return v15;
    }
    if ( v29[4] == 1702390128 )
    {
      LODWORD(v10) = 33;
      if ( *((_BYTE *)v29 + 20) != 108 )
        LODWORD(v10) = v31;
      LOBYTE(v18) = *((_BYTE *)v29 + 20) == 108;
      v31 = v10;
    }
    v27 = 1;
    goto LABEL_41;
  }
  return v15;
}
