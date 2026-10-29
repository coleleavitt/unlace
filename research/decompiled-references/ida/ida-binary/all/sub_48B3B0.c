__int64 __fastcall sub_48B3B0(__int64 *a1, __int64 a2)
{
  unsigned int v3; // ebp
  unsigned __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // r13
  char v9; // r15
  __int64 v10; // rdx
  __int64 (__fastcall *v11)(__int64, __int64); // rax
  int v12; // ecx
  int v13; // ebp
  unsigned __int8 v14; // dl
  __int64 (*v16)(); // rdx
  int v17; // eax
  char v18; // al
  char v19; // cl
  __int64 v20; // [rsp+7h] [rbp-61h] BYREF
  char v21; // [rsp+Fh] [rbp-59h]
  __int64 v22; // [rsp+10h] [rbp-58h] BYREF
  __int64 v23; // [rsp+18h] [rbp-50h]
  unsigned __int64 v24; // [rsp+28h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  v3 = QT::QAbstractItemModel::flags();
  if ( *(int *)a2 >= 0 && *(int *)(a2 + 4) >= 0 && *(_QWORD *)(a2 + 16) )
  {
    v4 = *(_QWORD *)(a2 + 8);
    v5 = (unsigned int)v4;
    v6 = HIDWORD(v4);
    if ( v6 == 0xFFFFFFFFLL )
    {
      v22 = -1;
      v23 = v5;
      if ( v5 )
        return v3;
    }
    else
    {
      v22 = v6;
      v23 = v5;
    }
    v7 = *(_QWORD *)a1[26];
    v21 = 0;
    v20 = -1;
    dirtree_resolve_cursor(&v20, v7, &v22);
    v8 = v20;
    v9 = v21;
    if ( v20 != -1 )
    {
      v10 = *a1;
      v11 = *(__int64 (__fastcall **)(__int64, __int64))(*a1 + 448);
      if ( v11 == sub_486570 )
      {
        v12 = *((_DWORD *)a1 + 30);
        if ( (v12 & 0x10) == 0 )
        {
          if ( v21 )
          {
LABEL_10:
            v13 = v3 | 0x40000000;
LABEL_13:
            if ( v11 == sub_486570 )
              v14 = *((_BYTE *)a1 + 120) >> 7;
            else
              v14 = ((__int64 (__fastcall *)(__int64 *, __int64, __int64))v11)(a1, 1, a2);
            return (2 * (v14 & (v8 != 0))) | (unsigned int)v13;
          }
          goto LABEL_22;
        }
      }
      else
      {
        v18 = ((__int64 (__fastcall *)(__int64 *, __int64, __int64))v11)(a1, 3, a2);
        v10 = *a1;
        v19 = v18;
        v11 = *(__int64 (__fastcall **)(__int64, __int64))(*a1 + 448);
        if ( !v19 )
        {
          if ( v9 )
            goto LABEL_10;
          goto LABEL_20;
        }
      }
      if ( v9 )
      {
        v13 = v3 | 0x4000000C;
        goto LABEL_13;
      }
      v3 |= 4u;
LABEL_20:
      if ( v11 != sub_486570 )
      {
        if ( !((unsigned __int8 (__fastcall *)(__int64 *, __int64, __int64))v11)(a1, 2, a2) )
          return v3;
        v10 = *a1;
LABEL_23:
        v16 = *(__int64 (**)())(v10 + 472);
        v17 = 0;
        if ( v16 != sub_486610 )
          v17 = ((__int64 (__fastcall *)(__int64 *))v16)(a1);
        if ( v17 == *(_DWORD *)(a2 + 4) )
          v3 |= 2u;
        return v3;
      }
      v12 = *((_DWORD *)a1 + 30);
LABEL_22:
      if ( (v12 & 0x100) == 0 )
        return v3;
      goto LABEL_23;
    }
  }
  return v3;
}
