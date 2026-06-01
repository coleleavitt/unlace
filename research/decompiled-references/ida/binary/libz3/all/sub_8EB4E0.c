__int64 __fastcall sub_8EB4E0(__int64 a1, __int64 a2)
{
  int *v2; // rbx
  int v5; // eax
  _QWORD *v6; // rdx
  int v7; // esi
  _QWORD *v8; // rax
  __int64 v9; // r14
  _QWORD *v10; // r13
  _QWORD *v11; // r12
  unsigned int *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 (*v16)(); // rax
  __int64 v17; // rdi
  __int64 v18; // rax
  int **v19; // rcx
  int v20; // r8d
  unsigned int v21; // edx
  int **v22; // rsi
  __int64 v23; // rdx
  int **v24; // r9
  int **i; // rax
  int *v26; // rdx
  unsigned int *v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rdi
  __int64 (*v31)(); // rax
  int *v32; // rax

  v2 = *(int **)(a2 + 8);
  if ( ((*((_BYTE *)v2 + 45) >> 1) & 3) != 0 )
  {
    if ( ((*((_BYTE *)v2 + 45) >> 1) & 3) == 1 )
      return 1;
    v5 = sub_B39320(*(_QWORD *)(a2 + 8));
    if ( !*(_WORD *)(*(_QWORD *)v2 + 4LL) )
    {
      v6 = *(_QWORD **)(*(_QWORD *)(*(_QWORD *)v2 + 16LL) + 24LL);
      if ( v6 )
      {
        if ( *v6 == 0x400000000LL )
        {
LABEL_25:
          *((_BYTE *)v2 + 45) = *((_BYTE *)v2 + 45) & 0xF9 | 2;
          return 1;
        }
      }
    }
    if ( v5 )
    {
      if ( v5 != 1 )
        return 1;
      if ( (unsigned __int8)sub_952BA0(*(_QWORD *)(a1 + 7472), v2)
        && !sub_15D2BD0(*(_QWORD *)(a1 + 104), *(_QWORD *)(*(_QWORD *)v2 + 16LL)) )
      {
        v18 = *(unsigned int *)(a1 + 9536);
        v19 = *(int ***)(a1 + 9528);
        v20 = *(_DWORD *)(*(_QWORD *)v2 + 12LL);
        v21 = v18 - 1;
        v18 *= 16;
        v22 = (int **)((char *)v19 + v18);
        v23 = 16LL * (v20 & v21);
        v24 = &v19[(unsigned __int64)v23 / 8];
        if ( v23 != v18 )
        {
          for ( i = &v19[(unsigned __int64)v23 / 8]; v22 != i; i += 2 )
          {
            v26 = *i;
            if ( (unsigned __int64)*i > 1 )
            {
              if ( *(_DWORD *)(*(_QWORD *)v26 + 12LL) == v20 && v2 == v26 )
                goto LABEL_10;
            }
            else if ( !v26 )
            {
              return 1;
            }
          }
        }
        if ( v19 != v24 )
        {
          while ( 1 )
          {
            v32 = *v19;
            if ( (unsigned __int64)*v19 > 1 )
            {
              if ( *(_DWORD *)(*(_QWORD *)v32 + 12LL) == v20 && v2 == v32 )
                goto LABEL_10;
            }
            else if ( !v32 )
            {
              return 1;
            }
            v19 += 2;
            if ( v24 == v19 )
              return 1;
          }
        }
        return 1;
      }
LABEL_10:
      v7 = v2[16];
      if ( v7 >> 8 == -1 )
        BUG();
      v8 = *((_QWORD **)v2 + 7);
      v9 = (unsigned int)*((char *)v2 + 64);
      if ( v8 )
      {
        v10 = &v8[*((unsigned int *)v8 - 1)];
        if ( v10 != v8 )
        {
          v11 = *((_QWORD **)v2 + 7);
          if ( (_DWORD)v9 == -1 )
          {
            while ( 1 )
            {
              v27 = *(unsigned int **)(*(_QWORD *)(*(_QWORD *)*v11 + 16LL) + 24LL);
              if ( v27 )
              {
                v28 = *v27;
                if ( (_DWORD)v28 != -1 )
                {
                  if ( (_DWORD)v28 )
                  {
                    v29 = *(_QWORD *)(a1 + 8672);
                    if ( !v29 )
                      break;
                    if ( (unsigned int)v28 >= *(_DWORD *)(v29 - 4) )
                      break;
                    v30 = *(_QWORD *)(v29 + 8 * v28);
                    if ( !v30 )
                      break;
                    v31 = *(__int64 (**)())(*(_QWORD *)v30 + 168LL);
                    if ( v31 == sub_893DF0
                      || !((unsigned __int8 (__fastcall *)(__int64, _QWORD, int *))v31)(v30, *v11, v2) )
                    {
                      break;
                    }
                  }
                }
              }
              if ( v10 == ++v11 )
                goto LABEL_63;
            }
          }
          else
          {
            while ( 1 )
            {
              v12 = *(unsigned int **)(*(_QWORD *)(*(_QWORD *)*v11 + 16LL) + 24LL);
              if ( !v12 )
                break;
              v13 = *v12;
              if ( (_DWORD)v13 )
              {
                if ( (_DWORD)v9 != (_DWORD)v13 )
                {
                  if ( (_DWORD)v13 == -1 )
                    break;
                  v14 = *(_QWORD *)(a1 + 8672);
                  if ( !v14 )
                    break;
                  if ( (unsigned int)v13 >= *(_DWORD *)(v14 - 4) )
                    break;
                  v15 = *(_QWORD *)(v14 + 8 * v13);
                  if ( !v15 )
                    break;
                  v16 = *(__int64 (**)())(*(_QWORD *)v15 + 168LL);
                  if ( v16 == sub_893DF0
                    || !((unsigned __int8 (__fastcall *)(__int64, _QWORD, int *))v16)(v15, *v11, v2) )
                  {
                    break;
                  }
                }
              }
              if ( v10 == ++v11 )
              {
                v7 = v2[16];
                goto LABEL_27;
              }
            }
          }
          goto LABEL_25;
        }
      }
      if ( (_DWORD)v9 == -1 )
LABEL_63:
        BUG();
LABEL_27:
      v17 = *(_QWORD *)(a1 + 8672);
      if ( v17 )
      {
        if ( (unsigned int)v9 >= *(_DWORD *)(v17 - 4) )
          v17 = 0;
        else
          v17 = *(_QWORD *)(v17 + 8 * v9);
      }
      if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v17 + 160LL))(v17, (unsigned int)(v7 >> 8)) )
        goto LABEL_25;
      *((_BYTE *)v2 + 45) &= 0xF9u;
    }
  }
  return 0;
}

