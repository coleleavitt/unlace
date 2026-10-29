char *__fastcall sub_1250A00(__int64 a1)
{
  unsigned __int8 *v1; // rax
  __int64 v2; // r12
  unsigned int v4; // r14d
  __int64 v5; // r13
  char v6; // al
  __int64 (__fastcall *v7)(__int64, unsigned int); // rcx
  _BYTE *v8; // rcx
  __int64 v9; // rdx
  char *result; // rax
  _QWORD *v11; // rdi
  char v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rdx
  char *v16; // rax
  __int64 v17; // rdx
  _BYTE *v18; // rax
  char *v19; // rax
  int v20; // ebp

  v1 = *(unsigned __int8 **)(a1 + 176);
  if ( v1 == *(unsigned __int8 **)(a1 + 184) )
    goto LABEL_44;
  v2 = *(_QWORD *)(a1 + 192);
  *(_QWORD *)(a1 + 176) = v1 + 1;
  v4 = (char)*v1;
  v5 = *v1;
  v6 = *(_BYTE *)(v2 + v5 + 313);
  if ( !v6 )
  {
    v7 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v2 + 64LL);
    v6 = v4;
    if ( v7 != sub_124D710 )
      v6 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD))v7)(v2, v4, 0);
    if ( !v6 )
    {
      v8 = *(_BYTE **)(a1 + 152);
      if ( *v8 )
      {
LABEL_11:
        while ( 1 )
        {
          v8 += 2;
          if ( !*v8 )
            break;
          if ( *v8 == v6 )
            goto LABEL_23;
        }
      }
LABEL_12:
      if ( (_BYTE)v4 == 98 )
      {
LABEL_25:
        v9 = *(_QWORD *)(a1 + 208);
        v11 = (_QWORD *)(a1 + 200);
        v12 = 112;
        *(_DWORD *)(a1 + 144) = 24;
        return (char *)sub_998CE0(v11, 0, v9, 1u, v12);
      }
      if ( (_BYTE)v4 == 66 )
      {
        v15 = *(_QWORD *)(a1 + 208);
        *(_DWORD *)(a1 + 144) = 24;
        return (char *)sub_998CE0((_QWORD *)(a1 + 200), 0, v15, 1u, 110);
      }
      if ( (unsigned __int8)(v4 - 68) > 0x33u )
        goto LABEL_16;
      v14 = 0x8800100088001LL;
      if ( _bittest64(&v14, v4 - 68) )
      {
        *(_DWORD *)(a1 + 144) = 14;
        return (char *)sub_998CE0((_QWORD *)(a1 + 200), 0, *(_QWORD *)(a1 + 208), 1u, v4);
      }
      if ( (_BYTE)v4 == 99 )
      {
        v16 = *(char **)(a1 + 176);
        if ( v16 != *(char **)(a1 + 184) )
        {
          *(_QWORD *)(a1 + 176) = v16 + 1;
          v17 = *(_QWORD *)(a1 + 208);
          *(_DWORD *)(a1 + 144) = 1;
          return (char *)sub_998CE0((_QWORD *)(a1 + 200), 0, v17, 1u, *v16);
        }
      }
      else
      {
LABEL_16:
        if ( (_BYTE)v4 != 120 && (_BYTE)v4 != 117 )
        {
          v9 = *(_QWORD *)(a1 + 208);
          if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 192) + 48LL) + 2LL * (unsigned __int8)v4 + 1) & 8) == 0 )
          {
            v12 = v4;
            v11 = (_QWORD *)(a1 + 200);
            *(_DWORD *)(a1 + 144) = 1;
            return (char *)sub_998CE0(v11, 0, v9, 1u, v12);
          }
          sub_998CE0((_QWORD *)(a1 + 200), 0, v9, 1u, v4);
          for ( result = *(char **)(a1 + 176); result != *(char **)(a1 + 184); result = *(char **)(a1 + 176) )
          {
            if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 192) + 48LL) + 2LL * (unsigned __int8)*result + 1) & 8) == 0 )
              break;
            *(_QWORD *)(a1 + 176) = result + 1;
            sub_A6F610((_QWORD *)(a1 + 200), *result);
          }
          *(_DWORD *)(a1 + 144) = 4;
          return result;
        }
        v18 = *(_BYTE **)(a1 + 200);
        *(_QWORD *)(a1 + 208) = 0;
        *v18 = 0;
        v19 = *(char **)(a1 + 176);
        if ( *(char **)(a1 + 184) != v19
          && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 192) + 48LL) + 2LL * (unsigned __int8)*v19 + 1) & 0x10) != 0 )
        {
          v20 = 0;
          while ( 1 )
          {
            ++v20;
            *(_QWORD *)(a1 + 176) = v19 + 1;
            result = (char *)sub_A6F610((_QWORD *)(a1 + 200), *v19);
            if ( 2 * ((_BYTE)v4 != 120) + 2 == v20 )
              break;
            v19 = *(char **)(a1 + 176);
            if ( v19 == *(char **)(a1 + 184)
              || (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 192) + 48LL) + 2LL * (unsigned __int8)*v19 + 1) & 0x10) == 0 )
            {
              goto LABEL_44;
            }
          }
          *(_DWORD *)(a1 + 144) = 3;
          return result;
        }
      }
LABEL_44:
      abort();
    }
    *(_BYTE *)(v2 + v5 + 313) = v6;
  }
  v8 = *(_BYTE **)(a1 + 152);
  if ( !*v8 )
    goto LABEL_12;
  if ( v6 != *v8 )
    goto LABEL_11;
LABEL_23:
  if ( (_BYTE)v4 == 98 && *(_DWORD *)(a1 + 136) != 2 )
    goto LABEL_25;
  v13 = *(_QWORD *)(a1 + 208);
  *(_DWORD *)(a1 + 144) = 1;
  return (char *)sub_998CE0((_QWORD *)(a1 + 200), 0, v13, 1u, v8[1]);
}
