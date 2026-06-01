__int64 __fastcall sub_6D4F10(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 v5; // r13
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax
  _QWORD *v8; // rbx
  _QWORD *v9; // r13
  __int64 v11; // r13
  __int64 v12; // rdi
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  __int64 v15; // rdi
  unsigned __int64 v16; // rax
  _DWORD *v17; // rdi
  unsigned __int64 v18; // rax
  _DWORD *v19; // rdi
  __int64 v20; // rax
  int v21; // edx
  unsigned __int64 v22; // rax
  __int64 v23; // rax
  int v24; // edx

  if ( !a3
    || !a2
    || a2 != a3
    && (v5 = (*(__int64 (__fastcall **)(__int64 *))(*a2 + 32))(a2),
        v5 != (*(__int64 (__fastcall **)(__int64 *))(*a3 + 32))(a3)) )
  {
    v6 = a3[13];
    if ( v6 )
    {
      if ( v6 <= 7 )
        return 0;
      goto LABEL_7;
    }
    v11 = a3[12];
    v12 = *(_QWORD *)(v11 + 88);
    v13 = v12 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v12 & 1) != 0 )
    {
      if ( !v13 )
        return 0;
    }
    else
    {
      if ( v13 <= 3 )
      {
        if ( !v13 )
          return 0;
        goto LABEL_19;
      }
      if ( (v12 & 2) == 0 )
        return 0;
      v14 = sub_6D4E90((_QWORD *)(v12 & 0xFFFFFFFFFFFFFFFCLL), a3[12]);
      v12 = v14 | 1;
      *(_QWORD *)(v11 + 88) = v14 | 1;
      v13 = v14 & 0xFFFFFFFFFFFFFFFELL;
      if ( !v13 )
      {
LABEL_16:
        v6 = a3[13];
        if ( v6 > 7 )
        {
LABEL_7:
          v7 = v6 & 0xFFFFFFFFFFFFFFF8LL;
          v8 = *(_QWORD **)(v7 + 8);
          v9 = &v8[*(unsigned int *)(v7 + 16)];
LABEL_8:
          if ( v9 != v8 )
          {
            while ( !(unsigned __int8)sub_6D4F10(a1, a2, *v8) )
            {
              if ( v9 == ++v8 )
                return 0;
            }
            return 1;
          }
          return 0;
        }
        if ( v6 )
          return 0;
        v11 = a3[12];
LABEL_19:
        v15 = *(_QWORD *)(v11 + 88);
        v16 = v15 & 0xFFFFFFFFFFFFFFFELL;
        if ( (v15 & 1) != 0 )
        {
          if ( !v16 )
            return 0;
        }
        else
        {
          if ( v16 <= 3 || (v15 & 2) == 0 )
            return 0;
          v22 = sub_6D4E90((_QWORD *)(v15 & 0xFFFFFFFFFFFFFFFCLL), v11);
          v15 = v22 | 1;
          *(_QWORD *)(v11 + 88) = v22 | 1;
          v16 = v22 & 0xFFFFFFFFFFFFFFFELL;
          if ( !v16 )
            goto LABEL_23;
        }
        if ( (v16 & 4) != 0 )
        {
          v17 = (_DWORD *)(v15 & 0xFFFFFFFFFFFFFFF8LL);
          if ( v17 )
          {
            v23 = *(_QWORD *)v17;
            v24 = *(_DWORD *)(*(_QWORD *)v17 + 12LL);
            if ( v17[2] != v24 )
            {
              v17[2] = v24;
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v23 + 144LL))(v23, v11);
            }
          }
        }
LABEL_23:
        v18 = a3[13];
        if ( v18 <= 7 )
          return 0;
        v9 = nullptr;
        v8 = *(_QWORD **)((v18 & 0xFFFFFFFFFFFFFFF8LL) + 8);
        goto LABEL_8;
      }
    }
    if ( (v13 & 4) != 0 )
    {
      v19 = (_DWORD *)(v12 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v19 )
      {
        v20 = *(_QWORD *)v19;
        v21 = *(_DWORD *)(*(_QWORD *)v19 + 12LL);
        if ( v19[2] != v21 )
        {
          v19[2] = v21;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v20 + 144LL))(v20, v11);
        }
      }
    }
    goto LABEL_16;
  }
  return 1;
}

