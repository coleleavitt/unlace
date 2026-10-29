__int64 __fastcall sub_172E60(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // edx
  _QWORD *v5; // rdx
  __int64 *v6; // rcx
  unsigned int v8; // ecx
  unsigned int v9; // edx
  _QWORD **v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // r8
  __int64 v15; // rsi
  __int64 v16; // rdi
  _QWORD **v17; // rcx
  _QWORD *v18; // rbx
  __int64 v19; // rdx
  _QWORD *v20; // rdx

  if ( a2 == 11 )
  {
    v9 = *(_DWORD *)a3;
    if ( v9 > 0x2F )
    {
      v10 = *(_QWORD ***)(a3 + 8);
      *(_QWORD *)(a3 + 8) = v10 + 1;
    }
    else
    {
      v10 = (_QWORD **)(*(_QWORD *)(a3 + 16) + v9);
      *(_DWORD *)a3 = v9 + 8;
    }
    if ( *v10 )
      **v10 = qword_251390;
    return 1;
  }
  if ( a2 == 23 )
  {
    if ( !byte_255568 )
      return 0;
    v8 = *(_DWORD *)a3;
    if ( *(_DWORD *)a3 > 0x2Fu )
    {
      v19 = *(_QWORD *)(a3 + 8) + 8LL;
      *(_QWORD *)(a3 + 8) = v19;
    }
    else
    {
      *(_DWORD *)a3 = v8 + 8;
      if ( v8 + 8 <= 0x2F )
      {
        *(_DWORD *)a3 = v8 + 16;
LABEL_11:
        qvprintf();
        return 0;
      }
      v19 = *(_QWORD *)(a3 + 8);
    }
    *(_QWORD *)(a3 + 8) = v19 + 8;
    goto LABEL_11;
  }
  if ( a2 != 7 )
    return 0;
  v4 = *(_DWORD *)a3;
  if ( v4 > 0x2F )
  {
    v5 = *(_QWORD **)(a3 + 8);
    v6 = v5 + 1;
    *(_QWORD *)(a3 + 8) = v5 + 1;
    if ( *v5 != 0x1DA11B00000000LL )
      return 0;
    goto LABEL_31;
  }
  v11 = *(_QWORD *)(a3 + 16);
  v12 = v4 + 8;
  *(_DWORD *)a3 = v12;
  if ( *(_QWORD *)(v11 + v4) != 0x1DA11B00000000LL )
    return 0;
  if ( (unsigned int)v12 > 0x2F )
  {
    v6 = *(__int64 **)(a3 + 8);
LABEL_31:
    v20 = v6 + 1;
    *(_QWORD *)(a3 + 8) = v6 + 1;
    v14 = *v6;
LABEL_32:
    v17 = (_QWORD **)(v20 + 1);
    *(_QWORD *)(a3 + 8) = v20 + 1;
    v16 = *v20;
    goto LABEL_33;
  }
  v13 = v4 + 16;
  *(_DWORD *)a3 = v13;
  v14 = *(_QWORD *)(v11 + v12);
  if ( (unsigned int)v13 > 0x2F )
  {
    v20 = *(_QWORD **)(a3 + 8);
    goto LABEL_32;
  }
  v15 = v4 + 24;
  *(_DWORD *)a3 = v15;
  v16 = *(_QWORD *)(v11 + v13);
  if ( (unsigned int)v15 <= 0x2F )
  {
    v17 = (_QWORD **)(v15 + v11);
    *(_DWORD *)a3 = v4 + 32;
    goto LABEL_23;
  }
  v17 = *(_QWORD ***)(a3 + 8);
LABEL_33:
  *(_QWORD *)(a3 + 8) = v17 + 1;
LABEL_23:
  v18 = *v17;
  if ( v14 && v16 )
    qstpncpy();
  if ( v18 )
    *v18 = unk_255570;
  return 1;
}

