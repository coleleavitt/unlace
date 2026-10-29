__int64 __fastcall sub_388CF0(__int64 a1)
{
  __int64 result; // rax
  int v2; // r13d
  _QWORD *v3; // r12
  char v5; // dl
  char v6; // dl
  const void *v7; // rbx
  size_t v8; // rax
  size_t v9; // r14
  __int64 license_manager; // rax
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rax
  time_t v14; // rax
  time_t v15; // rdx
  time_t v16; // rdx
  const void *v17; // rbx
  size_t v18; // rax
  size_t v19; // r14
  _QWORD *v20; // rdx
  void *v21; // rdi
  size_t v22; // r15
  void *v23; // rdi
  size_t v24; // r15
  __int64 v25; // rax
  __int64 v26; // rax

  result = 1;
  v2 = 1;
  v3 = (_QWORD *)(a1 + 208);
  if ( *(_QWORD *)(a1 + 232) > 1u )
  {
    while ( 1 )
    {
      result = *(_QWORD *)(*(_QWORD *)(a1 + 240) + 8 * result);
      if ( *(_BYTE *)result != 45 )
        break;
      if ( *(_BYTE *)(result + 1) == 77 )
      {
        v5 = *(_BYTE *)(result + 2);
        switch ( v5 )
        {
          case 'R':
            v7 = (const void *)(result + 3);
            v8 = strlen((const char *)(result + 3));
            v9 = v8;
            if ( v8 )
            {
              v21 = *(void **)(a1 + 152);
              v22 = v8 + 1;
              if ( *(_QWORD *)(a1 + 168) < v8 + 1 )
              {
                v26 = qvector_reserve(a1 + 152, *(_QWORD *)(a1 + 152), v22, 1);
                *(_QWORD *)(a1 + 152) = v26;
                v21 = (void *)v26;
              }
              *(_QWORD *)(a1 + 160) = v22;
              memmove(v21, v7, v9);
              *(_BYTE *)(*(_QWORD *)(a1 + 152) + v9) = 0;
            }
            else
            {
              *(_QWORD *)(a1 + 160) = 0;
            }
            break;
          case 'B':
            v17 = (const void *)(result + 3);
            v18 = strlen((const char *)(result + 3));
            v19 = v18;
            if ( v18 )
            {
              v23 = *(void **)(a1 + 176);
              v24 = v18 + 1;
              if ( *(_QWORD *)(a1 + 192) < v18 + 1 )
              {
                v25 = qvector_reserve(a1 + 176, *(_QWORD *)(a1 + 176), v24, 1);
                *(_QWORD *)(a1 + 176) = v25;
                v23 = (void *)v25;
              }
              *(_QWORD *)(a1 + 184) = v24;
              memmove(v23, v17, v19);
              *(_BYTE *)(*(_QWORD *)(a1 + 176) + v19) = 0;
            }
            else
            {
              *(_QWORD *)(a1 + 184) = 0;
            }
            break;
          case 'T':
            v6 = *(_BYTE *)(result + 3);
            switch ( v6 )
            {
              case 'L':
                v20 = (_QWORD *)(a1 + 200);
                break;
              case 'R':
                v20 = v3;
                break;
              case 'B':
                v20 = (_QWORD *)(a1 + 216);
                break;
              default:
LABEL_12:
                sub_378C70((__int64)"Wrong -M switch");
            }
            *v20 = result + 4;
            break;
          default:
            goto LABEL_12;
        }
        if ( !*(_BYTE *)(a1 + 275) )
        {
          license_manager = get_license_manager();
          if ( !license_manager )
            goto LABEL_31;
          v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)license_manager + 88LL))(
                  license_manager,
                  0,
                  0);
          if ( !v11 )
            goto LABEL_31;
          v12 = *(_QWORD *)(v11 + 56);
          v13 = v12 + 40LL * *(_QWORD *)(v11 + 64);
          if ( v12 == v13 )
            goto LABEL_31;
          while ( *(_DWORD *)(v12 + 8) != 26 )
          {
            v12 += 40;
            if ( v13 == v12 )
              goto LABEL_31;
          }
          if ( !v12
            || (v14 = time(nullptr), v15 = *(_QWORD *)(v12 + 24), v14 < v15) && v15 != -1
            || (v16 = *(_QWORD *)(v12 + 32)) != 0
            && v14 >= v16 - 2592000
            && v14 >= v16 - 1296000
            && v14 >= v16
            && v14 >= v16 + 1296000
            && v14 >= v16 + 2592000 )
          {
LABEL_31:
            sub_378C70((__int64)"Merge mode requires IDA Teams license");
          }
        }
        ++v2;
        set_merge_state(1);
        *(_BYTE *)(a1 + 275) = 1;
        result = v2;
        if ( (unsigned __int64)v2 >= *(_QWORD *)(a1 + 232) )
          break;
      }
      else
      {
        result = ++v2;
        if ( (unsigned __int64)v2 >= *(_QWORD *)(a1 + 232) )
          break;
      }
    }
  }
  if ( *(_BYTE *)(a1 + 275) )
  {
    if ( *(_QWORD *)(a1 + 160) <= 1u )
      sub_378C70((__int64)"Please specify the remote database with -MR");
  }
  return result;
}
