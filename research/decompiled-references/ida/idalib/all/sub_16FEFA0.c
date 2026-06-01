char *__fastcall sub_16FEFA0(unsigned __int64 a1, __m128i *a2, char **a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v8; // rdi
  int v9; // eax
  char *result; // rax
  _QWORD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  char *v17; // [rsp+0h] [rbp-78h]
  unsigned __int64 v18; // [rsp+8h] [rbp-70h] BYREF
  void *v19[2]; // [rsp+10h] [rbp-68h] BYREF
  _BYTE v20[16]; // [rsp+20h] [rbp-58h] BYREF
  void **v21; // [rsp+30h] [rbp-48h] BYREF
  __int16 v22; // [rsp+50h] [rbp-28h]

  v6 = 0;
  v18 = a1;
  if ( (a1 & 8) != 0 )
    v6 = *(__int64 *)((char *)&qword_18 + (a1 & 0xFFFFFFFFFFFFFFF0LL));
  if ( v6 | a1 & 7 )
    goto LABEL_10;
  v8 = *(_QWORD *)(a1 & 0xFFFFFFFFFFFFFFF0LL);
  v9 = *(unsigned __int8 *)(v8 + 16);
  if ( (_BYTE)v9 == 13 )
    return (char *)sub_F58DF0(v8, a2->m128i_i8);
  if ( (unsigned int)(v9 - 47) > 1
    || (v11 = sub_F60F10(v8, (__int64)a2, 0, a4, a5, a6)) == nullptr
    || v11[5]
    || (v16 = v11[15], (v16 & 4) == 0) && (v16 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
LABEL_10:
    v19[1] = nullptr;
    v20[0] = 0;
    v19[0] = v20;
    sub_F78380(&v18, (__int64)v19, a2);
    v22 = 260;
    v21 = v19;
    result = sub_15A4EB0(a3, (const void ***)&v21, v12, v13, v14, v15);
    if ( v19[0] != v20 )
    {
      v17 = result;
      operator delete(v19[0]);
      return v17;
    }
  }
  else
  {
    switch ( *((_BYTE *)v11 + 73) >> 5 )
    {
      case 0:
        result = "struct <anonymous>";
        break;
      case 1:
        result = "__interface <anonymous>";
        break;
      case 2:
        result = "union <anonymous>";
        break;
      case 3:
        result = "class <anonymous>";
        break;
      case 4:
        result = "enum <anonymous>";
        break;
      default:
        goto LABEL_10;
    }
  }
  return result;
}
