unsigned __int64 __fastcall sub_123D0(__int64 a1)
{
  unsigned __int64 v1; // r10
  unsigned __int64 v2; // rax
  __int64 v3; // rdx
  char v5; // cl
  unsigned __int64 v6; // rbx
  char v7; // r15
  char v8; // bp
  __int64 v9; // rdx
  unsigned int v10; // eax
  __int64 v11; // rbp
  char *v12; // r14
  unsigned __int64 v13; // r13
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rbx
  _QWORD *v16; // rax
  __int64 v17; // rdx
  volatile signed __int32 *v18; // rdi
  int v19; // eax
  int v21; // eax
  unsigned __int64 v22; // r10
  int v23; // r14d
  unsigned __int64 v24; // rdi
  __int64 v25; // rbx
  unsigned __int64 v26; // rdi
  volatile signed __int32 *v27; // rdi
  _BYTE *v28; // rcx
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // ecx
  char v33; // dl
  char v34; // r8
  int v35; // r9d
  __int64 v36; // rdi
  int v37; // r10d
  __int64 v38; // rdi
  int v39; // edx
  char *v40; // [rsp+8h] [rbp-70h]
  char v41; // [rsp+17h] [rbp-61h] BYREF
  volatile signed __int32 *v42; // [rsp+18h] [rbp-60h] BYREF
  char *v43; // [rsp+20h] [rbp-58h] BYREF
  __int64 v44; // [rsp+28h] [rbp-50h]
  unsigned __int64 v45; // [rsp+38h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 64);
  v45 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 72);
  if ( v1 <= v2 )
    return 0;
  v3 = *(_QWORD *)(a1 + 56);
  v5 = *(_BYTE *)(v3 + v2);
  if ( (unsigned __int8)(v5 - 48) > 9u )
    return 0;
  if ( v5 == 48 )
  {
    v6 = v2 + 1;
    v7 = 0;
    v8 = 1;
    *(_QWORD *)(a1 + 72) = v2 + 1;
    if ( v1 > v2 + 1 && *(_BYTE *)(v3 + v2 + 1) == 48 )
    {
      v6 = v2 + 2;
      v7 = 1;
      v8 = 0;
      *(_QWORD *)(a1 + 72) = v2 + 2;
    }
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 72);
    v7 = 0;
    v8 = 0;
  }
  v43 = nullptr;
  v44 = 0;
  while ( 1 )
  {
    if ( !v8 )
    {
      if ( v1 <= v6 )
        goto LABEL_28;
      v9 = *(_QWORD *)(a1 + 56);
      goto LABEL_11;
    }
    while ( v6 >= v1 )
    {
      v8 = 1;
LABEL_28:
      v21 = sub_D100((_QWORD *)a1);
      v23 = v21;
      if ( v21 <= 0 )
        return 0;
      v24 = *(_QWORD *)(a1 + 72);
      v25 = v21;
      if ( !v7 )
      {
        if ( v22 >= v21 + v24 )
        {
          v40 = (char *)(v24 + *(_QWORD *)(a1 + 56));
          sub_C6F0(&v43, v40, v21, (_QWORD *)a1);
          v31 = 0;
          v32 = -1;
          while ( 1 )
          {
            if ( v23 > v31 )
            {
              v33 = v40[v31];
              if ( v32 < 0 )
                goto LABEL_65;
              if ( v33 == 95
                || !v33
                || (unsigned __int8)(v40[v31 - 1] - 65) > 0x19u && (unsigned __int8)(v33 - 65) <= 0x19u )
              {
                v34 = v33 - 48;
                v35 = v31 - v32;
                if ( v31 - v32 > 1 )
                {
LABEL_55:
                  v36 = *(int *)(a1 + 536);
                  if ( (int)v36 <= 25 )
                  {
                    v37 = v36 + 1;
                    v38 = a1 + 16 * v36;
                    *(_DWORD *)(a1 + 536) = v37;
                    *(_QWORD *)(v38 + 128) = v35;
                    *(_QWORD *)(v38 + 120) = &v40[v32];
                    v32 = -1;
                    goto LABEL_57;
                  }
                }
                v32 = -1;
                goto LABEL_57;
              }
            }
            else if ( v32 >= 0 )
            {
              v34 = -48;
              v33 = 0;
              v35 = v31 - v32;
              if ( v31 - v32 > 1 )
                goto LABEL_55;
              if ( v23 < ++v31 )
                goto LABEL_36;
              v32 = -1;
              if ( v23 > v31 )
              {
                v33 = v40[v31];
LABEL_65:
                v34 = v33 - 48;
LABEL_57:
                if ( (unsigned __int8)v34 > 9u && v33 && v33 != 95 )
                  v32 = v31;
              }
            }
            if ( v23 < ++v31 )
              goto LABEL_36;
          }
        }
        return 0;
      }
      if ( v24 < v22 && *(_BYTE *)(*(_QWORD *)(a1 + 56) + v24) == 95 )
        *(_QWORD *)(a1 + 72) = ++v24;
      if ( v24 + v21 > v22 )
        return 0;
      v26 = *(_QWORD *)(a1 + 56) + v24;
      v42 = (volatile signed __int32 *)(&std::string::_Rep::_S_empty_rep_storage + 3);
      if ( !(unsigned __int8)sub_32100(v26, v21, &v42) )
      {
        v18 = v42 - 6;
        if ( v42 - 6 != (volatile signed __int32 *)&std::string::_Rep::_S_empty_rep_storage )
        {
          if ( &_pthread_key_create )
          {
            v19 = _InterlockedExchangeAdd(v42 - 2, 0xFFFFFFFF);
          }
          else
          {
            v19 = *((_DWORD *)v42 - 2);
            *((_DWORD *)v42 - 2) = v19 - 1;
          }
          if ( v19 <= 0 )
            std::string::_Rep::_M_destroy(v18, &v41);
        }
        return 0;
      }
      sub_C6F0(&v43, (const void *)v42, *((_QWORD *)v42 - 3), (_QWORD *)a1);
      v27 = v42 - 6;
      if ( v42 - 6 != (volatile signed __int32 *)&std::string::_Rep::_S_empty_rep_storage )
      {
        if ( &_pthread_key_create )
        {
          v39 = _InterlockedExchangeAdd(v42 - 2, 0xFFFFFFFF);
        }
        else
        {
          v39 = *((_DWORD *)v42 - 2);
          *((_DWORD *)v42 - 2) = v39 - 1;
        }
        if ( v39 <= 0 )
          std::string::_Rep::_M_destroy(v27, &v41);
      }
LABEL_36:
      v6 = *(_QWORD *)(a1 + 72) + v25;
      *(_QWORD *)(a1 + 72) = v6;
      if ( !v8 )
        goto LABEL_13;
      v1 = *(_QWORD *)(a1 + 64);
    }
    v9 = *(_QWORD *)(a1 + 56);
    v28 = (_BYTE *)(v9 + v6);
    if ( (unsigned __int8)((*(_BYTE *)(v9 + v6) & 0xDF) - 65) > 0x19u )
      break;
    *(_QWORD *)(a1 + 72) = v6 + 1;
    v29 = (char)*v28;
    if ( (unsigned __int8)(*v28 - 97) > 0x19u )
    {
      v30 = v29 - 65;
      v8 = 0;
    }
    else
    {
      v30 = v29 - 97;
      v8 = 1;
    }
    if ( *(_DWORD *)(a1 + 536) <= v30 )
      return 0;
    sub_C6F0(&v43, *(const void **)(16LL * v30 + a1 + 120), *(_QWORD *)(16LL * v30 + a1 + 128), (_QWORD *)a1);
    v6 = *(_QWORD *)(a1 + 72);
    v1 = *(_QWORD *)(a1 + 64);
  }
  v8 = 1;
LABEL_11:
  if ( *(_BYTE *)(v9 + v6) != 48 )
    goto LABEL_28;
  *(_QWORD *)(a1 + 72) = v6 + 1;
LABEL_13:
  v10 = v44;
  if ( !(_DWORD)v44 )
    return 0;
  v11 = (unsigned int)v44;
  v12 = v43;
  v13 = (*(_QWORD *)(a1 + 8) + 7LL) & 0xFFFFFFFFFFFFFFF8LL;
  if ( v13 && v13 + 24 <= *(_QWORD *)(a1 + 16) )
  {
    *(_QWORD *)(a1 + 8) = v13 + 24;
    *(_WORD *)(v13 + 16) = 98;
    *(_BYTE *)(v13 + 18) = 1;
    *(_QWORD *)v13 = v12;
    *(_QWORD *)(v13 + 8) = v10;
    v42 = (volatile signed __int32 *)v13;
LABEL_19:
    sub_11EC0(a1 + 104, (__int64 *)&v42, (_QWORD *)a1);
    return v13;
  }
  v14 = 2LL * *(_QWORD *)(a1 + 32);
  if ( v14 < 0x20 )
    v14 = 32;
  *(_QWORD *)(a1 + 32) = v14;
  v15 = v14 + 8;
  v16 = malloc(v14 + 8);
  v17 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 24) = v16;
  *v16 = v17;
  v13 = ((unsigned __int64)v16 + 15) & 0xFFFFFFFFFFFFFFF8LL;
  *(_QWORD *)(a1 + 16) = (char *)v16 + v15;
  *(_QWORD *)(a1 + 8) = v13 + 24;
  v42 = (volatile signed __int32 *)v13;
  *(_WORD *)(v13 + 16) = 98;
  *(_BYTE *)(v13 + 18) = 1;
  *(_QWORD *)v13 = v12;
  *(_QWORD *)(v13 + 8) = v11;
  if ( v13 )
    goto LABEL_19;
  return v13;
}

