unsigned __int64 __fastcall sub_1B300(_QWORD *a1, __int16 a2, char a3)
{
  __int64 v3; // rax
  char *v4; // rcx
  char v7; // di
  char v8; // r15
  char v9; // r14
  unsigned __int64 v10; // rdx
  _BYTE *v11; // rcx
  unsigned __int64 v12; // r14
  unsigned __int8 v13; // al
  char *v14; // r13
  _QWORD *v15; // r15
  char *v16; // r8
  char *v17; // rax
  unsigned __int64 v18; // rbx
  size_t v19; // rbx
  _QWORD *v20; // rax
  void *v21; // r8
  unsigned __int64 v22; // r14
  _BYTE *v23; // rax
  int v24; // eax
  char v26; // dl
  char v27; // al
  char v28; // r14
  unsigned __int8 v29; // r14
  unsigned __int64 v30; // r15
  __int64 v31; // rdx
  int v32; // edx
  char *v33; // [rsp+8h] [rbp-70h]
  __int64 v34; // [rsp+18h] [rbp-60h]
  char v35; // [rsp+27h] [rbp-51h] BYREF
  char *v36; // [rsp+28h] [rbp-50h] BYREF
  _QWORD v37[9]; // [rsp+30h] [rbp-48h] BYREF

  v37[1] = __readfsqword(0x28u);
  v3 = a1[4];
  if ( !v3 )
    return 0;
  v4 = (char *)a1[3];
  if ( *v4 == 88 )
  {
    --v3;
    a1[3] = ++v4;
    a1[4] = v3;
    v36 = (char *)(&std::string::_Rep::_S_empty_rep_storage + 3);
    if ( !v3 )
      return 0;
    v7 = 1;
  }
  else
  {
    v7 = 0;
    v36 = (char *)(&std::string::_Rep::_S_empty_rep_storage + 3);
  }
  if ( *v4 == 111 )
  {
    a1[3] = v4 + 1;
    a1[4] = v3 - 1;
    if ( a3 || v3 == 1 )
      return 0;
    v26 = v4[1];
    v3 -= 2;
    a1[3] = v4 + 2;
    a1[4] = v3;
    if ( v26 == 105 )
    {
      a2 = 118;
    }
    else if ( v26 == 112 )
    {
      a2 = 164;
    }
    else
    {
      v22 = 0;
      a2 = 163;
      if ( v26 != 80 )
        return v22;
    }
    if ( !v3 )
      return 0;
    v4 = (char *)a1[3];
    v8 = 1;
  }
  else
  {
    if ( !a3 )
      a2 = 98;
    v8 = 0;
  }
  v9 = *v4;
  v10 = v3 - 1;
  v11 = v4 + 1;
  a1[3] = v11;
  LOBYTE(v12) = v9 - 48;
  a1[4] = v3 - 1;
  if ( (unsigned __int8)v12 > 9u )
    return 0;
  v12 = (char)v12;
  if ( v3 != 1 )
  {
    while ( 1 )
    {
      v13 = *v11 - 48;
      if ( v13 > 9u )
        break;
      --v10;
      a1[3] = ++v11;
      v12 = (char)v13 + 10 * v12;
      a1[4] = v10;
      if ( !v10 )
        goto LABEL_14;
    }
    v10 = a1[4];
  }
LABEL_14:
  if ( v12 > v10 )
    return 0;
  v14 = (char *)a1[3];
  a1[4] = v10 - v12;
  a1[3] = &v14[v12];
  if ( !v7 )
  {
    if ( v12 )
    {
LABEL_17:
      v37[0] = &std::string::_Rep::_S_empty_rep_storage + 3;
      if ( v8 )
      {
        std::string::reserve((std::string *)v37, v12);
        v33 = &v14[v12];
        v23 = (_BYTE *)v37[0];
        do
        {
          v28 = *v14;
          if ( *v14 >= 0 )
          {
            v29 = v28 - 97;
            if ( v29 > 0x19u || (v28 = asc_398C0[(char)v29], v28 == 32) )
            {
              v22 = 0;
              goto LABEL_26;
            }
          }
          v34 = *((_QWORD *)v23 - 3);
          v30 = v34 + 1;
          if ( (unsigned __int64)(v34 + 1) > *((_QWORD *)v23 - 2) || *((int *)v23 - 2) > 0 )
            std::string::reserve((std::string *)v37, v30);
          *(_BYTE *)(v37[0] + *(_QWORD *)(v37[0] - 24LL)) = v28;
          v23 = (_BYTE *)v37[0];
          v31 = v37[0] - 24LL;
          if ( (_QWORD *)(v37[0] - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
          {
            *(_DWORD *)(v37[0] - 8LL) = 0;
            *((_QWORD *)v23 - 3) = v30;
            *(_BYTE *)(v31 + v34 + 25) = 0;
            v23 = (_BYTE *)v37[0];
          }
          ++v14;
        }
        while ( v33 != v14 );
        v12 = *((_QWORD *)v23 - 3);
        v15 = (_QWORD *)a1[5];
        if ( !v12 )
        {
          v21 = nullptr;
          goto LABEL_25;
        }
        v14 = v23;
      }
      else
      {
        v15 = (_QWORD *)a1[5];
      }
      v16 = (char *)v15[1];
      if ( !v16 || (v17 = &v16[v12], (unsigned __int64)&v16[v12] > v15[2]) )
      {
        v18 = 2LL * v15[4];
        if ( v18 < v12 + 1 )
          v18 = v12 + 1;
        v15[4] = v18;
        v19 = v18 + 8;
        v20 = malloc(v19);
        v16 = (char *)(v20 + 1);
        *v20 = v15[3];
        v15[3] = v20;
        v15[2] = (char *)v20 + v19;
        v17 = (char *)v20 + v12 + 8;
      }
      v15[1] = v17;
      v21 = memmove(v16, v14, v12);
LABEL_25:
      v22 = sub_C510(v15, a2, (__int64)v21, v12);
      v23 = (_BYTE *)v37[0];
LABEL_26:
      if ( v23 - 24 != (_BYTE *)&std::string::_Rep::_S_empty_rep_storage )
      {
        if ( &_pthread_key_create )
        {
          v32 = _InterlockedExchangeAdd((volatile signed __int32 *)v23 - 2, 0xFFFFFFFF);
        }
        else
        {
          v32 = *((_DWORD *)v23 - 2);
          *((_DWORD *)v23 - 2) = v32 - 1;
        }
        if ( v32 <= 0 )
          std::string::_Rep::_M_destroy(v23 - 24, &v35);
      }
      v14 = v36;
      goto LABEL_28;
    }
    return 0;
  }
  v27 = sub_32100(v14, v12, &v36);
  v14 = v36;
  if ( v27 )
  {
    v12 = *((_QWORD *)v36 - 3);
    if ( v12 )
      goto LABEL_17;
  }
  v22 = 0;
LABEL_28:
  if ( v14 - 24 != (char *)&std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v24 = _InterlockedExchangeAdd((volatile signed __int32 *)v14 - 2, 0xFFFFFFFF);
    }
    else
    {
      v24 = *((_DWORD *)v14 - 2);
      *((_DWORD *)v14 - 2) = v24 - 1;
    }
    if ( v24 <= 0 )
      std::string::_Rep::_M_destroy(v14 - 24, v37);
  }
  return v22;
}
