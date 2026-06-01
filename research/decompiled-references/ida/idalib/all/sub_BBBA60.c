__int64 __fastcall sub_BBBA60(__int64 a1, __int64 a2)
{
  const char *v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 result; // rax
  const char *v9; // rdi
  _BYTE *v10; // rax
  __int64 v11; // rdi
  int v12; // r13d
  int v13; // ebp
  const char *v14; // rdi
  _WORD *v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rsi
  _QWORD *v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rax
  _QWORD *v22; // [rsp+18h] [rbp-60h] BYREF
  _BYTE v23[32]; // [rsp+20h] [rbp-58h] BYREF
  __int16 v24; // [rsp+40h] [rbp-38h]

  v4 = *(const char **)a1;
  if ( (*(_BYTE *)(a1 + 9) & 1) == 0 && (*(_QWORD *)(a2 + 8) & 7LL) == 4 )
  {
    sub_995540((__int64)v4, "__module_private__ ");
    v4 = *(const char **)a1;
  }
  sub_995540((__int64)v4, "enum");
  result = *(_QWORD *)(a2 + 72);
  if ( (result & 0x8000000000LL) != 0 )
  {
    v11 = *(_QWORD *)a1;
    if ( (result & 0x10000000000LL) != 0 )
    {
      result = sub_995540(v11, " class");
      if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
        goto LABEL_6;
      goto LABEL_15;
    }
    result = sub_995540(v11, " struct");
  }
  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
    goto LABEL_6;
LABEL_15:
  result = sub_BB26A0((const char **)a1, a2, 0, v5, v6, v7);
LABEL_6:
  if ( *(_QWORD *)(a2 + 40) )
  {
    v9 = *(const char **)a1;
    v10 = *(_BYTE **)(*(_QWORD *)a1 + 32LL);
    if ( (unsigned __int64)v10 >= *(_QWORD *)(*(_QWORD *)a1 + 24LL) )
    {
      v9 = (const char *)sub_227BA10(v9, 32);
    }
    else
    {
      *((_QWORD *)v9 + 4) = v10 + 1;
      *v10 = 32;
    }
    result = sub_B86360((__int64)v9, *(_QWORD *)(a2 + 40));
  }
  if ( (*(_BYTE *)(a2 + 77) & 2) != 0 )
  {
    v16 = sub_995540(*(_QWORD *)a1, " : ");
    v17 = *(_QWORD *)(a2 + 128);
    v18 = v16;
    v19 = (_QWORD *)(*(_QWORD *)(a2 + 128) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v19 )
    {
      if ( (v17 & 4) != 0 )
      {
        v20 = *v19;
        v21 = *(_QWORD *)(*v19 & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_QWORD *)(v21 + 8) & 7LL | (*(__int64 *)(v21 + 8) >> 3) & 1 )
          v19 = (_QWORD *)(sub_F64F00(v20) & 0xFFFFFFFFFFFFFFF0LL);
        else
          v19 = (_QWORD *)(v21 & 0xFFFFFFFFFFFFFFF0LL);
      }
      else
      {
        v19 = (_QWORD *)(v17 & 0xFFFFFFFFFFFFFFF0LL);
      }
    }
    v24 = 257;
    v22 = v19;
    result = sub_F74830(&v22, v18, a1 + 8, v23, 0);
  }
  if ( (*(_BYTE *)(a2 + 74) & 1) != 0 )
  {
    sub_995540(*(_QWORD *)a1, " {\n");
    sub_BBA540(a1, a2 + 64, 1);
    v12 = *(_DWORD *)(a1 + 32);
    v13 = 0;
    if ( v12 )
    {
      do
      {
        while ( 1 )
        {
          v14 = *(const char **)a1;
          v15 = *(_WORD **)(*(_QWORD *)a1 + 32LL);
          if ( *(_QWORD *)(*(_QWORD *)a1 + 24LL) - (_QWORD)v15 > 1u )
            break;
          ++v13;
          sub_227BF10(v14, "  ", 2);
          if ( v12 == v13 )
            return sub_995540(*(_QWORD *)a1, "}");
        }
        ++v13;
        *v15 = 8224;
        *((_QWORD *)v14 + 4) += 2LL;
      }
      while ( v12 != v13 );
    }
    return sub_995540(*(_QWORD *)a1, "}");
  }
  return result;
}
