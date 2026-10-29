__int64 __fastcall sub_534380(__int64 a1, __int64 *a2, __int64 a3, char a4)
{
  _QWORD *v6; // rbp
  __int16 v8; // dx
  unsigned __int64 v9; // rax
  __int64 result; // rax
  const char *v11; // r14
  __int64 v12; // rsi
  int v13; // eax
  int v14; // eax
  __int64 v15; // rdx
  size_t v16; // rax
  size_t v17; // r15
  void *v18; // rdi
  size_t v19; // rdx
  __int64 v20; // rax
  size_t v21; // [rsp+8h] [rbp-50h]
  _QWORD v22[9]; // [rsp+10h] [rbp-48h] BYREF

  v6 = *(_QWORD **)(a3 + 32);
  v22[1] = __readfsqword(0x28u);
  v8 = *(_WORD *)(a3 + 68);
  if ( !a4 )
  {
    v9 = a2[1];
    goto LABEL_3;
  }
  if ( (v8 & 1) == 0 )
  {
    v12 = *v6;
    if ( (v8 & 8) != 0 )
    {
      v14 = sub_64DF40(a1, v12, *((unsigned int *)v6 + 2));
      v13 = (unsigned __int8)sub_64DE70(a1, *v6, v14, (unsigned int)v22, 0, 0, 0, 0);
    }
    else
    {
      v13 = sub_64F830(a1, v12, v6[1], 1, (unsigned int)v22, 0, 0, 0, 0, 0);
    }
    if ( v13 )
    {
      v15 = sub_568850(*v6, v22[0], 0, a2);
      v9 = a2[1];
      if ( v15 )
      {
        if ( v9 > 1 )
          return sub_6500C0(a1, *v6, *a2);
        if ( (*(_BYTE *)(a3 + 68) & 8) != 0 )
          goto LABEL_29;
        v11 = (const char *)v6[1];
LABEL_25:
        if ( !v11 )
          return sub_6500C0(a1, *v6, v11);
LABEL_26:
        v16 = strlen(v11);
        v17 = v16;
        if ( v16 )
        {
          v18 = (void *)*a2;
          v19 = v16 + 1;
          if ( a2[2] < v16 + 1 )
          {
            v21 = v16 + 1;
            v20 = qvector_reserve(a2, *a2, v19, 1);
            v19 = v21;
            *a2 = v20;
            v18 = (void *)v20;
          }
          a2[1] = v19;
          memmove(v18, v11, v17);
          *(_BYTE *)(*a2 + v17) = 0;
          v8 = *(_WORD *)(a3 + 68);
LABEL_11:
          if ( (v8 & 8) != 0 )
            return *((unsigned int *)v6 + 2);
          return sub_6500C0(a1, *v6, v11);
        }
        a2[1] = 0;
LABEL_28:
        v8 = *(_WORD *)(a3 + 68);
        goto LABEL_11;
      }
    }
    else
    {
      v9 = a2[1];
    }
    v8 = *(_WORD *)(a3 + 68);
LABEL_3:
    if ( (v8 & 8) != 0 )
    {
      if ( v9 > 1 )
        return *((unsigned int *)v6 + 2);
LABEL_29:
      v11 = (const char *)sub_64DFD0(a1, *v6, *((unsigned int *)v6 + 2), 0);
      if ( !v11 )
        goto LABEL_28;
      goto LABEL_26;
    }
    v11 = (const char *)v6[1];
    if ( v9 > 1 )
      return sub_6500C0(a1, *v6, v11);
    goto LABEL_25;
  }
  result = *((unsigned int *)v6 + 6);
  if ( !(_DWORD)result )
  {
    v11 = (const char *)v6[2];
    v9 = a2[1];
    if ( v11 )
    {
      if ( v9 > 1 )
        goto LABEL_11;
      goto LABEL_26;
    }
    goto LABEL_3;
  }
  return result;
}
