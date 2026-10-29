__int64 __fastcall sub_E20C60(__int64 a1)
{
  __int64 result; // rax
  _QWORD *v3; // rbp
  void **p_ptr; // rsi
  __int64 v5; // rdi
  __int64 v6; // rax
  unsigned int v7; // ebp
  void *v8; // rdi
  __int64 v9; // rbp
  void *v10; // rax
  void (__fastcall ***v11)(void *, void **, void *); // r15
  void *v12; // rdx
  bool v13; // zf
  void *v14; // r15
  int v15; // eax
  int v16; // eax
  __int64 v17; // r15
  void *v18; // rdi
  int v19; // eax
  void *v20; // rbx
  void (__fastcall ***v21)(_QWORD); // rbx
  int v22; // eax
  void *v23; // [rsp+0h] [rbp-70h]
  void *v24; // [rsp+0h] [rbp-70h]
  void *v25; // [rsp+0h] [rbp-70h]
  void *ptr; // [rsp+10h] [rbp-60h] BYREF
  _QWORD v27[2]; // [rsp+18h] [rbp-58h] BYREF
  _QWORD v28[9]; // [rsp+28h] [rbp-48h] BYREF

  result = *(_QWORD *)(a1 + 88);
  if ( !result || !*(_DWORD *)(result - 4) )
    return result;
  v3 = *(_QWORD **)a1;
  ptr = nullptr;
  p_ptr = &ptr;
  (*(void (__fastcall **)(_QWORD *, void **))(*v3 + 32LL))(v3, &ptr);
  if ( ptr )
  {
    v5 = v3[7];
    if ( v5 )
    {
      p_ptr = &ptr;
      (*(void (__fastcall **)(__int64, void **))(*(_QWORD *)v5 + 32LL))(v5, &ptr);
    }
  }
  v27[0] = 0;
  v6 = *(_QWORD *)(a1 + 88);
  v27[1] = 0;
  v28[0] = 1;
  v28[1] = 0;
  if ( v6 )
  {
    v7 = 0;
    do
    {
      if ( v7 >= *(_DWORD *)(v6 - 4) )
        break;
      p_ptr = *(void ***)(v6 + 8LL * v7);
      if ( !(unsigned __int8)sub_1374270(ptr, p_ptr) )
      {
        v17 = *(_QWORD *)(a1 + 96) + 32LL * v7;
        v18 = qword_1C7F2C0;
        v19 = *(_DWORD *)v17;
        if ( *(_DWORD *)v17 )
        {
          if ( LODWORD(v27[0]) )
          {
            if ( (v28[0] & 0x100000000LL) != 0
              || LODWORD(v28[0]) != 1
              || (*(_BYTE *)(v17 + 20) & 1) != 0
              || *(_DWORD *)(v17 + 16) != 1 )
            {
              p_ptr = (void **)v27;
              sub_1851D20(qword_1C7F2C0, v27, v17, v27);
            }
            else
            {
              v24 = qword_1C7F2C0;
              sub_1831A80(qword_1C7F2C0, v27, v17, v27);
              p_ptr = (void **)v28;
              sub_182CBA0(v24, v28);
              BYTE4(v28[0]) &= ~1u;
              LODWORD(v28[0]) = 1;
            }
          }
          else
          {
            if ( (*(_BYTE *)(v17 + 4) & 1) != 0 )
            {
              p_ptr = (void **)v27;
              v25 = qword_1C7F2C0;
              sub_182C690(qword_1C7F2C0, v27, v17);
              v18 = v25;
            }
            else
            {
              BYTE4(v27[0]) &= ~1u;
              LODWORD(v27[0]) = v19;
            }
            if ( (*(_BYTE *)(v17 + 20) & 1) != 0 )
            {
              p_ptr = (void **)v28;
              sub_182C690(v18, v28, v17 + 16);
            }
            else
            {
              v22 = *(_DWORD *)(v17 + 16);
              BYTE4(v28[0]) &= ~1u;
              LODWORD(v28[0]) = v22;
            }
          }
        }
        else
        {
          if ( (v27[0] & 0x100000000LL) != 0 )
          {
            p_ptr = (void **)v27;
            v23 = qword_1C7F2C0;
            sub_182C690(qword_1C7F2C0, v27, v27);
            v18 = v23;
          }
          else
          {
            BYTE4(v27[0]) &= ~1u;
          }
          if ( (v28[0] & 0x100000000LL) != 0 )
          {
            p_ptr = (void **)v28;
            sub_182C690(v18, v28, v28);
          }
          else
          {
            BYTE4(v28[0]) &= ~1u;
          }
        }
      }
      v6 = *(_QWORD *)(a1 + 88);
      ++v7;
    }
    while ( v6 );
    v8 = qword_1C7F2C0;
    v9 = a1 + 104;
    if ( (v28[0] & 0x100000000LL) != 0 || LODWORD(v28[0]) != 1 )
    {
LABEL_12:
      p_ptr = (void **)v27;
      if ( !(unsigned __int8)sub_1848D40(v8, v27, v9) )
        goto LABEL_29;
      goto LABEL_13;
    }
  }
  else
  {
    v9 = a1 + 104;
    v8 = qword_1C7F2C0;
  }
  if ( (*(_BYTE *)(a1 + 124) & 1) != 0 || *(_DWORD *)(a1 + 120) != 1 )
    goto LABEL_12;
  if ( (v27[0] & 0x100000000LL) != 0 || (*(_BYTE *)(a1 + 108) & 1) != 0 )
  {
    p_ptr = (void **)v27;
    if ( (int)sub_182C7B0(v8, v27, v9) >= 0 )
      goto LABEL_29;
LABEL_13:
    v10 = ptr;
    v11 = *(void (__fastcall ****)(void *, void **, void *))(a1 + 72);
    v12 = ptr;
    if ( ptr )
      ++*((_DWORD *)ptr + 4);
    if ( v11 )
    {
      v13 = (*((_DWORD *)v11 + 4))-- == 1;
      if ( v13 )
      {
        (**v11)(v11, p_ptr, v12);
        sub_186B220(v11);
        v12 = ptr;
      }
      goto LABEL_18;
    }
    goto LABEL_54;
  }
  if ( SLODWORD(v27[0]) < *(_DWORD *)(a1 + 104) )
    goto LABEL_13;
LABEL_29:
  if ( !*(_QWORD *)(a1 + 72) )
  {
    v10 = ptr;
    v12 = ptr;
    if ( !ptr )
    {
LABEL_18:
      *(_QWORD *)(a1 + 72) = v12;
      v14 = qword_1C7F2C0;
      if ( (v27[0] & 0x100000000LL) != 0 )
      {
        sub_182C690(qword_1C7F2C0, v9, v27);
      }
      else
      {
        v15 = v27[0];
        *(_BYTE *)(a1 + 108) &= ~1u;
        *(_DWORD *)(a1 + 104) = v15;
      }
      if ( (v28[0] & 0x100000000LL) != 0 )
      {
        sub_182C690(v14, a1 + 120, v28);
      }
      else
      {
        v16 = v28[0];
        *(_BYTE *)(a1 + 124) &= ~1u;
        *(_DWORD *)(a1 + 120) = v16;
      }
      goto LABEL_30;
    }
    ++*((_DWORD *)ptr + 4);
LABEL_54:
    v12 = v10;
    goto LABEL_18;
  }
LABEL_30:
  v20 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v27);
  result = sub_182CBA0(v20, v28);
  v21 = (void (__fastcall ***)(_QWORD))ptr;
  if ( ptr )
  {
    v13 = (*((_DWORD *)ptr + 4))-- == 1;
    if ( v13 )
    {
      (**v21)(v21);
      return sub_186B220(v21);
    }
  }
  return result;
}

