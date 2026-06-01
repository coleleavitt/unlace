char __fastcall sub_19A2FE0(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned __int64 v6; // r12
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  char result; // al
  unsigned __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 *v15; // rbx
  __int64 *v16; // r15
  __int64 v17; // rax
  __int64 *v18; // r14
  unsigned __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  _QWORD *v28; // rdi
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  unsigned __int64 v33; // rbx
  __int64 v34; // rax
  int v35; // edx
  char v36; // [rsp+Fh] [rbp-69h]
  void *ptr; // [rsp+10h] [rbp-68h] BYREF
  __int64 v38; // [rsp+18h] [rbp-60h]
  _BYTE v39[88]; // [rsp+20h] [rbp-58h] BYREF

  v6 = sub_15F1640(a1, 1);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 60LL) & 0x10) != 0 )
  {
    v7 = (unsigned int)sub_178F000(*(_QWORD *)(a1 + 664), v6, a2, v3, v4, v5);
    result = 0;
    if ( (int)v7 <= 0 )
      return result;
    if ( (_DWORD)v7 == 1 )
    {
      v28 = (_QWORD *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
        v28 = (_QWORD *)*v28;
      v29 = sub_B94670((unsigned __int64)v28, *(_QWORD *)(a2 + 40), v7, v8, v9, v10);
      if ( v29 )
      {
        v33 = v29 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v29 & 4) != 0 )
        {
          while ( v33 )
          {
            if ( (*(_BYTE *)(*(_QWORD *)v33 + 28LL) & 0x7Fu) - 34 <= 5
              && (int)sub_178F000(*(_QWORD *)(a1 + 664), v6, *(_QWORD *)v33, v30, v31, v32) > 1 )
            {
              return 0;
            }
            v34 = *(_QWORD *)(v33 + 8);
            if ( !v34 )
              break;
            v33 = v34 & 0xFFFFFFFFFFFFFFF8LL;
            if ( (v34 & 4) == 0 )
              goto LABEL_29;
          }
        }
        else
        {
LABEL_29:
          if ( (*(_BYTE *)(v33 + 28) & 0x7Fu) - 34 <= 5
            && (int)sub_178F000(*(_QWORD *)(a1 + 664), v6, v33, v30, v31, v32) > 1 )
          {
            return 0;
          }
        }
      }
    }
  }
  ptr = v39;
  v38 = 0x400000000LL;
  result = sub_B97EB0(a2, (__int64)&ptr);
  v15 = (__int64 *)ptr;
  if ( result || (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 60LL) & 0x10) == 0 || !(_DWORD)v38 )
  {
    if ( ptr == v39 )
      return result;
    goto LABEL_8;
  }
  v16 = (__int64 *)((char *)ptr + 8 * (unsigned int)v38);
  v17 = (8LL * (unsigned int)v38) >> 3;
  if ( (8LL * (unsigned int)v38) >> 5 )
  {
    v18 = (__int64 *)((char *)ptr + 32 * ((8LL * (unsigned int)v38) >> 5));
    while ( (int)sub_178F000(*(_QWORD *)(a1 + 664), v6, *v15, v12, v13, v14) <= 1 )
    {
      if ( (int)sub_178F000(*(_QWORD *)(a1 + 664), v6, v15[1], v25, v26, v27) > 1 )
      {
        result = v16 == v15 + 1;
        goto LABEL_18;
      }
      if ( (int)sub_178F000(*(_QWORD *)(a1 + 664), v6, v15[2], v19, v20, v21) > 1 )
      {
        result = v16 == v15 + 2;
        goto LABEL_18;
      }
      if ( (int)sub_178F000(*(_QWORD *)(a1 + 664), v6, v15[3], v22, v23, v24) > 1 )
      {
        result = v16 == v15 + 3;
        goto LABEL_18;
      }
      v15 += 4;
      if ( v18 == v15 )
      {
        v17 = v16 - v15;
        goto LABEL_34;
      }
    }
    goto LABEL_17;
  }
LABEL_34:
  if ( v17 != 2 )
  {
    if ( v17 != 3 )
    {
      if ( v17 != 1 )
      {
        result = 1;
        goto LABEL_18;
      }
LABEL_45:
      v35 = sub_178F000(*(_QWORD *)(a1 + 664), v6, *v15, v12, v13, v14);
      result = 1;
      if ( v35 <= 1 )
        goto LABEL_18;
      goto LABEL_46;
    }
    if ( (int)sub_178F000(*(_QWORD *)(a1 + 664), v6, *v15, v12, v13, v14) > 1 )
    {
LABEL_17:
      result = v15 == v16;
      goto LABEL_18;
    }
    ++v15;
  }
  if ( (int)sub_178F000(*(_QWORD *)(a1 + 664), v6, *v15, v12, v13, v14) <= 1 )
  {
    ++v15;
    goto LABEL_45;
  }
LABEL_46:
  result = v16 == v15;
LABEL_18:
  v15 = (__int64 *)ptr;
  if ( ptr != v39 )
  {
LABEL_8:
    v36 = result;
    free(v15);
    return v36;
  }
  return result;
}
