__int64 __fastcall sub_358E80(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6)
{
  _QWORD *v7; // rbx
  _QWORD *v8; // rbp
  __int64 v9; // rdi
  bool v10; // zf
  unsigned int v11; // eax
  __int64 result; // rax
  char v13; // dl
  __int64 v14; // rbx
  unsigned int v15; // eax
  int v16; // ebp
  int v17; // eax
  const char *v18; // rsi
  _QWORD *v19; // rbx
  __int64 v20; // rdi
  void (***v21)(void); // rdi
  unsigned int v22; // eax
  int v23; // ebx
  int v24; // eax
  _QWORD *v25; // rbp
  __int64 v26; // rdi
  _DWORD *v27; // rbp
  _QWORD *v28; // rdx
  _QWORD *v29; // r15
  void *v30; // rdi
  void *v31; // [rsp+0h] [rbp-78h]
  unsigned int v32; // [rsp+0h] [rbp-78h]
  void *v33; // [rsp+0h] [rbp-78h]
  _QWORD *v34; // [rsp+8h] [rbp-70h]
  int v35[2]; // [rsp+28h] [rbp-50h] BYREF
  void *ptr; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v37[8]; // [rsp+38h] [rbp-40h] BYREF

  v7 = *(_QWORD **)(a1 + 208);
  if ( v7 )
  {
    v8 = &v7[*((unsigned int *)v7 - 1)];
    if ( v7 >= v8 )
      goto LABEL_9;
    do
    {
      while ( 1 )
      {
        a2 = *v7;
        if ( *v7 )
        {
          v9 = *(_QWORD *)(a1 + 200);
          v10 = (*(_DWORD *)(a2 + 8))-- == 1;
          if ( v10 )
            break;
        }
        if ( ++v7 >= v8 )
          goto LABEL_8;
      }
      sub_15D7BC0(v9, a2);
      ++v7;
    }
    while ( v7 < v8 );
LABEL_8:
    v7 = *(_QWORD **)(a1 + 208);
    if ( v7 )
LABEL_9:
      *((_DWORD *)v7 - 1) = 0;
  }
  v11 = *(_DWORD *)(a1 + 280);
  if ( v11 != 1 )
  {
    if ( v11 > 1 && v11 - 2 > 2 || !(unsigned __int8)sub_300830(a1, a2, a3, a4, a5, a6) )
      return 0;
    sub_351A40(a1);
    v18 = *(const char **)(a1 + 560);
    sub_302130(a1, v18);
    if ( *(_BYTE *)(a1 + 551) )
    {
      v37[0] = 0;
      v19 = (_QWORD *)sub_2FF8B0(a1);
      v18 = (const char *)v37;
      (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v19 + 32LL))(v19, v37);
      if ( v37[0]
        && ((v20 = v19[7]) == 0
         || (v18 = (const char *)v37,
             (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v20 + 32LL))(v20, v37),
             v37[0])) )
      {
        v18 = (const char *)v37;
        sub_34D6E0(a1, v37);
        v21 = (void (***)(void))v37[0];
      }
      else
      {
        v21 = nullptr;
      }
      sub_349130(v21);
    }
    v33 = (void *)(a1 + 72);
    while ( 1 )
    {
      if ( (*(_BYTE *)(a1 + 92) & 1) != 0
        || *(_DWORD *)(a1 + 88) != 1
        || (*(_BYTE *)(a1 + 124) & 1) != 0
        || *(_DWORD *)(a1 + 120) != 1 )
      {
        v18 = (const char *)(a1 + 72);
        LOBYTE(v22) = sub_1848D40(qword_1C7F2C0, v33, a1 + 104);
      }
      else if ( (*(_BYTE *)(a1 + 76) & 1) != 0 || (*(_BYTE *)(a1 + 108) & 1) != 0 )
      {
        v18 = (const char *)(a1 + 72);
        v22 = (unsigned int)sub_182C7B0(qword_1C7F2C0, v33, a1 + 104) >> 31;
      }
      else
      {
        LOBYTE(v22) = *(_DWORD *)(a1 + 72) < *(_DWORD *)(a1 + 104);
      }
      if ( !(_BYTE)v22 )
        break;
      v18 = (const char *)(a1 + 184);
      v23 = sub_353400(a1, (__m128i *)(a1 + 184));
      if ( !(unsigned __int8)sub_18290A0(*(_QWORD *)(a1 + 8)) || !v23 )
        return 0;
      if ( v23 == 1 )
      {
        sub_34A530(a1, (__int64)v18);
        return 1;
      }
      if ( v23 == -1 )
      {
        v24 = sub_358840(a1);
        if ( v24 == -1 )
        {
          v18 = (const char *)(a1 + 72);
          sub_27B950((__int64)qword_1C7F2C0, (__int64)v33, (int *)(a1 + 104));
        }
        else if ( !v24 )
        {
          return 0;
        }
      }
    }
    sub_34A530(a1, (__int64)v18);
    sub_302130(a1, *(const char **)(a1 + 560));
    return 1;
  }
  v13 = sub_300830(a1, a2, a3, a4, a5, a6);
  result = 0;
  if ( !v13 )
    return result;
  v14 = 0;
  sub_351A40(a1);
  sub_302130(a1, *(const char **)(a1 + 560));
  v31 = (void *)(a1 + 72);
  while ( 1 )
  {
    if ( (*(_BYTE *)(a1 + 92) & 1) != 0
      || *(_DWORD *)(a1 + 88) != 1
      || (*(_BYTE *)(a1 + 124) & 1) != 0
      || *(_DWORD *)(a1 + 120) != 1 )
    {
      LOBYTE(v15) = sub_1848D40(qword_1C7F2C0, v31, a1 + 104);
    }
    else if ( (*(_BYTE *)(a1 + 76) & 1) != 0 || (*(_BYTE *)(a1 + 108) & 1) != 0 )
    {
      v15 = (unsigned int)sub_182C7B0(qword_1C7F2C0, v31, a1 + 104) >> 31;
    }
    else
    {
      LOBYTE(v15) = *(_DWORD *)(a1 + 72) < *(_DWORD *)(a1 + 104);
    }
    if ( !(_BYTE)v15 )
      break;
    v16 = sub_353400(a1, (__m128i *)(a1 + 184));
    if ( !(unsigned __int8)sub_18290A0(*(_QWORD *)(a1 + 8)) || !v16 )
    {
LABEL_28:
      result = 0;
      goto LABEL_29;
    }
    if ( v16 == 1 )
    {
      ptr = nullptr;
      v25 = (_QWORD *)sub_2FF8B0(a1);
      (*(void (__fastcall **)(_QWORD *, void **))(*v25 + 32LL))(v25, &ptr);
      if ( ptr )
      {
        v26 = v25[7];
        if ( v26 )
          (*(void (__fastcall **)(__int64, void **))(*(_QWORD *)v26 + 32LL))(v26, &ptr);
      }
      sub_34D6E0(a1, &ptr);
      v27 = ptr;
      if ( v14 )
      {
        *(_DWORD *)(v14 - 4) = 0;
        if ( !v27 )
          goto LABEL_67;
        v28 = *(_QWORD **)(a1 + 192);
        if ( v28 )
        {
          v34 = &v28[*((unsigned int *)v28 - 1)];
          if ( v34 == v28 )
            goto LABEL_61;
LABEL_56:
          v29 = v28;
          do
          {
            v37[0] = *v29;
            if ( (unsigned __int8)sub_13742D0(v27, v37[0]) )
            {
              *(_QWORD *)v35 = v14;
              sub_349180(v35, v37);
              v14 = *(_QWORD *)v35;
            }
            ++v29;
          }
          while ( v34 != v29 );
          v27 = ptr;
          if ( ptr )
          {
LABEL_61:
            v10 = v27[4]-- == 1;
            if ( !v10 )
              goto LABEL_62;
LABEL_81:
            (**(void (__fastcall ***)(_DWORD *))v27)(v27);
            sub_186B220(v27);
          }
LABEL_62:
          if ( v14 )
            goto LABEL_63;
LABEL_66:
          v14 = 0;
          goto LABEL_67;
        }
        v10 = v27[4]-- == 1;
        if ( v10 )
          goto LABEL_81;
LABEL_63:
        if ( !*(_DWORD *)(v14 - 4) )
          goto LABEL_67;
        *(_QWORD *)v35 = v14;
        sub_351740(a1, (__int64 **)v35);
      }
      else
      {
        if ( ptr )
        {
          v28 = *(_QWORD **)(a1 + 192);
          if ( v28 )
          {
            v34 = &v28[*((unsigned int *)v28 - 1)];
            if ( v28 != v34 )
              goto LABEL_56;
            goto LABEL_61;
          }
          v10 = (*((_DWORD *)ptr + 4))-- == 1;
          if ( v10 )
            goto LABEL_81;
          goto LABEL_66;
        }
LABEL_67:
        v30 = qword_1C7F2C0;
        *(_BYTE *)(a1 + 532) = *(_QWORD *)(a1 + 136) != 0;
        sub_27B950((__int64)v30, (__int64)v31, (int *)(a1 + 104));
      }
    }
    else if ( v16 == -1 )
    {
      v17 = sub_358840(a1);
      if ( v17 == -1 )
      {
        sub_27B950((__int64)qword_1C7F2C0, (__int64)v31, (int *)(a1 + 104));
      }
      else if ( !v17 )
      {
        goto LABEL_28;
      }
    }
  }
  sub_27B950((__int64)qword_1C7F2C0, (__int64)v31, (int *)(a1 + 104));
  sub_302130(a1, *(const char **)(a1 + 560));
  result = 1;
LABEL_29:
  if ( v14 )
  {
    v32 = result;
    sub_186B220((void *)(v14 - 8));
    return v32;
  }
  return result;
}

