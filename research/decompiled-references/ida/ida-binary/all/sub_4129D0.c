__int64 __fastcall kernel_notification_hub_t::idp_listener_impl_t__::vfunc_0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ecx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rsi
  __int64 v9; // r8
  unsigned int *v10; // rdx
  unsigned int v12; // edx
  _QWORD *v13; // rcx
  unsigned int v14; // ecx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rsi
  __int64 v19; // r8
  unsigned int *v20; // rdx
  unsigned int v21; // edx
  unsigned int *v22; // rcx
  unsigned int v23; // ecx
  __int64 v24; // rdx
  __int64 v25; // rsi
  __int64 v26; // r8
  _QWORD *v27; // rdx
  unsigned int v28; // ecx
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rsi
  __int64 v33; // r8
  _DWORD *v34; // rdx
  __int64 *v35; // rdx
  _QWORD *v36; // rcx
  __int64 *v37; // rcx
  __int64 *v38; // rdx
  _QWORD *v39; // rcx
  __int64 *v40; // rdx
  _QWORD *v41; // rcx

  if ( a2 <= 94 )
  {
    if ( a2 <= 62 )
    {
      switch ( a2 )
      {
        case 1LL:
          sub_4753F0(*(_QWORD *)(a1 + 16));
          break;
        case 5LL:
          sub_475410(*(_QWORD *)(a1 + 16));
          break;
        case 0LL:
          sub_4753D0(*(_QWORD *)(a1 + 16));
          break;
      }
      return 0;
    }
    switch ( a2 )
    {
      case '?':
        v4 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v38 = *(__int64 **)(a3 + 8);
          v39 = v38 + 1;
          *(_QWORD *)(a3 + 8) = v38 + 1;
          v7 = *v38;
        }
        else
        {
          v5 = *(_QWORD *)(a3 + 16);
          v6 = v4 + 8;
          *(_DWORD *)a3 = v6;
          v7 = *(_QWORD *)(v5 + v4);
          if ( (unsigned int)v6 <= 0x2F )
          {
            v8 = v4 + 16;
            *(_DWORD *)a3 = v8;
            v9 = *(_QWORD *)(v5 + v6);
            if ( (unsigned int)v8 <= 0x2F )
            {
              v10 = (unsigned int *)(v8 + v5);
              *(_DWORD *)a3 = v4 + 24;
LABEL_8:
              sub_4751B0(*(_QWORD *)(a1 + 16), v7, v9, *v10);
              return 0;
            }
            v10 = *(unsigned int **)(a3 + 8);
LABEL_45:
            *(_QWORD *)(a3 + 8) = v10 + 2;
            goto LABEL_8;
          }
          v39 = *(_QWORD **)(a3 + 8);
        }
        v10 = (unsigned int *)(v39 + 1);
        *(_QWORD *)(a3 + 8) = v39 + 1;
        v9 = *v39;
        goto LABEL_45;
      case '@':
        v14 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v40 = *(__int64 **)(a3 + 8);
          v41 = v40 + 1;
          *(_QWORD *)(a3 + 8) = v40 + 1;
          v17 = *v40;
        }
        else
        {
          v15 = *(_QWORD *)(a3 + 16);
          v16 = v14 + 8;
          *(_DWORD *)a3 = v16;
          v17 = *(_QWORD *)(v15 + v14);
          if ( (unsigned int)v16 <= 0x2F )
          {
            v18 = v14 + 16;
            *(_DWORD *)a3 = v18;
            v19 = *(_QWORD *)(v15 + v16);
            if ( (unsigned int)v18 <= 0x2F )
            {
              v20 = (unsigned int *)(v18 + v15);
              *(_DWORD *)a3 = v14 + 24;
LABEL_22:
              sub_475240(*(_QWORD *)(a1 + 16), v17, v19, *v20);
              return 0;
            }
            v20 = *(unsigned int **)(a3 + 8);
LABEL_48:
            *(_QWORD *)(a3 + 8) = v20 + 2;
            goto LABEL_22;
          }
          v41 = *(_QWORD **)(a3 + 8);
        }
        v20 = (unsigned int *)(v41 + 1);
        *(_QWORD *)(a3 + 8) = v41 + 1;
        v19 = *v41;
        goto LABEL_48;
      case 'A':
        v28 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v35 = *(__int64 **)(a3 + 8);
          v36 = v35 + 1;
          *(_QWORD *)(a3 + 8) = v35 + 1;
          v31 = *v35;
        }
        else
        {
          v29 = *(_QWORD *)(a3 + 16);
          v30 = v28 + 8;
          *(_DWORD *)a3 = v30;
          v31 = *(_QWORD *)(v29 + v28);
          if ( (unsigned int)v30 <= 0x2F )
          {
            v32 = v28 + 16;
            *(_DWORD *)a3 = v32;
            v33 = *(_QWORD *)(v29 + v30);
            if ( (unsigned int)v32 <= 0x2F )
            {
              v34 = (_DWORD *)(v32 + v29);
              *(_DWORD *)a3 = v28 + 24;
LABEL_35:
              sub_4752D0(*(_QWORD *)(a1 + 16), v31, v33, *v34 != 0);
              return 0;
            }
            v34 = *(_DWORD **)(a3 + 8);
LABEL_39:
            *(_QWORD *)(a3 + 8) = v34 + 2;
            goto LABEL_35;
          }
          v36 = *(_QWORD **)(a3 + 8);
        }
        v34 = v36 + 1;
        *(_QWORD *)(a3 + 8) = v36 + 1;
        v33 = *v36;
        goto LABEL_39;
      case 'B':
        v23 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v37 = *(__int64 **)(a3 + 8);
          v27 = v37 + 1;
          *(_QWORD *)(a3 + 8) = v37 + 1;
          v26 = *v37;
        }
        else
        {
          v24 = *(_QWORD *)(a3 + 16);
          v25 = v23 + 8;
          *(_DWORD *)a3 = v25;
          v26 = *(_QWORD *)(v24 + v23);
          if ( (unsigned int)v25 <= 0x2F )
          {
            v27 = (_QWORD *)(v25 + v24);
            *(_DWORD *)a3 = v23 + 16;
LABEL_30:
            sub_475360(*(_QWORD *)(a1 + 16), v26, *v27);
            return 0;
          }
          v27 = *(_QWORD **)(a3 + 8);
        }
        *(_QWORD *)(a3 + 8) = v27 + 1;
        goto LABEL_30;
      case 'F':
        v21 = *(_DWORD *)a3;
        if ( v21 > 0x2F )
        {
          v22 = *(unsigned int **)(a3 + 8);
          *(_QWORD *)(a3 + 8) = v22 + 2;
        }
        else
        {
          v22 = (unsigned int *)(*(_QWORD *)(a3 + 16) + v21);
          *(_DWORD *)a3 = v21 + 8;
        }
        sub_475110(*(_QWORD *)(a1 + 16), *v22);
        return 0;
      case 'V':
        sub_475430(*(_QWORD *)(a1 + 16));
        return 0;
      case '^':
        v12 = *(_DWORD *)a3;
        if ( v12 > 0x2F )
        {
          v13 = *(_QWORD **)(a3 + 8);
          *(_QWORD *)(a3 + 8) = v13 + 1;
        }
        else
        {
          v13 = (_QWORD *)(*(_QWORD *)(a3 + 16) + v12);
          *(_DWORD *)a3 = v12 + 8;
        }
        sub_475450(*(_QWORD *)(a1 + 16), *v13);
        return 0;
      default:
        return 0;
    }
  }
  return 0;
}
