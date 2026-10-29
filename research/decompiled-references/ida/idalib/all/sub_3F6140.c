__int64 __fastcall sub_3F6140(__int64 a1, char *a2, unsigned __int8 a3, __int64 a4, unsigned int *a5, size_t a6)
{
  __int64 v10; // rsi
  unsigned int v11; // ebx
  int v13; // r9d
  __int64 v14; // rax
  unsigned __int64 v15; // rax
  __int64 v16; // r9
  const char *v17; // rdx
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  int v20; // [rsp+10h] [rbp-A0h]
  int v21; // [rsp+10h] [rbp-A0h]
  unsigned __int64 v22; // [rsp+10h] [rbp-A0h]
  unsigned __int64 v23; // [rsp+10h] [rbp-A0h]
  int v24; // [rsp+1Ch] [rbp-94h]
  __int64 v25; // [rsp+20h] [rbp-90h]
  __int64 v27; // [rsp+30h] [rbp-80h] BYREF
  char *v28; // [rsp+38h] [rbp-78h] BYREF
  void *v29; // [rsp+40h] [rbp-70h] BYREF
  __int128 v30; // [rsp+48h] [rbp-68h]
  void *ptr; // [rsp+60h] [rbp-50h] BYREF
  __int128 v32; // [rsp+68h] [rbp-48h]
  unsigned __int64 v33; // [rsp+78h] [rbp-38h]

  v33 = __readfsqword(0x28u);
  if ( a6 > 0x400 )
    sub_3EE850();
  v25 = a1 + 156;
  memcpy((void *)(a1 + 156), a5, a6);
  if ( (unsigned __int8)sub_3F5F60(a1, a2) || a2 == *(char **)(a1 + 120) && a3 == 65 && a4 == 1 )
    return 0;
  v10 = *(_QWORD *)(a1 + 8);
  if ( a2 == *(char **)(*(_QWORD *)(v10 + 1672) + 2416LL) && a3 == 65 && a6 == 4 )
  {
    v29 = a2;
    ptr = (void *)*a5;
    sub_7BE7C0(&v29, v10, a4, &ptr, 8, 65);
    return 0;
  }
  v29 = nullptr;
  v30 = 0;
  v13 = sub_3792E0(0x60u, a2, a3, a4, v25, a6, &v29);
  v24 = v13;
  ptr = nullptr;
  v32 = 0;
  if ( v13 != 1 || (unsigned __int64)v30 > 1 )
  {
    if ( a2 != *(char **)(a1 + 16) )
    {
      v28 = a2;
      v20 = v13;
      v14 = sub_7BF130(&v28, *(_QWORD *)(a1 + 8), a1 + 24);
      v13 = v20;
      if ( v14 <= 0 )
      {
        sub_35A790((char **)(a1 + 24));
        v13 = v20;
      }
      *(_QWORD *)(a1 + 16) = a2;
    }
    v21 = v13;
    sub_35A790((char **)&ptr);
    if ( v21 )
      goto LABEL_24;
    v15 = sub_3BDE50(*(_QWORD **)(*(_QWORD *)(a1 + 8) + 1672LL), (__int64)a2);
    if ( a3 == 65 && a4 == 2 )
    {
      if ( v15 >= *(_QWORD *)(a1 + 48) && v15 < *(_QWORD *)(a1 + 56) )
        goto LABEL_21;
LABEL_40:
      v24 = 1;
LABEL_24:
      v17 = haystack;
      if ( (_QWORD)v32 )
        v17 = (const char *)ptr;
      goto LABEL_26;
    }
    if ( a4 == 4096 && a3 == 83 )
    {
      v23 = v15;
      v19 = (_QWORD *)sub_5CAA10(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 1672LL));
      if ( !v19 || v23 != *v19 )
        goto LABEL_40;
    }
    else if ( a4 == 0x4000 && a3 == 83 )
    {
      v22 = v15;
      v18 = (_QWORD *)sub_5CAA10(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 1672LL));
      if ( v18 )
      {
        if ( v22 == *v18 )
          goto LABEL_40;
      }
    }
LABEL_21:
    if ( !*(_BYTE *)(a1 + 1180) )
    {
      if ( a6 == 4 )
      {
        v27 = *(unsigned int *)(a1 + 156);
        netnode_supset(a2, a4, &v27, 8, a3, v16);
      }
      else
      {
        netnode_supset(a2, a4, v25, a6, a3, v16);
      }
    }
    goto LABEL_24;
  }
  v17 = haystack;
LABEL_26:
  v11 = sub_3F5570(a1, v24, v17, (__int64)&v29);
  if ( ptr )
  {
    *(_QWORD *)&v32 = 0;
    qfree(ptr);
  }
  if ( v29 )
  {
    *(_QWORD *)&v30 = 0;
    qfree(v29);
  }
  return v11;
}
