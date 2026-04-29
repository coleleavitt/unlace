_QWORD *__fastcall sub_1447F0(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  __int64 *v5; // rcx
  unsigned __int64 v6; // rdx
  __int64 *v7; // rdi
  __int64 v8; // r8
  __int64 v9; // rax
  unsigned __int64 *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rbx
  _QWORD *result; // rax
  __int64 v14; // r8
  __int64 v15; // rax
  unsigned __int64 *v16; // rcx
  __int64 v17; // rax
  unsigned __int64 *v18; // r8
  unsigned __int64 v19; // rdi
  _QWORD *v20; // rax
  unsigned __int64 *v21; // r8
  _QWORD *v22; // rax
  unsigned __int64 *v23; // rdx
  unsigned __int64 v24; // rdx
  _QWORD *v25; // rax
  __int64 v26; // rcx

  v3 = *(_QWORD *)a2 & 0xFFFFFFFFFFFFFFFCLL;
  v4 = *(_QWORD *)v3;
  v5 = (__int64 *)v3;
  if ( (*(_QWORD *)v3 & 2) == 0 )
  {
    while ( 1 )
    {
      if ( (v4 & 1) == 0 )
        goto LABEL_13;
      v6 = v4 & 0xFFFFFFFFFFFFFFFCLL;
      v7 = *(__int64 **)((v4 & 0xFFFFFFFFFFFFFFFCLL) + 8);
      if ( v7 != (__int64 *)v3 )
        break;
      v7 = *(__int64 **)(v6 + 16);
      v14 = *v7;
      if ( (*v7 & 2) != 0 || (v14 = *v7 & 1, !(_DWORD)v14) )
      {
        if ( *(_QWORD *)(v3 + 16) == a2 )
        {
          sub_144730(a1, v3, v6, (__int64)v5, v14);
          a2 = v3;
          v5 = (__int64 *)(*(_QWORD *)v3 & 0xFFFFFFFFFFFFFFFCLL);
          v15 = *v5;
          v6 = *v5 & 0xFFFFFFFFFFFFFFFCLL;
        }
        else
        {
          v15 = *(_QWORD *)v3;
        }
        *v5 = v15 & 0xFFFFFFFFFFFFFFFELL;
        v16 = *(unsigned __int64 **)(v6 + 8);
        v17 = *(_QWORD *)v6 | 1LL;
        *(_QWORD *)v6 = v17;
        if ( (*(_BYTE *)v16 & 2) == 0 )
        {
          v18 = (unsigned __int64 *)v16[2];
          *(_QWORD *)(v6 + 8) = v18;
          if ( (*v18 & 2) == 0 )
          {
            *v18 = v6 | *v18 & 3;
            v17 = *(_QWORD *)v6;
          }
          *v16 = *v16 & 3 | v17 & 0xFFFFFFFFFFFFFFFCLL;
          v19 = (unsigned __int64)v16 & 0xFFFFFFFFFFFFFFFCLL;
          v20 = (_QWORD *)(*(_QWORD *)v6 & 0xFFFFFFFFFFFFFFFCLL);
          if ( v20 == (_QWORD *)*a1 )
          {
            *v20 = v19 | *v20 & 3LL;
          }
          else if ( v6 == v20[2] )
          {
            v20[2] = v16;
          }
          else
          {
            v20[1] = v16;
          }
          v16[2] = v6;
          goto LABEL_31;
        }
        if ( under_debugger )
          goto LABEL_52;
        v19 = 3441;
        v22 = (_QWORD *)interr(3441, a2, v6, v16, v14);
LABEL_36:
        *v22 = v19 | *v22 & 3LL;
LABEL_30:
        v10[1] = v6;
LABEL_31:
        *(_QWORD *)v6 = v19 | *(_QWORD *)v6 & 3LL;
        v12 = *(_QWORD *)a2;
        goto LABEL_12;
      }
LABEL_11:
      a2 = v6;
      *(_QWORD *)v3 = v4 & 0xFFFFFFFFFFFFFFFELL;
      *v7 &= ~1uLL;
      v12 = *(_QWORD *)v6 | 1LL;
      *(_QWORD *)v6 = v12;
LABEL_12:
      v3 = v12 & 0xFFFFFFFFFFFFFFFCLL;
      v4 = *(_QWORD *)v3;
      v5 = (__int64 *)v3;
      if ( (*(_QWORD *)v3 & 2) != 0 )
        goto LABEL_13;
    }
    v8 = *v7;
    if ( (*v7 & 2) == 0 )
      goto LABEL_10;
    while ( 1 )
    {
      if ( *(_QWORD *)(v3 + 8) == a2 )
      {
        if ( (*(_BYTE *)a2 & 2) != 0 )
        {
          if ( under_debugger )
LABEL_52:
            BUG();
          v19 = 3441;
          v22 = (_QWORD *)interr(3441, a2, v6, v5, v8);
          goto LABEL_40;
        }
        v23 = *(unsigned __int64 **)(a2 + 16);
        *(_QWORD *)(v3 + 8) = v23;
        if ( (*v23 & 2) == 0 )
          *v23 = v3 | *v23 & 3;
        *(_QWORD *)a2 = *(_QWORD *)a2 & 3LL | *(_QWORD *)v3 & 0xFFFFFFFFFFFFFFFCLL;
        v24 = a2 & 0xFFFFFFFFFFFFFFFCLL;
        v25 = (_QWORD *)(*(_QWORD *)v3 & 0xFFFFFFFFFFFFFFFCLL);
        if ( v25 == (_QWORD *)*a1 )
        {
          *v25 = v24 | *v25 & 3LL;
        }
        else if ( v3 == v25[2] )
        {
          v25[2] = a2;
        }
        else
        {
          v25[1] = a2;
        }
        *(_QWORD *)(a2 + 16) = v3;
        a2 = v3;
        v26 = v24 | *(_QWORD *)v3 & 3LL;
        *(_QWORD *)v3 = v26;
        v5 = (__int64 *)(v26 & 0xFFFFFFFFFFFFFFFCLL);
        v9 = *v5;
        v6 = *v5 & 0xFFFFFFFFFFFFFFFCLL;
      }
      else
      {
        v9 = *(_QWORD *)v3;
      }
      *v5 = v9 & 0xFFFFFFFFFFFFFFFELL;
      v10 = *(unsigned __int64 **)(v6 + 16);
      v11 = *(_QWORD *)v6 | 1LL;
      *(_QWORD *)v6 = v11;
      if ( (*(_BYTE *)v10 & 2) == 0 )
      {
        v21 = (unsigned __int64 *)v10[1];
        *(_QWORD *)(v6 + 16) = v21;
        if ( (*v21 & 2) == 0 )
        {
          *v21 = v6 | *v21 & 3;
          v11 = *(_QWORD *)v6;
        }
        *v10 = *v10 & 3 | v11 & 0xFFFFFFFFFFFFFFFCLL;
        v19 = (unsigned __int64)v10 & 0xFFFFFFFFFFFFFFFCLL;
        v22 = (_QWORD *)(*(_QWORD *)v6 & 0xFFFFFFFFFFFFFFFCLL);
        if ( v22 == (_QWORD *)*a1 )
          goto LABEL_36;
        if ( v6 != v22[1] )
        {
          v22[2] = v10;
          goto LABEL_30;
        }
LABEL_40:
        v22[1] = v10;
        goto LABEL_30;
      }
      if ( under_debugger )
        goto LABEL_52;
      v7 = (_QWORD *)(&stru_D68 + 8);
      v4 = interr(3440, a2, v6, v10, v8);
LABEL_10:
      v8 &= 1u;
      if ( (_DWORD)v8 )
        goto LABEL_11;
    }
  }
LABEL_13:
  result = (_QWORD *)(*(_QWORD *)*a1 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (*result & 2) == 0 )
    *result &= ~1uLL;
  return result;
}
