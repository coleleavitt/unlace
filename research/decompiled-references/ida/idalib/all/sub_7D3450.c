__int64 __fastcall sub_7D3450(__int64 a1, __int64 a2)
{
  const char *v2; // rbp
  int v3; // r15d
  int v4; // r14d
  int v5; // ebx
  int v6; // eax
  __int64 v8; // rax
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // r12
  __int64 v13; // rbx
  unsigned int v14; // ebx
  __int64 (__fastcall ***bpt_kernel_interface)(); // rax
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
    v6 = strcmp((const char *)*(&off_2B3B4A0 + v5), v2);
    if ( !v6 )
      break;
    if ( v6 >= 0 )
    {
      v3 = v5 - 1;
      if ( v4 > v5 - 1 )
        return sub_7D33B0(a2);
    }
    else
    {
      v4 = v5 + 1;
      if ( v5 + 1 > v3 )
        return sub_7D33B0(a2);
    }
  }
  if ( v5 != -1 )
  {
    v8 = sub_7D1970(a1);
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
          v21 = *(_QWORD *)(v12 + 16);
          if ( v21 )
          {
            v22 = (void *)qalloc_or_throw(*(_QWORD *)(v12 + 16));
            *(_QWORD *)(a2 + 8) = v22;
            *(_QWORD *)(a2 + 24) = v21;
            memcpy(v22, *(const void **)(v12 + 8), v21);
            *(_QWORD *)(a2 + 16) = v21;
          }
          return 0;
        case 1:
          callui(1166, v8, (int)&callui, v9, v10, v11);
        case 2:
          v13 = *(unsigned int *)(v8 + 72);
          goto LABEL_13;
        case 4:
          v13 = *(int *)(v8 + 40);
          goto LABEL_13;
        case 5:
          v13 = *(_QWORD *)(v8 + 32);
          goto LABEL_13;
        case 6:
          v14 = *(_DWORD *)(v8 + 40);
          bpt_kernel_interface = get_bpt_kernel_interface();
          v16 = (const char *)((__int64 (__fastcall *)(__int64 (__fastcall ***)(), _QWORD))(*bpt_kernel_interface)[10])(
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
          v13 = *(unsigned int *)(v8 + 44);
          goto LABEL_13;
        case 9:
          v13 = *(int *)(v8 + 68);
          goto LABEL_13;
        case 10:
          v13 = *(unsigned int *)(v8 + 76);
          goto LABEL_13;
        case 11:
          v13 = *(int *)(v8 + 80);
          goto LABEL_13;
        case 12:
          v13 = *(int *)(v8 + 64);
LABEL_13:
          free_idcv(a2);
          *(_BYTE *)a2 = 2;
          *(_QWORD *)(a2 + 8) = v13;
          return 0;
        default:
          return sub_7D33B0(a2);
      }
    }
  }
  return sub_7D33B0(a2);
}
