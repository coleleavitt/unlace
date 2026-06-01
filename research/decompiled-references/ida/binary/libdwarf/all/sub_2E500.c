__int64 __fastcall sub_2E500(__int64 **a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v4; // r13
  __int64 *v5; // rbp
  unsigned __int16 v6; // r10
  int v7; // ecx
  __int64 v8; // rax
  char *v9; // rsi
  unsigned __int64 v10; // rbp
  __int64 v11; // r15
  __int64 v12; // r14
  __int64 v13; // rbx
  char *v14; // r12
  char v15; // dl
  char v16; // al
  char *v17; // rdx
  __int64 v18; // rbx
  __int64 v20; // r13
  int v21; // edx
  __int64 v22; // rax
  __int64 v23; // [rsp+0h] [rbp-108h]
  int v27; // [rsp+2Ch] [rbp-DCh]
  _QWORD v28[4]; // [rsp+30h] [rbp-D8h] BYREF
  _BYTE v29[120]; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int64 v30; // [rsp+C8h] [rbp-40h]

  v4 = a2;
  v5 = a1[11];
  v6 = *((_WORD *)a1 + 16);
  v7 = *((_DWORD *)*a1 + 12);
  v8 = **a1;
  v30 = __readfsqword(0x28u);
  v9 = (char *)a1[10];
  v27 = v7;
  v23 = v8;
  v10 = (unsigned __int64)v5 + (_QWORD)v9;
  if ( (unsigned __int64)v9 < v10 )
  {
    v11 = 0;
    v12 = 0;
    v13 = v6;
    while ( 1 )
    {
LABEL_3:
      v14 = &v9[v13];
      if ( &v9[v13] == (char *)v10 )
        goto LABEL_16;
      if ( v10 < (unsigned __int64)v14 )
      {
        sub_2E3D0((_QWORD *)v23, a3, " Reading an address runs off the end of this entry at entry %llu", v11, a4);
        return 1;
      }
      v28[0] = 0;
      if ( v14 < v9 )
      {
        _dwarf_error_string(v23, a4, 331, "DW_DLE_READ_LITTLEENDIAN_ERROR Read starts past the end of section");
        return 1;
      }
      (*(void (__fastcall **)(_QWORD *, char *, __int64))(v23 + 8296))(v28, v9, v13);
      if ( a2 )
      {
        *(_QWORD *)(v4 + 8) = v28[0];
        v12 = v4;
      }
      if ( (unsigned __int64)(v14 + 2) >= v10 )
        break;
      v9 = v14 + 1;
      if ( v12 )
      {
        v15 = *v14;
        *(_QWORD *)v12 = v9;
        *(_BYTE *)(v12 + 16) = v15;
      }
      if ( (unsigned __int64)v9 < v10 )
      {
        do
        {
          v16 = *v9;
          v17 = v9++;
          if ( !v16 )
          {
            ++v11;
            v4 += 24;
            if ( (unsigned __int64)v9 < v10 )
              goto LABEL_3;
            goto LABEL_16;
          }
        }
        while ( v9 != (char *)v10 );
        v9 = v17 + 2;
        ++v11;
        v4 += 24;
        if ( (unsigned __int64)(v17 + 2) < v10 )
          continue;
LABEL_16:
        v18 = v11;
        goto LABEL_17;
      }
      ++v11;
      v4 += 24;
      v9 = v14 + 2;
    }
    sub_2E3D0(
      (_QWORD *)v23,
      a3,
      "Past end of current block reading strings Reading an address runs off the end of this entry at entry %llu",
      v11,
      a4);
    return 1;
  }
  v18 = 0;
LABEL_17:
  if ( !a2 )
  {
    a1[12] = (__int64 *)v18;
    return 0;
  }
  if ( a1[12] == (__int64 *)v18 )
    return 0;
  v29[0] = 0;
  if ( v23 )
  {
    if ( *(_QWORD *)v23 == 3959286781LL )
    {
      v20 = 473;
      if ( v27 )
        v20 = 472;
    }
    else
    {
      v20 = 0;
    }
  }
  else
  {
    v20 = 0;
  }
  dwarfstring_constructor_static(v28, v29, 120);
  dwarfstring_append();
  dwarfstring_append_printf_s();
  dwarfstring_append_printf_u(v28, " Origcount %u", (unsigned int)a1[12]);
  dwarfstring_append_printf_u(v28, " new count %u", v18);
  v22 = dwarfstring_string(v28, " new count %u", v21);
  _dwarf_error_string(v23, a4, v20, v22);
  dwarfstring_destructor(v28);
  return 1;
}

