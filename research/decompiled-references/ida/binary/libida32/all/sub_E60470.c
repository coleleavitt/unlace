_BYTE *__fastcall sub_E60470(__int64 a1, __int64 a2, __int64 a3, _BOOL8 a4)
{
  const char *v4; // rsi
  bool v5; // r14
  bool v6; // r12
  __int64 v8; // rbx
  __int64 *v9; // rax
  __int64 v10; // r13
  __int64 v11; // rdi
  _BYTE *result; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int64 *v17; // rax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rax
  __int64 v21; // rax
  char v22; // al
  char v23; // al
  __int64 v24; // rdi
  bool v25; // zf
  _BYTE *v26; // rax
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rax
  __int64 v29; // rax
  char v30; // al
  __int64 v31; // rdi
  _BYTE *v32; // rax
  char v33; // al
  __int64 v34; // rdi
  _BYTE *v35; // rax
  __int64 v36; // rdi
  _BYTE *v37; // rax

  v4 = (const char *)(a2 & 0xFFFFFFFFFFFFFFF8LL);
  v5 = a4;
  v6 = a4;
  v8 = *((_QWORD *)v4 + 14);
  v9 = (__int64 *)(*(_QWORD *)(v8 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  v10 = *v9;
  if ( *(_BYTE *)(*v9 + 16) != 26 )
    v10 = sub_F3F310(*v9, v4, a3, a4);
  if ( !v5 )
  {
    v11 = *(_QWORD *)(a1 + 8);
    result = *(_BYTE **)(v11 + 32);
    if ( (unsigned __int64)result >= *(_QWORD *)(v11 + 24) )
      return (_BYTE *)sub_2257CD0(v11, 57);
    *(_QWORD *)(v11 + 32) = result + 1;
    *result = 57;
    return result;
  }
  if ( (unsigned __int8)sub_B5E4E0(v8) && (*(_BYTE *)(v8 + 29) & 1) != 0 )
  {
    v17 = sub_B68690(v8, (__int64)v4, v13, v14, v15, v16);
    v18 = *v17;
    v19 = *v17 + 8LL * *((unsigned int *)v17 + 2);
    if ( *v17 >= v19 )
    {
      if ( v18 == v19 )
        goto LABEL_13;
      while ( *(_WORD *)(*(_QWORD *)v19 + 36LL) != 435 )
      {
        v19 += 8LL;
        if ( v18 == v19 )
          goto LABEL_13;
      }
    }
    else
    {
      v20 = *v17;
      while ( *(_WORD *)(*(_QWORD *)v20 + 36LL) != 435 )
      {
        v20 += 8LL;
        if ( v19 == v20 )
          goto LABEL_13;
      }
      if ( v19 == v20 )
        goto LABEL_13;
    }
    v4 = "$$J0";
    sub_971800(*(_QWORD *)(a1 + 8), "$$J0");
  }
LABEL_13:
  if ( (*(_BYTE *)(v8 + 28) & 0x7Fu) - 35 > 3 )
  {
    v36 = *(_QWORD *)(a1 + 8);
    v37 = *(_BYTE **)(v36 + 32);
    if ( (unsigned __int64)v37 >= *(_QWORD *)(v36 + 24) )
    {
      sub_2257CD0(v36, 89);
    }
    else
    {
      *(_QWORD *)(v36 + 32) = v37 + 1;
      *v37 = 89;
    }
  }
  else
  {
    v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 32LL))(v8);
    if ( (*(_QWORD *)(v21 + 80) & 0x40000LL) == 0 && ((*(_QWORD *)(v21 + 80) >> 16) & 8) == 0 )
      v6 = (unsigned int)sub_B747A0(v21) != 0;
    if ( (*(_BYTE *)(v8 + 28) & 0x7F) == 0x24 )
    {
      if ( v8 == *(_QWORD *)(a1 + 16)
        || ((v28 = sub_B53DB0(v8)) == 0
          ? (v29 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 32LL))(v8))
          : (v29 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v28 + 48) + 32LL))(*(_QWORD *)(v28 + 48))),
            *(_QWORD *)(a1 + 16) == v29) )
      {
        if ( *(_DWORD *)(a1 + 24) == 1 )
          v6 = 0;
      }
    }
    v22 = (*(_BYTE *)(v8 + 29) >> 5) & 3;
    if ( v22 == 1 )
    {
      v33 = sub_B744C0((_QWORD *)v8, (__int64)v4);
      v34 = *(_QWORD *)(a1 + 8);
      v25 = v33 == 0;
      v35 = *(_BYTE **)(v34 + 32);
      if ( v25 )
      {
        if ( (unsigned __int64)v35 >= *(_QWORD *)(v34 + 24) )
        {
          sub_2257CD0(v34, 75);
        }
        else
        {
          *(_QWORD *)(v34 + 32) = v35 + 1;
          *v35 = 75;
        }
      }
      else if ( v6 )
      {
        if ( (unsigned __int64)v35 >= *(_QWORD *)(v34 + 24) )
        {
          sub_2257CD0(v34, 77);
        }
        else
        {
          *(_QWORD *)(v34 + 32) = v35 + 1;
          *v35 = 77;
        }
      }
      else if ( (unsigned __int64)v35 >= *(_QWORD *)(v34 + 24) )
      {
        sub_2257CD0(v34, 73);
      }
      else
      {
        *(_QWORD *)(v34 + 32) = v35 + 1;
        *v35 = 73;
      }
    }
    else if ( v22 )
    {
      if ( v22 == 2 )
      {
        v23 = sub_B744C0((_QWORD *)v8, (__int64)v4);
        v24 = *(_QWORD *)(a1 + 8);
        v25 = v23 == 0;
        v26 = *(_BYTE **)(v24 + 32);
        if ( v25 )
        {
          if ( (unsigned __int64)v26 >= *(_QWORD *)(v24 + 24) )
          {
            sub_2257CD0(v24, 67);
          }
          else
          {
            *(_QWORD *)(v24 + 32) = v26 + 1;
            *v26 = 67;
          }
        }
        else
        {
          v27 = *(_QWORD *)(v24 + 24);
          if ( v6 )
          {
            if ( v27 <= (unsigned __int64)v26 )
            {
              sub_2257CD0(v24, 69);
            }
            else
            {
              *(_QWORD *)(v24 + 32) = v26 + 1;
              *v26 = 69;
            }
          }
          else if ( v27 <= (unsigned __int64)v26 )
          {
            sub_2257CD0(v24, 65);
          }
          else
          {
            *(_QWORD *)(v24 + 32) = v26 + 1;
            *v26 = 65;
          }
        }
      }
    }
    else
    {
      v30 = sub_B744C0((_QWORD *)v8, (__int64)v4);
      v31 = *(_QWORD *)(a1 + 8);
      v25 = v30 == 0;
      v32 = *(_BYTE **)(v31 + 32);
      if ( v25 )
      {
        if ( (unsigned __int64)v32 >= *(_QWORD *)(v31 + 24) )
        {
          sub_2257CD0(v31, 83);
        }
        else
        {
          *(_QWORD *)(v31 + 32) = v32 + 1;
          *v32 = 83;
        }
      }
      else if ( v6 )
      {
        if ( (unsigned __int64)v32 >= *(_QWORD *)(v31 + 24) )
        {
          sub_2257CD0(v31, 85);
        }
        else
        {
          *(_QWORD *)(v31 + 32) = v32 + 1;
          *v32 = 85;
        }
      }
      else if ( (unsigned __int64)v32 >= *(_QWORD *)(v31 + 24) )
      {
        sub_2257CD0(v31, 81);
      }
      else
      {
        *(_QWORD *)(v31 + 32) = v32 + 1;
        *v32 = 81;
      }
    }
  }
  return sub_E5F3E0(a1, v10, (_BYTE *)v8, 0, 0);
}

