__int64 __fastcall sub_8ED0(__int64 a1, unsigned int a2)
{
  unsigned __int8 v3; // r13
  char v4; // r15
  unsigned int v5; // r8d
  __int64 module_data; // rax
  __int64 v7; // rcx
  unsigned int v8; // r8d
  __int16 v9; // r15
  unsigned int v10; // r14d
  int v11; // esi
  unsigned int v12; // ecx
  int v13; // edx
  char v14; // al
  char **v15; // rax
  int v17; // r13d
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rsi
  int v22; // ecx
  __int64 v23; // rax
  unsigned int v24; // [rsp+4h] [rbp-44h]
  unsigned int v25; // [rsp+4h] [rbp-44h]
  int v26; // [rsp+8h] [rbp-40h]
  int v27; // [rsp+Ch] [rbp-3Ch]

  if ( a2 == 1 )
  {
    v3 = 2;
    v4 = *(_BYTE *)(get_module_data((unsigned int)dword_2D4F4) + 33273);
    v26 = 1;
    v5 = *(unsigned __int16 *)(get_module_data((unsigned int)dword_2D4F4) + 33269);
    v27 = 1;
    LOWORD(v5) = v5 & 0x50DF;
  }
  else if ( a2 == 2 )
  {
    v3 = 2;
    v4 = *(_BYTE *)(get_module_data((unsigned int)dword_2D4F4) + 33149);
    v26 = 2;
    v5 = *(unsigned __int16 *)(get_module_data((unsigned int)dword_2D4F4) + 33145);
    v27 = 2;
    LOWORD(v5) = v5 & 0x1DFF;
  }
  else
  {
    if ( a2 )
    {
      v5 = HIWORD(a2);
      v26 = a2 & 3;
      if ( (a2 & 3) != 0 )
      {
        v27 = a2 & 3;
        get_module_data((unsigned int)dword_2D4F4);
        v8 = HIWORD(a2);
        goto LABEL_8;
      }
      v4 = 0;
      v3 = 2;
    }
    else
    {
      v3 = 0;
      v4 = *(_BYTE *)(get_module_data((unsigned int)dword_2D4F4) + 33087);
      v5 = *(unsigned __int16 *)(get_module_data((unsigned int)dword_2D4F4) + 33029);
      LOWORD(v5) = v5 & 0x7631;
    }
    v26 = 0;
    v27 = (v5 & 0x200) != 0 ? 3 : 0;
  }
  v24 = v5;
  module_data = get_module_data((unsigned int)dword_2D4F4);
  LOWORD(v8) = v24;
  if ( (*(_BYTE *)(*(_QWORD *)(module_data + 24) + 4LL) & 1) == 0 && (v4 & 4) != 0 )
  {
    sub_FB40(a1, "@Deprecated", 4, v7, v24);
    if ( (unsigned __int8)sub_FBC0(a1, 0) )
      return 1;
    v23 = get_module_data((unsigned int)dword_2D4F4);
    LOWORD(v8) = v24;
    *(_DWORD *)(v23 + 164) = v3;
  }
LABEL_8:
  v9 = v8 & 0x7FFF;
  v10 = v8 & 0x7FFF;
  if ( a2 <= 3 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 64LL))(a1, 32);
    if ( (*(_BYTE *)(*(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 24) + 4LL) & 1) == 0 )
      goto LABEL_10;
    v21 = 0;
    v22 = 0;
LABEL_38:
    sub_11760(a1, &(&off_2C0C0)[2 * v27][v21], (unsigned int)LOBYTE((&off_2C0C0)[2 * v27 + 1]) - v22);
LABEL_10:
    if ( v9 )
    {
LABEL_11:
      v11 = 1;
      v12 = 0;
      v13 = 1;
      do
      {
        if ( (v11 & v10) != 0 )
        {
          v15 = &(&off_2C120)[2 * v12];
          if ( ((v13 - 64) & 0xFFFFFFBF) != 0 )
          {
            if ( v13 == 32 && !v26 )
              goto LABEL_16;
          }
          else if ( (_BYTE)a2 == 2 )
          {
            v15 = &(&off_2C100)[2 * (v11 == 128)];
          }
          if ( *((_BYTE *)v15 + 8) )
          {
            v25 = v12;
            v14 = sub_FDF0(a1, *v15);
            v12 = v25;
            if ( v14 )
              return 1;
          }
        }
LABEL_16:
        v13 = 1 << ++v12;
        v11 = 1 << v12;
      }
      while ( v10 >= 1 << v12 );
    }
    if ( a2 - 1 <= 1 )
    {
LABEL_24:
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 72LL))(a1, 32);
      return 0;
    }
    goto LABEL_28;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 24) + 4LL) & 1) != 0 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 64LL))(a1, 32);
    if ( (*(_BYTE *)(*(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 24) + 4LL) & 1) != 0 )
    {
      sub_11760(a1, ".inner ", 7);
      v21 = 1;
      v22 = 1;
      goto LABEL_38;
    }
  }
  else
  {
    v17 = sub_FB40(a1, "{Inner}: ", 0, v19, v20);
    v18 = get_module_data((unsigned int)dword_2D4F4);
    *(_QWORD *)(v18 + 176) += v17;
  }
  if ( v9 )
    goto LABEL_11;
LABEL_28:
  if ( (*(_BYTE *)(*(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 24) + 4LL) & 1) != 0
    || !(unsigned __int8)sub_FDF0(a1, (&off_2C0C0)[2 * v27] + 1) )
  {
    if ( (_BYTE)a2 && (*(_BYTE *)(*(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 24) + 4LL) & 1) == 0 )
      return 0;
    goto LABEL_24;
  }
  return 1;
}
