__int64 __fastcall sub_33C8F0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // eax
  unsigned __int64 **v6; // rdx
  unsigned __int64 *func; // rax
  __int64 v9; // rdi
  unsigned int v10; // eax
  _QWORD **v11; // rdx
  _QWORD *v12; // rax
  unsigned int v13; // eax
  _QWORD *v14; // rdx
  unsigned int v15; // eax
  unsigned __int64 **v16; // rdx
  unsigned int v17; // edx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  _QWORD *v21; // rax
  unsigned int v22; // edx
  __int64 v23; // rax
  __int64 v24; // rsi
  __int64 v25; // r13
  __int64 v26; // rcx
  __int64 v27; // r14
  _QWORD *v28; // rax
  __int64 v29; // rbp
  __int64 *v30; // rdx
  unsigned int v31; // eax
  _QWORD *v32; // rdx
  unsigned int v33; // eax
  __int64 v34; // rdx
  unsigned int v35; // edx
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rsi
  _QWORD *v39; // rax
  unsigned int v40; // eax
  unsigned __int64 *v41; // rdx
  unsigned int v42; // eax
  _QWORD **v43; // rdx
  unsigned int v44; // eax
  _QWORD **v45; // rdx
  unsigned int v46; // edx
  __int64 v47; // rsi
  __int64 v48; // rax
  __int64 v49; // rcx
  unsigned __int64 v50; // rsi
  unsigned __int64 *v51; // rax
  unsigned __int64 v52; // rbp
  unsigned int v53; // eax
  _QWORD *v54; // rdx
  unsigned int v55; // edx
  __int64 v56; // rax
  _QWORD *v57; // rax
  __int64 v58; // rbp
  __int64 *v59; // rax
  __int64 *v60; // rdx
  unsigned __int64 *v61; // rdx
  __int64 *v62; // rdx

  if ( a2 > 82 )
    return 0;
  if ( a2 > 31 )
  {
    switch ( a2 )
    {
      case ' ':
        goto LABEL_8;
      case '!':
      case ',':
        goto LABEL_27;
      case '"':
        v44 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v45 = *(_QWORD ***)(a3 + 8);
          *(_QWORD *)(a3 + 8) = v45 + 1;
        }
        else
        {
          v45 = (_QWORD **)(*(_QWORD *)(a3 + 16) + v44);
          *(_DWORD *)a3 = v44 + 8;
        }
        sub_37A720(*(_QWORD *)(a1 + 16), **v45);
        return 0;
      case '#':
        sub_363F50(*(_QWORD *)(a1 + 16));
LABEL_27:
        v15 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v16 = *(unsigned __int64 ***)(a3 + 8);
          *(_QWORD *)(a3 + 8) = v16 + 1;
        }
        else
        {
          v16 = (unsigned __int64 **)(*(_QWORD *)(a3 + 16) + v15);
          *(_DWORD *)a3 = v15 + 8;
        }
        sub_1477B0(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 112LL), **v16, 0);
        return 0;
      case '\'':
      case ')':
        v5 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v6 = *(unsigned __int64 ***)(a3 + 8);
          *(_QWORD *)(a3 + 8) = v6 + 1;
        }
        else
        {
          v6 = (unsigned __int64 **)(*(_QWORD *)(a3 + 16) + v5);
          *(_DWORD *)a3 = v5 + 8;
        }
        func = *v6;
        goto LABEL_7;
      case '*':
        v46 = *(_DWORD *)a3;
        if ( v46 > 0x2F )
        {
          v61 = (unsigned __int64 *)(*(_QWORD *)(a3 + 8) + 8LL);
        }
        else
        {
          v47 = v46 + 8;
          *(_DWORD *)a3 = v47;
          if ( (unsigned int)v47 <= 0x2F )
          {
            v48 = *(_QWORD *)(a3 + 16);
            v49 = v46 + 16;
            *(_DWORD *)a3 = v49;
            v50 = *(_QWORD *)(v48 + v47);
            if ( (unsigned int)v49 <= 0x2F )
            {
              v51 = (unsigned __int64 *)(v49 + v48);
              *(_DWORD *)a3 = v46 + 24;
              goto LABEL_67;
            }
            v51 = *(unsigned __int64 **)(a3 + 8);
LABEL_88:
            *(_QWORD *)(a3 + 8) = v51 + 1;
LABEL_67:
            v52 = *v51;
            sub_1477B0(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 112LL), v50, 0);
            sub_1477B0(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 112LL), v52, 0);
            return 0;
          }
          v61 = *(unsigned __int64 **)(a3 + 8);
        }
        v51 = v61 + 1;
        *(_QWORD *)(a3 + 8) = v61 + 1;
        v50 = *v61;
        goto LABEL_88;
      case '+':
        v42 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v43 = *(_QWORD ***)(a3 + 8);
          *(_QWORD *)(a3 + 8) = v43 + 1;
        }
        else
        {
          v43 = (_QWORD **)(*(_QWORD *)(a3 + 16) + v42);
          *(_DWORD *)a3 = v42 + 8;
        }
        sub_375760(*(_QWORD *)(a1 + 16), **v43, -1);
        return 0;
      case '1':
        v33 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v34 = *(_QWORD *)(a3 + 8);
          *(_QWORD *)(a3 + 8) = v34 + 8;
        }
        else
        {
          v34 = *(_QWORD *)(a3 + 16) + v33;
          *(_DWORD *)a3 = v33 + 8;
        }
        sub_375760(*(_QWORD *)(a1 + 16), *(_QWORD *)(*(_QWORD *)v34 + 16LL), -1);
        return 0;
      case '2':
        goto LABEL_23;
      case '4':
        v40 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v41 = *(unsigned __int64 **)(a3 + 8);
          *(_QWORD *)(a3 + 8) = v41 + 1;
        }
        else
        {
          v41 = (unsigned __int64 *)(*(_QWORD *)(a3 + 16) + v40);
          *(_DWORD *)a3 = v40 + 8;
        }
        sub_13D5F0(*(_QWORD *)(a1 + 16), *v41);
        return 0;
      case '5':
        v53 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v54 = *(_QWORD **)(a3 + 8);
          *(_QWORD *)(a3 + 8) = v54 + 1;
        }
        else
        {
          v54 = (_QWORD *)(*(_QWORD *)(a3 + 16) + v53);
          *(_DWORD *)a3 = v53 + 8;
        }
        func = (unsigned __int64 *)get_func(*v54);
        if ( !func )
          goto LABEL_8;
LABEL_7:
        sub_1477B0(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 112LL), *func, 0);
        goto LABEL_8;
      case '@':
        v31 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v32 = *(_QWORD **)(a3 + 8);
          *(_QWORD *)(a3 + 8) = v32 + 1;
        }
        else
        {
          v32 = (_QWORD *)(*(_QWORD *)(a3 + 16) + v31);
          *(_DWORD *)a3 = v31 + 8;
        }
        sub_37A720(*(_QWORD *)(a1 + 16), *v32);
        return 0;
      case 'H':
        sub_375330(*(_QWORD *)(a1 + 16));
        return 0;
      case 'L':
        v55 = *(_DWORD *)a3;
        if ( v55 > 0x2F )
        {
          v57 = (_QWORD *)(*(_QWORD *)(a3 + 8) + 8LL);
        }
        else
        {
          v56 = v55 + 8;
          *(_DWORD *)a3 = v56;
          if ( (unsigned int)v56 <= 0x2F )
          {
            v57 = (_QWORD *)(*(_QWORD *)(a3 + 16) + v56);
            *(_DWORD *)a3 = v55 + 16;
            goto LABEL_75;
          }
          v57 = *(_QWORD **)(a3 + 8);
        }
        *(_QWORD *)(a3 + 8) = v57 + 1;
LABEL_75:
        sub_375760(*(_QWORD *)(a1 + 16), *v57, -1);
        return 0;
      case 'P':
      case 'R':
        v17 = *(_DWORD *)a3;
        if ( v17 > 0x2F )
        {
          v30 = *(__int64 **)(a3 + 8);
          v21 = v30 + 1;
          *(_QWORD *)(a3 + 8) = v30 + 1;
          v20 = *v30;
        }
        else
        {
          v18 = *(_QWORD *)(a3 + 16);
          v19 = v17 + 8;
          *(_DWORD *)a3 = v19;
          v20 = *(_QWORD *)(v18 + v17);
          if ( (unsigned int)v19 <= 0x2F )
          {
            v21 = (_QWORD *)(v19 + v18);
            *(_DWORD *)a3 = v17 + 16;
            goto LABEL_33;
          }
          v21 = *(_QWORD **)(a3 + 8);
        }
        *(_QWORD *)(a3 + 8) = v21 + 1;
LABEL_33:
        sub_375760(*(_QWORD *)(a1 + 16), *v21, v20);
        return 0;
      case 'Q':
        v35 = *(_DWORD *)a3;
        if ( v35 > 0x2F )
        {
          v62 = *(__int64 **)(a3 + 8);
          v39 = v62 + 1;
          *(_QWORD *)(a3 + 8) = v62 + 1;
          v38 = *v62;
        }
        else
        {
          v36 = *(_QWORD *)(a3 + 16);
          v37 = v35 + 8;
          *(_DWORD *)a3 = v37;
          v38 = *(_QWORD *)(v36 + v35);
          if ( (unsigned int)v37 <= 0x2F )
          {
            v39 = (_QWORD *)(v37 + v36);
            *(_DWORD *)a3 = v35 + 16;
            goto LABEL_53;
          }
          v39 = *(_QWORD **)(a3 + 8);
        }
        *(_QWORD *)(a3 + 8) = v39 + 1;
LABEL_53:
        sub_398A00(*(_QWORD *)(a1 + 16), v38, *v39);
        return 0;
      default:
        return 0;
    }
  }
  if ( a2 > 17 )
  {
    if ( ((1LL << a2) & 0x35540000) != 0 )
    {
LABEL_39:
      *(_DWORD *)(*(_QWORD *)(a1 + 16) + 1416LL) |= 0x20u;
      return 0;
    }
    if ( (_DWORD)a2 != 30 )
    {
      if ( (_DWORD)a2 == 31 )
      {
        v9 = *(_QWORD *)(a1 + 16);
        if ( (*(_BYTE *)(v9 + 1416) & 0x10) == 0 )
        {
          v10 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v11 = *(_QWORD ***)(a3 + 8);
            *(_QWORD *)(a3 + 8) = v11 + 1;
          }
          else
          {
            v11 = (_QWORD **)(*(_QWORD *)(a3 + 16) + v10);
            *(_DWORD *)a3 = v10 + 8;
          }
          v12 = *v11;
          v9 = *(_QWORD *)(a1 + 16);
          if ( *v11 )
          {
            if ( v12[1] )
            {
              *(_QWORD *)(v9 + 1408) = *(_QWORD *)(*v12 + 8LL) + *(_QWORD *)(v9 + 1408) - *(_QWORD *)*v12;
              v9 = *(_QWORD *)(a1 + 16);
            }
          }
        }
        sub_3A7ED0(v9);
LABEL_8:
        sub_363F50(*(_QWORD *)(a1 + 16));
      }
      return 0;
    }
    v22 = *(_DWORD *)a3;
    if ( v22 > 0x2F )
    {
      v59 = *(__int64 **)(a3 + 8);
      v60 = v59 + 1;
      *(_QWORD *)(a3 + 8) = v59 + 1;
      v25 = *v59;
    }
    else
    {
      v23 = *(_QWORD *)(a3 + 16);
      v24 = v22 + 8;
      *(_DWORD *)a3 = v24;
      v25 = *(_QWORD *)(v23 + v22);
      if ( (unsigned int)v24 <= 0x2F )
      {
        v26 = v22 + 16;
        *(_DWORD *)a3 = v26;
        v27 = *(_QWORD *)(v23 + v24);
        if ( (unsigned int)v26 <= 0x2F )
        {
          v28 = (_QWORD *)(v26 + v23);
          *(_DWORD *)a3 = v22 + 24;
LABEL_38:
          v29 = *v28;
          sub_3A6120(*(_QWORD *)(a1 + 16), v25, v27, *v28);
          sub_382DC0(*(_QWORD *)(a1 + 16), v25, v27, v29);
          sub_363F50(*(_QWORD *)(a1 + 16));
          goto LABEL_39;
        }
        v28 = *(_QWORD **)(a3 + 8);
LABEL_81:
        *(_QWORD *)(a3 + 8) = v28 + 1;
        goto LABEL_38;
      }
      v60 = *(__int64 **)(a3 + 8);
    }
    v28 = v60 + 1;
    *(_QWORD *)(a3 + 8) = v60 + 1;
    v27 = *v60;
    goto LABEL_81;
  }
  if ( a2 == 1 )
  {
    v58 = *(_QWORD *)(a1 + 16);
    sub_1468A0(v58);
    sub_33BCE0(v58);
  }
  else if ( a2 == 13 )
  {
LABEL_23:
    v13 = *(_DWORD *)a3;
    if ( *(_DWORD *)a3 > 0x2Fu )
    {
      v14 = *(_QWORD **)(a3 + 8);
      *(_QWORD *)(a3 + 8) = v14 + 1;
    }
    else
    {
      v14 = (_QWORD *)(*(_QWORD *)(a3 + 16) + v13);
      *(_DWORD *)a3 = v13 + 8;
    }
    sub_375760(*(_QWORD *)(a1 + 16), *v14, -1);
  }
  return 0;
}
