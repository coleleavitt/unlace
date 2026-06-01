__int64 __fastcall sub_B895B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // r15d
  unsigned int v7; // r14d
  __int64 v8; // r13
  char v9; // al
  __int64 v10; // rax
  __int64 *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  char v21; // al
  unsigned __int64 v22; // rax
  _QWORD *v23; // rdx
  _QWORD *v24; // r12
  _QWORD *v25; // rbp
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rbp
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  unsigned __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  _QWORD *v38; // rbp
  __int64 v39; // rax
  _QWORD *v40; // rbp
  _QWORD *v41; // r12
  _QWORD *v42; // [rsp+8h] [rbp-50h]
  __int64 v43[8]; // [rsp+18h] [rbp-40h] BYREF

  v6 = a3;
  v7 = a3;
  v8 = a2;
  v9 = *(_BYTE *)(a1 + 28) & 0x7F;
  if ( v9 == 19 )
  {
    v10 = *(_QWORD *)(a1 + 104);
    if ( v10 )
    {
      v11 = (__int64 *)(v10 & 0xFFFFFFFFFFFFFFF8LL);
      if ( !v11 )
        goto LABEL_16;
    }
    else
    {
      a2 = *(_QWORD *)(a1 + 96);
      sub_A55AE0((__int64 *)(a2 + 88), a2, a3, a4, a5, a6);
      v11 = (__int64 *)(*(_QWORD *)(a1 + 104) & 0xFFFFFFFFFFFFFFF8LL);
      if ( !v11 )
      {
LABEL_6:
        v9 = *(_BYTE *)(a1 + 28) & 0x7F;
        goto LABEL_7;
      }
    }
    v12 = *v11;
    if ( v12 && (*(_BYTE *)(v12 + 8) & 6) != 0 )
      return 0;
    goto LABEL_6;
  }
LABEL_7:
  if ( v9 == 20 )
  {
    for ( v43[0] = sub_B86FC0(a1, a2, a3, a4, a5, a6); ; v43[0] = *(_QWORD *)(v43[0] + 128) )
    {
      sub_B82AC0(v43);
      if ( !v43[0] )
        break;
      v13 = sub_B895B0(v43[0], v8, v7);
      if ( v13 )
        return v13;
    }
  }
LABEL_16:
  v16 = v8;
  v13 = sub_B87020(a1 + 48, v8, v6, a4, a5, a6);
  if ( v13 )
    return v13;
  v21 = *(_BYTE *)(a1 + 28) & 0x7F;
  switch ( v21 )
  {
    case 20:
      v29 = sub_B89430(a1, v8, v17, v18, v19, v20);
      if ( v29 )
      {
LABEL_27:
        v32 = *(_QWORD *)(v29 + 40);
        if ( (v32 & 7) == 0 && (v32 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
        {
          v16 = v8;
          v13 = sub_B895B0(v29, v8, v7);
          if ( v13 )
            return v13;
        }
        while ( 1 )
        {
          v29 = *(_QWORD *)(v29 + 128);
          if ( !v29 )
            break;
          if ( *(char *)(v29 + 28) >= 0 && (*(_BYTE *)(v29 + 8) & 6) == 0 )
            goto LABEL_27;
        }
      }
      v33 = sub_B87700(a1, v16, v27, v28, v30, v31);
      v42 = (_QWORD *)v34;
      v38 = (_QWORD *)v33;
      if ( v33 != v34 )
      {
        do
        {
          v16 = v8;
          v13 = sub_B895B0(*v38, v8, v7);
          if ( v13 )
            return v13;
          ++v38;
        }
        while ( v42 != v38 );
      }
      v39 = sub_B878F0(a1, v16, v34, v35, v36, v37);
      if ( v39 )
        return sub_B895B0(v39, v8, v6);
      return 0;
    case 23:
      v14 = *(_QWORD *)(a1 + 40);
      if ( (v14 & 7) == 0 && (v14 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
      {
        v40 = *(_QWORD **)(a1 + 104);
        v41 = &v40[*(unsigned int *)(a1 + 112)];
        if ( v40 != v41 )
        {
          while ( 1 )
          {
            v13 = sub_B895B0(*v40, v8, v7);
            if ( v13 )
              break;
            if ( v41 == ++v40 )
              return 0;
          }
          return v13;
        }
      }
      return 0;
    case 19:
      v22 = sub_B867E0(a1, v8, v17, v18, v19, v20);
      v24 = v23;
      v25 = (_QWORD *)v22;
      if ( (_QWORD *)v22 != v23 )
      {
        while ( 1 )
        {
          v26 = sub_B895B0(*v25, v8, v7);
          if ( v26 )
            break;
          if ( v24 == ++v25 )
            return v13;
        }
        return v26;
      }
      break;
  }
  return v13;
}

