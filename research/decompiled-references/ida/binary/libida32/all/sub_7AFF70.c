__int64 __fastcall sub_7AFF70(__int64 a1, __int64 a2)
{
  const char *v2; // rbp
  int v3; // r15d
  int v4; // r14d
  int v5; // ebx
  int v6; // eax
  _DWORD *v8; // rax
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  _DWORD *v12; // r12
  int v13; // ebx
  unsigned int v14; // ebx
  __int64 bpt_kernel_interface; // rax
  const char *v16; // rbx
  size_t v17; // rax
  size_t v18; // rbp
  size_t v19; // r12
  void *v20; // rax
  size_t v21; // rbx
  void *v22; // rax

  v2 = haystack;
  if ( *(_QWORD *)(a1 + 48) )
    v2 = *(const char **)(a1 + 40);
  v3 = 12;
  v4 = 0;
  while ( 1 )
  {
    v5 = (v4 + v3) / 2;
    v6 = strcmp((const char *)*(&off_2B11500 + v5), v2);
    if ( !v6 )
      break;
    if ( v6 >= 0 )
    {
      v3 = v5 - 1;
      if ( v4 > v5 - 1 )
        return sub_7AFED0(a2);
    }
    else
    {
      v4 = v5 + 1;
      if ( v5 + 1 > v3 )
        return sub_7AFED0(a2);
    }
  }
  if ( v5 != -1 )
  {
    v8 = (_DWORD *)sub_7AE510(a1);
    v12 = v8;
    if ( v8 )
    {
      switch ( (v4 + v3) / 2 )
      {
        case 0:
          free_idcv(a2);
          *(_BYTE *)a2 = 7;
          *(_QWORD *)(a2 + 8) = 0;
          *(_OWORD *)(a2 + 16) = 0;
          v21 = *((_QWORD *)v12 + 2);
          if ( v21 )
          {
            v22 = (void *)qalloc_or_throw(*((_QWORD *)v12 + 2), "__bpt");
            *(_QWORD *)(a2 + 8) = v22;
            *(_QWORD *)(a2 + 24) = v21;
            memcpy(v22, *((const void **)v12 + 1), v21);
            *(_QWORD *)(a2 + 16) = v21;
          }
          return 0;
        case 1:
          callui(1166, (int)v8, (int)&callui, v9, v10, v11);
        case 2:
          v13 = v8[16];
          goto LABEL_13;
        case 4:
          v13 = v8[9];
          goto LABEL_13;
        case 5:
          v13 = v8[8];
          goto LABEL_13;
        case 6:
          v14 = v8[9];
          bpt_kernel_interface = get_bpt_kernel_interface(a1, "__bpt");
          v16 = (const char *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)bpt_kernel_interface + 80LL))(
                                bpt_kernel_interface,
                                v14);
          free_idcv(a2);
          if ( v16 )
          {
            v17 = strlen(v16);
            v18 = v17;
            *(_BYTE *)a2 = 7;
            *(_QWORD *)(a2 + 8) = 0;
            *(_OWORD *)(a2 + 16) = 0;
            if ( v17 )
            {
              v19 = v17 + 1;
              v20 = (void *)qvector_reserve(a2 + 8, 0, v17 + 1, 1);
              *(_QWORD *)(a2 + 8) = v20;
              *(_QWORD *)(a2 + 16) = v19;
              memmove(v20, v16, v18);
              *(_BYTE *)(*(_QWORD *)(a2 + 8) + v18) = 0;
            }
          }
          else
          {
            *(_BYTE *)a2 = 7;
            *(_QWORD *)(a2 + 8) = 0;
            *(_OWORD *)(a2 + 16) = 0;
          }
          return 0;
        case 7:
          v13 = v8[10];
          goto LABEL_13;
        case 9:
          v13 = v8[15];
          goto LABEL_13;
        case 10:
          v13 = v8[17];
          goto LABEL_13;
        case 11:
          v13 = v8[18];
          goto LABEL_13;
        case 12:
          v13 = v8[14];
LABEL_13:
          free_idcv(a2);
          *(_BYTE *)a2 = 2;
          *(_DWORD *)(a2 + 8) = v13;
          return 0;
        default:
          return sub_7AFED0(a2);
      }
    }
  }
  return sub_7AFED0(a2);
}

