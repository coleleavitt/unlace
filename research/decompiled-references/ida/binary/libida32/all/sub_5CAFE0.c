__int64 __fastcall sub_5CAFE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, const char *a5, int a6, const char *a7)
{
  const char *numbered_type_name; // rbx
  char v10; // r14
  char v11; // al
  __int64 result; // rax
  const char *v13; // r15
  void *v14; // rdi
  __int64 v16; // [rsp+8h] [rbp-80h]
  char v17; // [rsp+23h] [rbp-65h] BYREF
  unsigned int v18; // [rsp+24h] [rbp-64h] BYREF
  char *v19; // [rsp+28h] [rbp-60h] BYREF
  void *ptr; // [rsp+30h] [rbp-58h] BYREF
  __int128 v21; // [rsp+38h] [rbp-50h]
  unsigned __int64 v22; // [rsp+48h] [rbp-40h]

  numbered_type_name = a5;
  v22 = __readfsqword(0x28u);
  v17 = 0;
  v19 = (char *)(a4 + 1);
  v10 = *(_BYTE *)a4 & 0x3F;
  if ( v10 != 61 )
  {
    v11 = *(_BYTE *)a4 & 0xF;
    if ( v11 != 13 )
    {
      if ( v11 == 10 && sub_537C70(*(__int64 **)(a1 + 1480), a3, (unsigned __int8 *)a4, a5, a6) )
      {
        *(_DWORD *)a2 = 266;
        return a2;
      }
      return a4;
    }
    if ( (unsigned int)sub_693160(&v19, &v17) || v17 )
      return a4;
  }
  ptr = nullptr;
  v21 = 0;
  sub_54DE00((__int64)&ptr, &v19);
  v13 = haystack;
  if ( (_QWORD)v21 )
    v13 = (const char *)ptr;
  if ( (unsigned __int8)is_ordinal_name(numbered_type_name, &v18) )
    numbered_type_name = (const char *)get_numbered_type_name(a3, v18);
  if ( (unsigned __int8)is_ordinal_name(v13, &v18) )
  {
    v13 = (const char *)get_numbered_type_name(a3, v18);
    if ( !v13 )
    {
      if ( a6 != v18 )
        goto LABEL_18;
      v13 = a7;
    }
  }
  if ( !numbered_type_name || !v13 || strcmp(numbered_type_name, v13) )
  {
LABEL_18:
    v14 = ptr;
    result = a4;
    if ( ptr )
      goto LABEL_17;
    return result;
  }
  v14 = ptr;
  *(_BYTE *)a2 = v10;
  result = a2;
  *(_WORD *)(a2 + 1) = 257;
  *(_BYTE *)(a2 + 3) = 0;
  if ( v14 )
  {
LABEL_17:
    v16 = result;
    *(_QWORD *)&v21 = 0;
    qfree(v14);
    return v16;
  }
  return result;
}

