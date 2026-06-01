_BYTE *__fastcall sub_7C3990(__int64 *a1, __int64 a2)
{
  char v4; // dl
  __int64 v5; // rax
  __int64 *v6; // rdx
  __int64 v7; // rdi
  char *v8; // rsi
  _BYTE *result; // rax
  __int64 v10; // rdi
  unsigned __int64 v11; // rsi
  __int64 v12; // r13
  size_t v13; // rdx
  void *v14; // rdi
  size_t v15; // r12
  __int64 v16; // rdi
  __int64 v17; // rdx
  unsigned __int64 v18; // rdi
  __int64 *v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rdi
  _DWORD *v22; // rdx
  unsigned __int64 v23; // rcx
  __int64 v24; // rax

  v4 = *(_BYTE *)(a2 + 60);
  v5 = *a1;
  if ( (v4 & 4) != 0 )
  {
    v6 = a1 + 1;
    v7 = *(_QWORD *)(a2 + 88);
    v8 = (char *)v5;
    sub_B4DC40(v7, v5, v6);
  }
  else
  {
    v8 = *(char **)(v5 + 32);
    v23 = *(_QWORD *)(v5 + 24) - (_QWORD)v8;
    if ( (v4 & 1) == 0 || (v4 & 2) != 0 )
    {
      if ( v23 <= 4 )
      {
        v8 = "class";
        sub_26240F0(*a1, "class", 5);
      }
      else
      {
        *(_DWORD *)v8 = 1935764579;
        v8[4] = 115;
        *(_QWORD *)(v5 + 32) += 5LL;
      }
    }
    else if ( v23 <= 7 )
    {
      v8 = "typename";
      sub_26240F0(*a1, "typename", 8);
    }
    else
    {
      *(_QWORD *)v8 = 0x656D616E65707974LL;
      *(_QWORD *)(v5 + 32) += 8LL;
    }
  }
  if ( (unsigned __int8)sub_7D53F0(a2, v8) )
  {
    v21 = *a1;
    v22 = *(_DWORD **)(*a1 + 32);
    result = (_BYTE *)(*(_QWORD *)(*a1 + 24) - (_QWORD)v22);
    if ( (unsigned __int64)result <= 3 )
    {
      result = (_BYTE *)sub_26240F0(v21, " ...", 4);
    }
    else
    {
      *v22 = 774778400;
      *(_QWORD *)(v21 + 32) += 4LL;
    }
  }
  else
  {
    result = *(_BYTE **)(a2 + 40);
    if ( (unsigned __int64)result <= 7 )
    {
      if ( !(_DWORD)result )
        goto LABEL_13;
      v10 = *a1;
      result = *(_BYTE **)(*a1 + 32);
      if ( (unsigned __int64)result < *(_QWORD *)(*a1 + 24) )
        goto LABEL_6;
    }
    else
    {
      v10 = *a1;
      result = *(_BYTE **)(*a1 + 32);
      if ( (unsigned __int64)result < *(_QWORD *)(*a1 + 24) )
      {
LABEL_6:
        *(_QWORD *)(v10 + 32) = result + 1;
        *result = 32;
        goto LABEL_7;
      }
    }
    result = (_BYTE *)sub_26239D0(v10, 32);
  }
LABEL_7:
  v11 = *(_QWORD *)(a2 + 40);
  if ( v11 <= 7 )
  {
    if ( !(_DWORD)v11 )
      goto LABEL_13;
  }
  else if ( (*((_BYTE *)a1 + 13) & 0x10) != 0 && (v11 & 7) == 0 )
  {
    v12 = *a1;
    result = (_BYTE *)sub_C86900(v11 & 0xFFFFFFFFFFFFFFF8LL);
    v14 = *(void **)(v12 + 32);
    v15 = v13;
    if ( *(_QWORD *)(v12 + 24) - (_QWORD)v14 < v13 )
    {
      result = (_BYTE *)sub_26240F0(v12, result, v13);
    }
    else if ( v13 )
    {
      result = memcpy(v14, result, v13);
      *(_QWORD *)(v12 + 32) += v15;
    }
LABEL_13:
    if ( *(_QWORD *)(a2 + 72) <= 7u )
      return result;
LABEL_20:
    v16 = *a1;
    v17 = *(_QWORD *)(*a1 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(*a1 + 24) - v17) <= 2 )
    {
      sub_26240F0(v16, " = ", 3);
      if ( (_BYTE)qword_4AD2180 )
        goto LABEL_22;
    }
    else
    {
      *(_BYTE *)(v17 + 2) = 32;
      *(_WORD *)v17 = 15648;
      *(_QWORD *)(v16 + 32) += 3LL;
      if ( (_BYTE)qword_4AD2180 )
        goto LABEL_22;
    }
    if ( __cxa_guard_acquire(&qword_4AD2180) )
    {
      LODWORD(qword_4AD21A0[0]) = 0;
      qword_4AD21A0[1] = 0;
      qword_4AD21A0[3] = 0;
      __cxa_guard_release(&qword_4AD2180);
    }
LABEL_22:
    v18 = *(_QWORD *)(a2 + 72);
    if ( v18 > 7 )
    {
      v19 = (__int64 *)(v18 & 0xFFFFFFFFFFFFFFF8LL);
      v20 = *(_QWORD *)(a2 + 72) & 6LL;
      if ( v20 == 2 )
      {
        v24 = v19[9];
        v19 = nullptr;
        if ( !v24 )
          return (_BYTE *)sub_AFE2C0(v19, a1 + 1, *a1, 0);
        v19 = (__int64 *)(v24 & 0xFFFFFFFFFFFFFFF8LL);
        if ( (v24 & 6) != 4 || !v19 )
          return (_BYTE *)sub_AFE2C0(v19, a1 + 1, *a1, 0);
      }
      else if ( v20 != 4 )
      {
        return (_BYTE *)sub_AFE2C0(v19, a1 + 1, *a1, 0);
      }
      v19 = (__int64 *)v19[1];
      return (_BYTE *)sub_AFE2C0(v19, a1 + 1, *a1, 0);
    }
    v19 = qword_4AD21A0;
    return (_BYTE *)sub_AFE2C0(v19, a1 + 1, *a1, 0);
  }
  result = (_BYTE *)sub_791C00(*a1, v11);
  if ( *(_QWORD *)(a2 + 72) > 7u )
    goto LABEL_20;
  return result;
}

