__int64 __fastcall sub_3BA060(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v5; // eax
  __int64 result; // rax
  __int64 v7; // r12
  __int64 v8; // rbp
  const char *v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rax
  const char *v12; // rdx
  const char *v13; // rdx
  int v14; // ebx
  unsigned int *v15; // r12
  unsigned int *v16; // rbx
  unsigned int v17; // [rsp+Ch] [rbp-5Ch]
  unsigned int *v18; // [rsp+10h] [rbp-58h] BYREF
  __int128 v19; // [rsp+18h] [rbp-50h]
  const char *v20; // [rsp+30h] [rbp-38h] BYREF
  __int128 v21; // [rsp+38h] [rbp-30h]
  unsigned __int64 v22; // [rsp+48h] [rbp-20h]

  v5 = *(_DWORD *)(a1 + 8);
  v22 = __readfsqword(0x28u);
  if ( v5 != 25 && v5 != 58 )
    return 0;
  v7 = *(_QWORD *)a1;
  if ( !*(_QWORD *)a1 )
    return 0;
  v8 = sub_3C5BC0(*(_QWORD *)a1, a2, a3, a4, a5);
  if ( !v8 )
    return 0;
  v18 = nullptr;
  v19 = 0;
  sub_3B5700((__int64 *)&v18, a1, v7);
  if ( (unsigned __int64)v19 <= 1 )
  {
    v11 = *(_QWORD *)(a1 + 208);
    v20 = nullptr;
    v21 = 0;
    v9 = *(const char **)(v11 + 8);
    if ( ((unsigned __int16)v9 & 0x100) == 0 )
      goto LABEL_14;
    if ( !get_tinfo_pdata(&v20, v9, 0) )
    {
      if ( v20 )
      {
        *(_QWORD *)&v21 = 0;
        qfree(v20, v9);
      }
      goto LABEL_14;
    }
    v12 = &s1;
    if ( (_QWORD)v21 )
      v12 = v20;
    v9 = "Do you want to delete %s ?";
    v14 = sub_1698A0(0, (int)"Do you want to delete %s ?", v12);
    if ( v20 )
    {
      *(_QWORD *)&v21 = 0;
      qfree(v20, "Do you want to delete %s ?", v13);
    }
    if ( v14 <= 0 )
      goto LABEL_9;
  }
  else
  {
    v9 = "Do you want to delete %zu types?";
    if ( (int)sub_1698A0(0, (int)"Do you want to delete %zu types?") <= 0 )
    {
LABEL_9:
      v10 = (__int64)v18;
LABEL_10:
      result = 1;
      goto LABEL_11;
    }
  }
  v10 = (__int64)v18;
  v15 = &v18[v19];
  v16 = v18;
  if ( v15 == v18 )
    goto LABEL_10;
  while ( 1 )
  {
    v9 = (const char *)*v16;
    if ( !(unsigned __int8)del_numbered_type(v8, v9) )
      break;
    if ( v15 == ++v16 )
      goto LABEL_9;
  }
LABEL_14:
  v10 = (__int64)v18;
  result = 0;
LABEL_11:
  if ( v10 )
  {
    v17 = result;
    *(_QWORD *)&v19 = 0;
    qfree(v10, v9);
    return v17;
  }
  return result;
}
