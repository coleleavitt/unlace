__int64 *__fastcall sub_371D40(_QWORD **a1, __int64 *a2, unsigned __int64 a3)
{
  _QWORD *v3; // r8
  _QWORD **v4; // rcx
  __int64 *v5; // rdi
  __int64 v7; // rdx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 *result; // rax
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rdx
  unsigned __int64 *v15; // rdi
  unsigned __int64 v16; // rdi
  _QWORD *v17; // rdx
  unsigned __int64 *v18; // r9
  unsigned __int64 v19; // r8
  __int64 v20; // r10
  unsigned __int64 *v21; // rsi
  __int64 v22; // rdx
  unsigned __int64 *v23; // rdi
  unsigned __int64 v24; // rdi
  _QWORD *v25; // rdx
  __int64 *v26; // r9
  unsigned __int64 v27; // r8
  __int64 v28; // rdi
  __int64 v29; // rdi
  __int64 v30; // rsi
  _QWORD *v31; // rsi
  __int64 v32; // rdx
  unsigned __int64 *v33; // rsi
  unsigned __int64 v34; // rdi
  _QWORD *v35; // rsi
  __int64 *v36; // rdi
  __int64 v37; // rsi
  __int64 v38; // r11
  __int64 v39; // rsi
  unsigned __int64 *v40; // rdx
  __int64 v41; // rdi
  unsigned __int64 *v42; // r8
  unsigned __int64 v43; // rdi
  unsigned __int64 v44; // r8
  __int64 v45; // rdi
  unsigned __int64 *v46; // r8
  unsigned __int64 v47; // rdi
  unsigned __int64 *v48; // rsi
  _QWORD *v49; // rsi

  v3 = *a1;
  v4 = a1;
  v5 = (__int64 *)(**a1 & 0xFFFFFFFFFFFFFFFCLL);
  if ( a2 == v5 )
  {
    v7 = *v5;
    if ( (*v5 & 2) != 0 )
    {
LABEL_13:
      result = (__int64 *)(*v3 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (*result & 2) == 0 )
        *result &= ~1uLL;
      return result;
    }
    a2 = v5;
LABEL_12:
    *a2 = v7 & 0xFFFFFFFFFFFFFFFELL;
    v3 = *v4;
    goto LABEL_13;
  }
  v7 = *a2;
  if ( (*a2 & 2) == 0 && (v7 & 1) != 0 )
    goto LABEL_12;
  while ( 1 )
  {
    v8 = *(_QWORD *)(a3 + 8);
    if ( (__int64 *)v8 != a2 )
    {
      v9 = *(_QWORD *)v8;
      if ( (*(_QWORD *)v8 & 2) != 0 )
        goto LABEL_5;
      if ( (v9 & 1) == 0 )
        goto LABEL_23;
      *(_QWORD *)v8 = v9 & 0xFFFFFFFFFFFFFFFELL;
      v13 = *(_QWORD *)(a3 + 8);
      v14 = *(_QWORD *)a3 | 1LL;
      *(_QWORD *)a3 = v14;
      if ( (*(_BYTE *)v13 & 2) != 0 )
      {
        if ( under_debugger )
          goto LABEL_123;
        a3 = interr(3441, v13, v14, v4, v3);
        goto LABEL_56;
      }
      v15 = *(unsigned __int64 **)(v13 + 16);
      *(_QWORD *)(a3 + 8) = v15;
      if ( (*v15 & 2) == 0 )
      {
        *v15 = *v15 & 3 | a3 & 0xFFFFFFFFFFFFFFFCLL;
        v14 = *(_QWORD *)a3;
      }
      *(_QWORD *)v13 = *(_QWORD *)v13 & 3LL | v14 & 0xFFFFFFFFFFFFFFFCLL;
      v16 = v13 & 0xFFFFFFFFFFFFFFFCLL;
      v17 = (_QWORD *)(*(_QWORD *)a3 & 0xFFFFFFFFFFFFFFFCLL);
      if ( v17 == *v4 )
      {
        *v17 = v16 | *v17 & 3LL;
      }
      else if ( v17[2] == a3 )
      {
        v17[2] = v13;
      }
      else
      {
        v17[1] = v13;
      }
      *(_QWORD *)(v13 + 16) = a3;
      *(_QWORD *)a3 = v16 | *(_QWORD *)a3 & 3LL;
      v8 = *(_QWORD *)(a3 + 8);
      v9 = *(_QWORD *)v8;
      if ( (*(_QWORD *)v8 & 2) == 0 )
      {
LABEL_23:
        v18 = *(unsigned __int64 **)(v8 + 16);
        v19 = *v18;
        v20 = *v18 & 2;
        if ( (**(_QWORD **)(v8 + 8) & 2) != 0 )
        {
          if ( !v20 && (v19 & 1) != 0 )
            goto LABEL_87;
        }
        else
        {
          v29 = **(_QWORD **)(v8 + 8) & 1LL;
          if ( !v20 && (v19 & 1) != 0 )
          {
            if ( v29 )
            {
LABEL_44:
              v30 = *(_QWORD *)v8;
              goto LABEL_45;
            }
LABEL_87:
            v44 = v19 & 0xFFFFFFFFFFFFFFFELL;
            *v18 = v44;
            v21 = *(unsigned __int64 **)(v8 + 16);
            v45 = *(_QWORD *)v8 | 1LL;
            *(_QWORD *)v8 = v45;
            if ( (*(_BYTE *)v21 & 2) == 0 )
            {
              v46 = (unsigned __int64 *)v21[1];
              *(_QWORD *)(v8 + 16) = v46;
              if ( (*v46 & 2) == 0 )
              {
                *v46 = *v46 & 3 | v8 & 0xFFFFFFFFFFFFFFFCLL;
                v45 = *(_QWORD *)v8;
              }
              *v21 = *v21 & 3 | v45 & 0xFFFFFFFFFFFFFFFCLL;
              v47 = (unsigned __int64)v21 & 0xFFFFFFFFFFFFFFFCLL;
              v19 = *(_QWORD *)v8 & 0xFFFFFFFFFFFFFFFCLL;
              if ( (_QWORD *)v19 == *v4 )
              {
                *(_QWORD *)v19 = v47 | *(_QWORD *)v19 & 3LL;
              }
              else if ( *(_QWORD *)(v19 + 8) == v8 )
              {
                *(_QWORD *)(v19 + 8) = v21;
              }
              else
              {
                *(_QWORD *)(v19 + 16) = v21;
              }
              v21[1] = v8;
              *(_QWORD *)v8 = v47 | *(_QWORD *)v8 & 3LL;
              v8 = *(_QWORD *)(a3 + 8);
              v30 = *(_QWORD *)v8;
              if ( (*(_QWORD *)v8 & 2) == 0 )
              {
LABEL_45:
                if ( (*(_BYTE *)a3 & 1) != 0 )
                  *(_QWORD *)v8 = v30 | 1;
                else
                  *(_QWORD *)v8 = v30 & 0xFFFFFFFFFFFFFFFELL;
              }
              *(_QWORD *)a3 &= ~1uLL;
              v31 = *(_QWORD **)(v8 + 8);
              if ( (*v31 & 2) == 0 )
                *v31 &= ~1uLL;
              v32 = *(_QWORD *)(a3 + 8);
              if ( (*(_BYTE *)v32 & 2) != 0 )
              {
                if ( !under_debugger )
                {
                  result = (__int64 *)interr(3441, v31, v32, v4, v19);
                  goto LABEL_52;
                }
LABEL_123:
                BUG();
              }
LABEL_56:
              v33 = *(unsigned __int64 **)(v32 + 16);
              *(_QWORD *)(a3 + 8) = v33;
              if ( (*v33 & 2) == 0 )
                *v33 = a3 & 0xFFFFFFFFFFFFFFFCLL | *v33 & 3;
              *(_QWORD *)v32 = *(_QWORD *)v32 & 3LL | *(_QWORD *)a3 & 0xFFFFFFFFFFFFFFFCLL;
              v34 = v32 & 0xFFFFFFFFFFFFFFFCLL;
              v35 = (_QWORD *)(*(_QWORD *)a3 & 0xFFFFFFFFFFFFFFFCLL);
              if ( v35 == *v4 )
              {
                *v35 = v34 | *v35 & 3LL;
              }
              else if ( a3 == v35[2] )
              {
                v35[2] = v32;
              }
              else
              {
                v35[1] = v32;
              }
              *(_QWORD *)(v32 + 16) = a3;
LABEL_62:
              *(_QWORD *)a3 = v34 | *(_QWORD *)a3 & 3LL;
              v3 = *v4;
              v36 = (__int64 *)(**v4 & 0xFFFFFFFFFFFFFFFCLL);
              v10 = *v36;
              v37 = *v36 & 2;
              goto LABEL_63;
            }
LABEL_100:
            if ( under_debugger )
              goto LABEL_123;
            interr(3440, v21, v8, v4, v44);
LABEL_102:
            if ( under_debugger )
              goto LABEL_123;
            a3 = interr(3441, v21, v8, v4, v27);
LABEL_104:
            v48 = (unsigned __int64 *)v40[1];
            *(_QWORD *)(a3 + 16) = v48;
            if ( (*v48 & 2) == 0 )
              *v48 = a3 & 0xFFFFFFFFFFFFFFFCLL | *v48 & 3;
            *v40 = *v40 & 3 | *(_QWORD *)a3 & 0xFFFFFFFFFFFFFFFCLL;
            v34 = (unsigned __int64)v40 & 0xFFFFFFFFFFFFFFFCLL;
            v49 = (_QWORD *)(*(_QWORD *)a3 & 0xFFFFFFFFFFFFFFFCLL);
            if ( v49 == *v4 )
            {
              *v49 = v34 | *v49 & 3LL;
            }
            else if ( v49[1] == a3 )
            {
              v49[1] = v40;
            }
            else
            {
              v49[2] = v40;
            }
            v40[1] = a3;
            goto LABEL_62;
          }
          if ( v29 )
            goto LABEL_44;
        }
LABEL_26:
        *(_QWORD *)v8 = v9 | 1;
      }
      goto LABEL_27;
    }
    v8 = *(_QWORD *)(a3 + 16);
    v9 = *(_QWORD *)v8;
    if ( (*(_QWORD *)v8 & 2) == 0 )
    {
      if ( (v9 & 1) == 0 )
        goto LABEL_37;
      *(_QWORD *)v8 = v9 & 0xFFFFFFFFFFFFFFFELL;
      v21 = *(unsigned __int64 **)(a3 + 16);
      v22 = *(_QWORD *)a3 | 1LL;
      *(_QWORD *)a3 = v22;
      if ( (*(_BYTE *)v21 & 2) != 0 )
      {
        if ( under_debugger )
          goto LABEL_123;
        interr(3440, v21, v22, v4, v3);
        goto LABEL_100;
      }
      v23 = (unsigned __int64 *)v21[1];
      *(_QWORD *)(a3 + 16) = v23;
      if ( (*v23 & 2) == 0 )
      {
        *v23 = *v23 & 3 | a3 & 0xFFFFFFFFFFFFFFFCLL;
        v22 = *(_QWORD *)a3;
      }
      *v21 = *v21 & 3 | v22 & 0xFFFFFFFFFFFFFFFCLL;
      v24 = (unsigned __int64)v21 & 0xFFFFFFFFFFFFFFFCLL;
      v25 = (_QWORD *)(*(_QWORD *)a3 & 0xFFFFFFFFFFFFFFFCLL);
      if ( v25 == *v4 )
      {
        *v25 = v24 | *v25 & 3LL;
      }
      else if ( v25[1] == a3 )
      {
        v25[1] = v21;
      }
      else
      {
        v25[2] = v21;
      }
      v21[1] = a3;
      *(_QWORD *)a3 = v24 | *(_QWORD *)a3 & 3LL;
      v8 = *(_QWORD *)(a3 + 16);
      v9 = *(_QWORD *)v8;
      if ( (*(_QWORD *)v8 & 2) == 0 )
      {
LABEL_37:
        v26 = *(__int64 **)(v8 + 8);
        v27 = **(_QWORD **)(v8 + 16);
        v28 = *v26;
        if ( (*v26 & 2) != 0 )
        {
          if ( (v27 & 2) == 0 )
          {
            v27 &= 1u;
            if ( (_DWORD)v27 )
              goto LABEL_70;
          }
        }
        else
        {
          v38 = *v26 & 1;
          if ( (v27 & 2) == 0 )
          {
            v27 &= 1u;
            if ( (_DWORD)v27 )
            {
LABEL_70:
              v39 = *(_QWORD *)v8;
LABEL_71:
              if ( (*(_BYTE *)a3 & 1) != 0 )
                *(_QWORD *)v8 = v39 | 1;
              else
                *(_QWORD *)v8 = v39 & 0xFFFFFFFFFFFFFFFELL;
              goto LABEL_73;
            }
          }
          while ( v38 )
          {
            *v26 = v28 & 0xFFFFFFFFFFFFFFFELL;
            v21 = *(unsigned __int64 **)(v8 + 8);
            v41 = *(_QWORD *)v8 | 1LL;
            *(_QWORD *)v8 = v41;
            if ( (*(_BYTE *)v21 & 2) != 0 )
              goto LABEL_102;
            v42 = (unsigned __int64 *)v21[2];
            *(_QWORD *)(v8 + 8) = v42;
            if ( (*v42 & 2) == 0 )
            {
              *v42 = *v42 & 3 | v8 & 0xFFFFFFFFFFFFFFFCLL;
              v41 = *(_QWORD *)v8;
            }
            *v21 = *v21 & 3 | v41 & 0xFFFFFFFFFFFFFFFCLL;
            v43 = (unsigned __int64)v21 & 0xFFFFFFFFFFFFFFFCLL;
            v27 = *(_QWORD *)v8 & 0xFFFFFFFFFFFFFFFCLL;
            if ( (_QWORD *)v27 == *v4 )
            {
              *(_QWORD *)v27 = v43 | *(_QWORD *)v27 & 3LL;
            }
            else if ( v8 == *(_QWORD *)(v27 + 16) )
            {
              *(_QWORD *)(v27 + 16) = v21;
            }
            else
            {
              *(_QWORD *)(v27 + 8) = v21;
            }
            v21[2] = v8;
            *(_QWORD *)v8 = v43 | *(_QWORD *)v8 & 3LL;
            v8 = *(_QWORD *)(a3 + 16);
            v39 = *(_QWORD *)v8;
            if ( (*(_QWORD *)v8 & 2) == 0 )
              goto LABEL_71;
LABEL_73:
            *(_QWORD *)a3 &= ~1uLL;
            v9 = *(_QWORD *)(v8 + 16);
            if ( (*(_QWORD *)v9 & 2) == 0 )
              *(_QWORD *)v9 &= ~1uLL;
            v40 = *(unsigned __int64 **)(a3 + 16);
            if ( (*(_BYTE *)v40 & 2) == 0 )
              goto LABEL_104;
            if ( under_debugger )
              goto LABEL_123;
            v28 = 3440;
            a3 = interr(3440, v9, v40, v4, v27);
          }
        }
        goto LABEL_26;
      }
LABEL_27:
      v3 = *v4;
    }
LABEL_5:
    v10 = *(_QWORD *)a3;
    a2 = (__int64 *)a3;
    if ( a3 == (*v3 & 0xFFFFFFFFFFFFFFFCLL) )
      break;
    a3 = *(_QWORD *)a3 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (v10 & 2) == 0 && (v10 & 1) != 0 )
      goto LABEL_8;
  }
  v36 = (__int64 *)a3;
  v37 = *(_QWORD *)a3 & 2LL;
LABEL_63:
  if ( !v37 )
  {
    a2 = v36;
LABEL_8:
    *a2 = v10 & 0xFFFFFFFFFFFFFFFELL;
    v3 = *v4;
  }
  result = (__int64 *)(*v3 & 0xFFFFFFFFFFFFFFFCLL);
  v12 = *result;
  if ( (*result & 2) == 0 )
LABEL_52:
    *result = v12 & 0xFFFFFFFFFFFFFFFELL;
  return result;
}
