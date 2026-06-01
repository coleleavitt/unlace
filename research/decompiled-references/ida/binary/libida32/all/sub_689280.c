__int64 __fastcall sub_689280(__int64 a1, __int64 *a2, __int64 a3, char **a4)
{
  char *v4; // rax
  char v5; // r12
  __int64 result; // rax
  const char *v8; // r14
  char v9; // al
  __int64 v10; // rsi
  __int64 v11; // rdi
  char v12; // al
  unsigned __int64 v13; // r15
  __int64 v14; // r13
  __int64 v15; // rsi
  unsigned __int8 v17; // [rsp+8h] [rbp-78h]
  char v18; // [rsp+1Ah] [rbp-66h] BYREF
  char v19; // [rsp+1Bh] [rbp-65h] BYREF
  unsigned int v20; // [rsp+1Ch] [rbp-64h] BYREF
  char *v21; // [rsp+20h] [rbp-60h] BYREF
  char *v22; // [rsp+28h] [rbp-58h] BYREF
  void *ptr; // [rsp+30h] [rbp-50h] BYREF
  __int128 v24; // [rsp+38h] [rbp-48h]
  unsigned __int64 v25; // [rsp+48h] [rbp-38h]

  v25 = __readfsqword(0x28u);
  v4 = *a4;
  v21 = *a4 + 1;
  v5 = *v4;
  if ( (*v4 & 0xF) != 0xD )
    return 0;
  v18 = 0;
  if ( (v5 & 0x3F) != 0x3D && ((unsigned int)sub_693160(&v21, &v18) || v18) )
    return 0;
  ptr = nullptr;
  v24 = 0;
  if ( !(unsigned __int8)sub_54DE00((__int64)&ptr, &v21) )
  {
    if ( ptr )
    {
      *(_QWORD *)&v24 = 0;
      qfree(ptr);
    }
    return 0;
  }
  v8 = haystack;
  if ( (_QWORD)v24 )
    v8 = (const char *)ptr;
  v9 = sub_6932A0(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 1480LL), v8, &v20);
  v10 = *(_QWORD *)(a1 + 16);
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1480LL);
  if ( v9 )
  {
    v8 = (const char *)sub_6309B0(v11, v10, v20, &v19);
    if ( v8 )
    {
      v12 = v19;
      goto LABEL_12;
    }
  }
  else if ( (unsigned int)sub_632230(v11, v10, v8, 1, (const char **)&v22, 0, 0, 0, 0, nullptr) )
  {
    v12 = *v22;
    v19 = *v22;
LABEL_12:
    if ( (v12 & 0xF) == 0xD && (v12 & 0x3F) != 0x3D )
      v5 = v12;
    v13 = 2;
    v14 = a2[1];
    if ( v14 )
      v13 = v14-- + 1;
    v15 = *a2;
    if ( a2[2] < v13 )
    {
      v15 = qvector_reserve(a2, v15, v13, 1);
      *a2 = v15;
    }
    a2[1] = v13;
    *(_BYTE *)(v15 + v14) = v5;
    *(_BYTE *)(*a2 + v14 + 1) = 0;
    if ( (v5 & 0x3F) != 0x3D && !(unsigned __int8)sub_692E60(a2, 0, 0) || (result = sub_6891C0(a2, v8), !(_BYTE)result) )
    {
      if ( !under_debugger )
        interr(3443);
      BUG();
    }
    *a4 = v21;
    goto LABEL_23;
  }
  result = 0;
LABEL_23:
  if ( ptr )
  {
    v17 = result;
    *(_QWORD *)&v24 = 0;
    qfree(ptr);
    return v17;
  }
  return result;
}

