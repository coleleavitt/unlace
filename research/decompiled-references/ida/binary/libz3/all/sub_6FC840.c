__int64 __fastcall sub_6FC840(__int64 a1, __int64 a2, int a3)
{
  __int16 v5; // ax
  __int64 v7; // rax
  int v8; // edi
  __int64 *v9; // rcx
  unsigned int v10; // edx
  __int64 *v11; // rsi
  __int64 v12; // rdx
  __int64 *v13; // r8
  __int64 *i; // rax
  __int64 v15; // rdx
  __int64 **v16; // r15
  __int64 **v17; // r14
  __int64 *v18; // rdx
  __int64 **v19; // rax
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // r12
  __int64 v23; // rdi
  __int64 v24; // r13
  __int64 v25; // rax
  __int64 v26; // rdx
  int v27; // ecx
  unsigned __int8 v28; // dl
  __int64 v30; // rax
  __int64 v31; // r13
  __int64 v32; // rax
  int v33; // edx
  __int64 v34; // rax
  __int64 *v35; // [rsp+10h] [rbp-278h] BYREF
  __int64 *v36; // [rsp+18h] [rbp-270h] BYREF
  __int64 v37; // [rsp+20h] [rbp-268h] BYREF
  __int64 v38; // [rsp+28h] [rbp-260h]
  _QWORD v39[12]; // [rsp+30h] [rbp-258h] BYREF
  _BYTE v40[504]; // [rsp+90h] [rbp-1F8h] BYREF

  if ( !a3 )
  {
    v39[0] = a2;
    if ( a2 )
      ++*(_DWORD *)(a2 + 8);
    sub_6EFE70((_QWORD *)(a1 + 56), v39);
    return 1;
  }
  v5 = *(_WORD *)(a2 + 4);
  if ( *(_DWORD *)(a2 + 8) <= 1u || a2 == *(_QWORD *)(a1 + 120) )
  {
    v28 = 0;
  }
  else
  {
    if ( v5 )
    {
      if ( v5 != 2 )
      {
        if ( v5 != 1 )
        {
LABEL_40:
          sub_1872CE0("");
          sub_1873130(114, 226);
        }
LABEL_49:
        sub_6F9ED0((_QWORD *)a1, a2);
        return 1;
      }
    }
    else if ( !*(_DWORD *)(a2 + 24) )
    {
      goto LABEL_6;
    }
    v30 = sub_1680FB0(*(_QWORD *)(a1 + 32), a2, 0);
    v31 = v30;
    if ( v30 )
    {
      v39[0] = v30;
      ++*(_DWORD *)(v30 + 8);
      sub_6EFE70((_QWORD *)(a1 + 56), v39);
      if ( a2 != v31 )
      {
        v32 = *(_QWORD *)(a1 + 40);
        if ( v32 )
        {
          v33 = *(_DWORD *)(v32 - 4);
          if ( v33 )
            *(_BYTE *)(v32 + 16LL * (unsigned int)(v33 - 1) + 8) |= 2u;
        }
      }
      return 1;
    }
    v5 = *(_WORD *)(a2 + 4);
    v28 = 1;
  }
  if ( v5 == 1 )
    goto LABEL_49;
  if ( v5 == 2 )
    goto LABEL_42;
  if ( v5 )
    goto LABEL_40;
  if ( *(_DWORD *)(a2 + 24) )
  {
LABEL_42:
    sub_39B170(a1, a2, v28, 0, a3 - (a3 != 3));
    return 0;
  }
LABEL_6:
  if ( !(unsigned __int8)sub_6F9CD0((_QWORD *)a1, a2) )
  {
    v7 = *(unsigned int *)(a1 + 104);
    v8 = *(_DWORD *)(a2 + 12);
    v9 = *(__int64 **)(a1 + 96);
    v10 = v7 - 1;
    v7 *= 8;
    v11 = (__int64 *)((char *)v9 + v7);
    v12 = 8LL * (v8 & v10);
    v13 = &v9[(unsigned __int64)v12 / 8];
    if ( v12 != v7 )
    {
      for ( i = &v9[(unsigned __int64)v12 / 8]; v11 != i; ++i )
      {
        v15 = *i;
        if ( (unsigned __int64)*i > 1 )
        {
          if ( *(_DWORD *)(v15 + 12) == v8 && a2 == v15 )
            goto LABEL_29;
        }
        else if ( !v15 )
        {
          goto LABEL_14;
        }
      }
    }
    for ( ; v13 != v9; ++v9 )
    {
      v34 = *v9;
      if ( (unsigned __int64)*v9 > 1 )
      {
        if ( *(_DWORD *)(v34 + 12) == v8 && a2 == v34 )
          goto LABEL_29;
      }
      else if ( !v34 )
      {
        break;
      }
    }
LABEL_14:
    sub_6F1F40((__int64)v39, *(_QWORD *)(a1 + 8), 0, *(_QWORD *)(a1 + 144));
    v16 = *(__int64 ***)(a1 + 96);
    v17 = &v16[*(unsigned int *)(a1 + 104)];
    if ( v16 != v17 )
    {
      while ( (unsigned __int64)*v16 <= 1 )
      {
        if ( v17 == ++v16 )
          goto LABEL_25;
      }
      if ( v17 != v16 )
      {
        v18 = *v16;
        do
        {
          v35 = v18;
          sub_4A3CA0((__int64)v40, &v35);
          v19 = v16 + 1;
          if ( v17 == v16 + 1 )
            break;
          while ( 1 )
          {
            v18 = *v19;
            v16 = v19;
            if ( (unsigned __int64)*v19 > 1 )
              break;
            if ( v17 == ++v19 )
              goto LABEL_25;
          }
        }
        while ( v17 != v19 );
      }
    }
LABEL_25:
    v36 = (__int64 *)a2;
    sub_4A3CA0((__int64)v40, &v36);
    v20 = *(_QWORD *)(a1 + 8);
    v21 = *(_QWORD *)(a1 + 480);
    v37 = 0;
    v38 = v20;
    sub_6FC6A0((__int64)v39, v21, &v37, (__int64 *)(a1 + 496));
    v22 = v37;
    v23 = *(_QWORD *)(a1 + 480);
    v24 = v38;
    if ( v23 != v37 )
    {
      sub_6EF400(v23, *(_QWORD *)(a1 + 488));
      *(_QWORD *)(a1 + 480) = v22;
      if ( v22 )
        ++*(_DWORD *)(v22 + 8);
    }
    sub_6EF400(v22, v24);
    sub_6F1150(v39);
LABEL_29:
    v25 = *(_QWORD *)(a1 + 480);
    if ( a2 == v25 )
    {
      v39[0] = *(_QWORD *)(a1 + 480);
    }
    else
    {
      v26 = *(_QWORD *)(a1 + 40);
      if ( v26 )
      {
        v27 = *(_DWORD *)(v26 - 4);
        if ( v27 )
          *(_BYTE *)(v26 + 16LL * (unsigned int)(v27 - 1) + 8) |= 2u;
      }
      v39[0] = v25;
      if ( !v25 )
        goto LABEL_35;
    }
    ++*(_DWORD *)(v25 + 8);
LABEL_35:
    sub_6EFE70((_QWORD *)(a1 + 56), v39);
  }
  return 1;
}

