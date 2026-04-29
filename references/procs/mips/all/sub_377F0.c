__int64 __fastcall sub_377F0(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int8 v3; // r15
  _QWORD *v4; // rax
  unsigned __int64 v5; // rbp
  __int64 v6; // r13
  unsigned __int64 tinfo_size; // r12
  int v8; // eax
  char tinfo_property; // al
  unsigned __int64 v10; // rcx
  _DWORD *v11; // rdi
  int v12; // ecx
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned __int64 v16; // r15
  bool v17; // [rsp+8h] [rbp-70h]
  int v18; // [rsp+8h] [rbp-70h]
  __int64 v19; // [rsp+8h] [rbp-70h]
  __int64 v20; // [rsp+18h] [rbp-60h]
  char v21; // [rsp+26h] [rbp-52h]
  _DWORD *v22; // [rsp+28h] [rbp-50h]
  unsigned int v23; // [rsp+34h] [rbp-44h] BYREF
  unsigned __int64 v24; // [rsp+38h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 24);
  v24 = __readfsqword(0x28u);
  v3 = sub_32E60(a1, (_QWORD *)(v1 + 32));
  if ( v3 )
    sub_32EE0(a1, nullptr, 0);
  v4 = *(_QWORD **)(a1 + 24);
  v20 = v4[1];
  if ( !v20 )
  {
LABEL_29:
    v4[7] = *(_QWORD *)(a1 + 8) * *(_QWORD *)(a1 + 48);
    return 1;
  }
  v5 = 0;
  v22 = (_DWORD *)(a1 + 40);
  while ( 1 )
  {
    v6 = *v4 + 80 * v5;
    tinfo_size = get_tinfo_size(&v23, *(_QWORD *)(v6 + 64), 0);
    v8 = sub_370E0(a1, (_QWORD *)(v6 + 64), tinfo_size, v5, v3);
    if ( (v8 & 0xFFFFFFFB) == 0 )
      return 0;
    v18 = v8;
    v21 = v8 == 2;
    tinfo_property = get_tinfo_property(*(_QWORD *)(v6 + 64), 2);
    v10 = v23;
    if ( ((tinfo_property & 0xFu) <= 0xA || (tinfo_property & 0x3F) == 0x2D) && v23 < tinfo_size )
    {
      v23 = tinfo_size;
      v10 = (unsigned int)tinfo_size;
    }
    if ( *(_QWORD *)(a1 + 8) < v10 && *(_DWORD *)a1 != 4 )
    {
      if ( *(_BYTE *)(a1 + 20) && v21 )
      {
        v12 = *(_DWORD *)(a1 + 44);
        v11 = (_DWORD *)(a1 + 44);
      }
      else
      {
        v11 = v22;
        v12 = *(_DWORD *)(a1 + 40);
      }
      if ( v12 % 2 == 1 )
        *v11 = ++v12;
      if ( *(_DWORD *)(a1 + 16) == v12 )
      {
        v14 = *(_QWORD *)(a1 + 48);
        if ( (v14 & 1) != 0 )
          *(_QWORD *)(a1 + 48) = v14 + 1;
      }
    }
    if ( v5 < *(int *)(a1 + 32) )
    {
      if ( v18 == 5 )
      {
        v16 = *(_QWORD *)(a1 + 8);
        v15 = (int)tinfo_size;
LABEL_39:
        *(_QWORD *)(a1 + 48) += (v15 + v16 - 1) / v16;
        goto LABEL_28;
      }
      if ( v18 == 3 )
      {
        sub_333F0(a1, 0, (_QWORD *)(v6 + 64));
        goto LABEL_28;
      }
      v17 = v18 != 2;
      if ( *(_QWORD *)(a1 + 8) < tinfo_size )
        sub_33030(a1, 0, v21);
      else
        sub_32EE0(a1, nullptr, v21);
      goto LABEL_9;
    }
    if ( v18 == 5 )
    {
      v15 = (int)tinfo_size;
      v16 = *(_QWORD *)(a1 + 8);
      v19 = *(_QWORD *)(a1 + 48);
      if ( !v6 )
        goto LABEL_39;
      cleanup_argloc(v6);
      *(_DWORD *)v6 = 1;
      *(_QWORD *)(v6 + 8) = v19 * v16;
      *(_QWORD *)(a1 + 48) += (unsigned __int64)(*(_QWORD *)(a1 + 8) + (int)tinfo_size - 1LL) / *(_QWORD *)(a1 + 8);
      goto LABEL_27;
    }
    if ( v18 == 3 )
    {
      sub_333F0(a1, v6, (_QWORD *)(v6 + 64));
      if ( !v6 )
        goto LABEL_28;
      goto LABEL_27;
    }
    v17 = v18 != 2;
    if ( *(_QWORD *)(a1 + 8) < tinfo_size )
      sub_33030(a1, v6, v21);
    else
      sub_32EE0(a1, (_DWORD *)v6, v21);
    if ( v17 && v6 != 0 )
    {
LABEL_27:
      sub_32C00((int *)a1, (int *)v6, (_QWORD *)(v6 + 64), -1);
LABEL_28:
      v4 = *(_QWORD **)(a1 + 24);
      v3 = 1;
      if ( v20 == ++v5 )
        goto LABEL_29;
    }
    else
    {
LABEL_9:
      v4 = *(_QWORD **)(a1 + 24);
      v3 |= v17;
      if ( v20 == ++v5 )
        goto LABEL_29;
    }
  }
}
