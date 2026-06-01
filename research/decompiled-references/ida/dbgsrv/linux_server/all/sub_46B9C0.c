/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46B9C0
// Address: 0x000000000046B9C0

//----- (000000000046B9C0) ----------------------------------------------------
unsigned __int64 __fastcall sub_46B9C0(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  size_t v4; // rax
  __int64 v5; // r15
  unsigned int *v6; // r13
  size_t v7; // rax
  const char *v8; // r14
  size_t v9; // rax
  unsigned __int64 v10; // r8
  size_t v11; // r13
  unsigned __int64 v12; // r11
  char *v13; // rsi
  unsigned __int64 v14; // rax
  char *v16; // rax
  __int64 v17; // [rsp+0h] [rbp-68h]
  unsigned __int64 v18; // [rsp+10h] [rbp-58h]
  unsigned __int64 v19; // [rsp+10h] [rbp-58h]
  unsigned __int64 v20; // [rsp+18h] [rbp-50h]
  unsigned __int64 v21; // [rsp+18h] [rbp-50h]
  _BYTE v22[5]; // [rsp+23h] [rbp-45h] BYREF
  _QWORD v23[8]; // [rsp+28h] [rbp-40h] BYREF

  v2 = a2[1];
  v23[0] = __readfsqword(0x28u);
  v17 = v2;
  v4 = sub_47FB50(v22, (unsigned __int64)v23, (unsigned int)v2) - v22;
  if ( v4 )
    sub_46B720((char **)a1, v22, v4);
  v5 = 0;
  if ( v17 )
  {
    while ( 1 )
    {
      v6 = (unsigned int *)(*a2 + 32 * v5);
      v7 = sub_47FB50(v22, (unsigned __int64)v23, *v6) - v22;
      if ( v7 )
        sub_46B720((char **)a1, v22, v7);
      v8 = s1;
      if ( *((_QWORD *)v6 + 2) )
        v8 = *((const char **)v6 + 1);
      if ( !v8 )
        break;
      v9 = strlen(v8);
      v10 = *(_QWORD *)(a1 + 8);
      v11 = v9 + 1;
      v12 = v9 + 1 + v10;
      if ( !__CFADD__(v9 + 1, v10) )
        goto LABEL_14;
      if ( v10 <= 0x7FFFFFFFFFFFFFFELL )
      {
        v12 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_14:
        v13 = *(char **)a1;
        v14 = v10;
        if ( *(_QWORD *)(a1 + 16) < v12 )
        {
          v21 = v10;
          v19 = v12;
          v16 = (char *)sub_481540(a1, v13, v12, 1u);
          v10 = v21;
          v12 = v19;
          *(_QWORD *)a1 = v16;
          v13 = v16;
          v14 = *(_QWORD *)(a1 + 8);
        }
        v20 = v10;
        v18 = v12;
        memset(&v13[v14], 0, v12 - v14);
        v10 = v20;
        *(_QWORD *)(a1 + 8) = v18;
        goto LABEL_7;
      }
      if ( v10 != 0x7FFFFFFFFFFFFFFFLL )
        goto LABEL_19;
LABEL_7:
      ++v5;
      memcpy((void *)(v10 + *(_QWORD *)a1), v8, v11);
      if ( v17 == v5 )
        return v23[0] - __readfsqword(0x28u);
    }
    v10 = *(_QWORD *)(a1 + 8);
    v11 = 1;
    v8 = "";
    v12 = v10 + 1;
    if ( v10 != -1 )
      goto LABEL_14;
    v10 = -1;
    v8 = "";
LABEL_19:
    *(_QWORD *)(a1 + 8) = 0x7FFFFFFFFFFFFFFFLL;
    goto LABEL_7;
  }
  return v23[0] - __readfsqword(0x28u);
}
